#!/usr/bin/env python3
"""Compute the original's first-reference order of IAT slots.

For each IAT slot in ghidra/export/imports.tsv, find the lowest .text address
whose instruction references the slot (absolute memory operand), and print the
result in first-reference order alongside the actual IAT (slot) order.
"""
import csv
import struct
import sys

from capstone import Cs, CS_ARCH_X86, CS_MODE_32, CS_OP_MEM

from ptconfig import ORIG_EXE
EXE = ORIG_EXE

slots = {}
with open('ghidra/export/imports.tsv') as f:
    for a, dll, fn in (l.rstrip('\n').split('\t') for l in f):
        slots[int(a, 16)] = (dll, fn)
lo, hi = min(slots), max(slots) + 4

d = open(EXE, 'rb').read()
pe = struct.unpack_from('<I', d, 0x3c)[0]
nsec = struct.unpack_from('<H', d, pe + 6)[0]
optsz = struct.unpack_from('<H', d, pe + 20)[0]
base = struct.unpack_from('<I', d, pe + 24 + 28)[0]
so = pe + 24 + optsz
secs = []
for i in range(nsec):
    o = so + i * 40
    name = d[o:o + 8].rstrip(b'\0').decode()
    vs, va, rs, rp = struct.unpack_from('<IIII', d, o + 8)
    secs.append((name, va, rs, rp, vs))

def read(va, n):
    rva = va - base
    for name, va0, rs, rp, vs in secs:
        if va0 <= rva < va0 + max(vs, rs):
            off = rp + (rva - va0)
            return d[off:off + n]
    return None

# .text of the original
text = next(s for s in secs if s[0] == '.text')
_, tva, trs, trp, tvs = text
code = d[trp:trp + trs]
tstart = base + tva

md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

first = {}
for insn in md.disasm(code, tstart):
    for op in insn.operands:
        if op.type == CS_OP_MEM and op.mem.base == 0 and op.mem.index == 0:
            a = op.mem.disp & 0xffffffff
            if lo <= a < hi and a not in first:
                first[a] = insn.address

order = sorted(first, key=lambda a: first[a])
print('== first-reference order (address, slot, name) ==')
for a in order:
    dll, fn = slots[a]
    print('%08x  %#08x  %-14s %s' % (first[a], a, dll, fn))
print()
print('== IAT order ==')
for a in sorted(slots):
    print('%#08x  %-14s %s' % (a, slots[a][0], slots[a][1]))
