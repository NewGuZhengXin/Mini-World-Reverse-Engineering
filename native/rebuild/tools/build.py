#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
build.py - transform the Hex-Rays output and build it into an ARM32
libAppPlayJNI.so with the Android NDK.

Stages
    1. transform   pseudocode/*.c            -> build/src/*.c
    2. autofix     compile diagnostics       -> include/decomp_{types,externs}.h
       (1 and 2 repeat until the type list stops growing)
    3. compile     build/src/*.c             -> build/obj/*.o
    4. link        build/obj/*.o             -> build/lib/libAppPlayJNI.so
    5. report      exported JNI symbols, undefined imports, ELF header

Usage:
    python build.py --ndk <ndk dir> [--jobs N] [--stage all|transform|compile|link]
"""

import argparse
import concurrent.futures as cf
import os
import re
import subprocess
import sys
import time
from collections import Counter

sys.stdout.reconfigure(encoding="utf-8")

HERE = os.path.dirname(os.path.abspath(__file__))
REBUILD = os.path.abspath(os.path.join(HERE, ".."))
INCLUDE = os.path.join(REBUILD, "include")
PSEUDOCODE = os.path.abspath(os.path.join(REBUILD, "..", "pseudocode"))
BUILD = os.path.join(REBUILD, "build")
SRC = os.path.join(BUILD, "src")
OBJ = os.path.join(BUILD, "obj")
LIB = os.path.join(BUILD, "lib")
TYPES = os.path.join(INCLUDE, "decomp_types.h")

API = 21
TARGET = "armv7a-linux-androideabi%d" % API

# see tools/autofix.py for why these are needed
COMPAT_FLAGS = [
    "-std=gnu89", "-w", "-fPIC",
    # clang stops after 20 errors per file by default, which hides almost all of
    # them; both the autofix and the salvage pass need the complete list
    "-ferror-limit=0",
    "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types",
    "-Wno-implicit-function-declaration",
    "-Wno-implicit-int",
    "-Wno-return-type",
    "-Wno-pointer-sign",
    "-Wno-constant-conversion",
    "-Wno-parentheses-equality",
]


def ndk_bin(ndk):
    return os.path.join(ndk, "toolchains", "llvm", "prebuilt",
                        "windows-x86_64", "bin")


def cc(ndk):
    return os.path.join(ndk_bin(ndk), "%s-clang.cmd" % TARGET)


def run_transform():
    cmd = [sys.executable, os.path.join(HERE, "transform.py"),
           "--src", PSEUDOCODE, "--out", SRC, "--types", TYPES]
    r = subprocess.run(cmd, capture_output=True, text=True, errors="replace")
    sys.stdout.write(r.stdout)
    sys.stdout.write(r.stderr)
    return r.returncode == 0


def run_autofix(ndk, jobs):
    cmd = [sys.executable, os.path.join(HERE, "autofix.py"),
           "--ndk", ndk, "--jobs", str(jobs), "--rounds", "6", "--report", "10"]
    r = subprocess.run(cmd, capture_output=True, text=True, errors="replace")
    sys.stdout.write(r.stdout)
    sys.stdout.write(r.stderr)
    return "retransform: yes" in r.stdout


def run_stage12(ndk, jobs):
    print("== stage 1/4: transform + autofix ==")
    for i in range(1, 6):
        print("-- pass %d --" % i)
        if not run_transform():
            return False
        if not run_autofix(ndk, jobs):
            print("   type list stable")
            return True
        print("   opaque type list grew, transforming again")
    return True


def collect_sources():
    out = []
    for dp, _d, ns in os.walk(SRC):
        for n in ns:
            if n.endswith(".c"):
                out.append(os.path.join(dp, n))
    out.sort()
    return out


def compile_one(args):
    path, ndk = args
    rel = os.path.relpath(path, SRC)
    obj = os.path.join(OBJ, rel.replace(os.sep, "_")[:-2] + ".o")
    if os.path.exists(obj) and os.path.getmtime(obj) > os.path.getmtime(path):
        return rel, obj, 0, ""
    cmd = [cc(ndk), "-c"] + COMPAT_FLAGS + [
        "-O0", "-g0", "-fno-strict-aliasing",
        "-I", INCLUDE, "-o", obj, path]
    p = subprocess.run(cmd, capture_output=True, text=True, errors="replace")
    err = ""
    if p.returncode != 0:
        err = "\n".join([l for l in (p.stdout + p.stderr).splitlines()
                         if "error:" in l][:6])
    return rel, obj, p.returncode, err


def run_stage3(ndk, jobs, do_salvage=True):
    print("== stage 3/4: compile (target %s) ==" % TARGET)
    os.makedirs(OBJ, exist_ok=True)
    files = collect_sources()
    print("   %d translation units" % len(files))
    ok = 0
    fail = []
    t0 = time.time()
    with cf.ThreadPoolExecutor(max_workers=jobs) as ex:
        for i, (rel, _obj, rc, err) in enumerate(
                ex.map(compile_one, [(f, ndk) for f in files])):
            if rc == 0:
                ok += 1
            else:
                fail.append((rel, err))
            if (i + 1) % 200 == 0:
                print("   %d/%d  (%.0fs)" % (i + 1, len(files), time.time() - t0))
    print("   compiled %d/%d in %.0fs" % (ok, len(files), time.time() - t0))

    if fail and do_salvage:
        print("   -- salvage pass on %d files --" % len(fail))
        sys.path.insert(0, HERE)
        import salvage
        todo = [(os.path.join(SRC, rel), ndk) for rel, _e in fail]
        disabled = 0
        with cf.ThreadPoolExecutor(max_workers=max(1, jobs // 2)) as ex:
            for n in ex.map(lambda a: salvage.salvage_one(a[0], a[1],
                                                          COMPAT_FLAGS, quiet=True),
                            todo):
                disabled += n
        print("   %d functions switched off by #if 0" % disabled)
        ok = 0
        fail = []
        with cf.ThreadPoolExecutor(max_workers=jobs) as ex:
            for rel, _obj, rc, err in ex.map(
                    compile_one, [(f, ndk) for f in files]):
                if rc == 0:
                    ok += 1
                else:
                    fail.append((rel, err))
        print("   after salvage: compiled %d/%d" % (ok, len(files)))

    for rel, err in fail[:20]:
        print("   FAIL %s\n%s" % (rel, err))
    return len(fail) == 0


def run_stage4(ndk):
    print("== stage 4/4: link ==")
    os.makedirs(LIB, exist_ok=True)
    objs = []
    for dp, _d, ns in os.walk(OBJ):
        for n in ns:
            if n.endswith(".o"):
                objs.append(os.path.join(dp, n))
    objs.sort()
    out = os.path.join(LIB, "libAppPlayJNI.so")
    # 1182 object paths do not fit in a Windows command line, so they go
    # through a response file
    rsp = os.path.join(LIB, "objects.rsp")
    with open(rsp, "w", encoding="utf-8") as fh:
        for o in objs:
            fh.write('"%s"\n' % o.replace("\\", "/"))
    cmd = [cc(ndk), "-shared", "-o", out,
           "-Wl,-soname,libAppPlayJNI.so",
           "-Wl,--allow-shlib-undefined", "@" + rsp.replace("\\", "/"),
           "-llog", "-lm", "-lz", "-ldl"]
    print("   %d objects" % len(objs))
    p = subprocess.run(cmd, capture_output=True, text=True, errors="replace")
    txt = p.stdout + p.stderr
    if p.returncode != 0:
        print("   LINK FAILED")
        for l in txt.splitlines()[:40]:
            print("   ", l)
        return False
    print("   -> %s" % out)
    for l in txt.splitlines()[:10]:
        print("   ", l)
    return True


def run_report(ndk):
    print("== report ==")
    out = os.path.join(LIB, "libAppPlayJNI.so")
    if not os.path.exists(out):
        print("   no library produced")
        return
    readelf = os.path.join(ndk_bin(ndk), "llvm-readelf.exe")
    print("   size          : %.2f MB" % (os.path.getsize(out) / 1048576.0))

    def rd(*flags):
        p = subprocess.run([readelf] + list(flags) + [out],
                           capture_output=True, text=True, errors="replace")
        return p.stdout + p.stderr

    for line in rd("-h").splitlines():
        if re.search(r"Class|Machine|Type:", line):
            print("   %s" % line.strip())

    defined, undefined = [], []
    for line in rd("--dyn-syms").splitlines():
        m = re.match(r"\s*\d+:\s+[0-9a-f]+\s+\d+\s+(\w+)\s+(\w+)\s+(\w+)\s+(\w+)\s+(.*)$",
                     line)
        if not m:
            continue
        ndx, _bind, _typ, _vis, name = m.groups()
        name = name.split("@")[0].strip()
        if not name:
            continue
        (undefined if ndx == "UND" else defined).append(name)

    jni = sorted(n for n in defined
                 if n.startswith("Java_") or n == "JNI_OnLoad")
    print("   exported syms : %d" % len(defined))
    print("   JNI exports   : %d" % len(jni))
    for n in jni:
        print("      %s" % n)
    print("   undefined     : %d" % len(undefined))
    for n in sorted(set(undefined))[:25]:
        print("      %s" % n)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--ndk", required=True)
    ap.add_argument("--jobs", type=int, default=os.cpu_count())
    ap.add_argument("--stage", default="all",
                    choices=["all", "transform", "compile", "link", "report"])
    ap.add_argument("--no-salvage", action="store_true",
                    help="fail instead of switching off the functions that "
                         "cannot be expressed in C")
    args = ap.parse_args()

    ndk = os.path.abspath(args.ndk)
    if not os.path.exists(cc(ndk)):
        print("compiler not found: %s" % cc(ndk))
        return 1

    if args.stage in ("all", "transform"):
        if not run_stage12(ndk, args.jobs):
            return 1
    if args.stage in ("all", "compile"):
        if not run_stage3(ndk, args.jobs, not args.no_salvage):
            return 1
    if args.stage in ("all", "link"):
        if not run_stage4(ndk):
            return 1
    if args.stage in ("all", "report"):
        run_report(ndk)
    return 0


if __name__ == "__main__":
    sys.exit(main())
