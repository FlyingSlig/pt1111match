#!/usr/bin/env python3
"""Inspect functions in an address range from the Ghidra export.

Usage:
  tools/tu.py <start> <end>            # list functions in [start,end)
  tools/tu.py <start> <end> --src      # dump decompiled bodies too
  tools/tu.py --list-starts            # list candidate TU boundaries
  tools/tu.py --xref <addr>            # find functions referencing addr/data
"""
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TSV = os.path.join(ROOT, "ghidra/export/functions.tsv")
CDIR = os.path.join(ROOT, "ghidra/export/c")


def load():
    funcs = []
    with open(TSV) as f:
        next(f)
        for line in f:
            p = line.rstrip("\n").split("\t")
            funcs.append((int(p[0], 16), p[1], int(p[2]), int(p[3]), p[4] if len(p) > 4 else ""))
    return funcs


def body(addr):
    p = os.path.join(CDIR, "f_%08x.c" % addr)
    if os.path.exists(p):
        return open(p, encoding="utf-8", errors="replace").read()
    return "(no body)\n"


def main():
    a = sys.argv[1:]
    funcs = load()
    if a and a[0] == "--list-starts":
        # TU boundary heuristics: address gaps > 0x400 between consecutive funcs
        prev = None
        for addr, name, size, th, sig in funcs:
            if prev is not None and addr - prev > 0x400:
                print(f"gap {addr - prev:#x} before {addr:#08x} {name}")
            prev = addr + size
        return
    if a and a[0] == "--xref":
        needle = a[1].lower().replace("0x", "")
        n = 0
        for addr, name, size, th, sig in funcs:
            b = body(addr)
            if needle in b.lower():
                print(f"{addr:#08x} {name}")
                n += 1
        print(f"# {n} functions reference {a[1]}")
        return
    start = int(a[0], 16)
    end = int(a[1], 16)
    show = "--src" in a
    for addr, name, size, th, sig in funcs:
        if start <= addr < end:
            print(f"{addr:#08x} {size:4d} {'THUNK' if th else '     '} {name:40s} {sig}")
            if show:
                print(body(addr))


if __name__ == "__main__":
    main()
