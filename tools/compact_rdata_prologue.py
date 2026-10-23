#!/usr/bin/env python3
"""Compact the `.rdata` linker prologue in front of the object data.

The MSVC 7.1 linker puts the IAT (and, with `/DEBUG`, a 28-byte debug
directory) at the start of `.rdata`, then the first object contribution.  The
original's first game-data block starts at `0xbc3a0`, but ours starts at
`0xbc3dc` because the linker reserves extra IAT slots for six CRT imports
(0xbc39c..0xbc3b4) plus the debug directory (0xbc3b4..0xbc3dc).

This pass runs *after* `fix_pe_dirs.py` and `rebuild_imports.py` (so the
original import tables at 0xd3b80 are already installed and must not move):

  * move the object-data block `[start, end)` earlier by `start - target`
    (default 0x3c), where `end` is the link-time import-directory RVA
    (0xd3af0, whose structures are dead after the rebuilder);
  * repoint absolute operands in code and aligned data pointers that
    referenced the moved block;
  * fill the freed prologue bytes (`0xbc39c..target`) and the dead link-time
    import-structure region (`end-d..0xd3b80`) with the original `.rdata`
    bytes, so those gaps compare equal.

Code references are patched **instruction-aware** (capstone): only the
immediate or absolute memory displacement of an instruction is changed.  A
byte-wise scan would also hit stack-frame bytes that happen to look like an
address (e.g. `mov [esp+0x4c],0` encodes `44 24 4c 00`, inside the moved
range) and corrupt the function.

The PDB must be patched separately with `tools/patch_pdb_data.py` so reccmp
can still name the moved symbols.
"""
import argparse
import bisect
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)
sys.path.insert(0, os.path.join(ROOT, 'tools'))

import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from capstone.x86 import X86_OP_IMM, X86_OP_MEM

from ptconfig import ORIG_EXE
ORIG = ORIG_EXE
DEFAULT_START = 0xbc3dc     # first object contribution (after debug dir)
DEFAULT_END = 0xd3af0       # link-time import directory (dead after rebuild)
DEFAULT_TARGET = 0xbc3a0    # original first game-data block
ORIG_TABLE = 0xd3b80        # original import descriptor RVA
BASE = 0x400000


def in_skip(rva, skip):
    return any(lo <= rva < hi for lo, hi in skip)


def patch_code(pe, sec, lo_va, hi_va, delta, skip):
    """Patch immediate / absolute-displacement operands in one code section."""
    data = bytearray(pe.get_data(sec.VirtualAddress, sec.SizeOfRawData))
    base_va = sec.VirtualAddress + BASE
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    patched = 0
    off = 0
    while off < len(data):
        insn = next(md.disasm(bytes(data[off:off + 16]), base_va + off), None)
        if insn is None:
            off += 1
            continue
        enc = insn.encoding
        for op in insn.operands:
            if op.type == X86_OP_IMM and enc.imm_size == 4:
                val = op.imm & 0xFFFFFFFF
                if lo_va <= val < hi_va:
                    pos = off + enc.imm_offset
                    if not in_skip(sec.VirtualAddress + pos, skip):
                        struct.pack_into('<I', data, pos,
                                         (val + delta) & 0xFFFFFFFF)
                        patched += 1
            elif (op.type == X86_OP_MEM and op.mem.base == 0 and
                  op.mem.index == 0 and enc.disp_size == 4):
                val = op.mem.disp & 0xFFFFFFFF
                if lo_va <= val < hi_va:
                    pos = off + enc.disp_offset
                    if not in_skip(sec.VirtualAddress + pos, skip):
                        struct.pack_into('<I', data, pos,
                                         (val + delta) & 0xFFFFFFFF)
                        patched += 1
        off += insn.size
    pe.set_bytes_at_rva(sec.VirtualAddress, bytes(data))
    return patched


def patch_data(pe, sec, lo_va, hi_va, delta, skip):
    """Patch aligned dwords in a data section."""
    data = bytearray(pe.get_data(sec.VirtualAddress, sec.SizeOfRawData))
    patched = 0
    for pos in range(0, len(data) - 3, 4):
        rva = sec.VirtualAddress + pos
        if in_skip(rva, skip):
            continue
        val = struct.unpack_from('<I', data, pos)[0]
        if lo_va <= val < hi_va:
            struct.pack_into('<I', data, pos, (val + delta) & 0xFFFFFFFF)
            patched += 1
    pe.set_bytes_at_rva(sec.VirtualAddress, bytes(data))
    return patched


def scaffold_ranges(map_path):
    """Pre-compaction (addr, next_addr) ranges for scaffold object symbols."""
    rows = []
    for line in open(map_path, errors='replace'):
        m = re.match(r'\s*0002:([0-9A-Fa-f]{8})\s+(\S+)\s+'
                     r'([0-9a-fA-F]{8})\s+(?:f\s+)?(\S+)\s*$', line)
        if m and ('globals_phase4' in m.group(4) or
                  'globals_rdata' in m.group(4)):
            rows.append(int(m.group(3), 16))
    rows = sorted(set(rows))
    return rows


def patch_based_disp(pe, sec, lo_va, hi_va, delta, ranges, skip):
    """Patch `[reg + DAT_x]` displacements that resolve into a scaffold range.

    Indirect `call/jmp [reg*4 + table]` are left raw: the original table has no
    entity name, so reccmp compares the literal address and a shifted table
    always mismatches (see the AGENTS note on switch tables).
    """
    if not ranges:
        return 0
    data = bytearray(pe.get_data(sec.VirtualAddress, sec.SizeOfRawData))
    base_va = sec.VirtualAddress + BASE
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    patched = 0
    off = 0
    while off < len(data):
        insn = next(md.disasm(bytes(data[off:off + 16]), base_va + off), None)
        if insn is None:
            off += 1
            continue
        enc = insn.encoding
        for op in insn.operands:
            if not (op.type == X86_OP_MEM and enc.disp_size == 4 and
                    (op.mem.base or op.mem.index)):
                continue
            if insn.mnemonic in ('call', 'jmp') and op.mem.index:
                continue
            val = op.mem.disp & 0xFFFFFFFF
            if not (lo_va <= val < hi_va):
                continue
            i = bisect.bisect_right(ranges, val) - 1
            if i < 0:
                continue
            nxt = ranges[i + 1] if i + 1 < len(ranges) else ranges[i] + 1
            if ranges[i] <= val < nxt:
                pos = off + enc.disp_offset
                if not in_skip(sec.VirtualAddress + pos, skip):
                    struct.pack_into('<I', data, pos,
                                     (val + delta) & 0xFFFFFFFF)
                    patched += 1
        off += insn.size
    pe.set_bytes_at_rva(sec.VirtualAddress, bytes(data))
    return patched


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--in', dest='inp', default='build/Port1111.exe')
    ap.add_argument('--out', dest='out', default=None)
    ap.add_argument('--start', type=lambda x: int(x, 0), default=DEFAULT_START)
    ap.add_argument('--end', type=lambda x: int(x, 0), default=DEFAULT_END)
    ap.add_argument('--target', type=lambda x: int(x, 0),
                    default=DEFAULT_TARGET)
    ap.add_argument('--map', default='build/Port1111.map')
    ap.add_argument('--dry', action='store_true')
    args = ap.parse_args()
    out = args.out or args.inp

    pe = pefile.PE(args.inp)
    orig = pefile.PE(ORIG)
    start, end, target = args.start, args.end, args.target
    delta = start - target
    if delta <= 0:
        print('nothing to do (start %#x <= target %#x)' % (start, target))
        return
    if not (0xbc000 <= target < start < end):
        sys.exit('bad ranges: target=%#x start=%#x end=%#x'
                 % (target, start, end))
    rdata = pe.get_section_by_rva(start)
    if rdata is None or not (rdata.VirtualAddress <= target and
                             end <= rdata.VirtualAddress + rdata.SizeOfRawData):
        sys.exit('ranges are not inside one raw-backed section')

    block = pe.get_data(start, end - start)
    pe.set_bytes_at_rva(start - delta, block)
    pe.set_bytes_at_rva(end - delta, b'\0' * delta)

    lo_va, hi_va = start + BASE, end + BASE
    skip = ((0xbc000, 0xbc39c), (ORIG_TABLE, 0xd4e9f))
    moved = 0
    for sec in pe.sections:
        name = sec.Name.rstrip(b'\0').decode('latin1', 'replace')
        if name == '.text':
            moved += patch_code(pe, sec, lo_va, hi_va, -delta, skip)
        elif name in ('.rdata', '.data'):
            moved += patch_data(pe, sec, lo_va, hi_va, -delta, skip)

    # second pass: base+disp operands that point into a scaffold symbol
    ranges = scaffold_ranges(args.map)
    based = 0
    for sec in pe.sections:
        if sec.Name.startswith(b'.text'):
            based += patch_based_disp(pe, sec, lo_va, hi_va, -delta,
                                      ranges, skip)

    # gaps that are dead after the rebuilder: use the original bytes
    pro_lo = 0xbc39c
    pe.set_bytes_at_rva(pro_lo, orig.get_data(pro_lo, target - pro_lo))
    pe.set_bytes_at_rva(end - delta, orig.get_data(end - delta, delta))
    pe.set_bytes_at_rva(end, orig.get_data(end, ORIG_TABLE - end))

    print('moved .rdata[%#x..%#x) -> %#x (%d operands, %d based-disp); '
          'filled %#x..%#x and %#x..%#x'
          % (start, end, start - delta, moved, based, pro_lo, target,
             end - delta, ORIG_TABLE))
    if args.dry:
        print('dry run: not writing')
        return
    pe.write(out)
    print('wrote', out)


if __name__ == '__main__':
    main()
