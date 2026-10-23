#!/usr/bin/env python3
"""Propose translation-unit (module) boundaries from the Ghidra export.

MSVC emits one obj per source file and the linker concatenates objs in order,
so functions belonging to the same file are contiguous in .text. Within a
file, neighbouring functions tend to share static data (class statics, local
tables) and strings. This tool scores each address gap by the data/string
affinity of the functions on either side and prints candidate boundaries.

Usage:
  tools/cluster.py                 # boundary candidates with scores
  tools/cluster.py --module N      # dump the functions of module N
  tools/cluster.py --of 0x403cf0   # show the module containing an address
"""
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TSV = os.path.join(ROOT, "ghidra/export/functions.tsv")
CDIR = os.path.join(ROOT, "ghidra/export/c")

SYM = re.compile(r"\b(FUN_[0-9a-f]{8}|DAT_[0-9a-f]{8}|PTR_[A-Z]*_[0-9a-f]{8}|"
                 r"LAB_[0-9a-f]{8}|UNK_[0-9a-f]{8}|s_[A-Za-z0-9_]+)\b")


def load():
    rows = []
    with open(TSV) as f:
        next(f)
        for line in f:
            p = line.rstrip("\n").split("\t")
            rows.append((int(p[0], 16), p[1], int(p[2]), int(p[3])))
    return rows


def refs(addr):
    p = os.path.join(CDIR, "f_%08x.c" % addr)
    if not os.path.exists(p):
        return set()
    txt = open(p, encoding="utf-8", errors="replace").read()
    return {m for m in SYM.findall(txt) if not m.startswith("FUN_")}


def jaccard(a, b):
    if not a and not b:
        return 0.0
    return len(a & b) / len(a | b)


def modules(rows):
    """Greedy: start new module when affinity with previous functions drops."""
    mods = []
    cur = []
    for i, (addr, name, size, th) in enumerate(rows):
        if th:
            continue
        if not cur:
            cur = [(addr, name, size, refs(addr))]
            continue
        prev = cur[-1]
        aff = jaccard(prev[3], refs(addr))
        gap = addr - (prev[0] + prev[2])
        # new module if data affinity is zero AND there is a real gap, or
        # affinity is zero for two consecutive functions
        if aff == 0.0 and (gap > 0 or len(cur) > 1):
            mods.append(cur)
            cur = [(addr, name, size, refs(addr))]
        else:
            cur.append((addr, name, size, refs(addr)))
    if cur:
        mods.append(cur)
    return mods


def main():
    rows = load()
    mods = modules(rows)
    args = sys.argv[1:]
    if args and args[0] == "--of":
        target = int(args[1], 16)
        for i, m in enumerate(mods):
            if any(a == target for a, *_ in m):
                print(f"module {i}: {hex(m[0][0])}..{hex(m[-1][0])} ({len(m)} funcs)")
                for a, n, s, _ in m:
                    print(f"  {a:#08x} {s:5d} {n}")
                return
    if args and args[0] == "--module":
        i = int(args[1])
        m = mods[i]
        for a, n, s, r in m:
            print(f"{a:#08x} {s:5d} {n:44s} refs={sorted(r)[:6]}")
        return
    # summary
    big = [m for m in mods if len(m) >= 2]
    print(f"{len(rows)} functions -> {len(mods)} proposed modules "
          f"({len(big)} with >=2 funcs)")
    for i, m in enumerate(mods):
        if len(m) >= 4:
            print(f"  module {i:4d}: {m[0][0]:#08x}..{m[-1][0]:#08x} "
                  f"{len(m):5d} funcs  first={m[0][1]}")


if __name__ == "__main__":
    main()
