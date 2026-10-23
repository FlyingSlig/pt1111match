#!/usr/bin/env python3
"""Add the original `.text` functions that were never emitted by the layout
generator (SEH `Catch@` funclets, missing import thunks, and a few named game
functions such as NormalizeRect) as raw naked bodies at their original
addresses.

`tools/gen_layout_chunks.py` only knows about (a) raw functions from the batch
files and (b) gap regions.  Functions that Ghidra lists as `func` but that are
not in `src/` (SEH catch funclets are not standalone decompiled functions)
were simply dropped, which shortened the layout.  This script re-inserts them
in address order inside the right layout chunk.

`--shrink-pad` also removes the same number of bytes from the tail pad
(src/zzzz_text_pad.cpp) so the total .text size is unchanged.
"""
import csv
import glob
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

from ptconfig import ORIG_EXE
EXE = ORIG_EXE
MARK = re.compile(r'^// (?:FUNCTION|GAP): PORT1111 (0x[0-9a-f]+)$')

d = open(EXE, 'rb').read()


def rd(va, n):
    fo = 4096 + (va - 0x400000 - 0x1000)
    return d[fo:fo + n]


sizes = {}
for row in csv.DictReader(open('ghidra/export/functions.tsv'), delimiter='\t'):
    sizes[int(row['addr'], 16)] = int(row['size'])

rows = [r for r in csv.DictReader(open('ghidra/export/text_layout.tsv'),
                                  delimiter='\t') if r['kind'] == 'func']

marked = set()
for fn in glob.glob('src/*.cpp'):
    for m in re.finditer(r'//\s*(?:FUNCTION|STUB|TEMPLATE|SYNTHETIC|LIBRARY):'
                         r'\s*PORT1111\s+(0x[0-9a-f]+)',
                         open(fn, errors='replace').read()):
        marked.add(int(m.group(1), 16))

missing = sorted(int(r['start'], 16) for r in rows
                 if int(r['start'], 16) < 0x496fa4
                 and int(r['start'], 16) not in marked)


def chunk_for(addr):
    cands = []
    for fn in glob.glob('src/*_layout.cpp'):
        m = re.match(r'src/([0-9a-f]{8})_layout\.cpp', fn)
        if m:
            cands.append((int(m.group(1), 16), fn))
    cands.sort()
    return [f for a, f in cands if a <= addr][-1]


added = 0
for addr in missing:
    size = sizes.get(addr)
    if not size:
        print('skip (no size) 0x%08x' % addr)
        continue
    fn = chunk_for(addr)
    lines = open(fn).read().splitlines()
    insert_at = len(lines)
    for i, l in enumerate(lines):
        m = MARK.match(l)
        if m and int(m.group(1), 16) > addr:
            insert_at = i
            break
    blk = ['// FUNCTION: PORT1111 0x%08x' % addr,
           '__declspec(naked) void FUN_%08x(void)' % addr,
           '{', '    __asm {']
    for b in rd(addr, size):
        blk.append('        _emit 0x%02x' % b)
    blk += ['    }', '}']
    lines[insert_at:insert_at] = blk
    open(fn, 'w').write('\n'.join(lines) + '\n')
    added += size
    print('inserted 0x%08x (%d bytes) into %s' % (addr, size, fn))

print('added %d functions, %d bytes' % (len(missing), added))

if '--shrink-pad' in sys.argv and added:
    pad = 'src/zzzz_text_pad.cpp'
    lines = open(pad).read().splitlines()
    emit_idx = [i for i, l in enumerate(lines) if l.strip().startswith('_emit')]
    assert len(emit_idx) >= added, (len(emit_idx), added)
    # drop the last `added` emit lines
    for i in reversed(emit_idx[-added:]):
        del lines[i]
    open(pad, 'w').write('\n'.join(lines) + '\n')
    print('shrunk %s by %d bytes' % (pad, added))
