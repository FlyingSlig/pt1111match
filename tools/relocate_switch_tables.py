#!/usr/bin/env python3
"""Relocate switch-table entries (data-in-text) to our function addresses.

The original's jump tables (``jmp dword ptr [reg*4 + table]``) live in code
*gaps* and contain **absolute addresses of case labels**.  The layout chunks
copy those gap bytes verbatim, so after any layout drift (a raw function whose
recompiled copy sits at a different address, e.g. ``FUN_0046ad90`` at
``0x472e00`` instead of ``0x46ad90``) the entries still point at the original
numeric address.  In our image that address belongs to a *different* function:
the game jumps mid-instruction and dies with an illegal instruction.

This tool rewrites each table entry as a link-time relocation
(``dd OFFSET FUN_<func> + <delta>``) so the assembler/linker resolve the case
label in *our* image on every build.  The table keeps its byte size (4 bytes
per entry); entries whose target is not a listed function stay as raw bytes.

Gaps already containing ``dd`` are skipped, so the tool is idempotent with
respect to its own output.  Regenerating the gap bodies (e.g.
``gen_layout_chunks.py``) discards the relocations - re-run this tool after
that.

Usage: python3 tools/relocate_switch_tables.py [--dry]
"""
import bisect
import csv
import glob
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

from ptconfig import ORIG_EXE
EXE = ORIG_EXE
DRY = '--dry' in sys.argv

orig = open(EXE, 'rb').read()


def obytes(va, n):
    off = va - 0x400000
    return orig[off:off + n]


# original functions (address ordered)
funcs = []
for row in csv.DictReader(open('ghidra/export/functions.tsv'), delimiter='\t'):
    funcs.append((int(row['addr'], 16), int(row['size'])))
funcs.sort()
fstarts = [f[0] for f in funcs]


def func_of(va):
    i = bisect.bisect_right(fstarts, va) - 1
    if i < 0:
        return None
    a, s = funcs[i]
    return a if a <= va < a + s else None


# code gaps
gaps = []
for r in csv.DictReader(open('ghidra/export/text_layout.tsv'), delimiter='\t'):
    if r['kind'] == 'gap':
        gaps.append((int(r['start'], 16), int(r['size'])))
gaps.sort()
gstarts = [g[0] for g in gaps]


def gap_of(va):
    i = bisect.bisect_right(gstarts, va) - 1
    if i < 0:
        return None
    a, s = gaps[i]
    return a if a <= va < a + s else None


# find `jmp/call dword ptr [reg*4 + table]`
SIB = {0x85, 0x8D, 0x95, 0x9D, 0xA5, 0xAD, 0xB5, 0xBD}  # scale=4, base=disp32
tables = []
for va in range(0x401000, 0x496fa4 - 7):
    b = obytes(va, 3)
    if len(b) < 3:
        continue
    if b[0] == 0xFF and b[1] in (0x24, 0x14) and b[2] in SIB:
        tables.append((va, struct.unpack_from('<I', obytes(va + 3, 4), 0)[0]))

print('switch tables found:', len(tables))

by_gap = {}
skipped_nogap = skipped_short = 0
for _insn_va, table_va in tables:
    g = gap_of(table_va)
    if g is None:
        skipped_nogap += 1
        continue
    entries = []
    for i in range(256):
        e = struct.unpack_from('<I', obytes(table_va + 4 * i, 4), 0)[0]
        if e == 0xCCCCCCCC or not (0x401000 <= e < 0x496fa4):
            break
        entries.append(e)
    if len(entries) < 2:
        skipped_short += 1
        continue
    by_gap.setdefault(g, {})[table_va] = entries

print('tables in gaps: %d; skipped (no gap %d, too short %d)'
      % (sum(len(v) for v in by_gap.values()), skipped_nogap, skipped_short))

srcs = glob.glob('src/*_layout.cpp')


def line_len(s):
    s = s.strip()
    if s.startswith('_emit'):
        return 1
    if s.startswith('dd '):
        return 4
    if re.match(r'(call|jmp) dword ptr \[', s):
        return 6
    if re.match(r'mov [a-z]+, dword ptr \[', s):
        return 6
    if re.match(r'push OFFSET ', s):
        return 5
    return None


def find_block(lines, name):
    for i, l in enumerate(lines):
        if (name + '(void)') in l and l.rstrip().endswith(')'):
            body_start = next(j for j in range(i, len(lines))
                              if lines[j].strip() == '__asm {') + 1
            body_end = next(j for j in range(body_start, len(lines))
                            if lines[j].strip() == '}')
            return body_start, body_end
    return None


def write_table(fn, g, table_va, entries):
    """Rewrite one table (re-reads the file; caller processes high -> low)."""
    name = 'gap_%08x' % g
    lines = open(fn).read().splitlines()
    blk = find_block(lines, name)
    if not blk:
        print('  gap block not found:', name)
        return 0
    body_start, body_end = blk
    bmap = {}
    boff = 0
    for i in range(body_start, body_end):
        n = line_len(lines[i])
        if n is None:
            print('  cannot map gap body bytes:', name)
            return 0
        for k in range(n):
            bmap[boff + k] = i
        boff += n
    off = table_va - g
    span = list(range(off, off + 4 * len(entries)))
    if span[0] < 0 or span[-1] not in bmap:
        print('  table out of body:', hex(table_va), 'off', off,
              'entries', len(entries), 'mapped', boff)
        return 0
    if (len({bmap[b] for b in span}) != len(span)
            or any(not lines[bmap[b]].strip().startswith('_emit')
                   for b in span)):
        print('  table region is not raw bytes:', hex(table_va))
        return 0
    first = bmap[off]
    for k in reversed(span):
        del lines[bmap[k]]
    repl = []
    for e in entries:
        f = func_of(e)
        if f is None:
            repl += ['        _emit 0x%02x' % x for x in struct.pack('<I', e)]
            continue
        delta = e - f
        expr = 'OFFSET FUN_%08x' % f
        if delta:
            expr += ' + %d' % delta
        repl.append('        dd ' + expr)
    lines[first:first] = repl
    if not DRY:
        open(fn, 'w').write('\n'.join(lines) + '\n')
    return len(entries)


changed_gaps = changed_entries = 0
for g, tabmap in sorted(by_gap.items()):
    fn = None
    name = 'gap_%08x' % g
    for f in srcs:
        if name + '(void)' in open(f, errors='replace').read():
            fn = f
            break
    if not fn:
        print('  gap source not found:', name)
        continue
    n = 0
    for table_va, entries in sorted(tabmap.items(), reverse=True):
        n += write_table(fn, g, table_va, entries)
    if n:
        changed_gaps += 1
        changed_entries += n

print('relocated %d gap table(s), %d entr(ies)%s'
      % (changed_gaps, changed_entries, ' (dry)' if DRY else ''))
