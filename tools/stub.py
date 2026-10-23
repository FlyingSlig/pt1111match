#!/usr/bin/env python3
"""Emit a STUB definition for a function, from its decompiled declaration.

Usage:
  tools/stub.py 0x00465e40            # print a STUB block
  tools/stub.py 0x00465e40 --append   # append it to src/0099_stubs.cpp

Stubs give the linker a definition and give reccmp an address mapping, so
callers of not-yet-decompiled functions still compare at 100%.

Calling-convention note: __thiscall cannot be put on a free function (C4234).
For those the stub is emitted as __fastcall with the implicit `this` made an
explicit first pointer argument; adjust the CALLER if it must call a member.
"""
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CDIR = os.path.join(ROOT, "ghidra/export/c")
STUBFILE = os.path.join(ROOT, "src/0099_stubs.cpp")

# order matters: longest / most specific first
TYPE_MAP = [
    (r"\bundefined4\s*\*", "void *"),
    (r"\bundefined1\s*\*", "void *"),
    (r"\bundefined8\b", "long long"),
    (r"\bundefined4\b", "int"),
    (r"\bundefined2\b", "short"),
    (r"\bundefined1\b", "char"),
    (r"\bundefined\b", "int"),
    (r"\bcode\s*\*", "void *"),
    (r"\bbyte\b", "unsigned char"),
    (r"\buint\b", "unsigned int"),
    (r"\bushort\b", "unsigned short"),
    (r"\bulong\b", "unsigned long"),
]


def convert(sig: str) -> str:
    for pat, rep in TYPE_MAP:
        sig = re.sub(pat, rep, sig)
    return sig


def decl_of(addr: int):
    """Return (name, declaration-line) from the decompiled function file."""
    p = os.path.join(CDIR, "f_%08x.c" % addr)
    if not os.path.exists(p):
        return None, None
    for line in open(p, encoding="utf-8", errors="replace"):
        line = line.rstrip("\n")
        m = re.match(r"\s*(.*\b(FUN_[0-9a-f]{8})\s*\(.*)$", line)
        if m and not line.lstrip().startswith("//"):
            return m.group(2), m.group(1).strip()
    return None, None


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    append = "--append" in sys.argv
    addr = int(args[0], 16)
    name, decl = decl_of(addr)
    if name is None:
        print(f"no decompiled declaration for {addr:#x}")
        return 1
    sig = convert(decl)
    if "__thiscall" in sig:
        sig = sig.replace("__thiscall", "__fastcall")
        note = ("// NOTE: original is __thiscall; emitted as __fastcall with\n"
                "// explicit `this` (first param). Adjust callers if needed.\n")
    else:
        note = ""
    block = f"\n// STUB: PORT1111 0x{addr:08x}\n{note}{sig}\n{{\n    // stub\n}}\n"
    if append:
        with open(STUBFILE, "a") as f:
            f.write(block)
        print(f"appended stub for {name} ({addr:#x}) to {STUBFILE}")
    else:
        print(block)
    return 0


if __name__ == "__main__":
    sys.exit(main())
