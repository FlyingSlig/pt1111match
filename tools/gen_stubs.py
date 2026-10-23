#!/usr/bin/env python3
"""Generate a STUB skeleton for every not-yet-decompiled game function.

Reads the Ghidra export, emits `foo()`-style STUB definitions (with
`// STUB: PORT1111 0x...` markers) into src/0098_stubs_all.cpp, skipping:
  - functions already defined in src/*.cpp (FUNCTION markers), and
  - functions already stubbed in src/0099_stubs.cpp (STUB markers), and
  - the static CRT region (>= CRT_START), which the linker provides.

The skeleton gives the linker a definition for every callee, so any caller
can be matched immediately; reccmp normalises call targets through the STUB
annotations.

Usage: tools/gen_stubs.py [--limit 0x496fa4] [--dry-run]
"""
import glob
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TSV = os.path.join(ROOT, "ghidra/export/functions.tsv")
CDIR = os.path.join(ROOT, "ghidra/export/c")
OUT = os.path.join(ROOT, "src/0098_stubs_all.cpp")
HEADER = os.path.join(ROOT, "src/pt1111_funcs.h")
OVERRIDES_FILE = os.path.join(ROOT, "tools/sig_overrides.txt")


def load_overrides():
    """Optional address -> declaration overrides (Ghidra conventions are often
    wrong). Format: `0x00439360 int __stdcall FUN_00439360(int, void *)`."""
    ov = {}
    if os.path.exists(OVERRIDES_FILE):
        for line in open(OVERRIDES_FILE, encoding="utf-8"):
            line = line.strip()
            if not line or line.startswith("#"):
                continue
            m = re.match(r"(0x[0-9a-fA-F]+)\s+(.*)", line)
            if m:
                ov[int(m.group(1), 16)] = m.group(2).strip()
    return ov

CRT_START = 0x496FA4  # first named CRT function (operator_new)

TYPE_MAP = [
    (r"\bundefined4\s*\*", "void *"),
    (r"\bundefined1\s*\*", "void *"),
    (r"\bundefined8\b", "long long"),
    (r"\bundefined4\b", "int"),
    (r"\bundefined2\b", "short"),
    (r"\bundefined1\b", "char"),
    (r"\bundefined\b", "int"),
    (r"\bcode\s*\*", "void *"),
    (r"\buchar\b", "unsigned char"),
    (r"\buschar\b", "unsigned char"),
    (r"\bschar\b", "signed char"),
    (r"\bsbyte\b", "char"),
    (r"\bbyte\b", "unsigned char"),
    (r"\bushort\b", "unsigned short"),
    (r"\buint\b", "unsigned int"),
    (r"\bulonglong\b", "unsigned long long"),
    (r"\blonglong\b", "long long"),
    (r"\bulong\b", "unsigned long"),
    (r"\bint64\b", "long long"),
    (r"\buint64\b", "unsigned long long"),
    (r"\bfloat10\b", "double"),
    (r"\bexception\b", "int"),
    (r"\bbadinstruction\b", "int"),
    (r"\bint3\b", "char"),
]


def convert(sig: str) -> str:
    for pat, rep in TYPE_MAP:
        sig = re.sub(pat, rep, sig)
    # `this` is a C++ keyword and cannot be a parameter name.
    sig = re.sub(r"\bthis\b", "pthis", sig)
    return sig


def matched_decls():
    """Extract signatures of matched free FUN_* definitions so the generated
    header can declare them for callers (gen_stubs otherwise drops them)."""
    decls = {}
    pat = re.compile(
        r"^((?:void|int|char|short|long|unsigned|signed|bool|float|double|void\s*\*|int\s*\*|char\s*\*|\*|\s)+?)"
        r"\s*(__fastcall|__cdecl|__stdcall|__thiscall)?\s*(FUN_[0-9a-f]{8})\s*(\([^;{]*\))\s*$")
    for path in glob.glob(os.path.join(ROOT, "src/*.cpp")):
        if os.path.basename(path) == "0098_stubs_all.cpp":
            continue
        for line in open(path, encoding="utf-8", errors="replace"):
            line = line.rstrip("\n")
            if line.lstrip().startswith("//") or "::" in line:
                continue
            m = pat.match(line)
            if m:
                ret = " ".join(m.group(1).split())
                conv = (" " + m.group(2)) if m.group(2) else ""
                decls[m.group(3)] = f"{ret}{conv} {m.group(3)}{m.group(4)}"
    return decls


def existing_markers():
    funcs, stubs = set(), set()
    for path in glob.glob(os.path.join(ROOT, "src/*.cpp")):
        if os.path.abspath(path) == os.path.abspath(OUT):
            continue  # don't treat our own generated output as "existing"
        for line in open(path, encoding="utf-8", errors="replace"):
            m = re.match(
                r"\s*//\s*(?:FUNCTION|TEMPLATE|SYNTHETIC):\s*\w+\s+(0x[0-9a-fA-F]+)",
                line,
            )
            if m:
                funcs.add(int(m.group(1), 16))
            m = re.match(r"\s*//\s*STUB:\s*\w+\s+(0x[0-9a-fA-F]+)", line)
            if m:
                stubs.add(int(m.group(1), 16))
    return funcs, stubs


def decl_of(addr: int, name: str):
    """Extract a full (possibly multi-line) function declaration."""
    p = os.path.join(CDIR, "f_%08x.c" % addr)
    if not os.path.exists(p):
        return None
    # join non-comment lines with spaces
    parts = []
    for line in open(p, encoding="utf-8", errors="replace"):
        if line.lstrip().startswith("//"):
            continue
        parts.append(line.rstrip("\n"))
    text = "\n".join(parts)
    i = text.find(name + "(")
    if i < 0:
        return None
    # walk forward to the matching close paren
    j = i + len(name)
    depth = 0
    k = j
    while k < len(text):
        if text[k] == "(":
            depth += 1
        elif text[k] == ")":
            depth -= 1
            if depth == 0:
                break
        k += 1
    sig = text[i:k + 1]
    # walk backward for the return type (stops at the previous newline)
    start = i
    while start > 0 and (text[start - 1].isalnum() or text[start - 1] in "_ *\t"):
        start -= 1
    ret = text[start:i].strip()
    return (ret + " " + sig).strip()


def main():
    dry = "--dry-run" in sys.argv
    rows = []
    with open(TSV) as f:
        next(f)
        for line in f:
            p = line.rstrip("\n").split("\t")
            rows.append((int(p[0], 16), p[1], int(p[3]), p[4] if len(p) > 4 else ""))

    funcs, stubs = existing_markers()
    overrides = load_overrides()
    count = 0
    out = [
        "// pt1111match — generated STUB skeleton (tools/gen_stubs.py). DO NOT EDIT.\n",
        "// Every not-yet-decompiled game function gets a stub so callers link.\n",
        "// Matched functions live in their own src/<addr>_*.cpp files.\n",
        "// A stub is replaced by removing it here and adding a real unit.\n\n",
        "#include \"pt1111_funcs.h\"\n\n",
    ]
    decls = [
        "// pt1111match — generated declarations for all game functions.\n",
        "// DO NOT EDIT (tools/gen_stubs.py). Include this to call any function.\n",
        "#pragma once\n\n",
        "#include <windows.h>\n\n",
    ]
    for addr, name, thunk, tsig in rows:
        if not (name.startswith("FUN_") or name.startswith("thunk_FUN_")):
            continue
        if addr >= CRT_START:
            continue
        if addr in funcs or addr in stubs:
            continue
        if name.startswith("thunk_FUN_"):
            # thunks forward ECX like the target: model as __fastcall(void*)
            decl = f"void __fastcall {name}(void *param_1)"
        else:
            decl = overrides.get(addr) or decl_of(addr, name) or (convert(tsig) if tsig else None)
        if decl is None:
            continue
        sig = decl if addr in overrides else convert(decl)
        sig = sig.replace("__thiscall", "__fastcall")
        # return type = tokens before the function name, minus convention keywords
        prefix = decl[: decl.find(name)]
        toks = [t for t in prefix.replace("*", " * ").split()
                if t not in ("__fastcall", "__cdecl", "__stdcall", "__thiscall",
                             "__inline", "static", "extern", "__forceinline")]
        ret_type = " ".join(toks).replace(" ", "")
        is_void = ret_type in ("void", "")
        body = "{\n}\n\n" if is_void else "{\n    return 0;\n}\n\n"
        out.append(f"// STUB: PORT1111 0x{addr:08x}\n{sig}\n{body}")
        decls.append(f"{sig};\n")
        count += 1

    text = "".join(out)
    header = "".join(decls) + "".join(
        f"extern {d};\n" for _, d in sorted(matched_decls().items())
    )
    if dry:
        print(f"would generate {count} stubs, {len(text)} bytes")
        return 0
    with open(OUT, "w") as f:
        f.write(text)
    with open(HEADER, "w") as f:
        f.write(header)
        extra = os.path.join(os.path.dirname(HEADER), "pt1111_funcs_extra.h")
        if os.path.exists(extra):
            f.write('\n#include "pt1111_funcs_extra.h"\n')
    print(f"wrote {count} stubs to {OUT} and declarations to {HEADER}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
