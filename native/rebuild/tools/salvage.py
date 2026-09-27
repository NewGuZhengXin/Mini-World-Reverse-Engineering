#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
salvage.py - make a translation unit compile by switching off what will not.

Some of what Hex-Rays produces cannot be expressed in C at all: raw assembly it
could not lift, calls whose argument count disagrees with every definition of
the same name, values whose type it guessed wrong. Rewriting those correctly is
the manual part of a decompilation, and there is no heuristic that does it.

What can be automated is the bookkeeping: compile the file, find the functions
the diagnostics land in, wrap those in #if 0 ... #endif, and repeat until the
file compiles. The result is an honest, compiling artefact - and every disabled
function is listed, so the manual work has a worklist.

Usage:
    python salvage.py --ndk <ndk dir> FILE [FILE ...]
    python salvage.py --ndk <ndk dir> --all
"""

import argparse
import os
import re
import subprocess
import sys

sys.stdout.reconfigure(encoding="utf-8")

HERE = os.path.dirname(os.path.abspath(__file__))
REBUILD = os.path.abspath(os.path.join(HERE, ".."))
INCLUDE = os.path.join(REBUILD, "include")
SRC = os.path.join(REBUILD, "build", "src")

API = 21
TARGET = "armv7a-linux-androideabi%d" % API

ERROR_RE = re.compile(r"^(?P<file>.+?):(?P<line>\d+):(?:\d+:)?\s*(?:\w+ )?error:")

DISABLED_MARK = "/* ---- disabled by tools/salvage.py: ---- */"


def cc(ndk):
    return os.path.join(ndk, "toolchains", "llvm", "prebuilt", "windows-x86_64",
                        "bin", "%s-clang.cmd" % TARGET)


def compile_errors(path, ndk, flags):
    cmd = [cc(ndk), "-fsyntax-only"] + flags + ["-I", INCLUDE, path]
    p = subprocess.run(cmd, capture_output=True, text=True, errors="replace")
    lines = []
    for line in (p.stdout + p.stderr).splitlines():
        m = ERROR_RE.match(line.strip())
        if m:
            lines.append(int(m.group("line")))
    return lines


LIT_RE = re.compile(r'"(\\.|[^"\\])*"|\'(\\.|[^\'\\])*\'')


def _code(line):
    """The line with comments and literal contents removed, for brace counting.

    Getting this wrong is expensive: one brace seen inside a string or a comment
    makes a range run past the end of its function, and the #if 0 then swallows
    everything after it."""
    line = LIT_RE.sub('""', line)
    i = line.find("//")
    if i >= 0:
        line = line[:i]
    i = line.find("/*")
    if i >= 0:
        line = line[:i]
    return line


def function_ranges(lines):
    """(start, end) line indices (0-based) of every top-level definition."""
    ranges = []
    i = 0
    n = len(lines)
    while i < n:
        ln = lines[i]
        if (not ln or ln[0].isspace() or ln[0] in "{};#"
                or ln.startswith("//") or ln.startswith("/*")
                or ln.startswith("*") or "(" not in ln):
            i += 1
            continue
        j = i
        depth = 0
        seen = False
        while j < n:
            for ch in _code(lines[j]):
                if ch == "(":
                    depth += 1
                    seen = True
                elif ch == ")":
                    depth -= 1
            if seen and depth <= 0:
                break
            j += 1
            if j - i > 60:
                break
        k = j + 1
        while k < n and lines[k].strip() == "":
            k += 1
        if k >= n or lines[k].strip() != "{":
            i = j + 1
            continue
        d = 0
        m = k
        while m < n:
            c = _code(lines[m])
            d += c.count("{") - c.count("}")
            if d == 0:
                break
            m += 1
        ranges.append((i, min(m, n - 1)))
        i = m + 1
    return ranges


def disable(linens, lines, ranges):
    """Wrap every function an error landed in; returns how many ranges were hit."""
    todo = []
    for ln in linens:
        idx = ln - 1
        for (s, e) in ranges:
            if s <= idx <= e:
                todo.append((s, e))
                break
        else:
            # not inside any function (a prologue declaration, say): wrap the
            # single offending line instead
            todo.append((idx, idx))
    todo = sorted(set(todo))
    for (s, e) in reversed(todo):
        lines[s:s] = [DISABLED_MARK, "#if 0"]
        if s == e:
            # a lone line: keep it, put the #endif after it
            lines[s + 3:s + 3] = ["#endif"]
        elif lines[e + 2].strip() in ("}", "};"):
            # the range ends on its own closing brace, which the #if 0 makes
            # redundant - it has to go, or it would close nothing
            lines[e + 2] = "#endif"
        else:
            lines[e + 3:e + 3] = ["#endif"]
    return len(todo)


def salvage_one(path, ndk, flags, max_rounds=12, quiet=False):
    with open(path, encoding="utf-8", errors="replace") as fh:
        lines = fh.read().split("\n")
    for _rnd in range(max_rounds):
        with open(path, "w", encoding="utf-8") as fh:
            fh.write("\n".join(lines))
        errs = compile_errors(path, ndk, flags)
        if not errs:
            break
        before = sum(1 for ln in lines if ln == DISABLED_MARK)
        disable(errs, lines, function_ranges(lines))
        after = sum(1 for ln in lines if ln == DISABLED_MARK)
        if after == before:
            break
    with open(path, "w", encoding="utf-8") as fh:
        fh.write("\n".join(lines))
    n = sum(1 for ln in lines if ln == DISABLED_MARK)
    left = compile_errors(path, ndk, flags)
    if left and not quiet:
        print("   still failing: %s (%d errors)" % (path, len(left)))
    return n


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--ndk", required=True)
    ap.add_argument("--all", action="store_true")
    ap.add_argument("files", nargs="*")
    args = ap.parse_args()

    flags = ["-std=gnu89", "-w", "-fPIC", "-ferror-limit=0",
             "-Wno-int-conversion",
             "-Wno-incompatible-pointer-types",
             "-Wno-implicit-function-declaration", "-Wno-implicit-int",
             "-Wno-return-type", "-Wno-pointer-sign",
             "-Wno-constant-conversion", "-Wno-parentheses-equality"]

    files = args.files
    if args.all:
        files = []
        for dp, _d, ns in os.walk(SRC):
            for n in ns:
                if n.endswith(".c"):
                    files.append(os.path.join(dp, n))
        files.sort()

    total = 0
    touched = 0
    for f in files:
        n = salvage_one(f, os.path.abspath(args.ndk), flags)
        if n:
            touched += 1
            total += n
            print("  %-60s %4d functions disabled"
                  % (os.path.relpath(f, SRC), n))
    print("disabled %d functions across %d files" % (total, touched))
    return 0


if __name__ == "__main__":
    sys.exit(main())
