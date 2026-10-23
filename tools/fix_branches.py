#!/usr/bin/env python3
"""Re-target raw relative branches after link (layout drift fix).

Every raw function/gap body is a byte copy of the original, so its *relative*
branches still encode the original displacement.  That is only valid while the
caller and the target move together.  They do not: the linker aligns each
naked function to 16 bytes while the original unlisted code continues without
alignment, so e.g. ``FUN_00466160`` (no padding) jumps into the next gap that
our link placed 6 bytes further (``gap_0046622a``).  The game then jumps
mid-instruction ("illegal instruction").

This pass runs **after** link, decodes the original entities (functions and
gaps from ``text_layout.tsv``), and for every relative ``call/jmp/jcc`` whose
bytes we copied verbatim but whose target entity has a different drift,
rewrites the displacement in our exe to the corresponding address in our
image.  Instruction sizes never change (only the displacement value).

Usage in the link recipe: python3 tools/fix_branches.py build/Port1111.exe
Idempotent: after patching, the displacement no longer matches the original,
so the branch is skipped on a second run.
"""
import bisect
import csv
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

from ptconfig import ORIG_EXE
EXE = ORIG_EXE
MAP = 'build/Port1111.map'

if len(sys.argv) < 2:
    sys.exit('usage: fix_branches.py <our.exe>')
OUR = sys.argv[1]

orig = open(EXE, 'rb').read()
ours = bytearray(open(OUR, 'rb').read())


def rd(buf, va, n):
    off = va - 0x400000
    return buf[off:off + n]


# our symbols: FUN_<orig> / gap_<orig> -> our address
sym_re = re.compile(r'\s*0001:([0-9A-Fa-f]{8})\s+(\S+)\s+([0-9a-fA-F]{8})\s')
our_by_orig = {}
for line in open(MAP, errors='replace'):
    m = sym_re.match(line)
    if not m:
        continue
    name = m.group(2)
    addr = int(m.group(3), 16)
    mm = re.match(r'\?(FUN_|gap_)([0-9a-f]{8})@@', name)
    if mm:
        our_by_orig[int(mm.group(2), 16)] = addr

# original entities from the layout (functions and gaps)
rows = list(csv.DictReader(open('ghidra/export/text_layout.tsv'), delimiter='\t'))
entities = []
for r in rows:
    start = int(r['start'], 16)
    size = int(r['size'])
    if start in our_by_orig:
        entities.append((start, size, our_by_orig[start]))
entities.sort()
estarts = [e[0] for e in entities]


def entity_of(va):
    i = bisect.bisect_right(estarts, va) - 1
    if i < 0:
        return None
    s, n, a = entities[i]
    return (s, n, a) if s <= va < s + n else None


# capstone is needed to decode original instructions
from capstone import Cs, CS_ARCH_X86, CS_MODE_32, CS_OP_IMM  # noqa: E402

md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

BRANCH = {'call', 'jmp', 'je', 'jne', 'jz', 'jnz', 'jb', 'jae', 'jbe', 'ja',
          'jl', 'jge', 'jle', 'jg', 'js', 'jns', 'jo', 'jno', 'jp', 'jnp',
          'jecxz', 'loop', 'loope', 'loopne'}

patched = 0
checked = 0
for start, size, our_start in entities:
    drift = our_start - start
    body = rd(orig, start, size)
    for insn in md.disasm(body, start):
        if insn.mnemonic not in BRANCH or not insn.operands:
            continue
        op = insn.operands[0]
        if op.type != CS_OP_IMM:
            continue
        target = op.imm & 0xFFFFFFFF
        # relative branch? (direct, not through memory)
        if insn.size < 2:
            continue
        b0 = insn.bytes[0]
        if b0 in (0xE8, 0xE9) or 0x70 <= b0 <= 0x7F or b0 == 0xEB:
            rel = insn.size - 1          # rel32 call/jmp, rel8 jcc
        elif b0 == 0x0F:
            rel = insn.size - 2          # rel32 jcc
        else:
            continue
        if rel not in (1, 4):
            continue
        our_pc = insn.address + drift
        # check we copied the branch bytes verbatim
        if bytes(ours[our_pc - 0x400000:our_pc - 0x400000 + insn.size]) != insn.bytes:
            continue
        checked += 1
        te = entity_of(target)
        if te is None:
            continue
        t_start, t_size, t_our = te
        intended = t_our + (target - t_start)
        current = our_pc + insn.size + struct.unpack_from(
            '<i' if rel == 4 else '<b', ours, our_pc - 0x400000 + insn.size - rel)[0]
        if current == intended:
            continue
        disp = intended - (our_pc + insn.size)
        off = our_pc - 0x400000 + insn.size - rel
        if rel == 4:
            struct.pack_into('<i', ours, off, disp)
        else:
            if not -128 <= disp <= 127:
                print('  skip short branch overflow at %08x' % our_pc)
                continue
            struct.pack_into('<b', ours, off, disp)
        patched += 1

if patched:
    open(OUR, 'wb').write(ours)
print('fix_branches: %d relative branch(es) checked, %d re-targeted' %
      (checked, patched))
