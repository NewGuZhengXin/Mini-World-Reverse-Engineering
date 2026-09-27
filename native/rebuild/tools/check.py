# -*- coding: utf-8 -*-
"""
check.py - compile every transformed translation unit and report what breaks.

Runs the C compiler in syntax-only mode over build/src, collects the diagnostics
and groups them, so the remaining work is visible as a short list of patterns
instead of a wall of text.

Usage:
    python check.py --src build/src [--limit N] [--show PATTERN] [--jobs N]
"""
import argparse
import concurrent.futures as cf
import os
import re
import subprocess
import sys
from collections import Counter

sys.stdout.reconfigure(encoding="utf-8")

HERE = os.path.dirname(os.path.abspath(__file__))
INCLUDE = os.path.abspath(os.path.join(HERE, "..", "include"))

# NOTE: the file part must be non-greedy and allow a Windows drive letter
# ("D:\path\file.c:12:3: error: ..."), so we anchor on the *last* ":<digits>:"
# before the severity word rather than on the first colon.
ERROR_RE = re.compile(
    r"^(?P<file>.+?):(?P<line>\d+):(?:\d+:)?\s*error:\s*(?P<msg>.*)$")

# collapse a diagnostic into a pattern, so thousands of errors become a handful
PATTERNS = [
    (re.compile(r"unknown type name '([^']+)'"), lambda m: "unknown type name '%s'" % m.group(1)),
    (re.compile(r"'([^']+)' undeclared"), lambda m: "'%s' undeclared" % m.group(1)),
    (re.compile(r"expected '[^']+' before '([^']+)'"), lambda m: "expected X before '%s'" % m.group(1)),
    (re.compile(r"expected '[^']+' at end of input"), lambda m: "expected X at end of input"),
    (re.compile(r"expected declaration specifiers"), lambda m: "expected declaration specifiers"),
    (re.compile(r"conflicting types for '([^']+)'"), lambda m: "conflicting types for '%s'" % m.group(1)),
    (re.compile(r"redefinition of '([^']+)'"), lambda m: "redefinition of '%s'" % m.group(1)),
    (re.compile(r"invalid type argument of '->'"), lambda m: "invalid type argument of '->'"),
    (re.compile(r"invalid operands to binary"), lambda m: "invalid operands to binary"),
    (re.compile(r"too few arguments to function"), lambda m: "too few arguments to function"),
    (re.compile(r"too many arguments to function"), lambda m: "too many arguments to function"),
    (re.compile(r"number of arguments doesn't match prototype"), lambda m: "arg count mismatch with prototype"),
    (re.compile(r"called object '([^']+)' is not a function"), lambda m: "called object '%s' is not a function" % m.group(1)),
    (re.compile(r"size of array has non-integer type"), lambda m: "array size not integer"),
    (re.compile(r"storage size of '([^']+)' isn't known"), lambda m: "incomplete type '%s'" % m.group(1)),
    (re.compile(r"dereferencing pointer to incomplete type"), lambda m: "deref incomplete type"),
    (re.compile(r"request for member '([^']+)' in something not a structure"), lambda m: "member '%s' of non-struct" % m.group(1)),
    (re.compile(r"label '([^']+)' used but not defined"), lambda m: "label '%s' undefined" % m.group(1)),
    (re.compile(r"duplicate label '([^']+)'"), lambda m: "duplicate label '%s'" % m.group(1)),
    (re.compile(r"jump into statement expression"), lambda m: "jump into statement expression"),
    (re.compile(r"break statement not within loop or switch"), lambda m: "break outside loop"),
    (re.compile(r"continue statement not within a loop"), lambda m: "continue outside loop"),
    (re.compile(r"case label not within a switch"), lambda m: "case outside switch"),
    (re.compile(r"void value not ignored"), lambda m: "void value not ignored"),
    (re.compile(r"invalid use of void expression"), lambda m: "invalid use of void expression"),
    (re.compile(r"variable-sized object may not be initialized"), lambda m: "VLA initialized"),
    (re.compile(r"array subscript is not an integer"), lambda m: "non-integer subscript"),
]


def pattern_of(msg):
    for rx, fn in PATTERNS:
        m = rx.search(msg)
        if m:
            return fn(m)
    return msg


def compile_one(path, cc, extra):
    cmd = [cc, "-fsyntax-only", "-std=gnu89", "-w",
           "-Wno-int-conversion", "-Wno-incompatible-pointer-types",
           "-Wno-implicit-function-declaration", "-Wno-implicit-int",
           "-Wno-return-type", "-Wno-pointer-sign",
           "-I", INCLUDE] + extra + [path]
    p = subprocess.run(cmd, capture_output=True, text=True, errors="replace")
    errs = []
    for line in p.stdout.splitlines() + p.stderr.splitlines():
        m = ERROR_RE.match(line.strip())
        if m:
            errs.append((int(m.group("line")), m.group("msg")))
    return path, errs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--src", required=True)
    ap.add_argument("--cc", default="gcc")
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--jobs", type=int, default=os.cpu_count())
    ap.add_argument("--show", default=None, help="print locations of this pattern")
    ap.add_argument("--extra", default="", help="extra compiler flags")
    args = ap.parse_args()

    src = os.path.abspath(args.src)
    files = []
    for dp, _d, ns in os.walk(src):
        for n in ns:
            if n.endswith(".c"):
                files.append(os.path.join(dp, n))
    files.sort()
    if args.limit:
        files = files[:args.limit]

    extra = args.extra.split() if args.extra else []
    cat = Counter()
    ok = 0
    bad = []
    locs = []
    with cf.ThreadPoolExecutor(max_workers=args.jobs) as ex:
        for path, errs in ex.map(lambda f: compile_one(f, args.cc, extra), files):
            if not errs:
                ok += 1
            else:
                bad.append((path, len(errs)))
                for ln, msg in errs:
                    p = pattern_of(msg)
                    cat[p] += 1
                    if args.show and args.show in p:
                        locs.append("%s:%d: %s" % (os.path.relpath(path, src), ln, msg))

    print("translation units : %d" % len(files))
    print("compile clean     : %d (%.1f%%)" % (ok, 100.0 * ok / max(1, len(files))))
    print("with errors       : %d" % len(bad))
    print("total errors      : %d" % sum(cat.values()))
    print()
    print("top diagnostic patterns:")
    for p, c in cat.most_common(30):
        print("  %6d  %s" % (c, p))
    if locs:
        print()
        print("locations matching %r (first 40):" % args.show)
        for l in locs[:40]:
            print("   ", l)
    if bad:
        print()
        print("worst files:")
        for p, c in sorted(bad, key=lambda x: -x[1])[:15]:
            print("  %6d  %s" % (c, os.path.relpath(p, src)))


if __name__ == "__main__":
    main()
