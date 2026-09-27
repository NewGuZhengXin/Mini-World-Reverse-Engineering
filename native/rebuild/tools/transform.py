#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
transform.py - turn IDA / Hex-Rays pseudocode into translation units a plain C
compiler can swallow.

The decompiler output is *nearly* C. Three things stop it from compiling:

  1. C++ scope resolution, in definitions and at call sites
         int __fastcall appplay::JNIHelper::SetJavaVM(int this, _JavaVM *a2)
     ->  int appplay__JNIHelper__SetJavaVM(int this, _JavaVM *a2)

  2. Template-qualified names, which have no C spelling at all
         Ogre::Singleton<DefManager>::ms_Singleton
         std::vector<AchievementInfo>::_M_emplace_back_aux<AchievementInfo const&>(...)
     Each distinct expression is replaced by a synthesised identifier. Whether it
     is used as a type, as a value or as a callee decides which namespace it lands
     in (TT_ / TV_ / TF_), so one expression never has to be two things at once.

  3. IDA globals (dword_4724D0, off_123456, ...) that have no declaration.

Everything else - the IDA scalar typedefs, __fastcall, LOBYTE/HIBYTE, __int64 - is
handled by include/decomp_compat.h.

For every input file the script also emits a prologue holding the prototypes of the
functions that file defines. That is what makes forward references inside a single
translation unit work without needing a global symbol table.

Usage:
    python transform.py --src <pseudocode dir> --out <build/src dir> [--jobs N]
"""

import argparse
import hashlib
import os
import re
import sys

# --------------------------------------------------------------------------
# identifier classes
# --------------------------------------------------------------------------

IDA_GLOBALS = {
    "byte_": "unsigned char",
    "word_": "unsigned short",
    "dword_": "unsigned int",
    "qword_": "unsigned long long",
    "flt_": "float",
    "dbl_": "double",
    "off_": "void *",
    "unk_": "unsigned char",
    "stru_": "_decomp_ida_stru",
    "loc_": "unsigned char",
    "jpt_": "void *",
    "asc_": "unsigned char",
    "def_": "unsigned char",
    "algn_": "unsigned char",
    "byte3_": "unsigned char",
    "word3_": "unsigned short",
    "dword3_": "unsigned int",
    "qword3_": "unsigned long long",
}

IDA_GLOBAL_RE = re.compile(
    r"\b((?:byte|word|dword|qword|flt|dbl|off|unk|stru|loc|jpt|asc|def|algn)"
    r"(?:3)?_[0-9A-Fa-f]+)\b"
)

# Named data symbols that are not IDA auto-names (g_pDisplay, g_DirectionCoord,
# ...). They live in the original .so's symbol table; tools/gen_globals.py turns
# that table into include/decomp_globals.h.
NAMED_GLOBAL_RE = re.compile(r"\b(g_[A-Za-z_]\w*)\b")

# IDA globals that the code subscripts ("&byte_9[1]" is the byte at address 10);
# those need an array declaration, everything else needs a scalar one
SUBSCRIPT_RE = re.compile(
    r"\b((?:byte|word|dword|qword|flt|dbl|off|unk|stru|loc|jpt|asc|def|algn)"
    r"(?:3)?_[0-9A-Fa-f]+)\s*\[")

C_KEYWORDS = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if", "int",
    "long", "register", "return", "short", "signed", "sizeof", "static",
    "struct", "switch", "typedef", "union", "unsigned", "void", "volatile",
    "while", "inline", "restrict", "bool", "this", "new", "delete", "true",
    "false", "class", "template", "typename", "namespace", "operator",
}

# --------------------------------------------------------------------------
# template-expression handling
# --------------------------------------------------------------------------

# base(::name)*  - the part that must contain at least one "::" for us to be
# willing to treat a following "<" as a template bracket rather than a
# less-than operator.
CHAIN_RE = re.compile(r"[A-Za-z_]\w*(?:\s*::\s*[A-Za-z_]\w*)+")

# anchored at the end of a window: the A::B::C chain immediately before "<"
BACK_CHAIN_RE = re.compile(
    r"([A-Za-z_]\w*(?:\s*::\s*[A-Za-z_]\w*)*)\s*$")

# "::name" / "::name<...>" following a template expression
RIGHT_CHAIN_RE = re.compile(r"\s*::\s*[A-Za-z_]\w*")

# A::B::C -> A__B__C in one pass
SCOPE_RE = re.compile(r"\b([A-Za-z_]\w*)((?:\s*::\s*[A-Za-z_]\w*)+)")

TEMPLATE_HEAD_RE = re.compile(r"[A-Za-z_]\w*(?:\s*::\s*[A-Za-z_]\w*)*\s*<")


def _skip_template_args(text, i):
    """i points at '<'. Return the index just past the matching '>' or -1."""
    depth = 0
    n = len(text)
    while i < n:
        c = text[i]
        if c == "<":
            depth += 1
        elif c == ">":
            # "->" is not a closing bracket
            if i > 0 and text[i - 1] == "-":
                i += 1
                continue
            depth -= 1
            if depth == 0:
                return i + 1
        elif c == ";":
            return -1
        i += 1
    return -1


def _extend_left(text, start):
    """Extend a match leftwards over a full A::B::C chain (bounded lookback)."""
    lo = max(0, start - 300)
    m = BACK_CHAIN_RE.search(text, lo, start)
    if m:
        return m.start(1)
    return start


def _extend_right(text, end):
    """Extend rightwards over '::name' and '::name<...>' groups."""
    while True:
        m = RIGHT_CHAIN_RE.match(text, end)
        if not m:
            break
        end = m.end()
        if end < len(text) and text[end] == "<":
            j = _skip_template_args(text, end)
            if j == -1:
                break
            end = j
    return end


def classify(text, start, end):
    """type | call | value, based on what surrounds the expression."""
    after = text[end:end + 40]
    stripped = after.lstrip()
    if stripped.startswith("("):
        return "call"
    if re.match(r"^[ \t]*[&*]", after):
        return "type"
    if re.match(r"^[ \t]+[A-Za-z_]\w*\s*[\[;=,)]", after):
        return "type"
    if stripped == "":
        return "value"
    return "value"


def replace_templates(text, mapping):
    """
    Replace every template-qualified expression with a stable synthesised name.
    Returns (new_text, stats).
    """
    out = []
    i = 0
    last = 0
    n = len(text)
    stats = {"type": 0, "call": 0, "value": 0}
    while i < n:
        if text[i] == "<":
            start = _extend_left(text, i)
            prefix = text[start:i]
            is_template = "::" in prefix and re.fullmatch(
                r"[A-Za-z_]\w*(?:\s*::\s*[A-Za-z_]\w*)*\s*", prefix)
            if is_template:
                end = _skip_template_args(text, i)
                if end != -1:
                    end = _extend_right(text, end)
                    kind = classify(text, start, end)
                    expr = re.sub(r"\s+", "", text[start:end])
                    key = (expr, kind)
                    if key not in mapping:
                        h = hashlib.sha1((expr + "|" + kind).encode()).hexdigest()[:10]
                        prefix_name = {"type": "TT_", "call": "TF_", "value": "TV_"}[kind]
                        mapping[key] = prefix_name + h
                    out.append(text[last:start])
                    out.append(mapping[key])
                    stats[kind] += 1
                    i = end
                    last = end
                    continue
        i += 1
    out.append(text[last:])
    return "".join(out), stats


# --------------------------------------------------------------------------
# PLT thunk elision
# --------------------------------------------------------------------------

IMPORT_RE = re.compile(r"\b__imp_([A-Za-z_]\w*)")
JUMP_RE = re.compile(r"\bj_([A-Za-z_]\w*)")


def elide_thunks(raw):
    """
    Hex-Rays decodes the .plt stubs as real functions:

        // attributes: thunk
        void *memset(void *a1, int a2, size_t a3) { return __imp_memset(a1, a2, a3); }

    Keeping them would redefine libc symbols inside our own library, and the
    __imp_* they call do not exist. A PLT stub is exactly "call the imported
    function", so the honest translation is to delete the stub and call the
    import directly. Returns (text, removed_count).
    """
    lines = raw.split("\n")
    defs = find_definitions(lines)
    drop = set()
    removed = 0
    for (s, e, _name) in defs:
        if s == 0 or lines[s - 1].strip() != "// attributes: thunk":
            continue
        # walk back over the comment header block
        k = s - 1
        while k > 0 and lines[k - 1].startswith("//"):
            k -= 1
        # find the opening brace
        j = e + 1
        while j < len(lines) and lines[j].strip() != "{":
            j += 1
        depth = 0
        while j < len(lines):
            depth += lines[j].count("{") - lines[j].count("}")
            if depth == 0:
                break
            j += 1
        for x in range(k, min(j + 1, len(lines))):
            drop.add(x)
        removed += 1
    if not drop:
        return raw, 0
    kept = [ln for i, ln in enumerate(lines) if i not in drop]
    return "\n".join(kept), removed


# --------------------------------------------------------------------------
# scope resolution
# --------------------------------------------------------------------------

# --------------------------------------------------------------------------
# names C cannot spell
# --------------------------------------------------------------------------

# __int8/16/32/64 are builtin types in clang (and __int128 does not exist for
# 32-bit ARM at all), so every use is renamed to a private typedef.
INT_ALIAS = [
    ("__int128", "decomp_int128"), ("__uint128", "decomp_uint128"),
    ("__int64", "decomp_int64"), ("__uint64", "decomp_uint64"),
    ("__int32", "decomp_int32"), ("__uint32", "decomp_uint32"),
    ("__int16", "decomp_int16"), ("__uint16", "decomp_uint16"),
    ("__int8", "decomp_int8"), ("__uint8", "decomp_uint8"),
    # IDA's 128-bit vector type; the target has no 128-bit integer, so it gets
    # the same 64-bit stand-in as __int128
    ("_OWORD", "decomp_int128"),
]
INT_ALIAS_RE = re.compile(r"\b(" + "|".join(re.escape(a) for a, _ in INT_ALIAS) + r")\b")
INT_ALIAS_MAP = dict(INT_ALIAS)


def alias_int_types(text):
    return INT_ALIAS_RE.sub(lambda m: INT_ALIAS_MAP[m.group(1)], text)


# clang refuses "unsigned T" when T is a typedef name (GCC allows it), so the
# combination is folded into the unsigned spelling of the same width.
UNSIGNED_MAP = {
    "_BYTE": "uint8_t", "_WORD": "uint16_t",
    "_DWORD": "uint32_t", "_QWORD": "uint64_t",
    "decomp_int8": "decomp_uint8", "decomp_int16": "decomp_uint16",
    "decomp_int32": "decomp_uint32", "decomp_int64": "decomp_uint64",
    "decomp_int128": "decomp_uint128",
}
UNSIGNED_RE = re.compile(
    r"\bunsigned\s+(" + "|".join(map(re.escape, UNSIGNED_MAP)) + r")\b")
SIGNED_RE = re.compile(r"\bsigned\s+(decomp_int(?:8|16|32|64|128))\b")


def fold_signedness(text):
    text = UNSIGNED_RE.sub(lambda m: UNSIGNED_MAP[m.group(1)], text)
    text = SIGNED_RE.sub(lambda m: m.group(1), text)
    return text


# "__spoils<R2,R3,R12,LR>" - an IDA attribute with angle brackets, which would
# otherwise be taken for a template argument list
SPOILS_RE = re.compile(r"__spoils\s*<[^<>]*>")


def strip_spoils(text):
    return SPOILS_RE.sub("", text)


# Functions Hex-Rays could not lift are emitted as raw assembly. It cannot be
# compiled, and there is nothing to translate it into, so the statement goes.
ASM_BLOCK_RE = re.compile(r"\b_?_?asm\b\s*\{[^\n]*\}")
ASM_CALL_RE = re.compile(r"\b_?_?asm\b\s*\([^()]*\)")


def strip_inline_asm(text):
    text = ASM_BLOCK_RE.sub("/* inline assembly could not be lifted */", text)
    text = ASM_CALL_RE.sub("/* inline assembly could not be lifted */", text)
    return text


# `typeinfo for'X and `vtable for'X - symbol names containing a backtick and an
# apostrophe. Not identifiers in any language, so they get spelled out.
RTTI_RE = re.compile(r"`(typeinfo|vtable|RTTI)[ _]?for'\s*([A-Za-z_]\w*)")


def flatten_rtti(text):
    return RTTI_RE.sub(lambda m: "%s_for_%s" % (m.group(1), m.group(2)), text)


# "anl::CMWC4096::get(void)::i" - a function-local static. Hex-Rays spells it
# with the full signature of its enclosing function, which is not an identifier.
LOCAL_STATIC_RE = re.compile(
    r"([A-Za-z_]\w*(?:\s*::\s*[A-Za-z_]\w*)*)\s*\([^()]{0,200}\)\s*::\s*")


def flatten_local_statics(text):
    return LOCAL_STATIC_RE.sub(lambda m: m.group(1) + "__local__", text)


# "X::~X" - a destructor has no C spelling; make the tilde part of the name
DTOR_RE = re.compile(r"::\s*~")

# "X::operator new" / "X::operator=" / "X::operator[]" - same problem
OPERATOR_MAP = {
    "new": "new", "delete": "delete",
    "=": "assign", "==": "eq", "!=": "ne", "<": "lt", ">": "gt",
    "<=": "le", ">=": "ge", "+": "add", "-": "sub", "*": "mul", "/": "div",
    "%": "mod", "+=": "add_assign", "-=": "sub_assign", "*=": "mul_assign",
    "/=": "div_assign", "++": "inc", "--": "dec", "<<": "shl", ">>": "shr",
    "&": "bitand", "|": "bitor", "^": "bitxor", "~": "bitnot", "!": "not",
    "&&": "and", "||": "or", "[]": "index", "()": "call", "->": "arrow",
    "->*": "arrow_star",
}
OPERATOR_RE = re.compile(
    r"(?:(::)\s*)?\boperator\s*("
    r"new\s*\[\s*\]|delete\s*\[\s*\]|\[\s*\]|\(\s*\)"
    r"|[A-Za-z_]\w*|[-+*/%^&|~!=<>]+)")

# "std::operator<<char>()" - the stream operators are emitted with a template
# argument glued straight onto the "<<", which the token rule above cannot see
OPERATOR_TEMPLATE_RE = re.compile(
    r"(?:(::)\s*)?\boperator\s*(<<|>>)\s*<\s*([A-Za-z_]\w*)\s*>")


def flatten_operators(text):
    def repl(m):
        tok = re.sub(r"\s+", "", m.group(2))
        return (m.group(1) or "") + "operator_" + OPERATOR_MAP.get(
            tok, "op" + tok.encode().hex())

    text = OPERATOR_TEMPLATE_RE.sub(
        lambda m: (m.group(1) or "") + "operator_"
        + ("shl_" if m.group(2) == "<<" else "shr_") + m.group(3), text)
    return OPERATOR_RE.sub(repl, text)


def flatten_dtors(text):
    return DTOR_RE.sub("::dtor_", text)


def flat_name(name):
    """A::B::~C -> A__B__dtor_C"""
    return strip_scopes(flatten_dtors(name))


def strip_scopes(text):
    """A::B::C -> A__B__C in a single pass."""
    def repl(m):
        head = m.group(1)
        tail = re.findall(r"[A-Za-z_]\w*", m.group(2))
        return "__".join([head] + tail)

    text = SCOPE_RE.sub(repl, text)
    # a leading global-scope "::" has no C spelling
    text = re.sub(r"(?<![A-Za-z0-9_)])::\s*", "", text)
    return text


# --------------------------------------------------------------------------
# opaque class names -> struct tags
# --------------------------------------------------------------------------

TYPES_H = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                       "..", "include", "decomp_types.h")


def load_type_names(path=None):
    path = path or TYPES_H
    if not os.path.exists(path):
        return set()
    names = set()
    for line in open(path, encoding="utf-8", errors="replace"):
        m = re.match(r"struct\s+(\w+)\s*\{", line)
        if m:
            names.add(m.group(1))
    return names


def make_type_prefixer(names):
    """
    Hex-Rays writes the class name bare in type position. Declaring it as a
    typedef would collide with the local variables Hex-Rays names after their
    own type ("Block *Block;"), and C keeps typedefs and variables in one
    namespace. Declaring the name as a struct *tag* instead puts it in the tag
    namespace, where no variable can shadow it - so only the type positions
    need the "struct " keyword spelled out.
    """
    if not names:
        return lambda t: t
    alt = "|".join(re.escape(n) for n in sorted(names, key=len, reverse=True))
    rx = re.compile(
        # Hex-Rays already writes "struct X" for the structs it knows about;
        # do not add a second keyword there
        r"(?<!\bstruct )(?<!\bunion )(?<!\benum )\b(" + alt + r")\b"
        r"(?=\s*(?:\*(?!=)|&(?![&=])|[A-Za-z_]\w*\s*[;,)\]=\[]))")

    def prefix(text):
        return rx.sub(lambda m: "struct " + m.group(1), text)

    return prefix


# --------------------------------------------------------------------------
# definition discovery
# --------------------------------------------------------------------------

def find_definitions(lines):
    """
    Return a list of (sig_start, sig_end, name) for every top-level function
    definition. Hex-Rays always puts the signature at column 0 with the opening
    brace on the following line.
    """
    defs = []
    i = 0
    n = len(lines)
    while i < n:
        ln = lines[i]
        if not ln or ln[0].isspace() or ln[0] in "{};#" \
                or ln.startswith("//") or ln.startswith("/*") or ln.startswith("*"):
            i += 1
            continue
        # a signature line always contains a '('
        if "(" not in ln:
            i += 1
            continue
        # accumulate until the parentheses balance
        depth = 0
        seen = False
        j = i
        buf = []
        while j < n:
            cur = lines[j]
            buf.append(cur)
            for ch in cur:
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
        sig = " ".join(x.strip() for x in buf)
        # the next non-blank line must be "{"
        k = j + 1
        while k < n and not lines[k].strip():
            k += 1
        if k < n and lines[k].strip().startswith("{"):
            # name = last identifier of the prefix before the parameter list
            p = sig.find("(")
            if p > 0:
                head = sig[:p]
                m = re.search(r"([A-Za-z_][\w:]*)\s*$", head)
                if m:
                    defs.append((i, j, m.group(1)))
        i = j + 1
    return defs


# --------------------------------------------------------------------------
# per-file transform
# --------------------------------------------------------------------------

DECL_ORDER = ["type", "value", "call"]


def transform_file(path, relpath, out_root, src_root, prefix_types=lambda t: t):
    raw = open(path, encoding="utf-8", errors="replace").read()

    # 1. drop the .plt stubs and rewrite their call sites to the real imports
    raw, thunks = elide_thunks(raw)
    raw = IMPORT_RE.sub(r"\1", raw)
    raw = JUMP_RE.sub(r"\1", raw)
    #    names C cannot spell: builtin types, local statics, destructors
    raw = strip_spoils(raw)
    raw = strip_inline_asm(raw)
    raw = alias_int_types(raw)
    raw = fold_signedness(raw)
    raw = flatten_rtti(raw)
    raw = flatten_local_statics(raw)
    raw = flatten_dtors(raw)

    # 2. templates, then operators, then scope resolution. None of these steps
    #    adds or removes lines, so line numbers stay valid for everything below.
    mapping = {}
    body, stats = replace_templates(raw, mapping)
    body = flatten_operators(body)
    body = strip_scopes(body)
    body = prefix_types(body)

    # 3. function definitions - discovered *after* flattening, so the names we
    #    get back are already valid C identifiers
    tlines = body.split("\n")
    defs = find_definitions(tlines)

    defined_names = set(name for (_s, _e, name) in defs)

    # 3a. the same demangled name can belong to several real functions (the
    #     C1/C2/D0/D1/D2 constructor and destructor variants). Give every
    #     repeat its own name so the file still compiles.
    by_name = {}
    for idx, (_s, _e, name) in enumerate(defs):
        by_name.setdefault(name, []).append(idx)
    renames = {}
    for fname, idxs in by_name.items():
        for k, idx in enumerate(idxs[1:], start=2):
            renames[idx] = "%s__v%d" % (fname, k)
    for idx, newname in renames.items():
        s, e, _n = defs[idx]
        base = re.sub(r"__v\d+$", "", newname)
        seg = "\n".join(tlines[s:e + 1])
        hits = list(re.finditer(re.escape(base) + r"\s*\(", seg))
        if hits:
            m = hits[-1]
            seg = seg[:m.start()] + newname + seg[m.start() + len(base):]
            tlines[s:e + 1] = seg.split("\n")
            defined_names.add(newname)

    # 4. prologue: prototypes of the functions defined here, so that forward
    #    references inside one translation unit resolve correctly
    protos = []
    for (s, e, _name) in defs:
        sig = " ".join(x.strip() for x in tlines[s:e + 1])
        if not sig.endswith(")"):
            continue
        # Emit the prototype without its parameter list. Hex-Rays does not agree
        # with itself about parameter counts (the same name is called with two
        # and with four arguments in the same file), and an unprototyped
        # declaration is the one C89 form that accepts all of them.
        head = sig[:sig.find("(")].strip()
        if not head or "(" in head or "*" in head or head.endswith(")"):
            continue
        protos.append(head + "();")

    # 5. globals referenced by name. The pseudocode never defines them (they
    #    live in .data/.bss), so every one of them needs an extern.
    globals_used = set(IDA_GLOBAL_RE.findall(body)) | set(NAMED_GLOBAL_RE.findall(body))
    globals_used -= defined_names

    decls = []
    global_defs = {}
    subscripted = set(SUBSCRIPT_RE.findall(body))
    for g in sorted(globals_used):
        ctype = None
        for pref, t in IDA_GLOBALS.items():
            if g.startswith(pref):
                ctype = t
                break
        if ctype is None:
            # a named data symbol from the original symbol table; only its
            # address is ever used, always through an explicit cast
            ctype = "_DWORD"
        suffix = "[]" if g in subscripted else ""
        decls.append("extern %s %s%s;" % (ctype, g, suffix))
        # the storage file needs a size, and one element is enough: the code
        # only ever reaches one element past the symbol
        global_defs[g] = "%s %s%s" % (ctype, g, "[1]" if g in subscripted else "")

    tpl_decls = []
    for (expr, kind), name in sorted(mapping.items(), key=lambda kv: kv[1]):
        if name in defined_names:
            continue
        if kind == "type":
            tpl_decls.append("typedef union { unsigned char _pad[64]; } %s;" % name)
        elif kind == "value":
            tpl_decls.append("extern int %s;" % name)
            global_defs[name] = "int %s" % name
        # calls need no declaration: gnu89 implicit declaration covers them

    hdr = [
        "/* generated by native/rebuild/tools/transform.py - do not edit */",
        '#include "decomp_compat.h"',
        '#include "decomp_types.h"',
        '#include "decomp_externs.h"',
        "",
        "/* ---- template-qualified names ---- */",
    ] + tpl_decls + [
        "",
        "/* ---- globals referenced by this translation unit ---- */",
    ] + decls + [
        "",
        "/* ---- functions defined in this translation unit ---- */",
    ] + protos + [
        "",
        "/* ---- source ---- */",
        "",
    ]

    out_path = os.path.join(out_root, relpath)
    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    with open(out_path, "w", encoding="utf-8") as fh:
        fh.write("\n".join(hdr))
        fh.write("\n".join(tlines))

    return global_defs, {
        "file": relpath,
        "defs": len(defs),
        "thunks": thunks,
        "dups": len(renames),
        "tpl_type": stats["type"],
        "tpl_call": stats["call"],
        "tpl_value": stats["value"],
        "globals": len(globals_used),
        "bytes": len(body),
    }


def by_name_key(newname):
    """'A__B__v2' -> 'A__B'"""
    return re.sub(r"__v\d+$", "", newname)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--src", required=True)
    ap.add_argument("--out", required=True)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--types", default=None,
                    help="decomp_types.h to read the opaque type names from")
    args = ap.parse_args()

    src_root = os.path.abspath(args.src)
    out_root = os.path.abspath(args.out)

    type_names = load_type_names(args.types)
    prefix_types = make_type_prefixer(type_names)
    print("opaque types:", len(type_names))

    files = []
    for dirpath, _dirs, names in os.walk(src_root):
        for nm in names:
            if nm.endswith(".c"):
                full = os.path.join(dirpath, nm)
                files.append((full, os.path.relpath(full, src_root)))
    files.sort(key=lambda x: x[1])
    if args.limit:
        files = files[:args.limit]

    tot_defs = tot_t = tot_c = tot_v = tot_thunk = tot_dup = 0
    all_globals = {}
    for full, rel in files:
        gdefs, st = transform_file(full, rel, out_root, src_root, prefix_types)
        all_globals.update(gdefs)
        tot_defs += st["defs"]
        tot_thunk += st["thunks"]
        tot_dup += st["dups"]
        tot_t += st["tpl_type"]
        tot_c += st["tpl_call"]
        tot_v += st["tpl_value"]

    # the pseudocode never defines its globals (they live in .data/.bss), so
    # emit one translation unit that does - that is what makes the library link
    gpath = os.path.join(out_root, "_decomp_globals.c")
    with open(gpath, "w", encoding="utf-8") as fh:
        fh.write("/* generated by native/rebuild/tools/transform.py - do not edit */\n")
        fh.write("/* Storage for every global the pseudocode refers to by name.\n"
                 " * The decompiler only ever sees the *uses*; the definitions\n"
                 " * live in the original .so's .data/.bss and are not part of the\n"
                 " * pseudocode. Sizes and initial values are unknown, so each one\n"
                 " * is a zero-initialised object of the width its name implies. */\n")
        fh.write('#include "decomp_compat.h"\n#include "decomp_types.h"\n\n')
        for name in sorted(all_globals):
            fh.write("%s;\n" % all_globals[name])

    print("files       :", len(files))
    print("definitions :", tot_defs)
    print("plt thunks  :", tot_thunk, "(removed)")
    print("renamed dups:", tot_dup)
    print("globals     :", len(all_globals))
    print("templates   : type=%d call=%d value=%d" % (tot_t, tot_c, tot_v))


if __name__ == "__main__":
    main()
