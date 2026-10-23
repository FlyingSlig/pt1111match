#!/usr/bin/env python3
"""Rebuild the address-ordered .text stream as one object per contiguous run.

Invariant: every object file is packed at 1-byte alignment, and the linker
concatenates objects in file-name order.  Therefore the game-region byte
stream is reproduced exactly when every text_layout entry is either

  * a raw function/gap block emitted by a chunk file whose name is the
    address of the run's first entry, or
  * a hand-written function emitted by a per-address source file
    (``src/<addr>_*.cpp`` with a FUNCTION marker at that address), or
  * a template instantiation whose real code is emitted elsewhere; it is
    represented here by a raw filler carrying the original bytes so the
    address stream stays in sync.

This tool re-partitions the existing chunk blocks (their already-symbolised
asm text is preserved) into runs separated by hand functions and fillers.
Run ``tools/rewrite_layout_chunks.py`` afterwards to regenerate the bodies and
the extern declarations, and ``make`` to relink.

Usage: python3 tools/rebuild_layout_stream.py [--dry]
"""
import glob
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

from ptconfig import ORIG_EXE
EXE = ORIG_EXE
IMAGE = open(EXE, 'rb').read()
MARK = re.compile(r'^// (?:FUNCTION|GAP): PORT1111 (0x[0-9a-f]+)$', re.M)
FUNCMARK = re.compile(r'// FUNCTION: PORT1111 (0x[0-9a-f]+)')
HEADER = '''#include "pt1111_funcs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#include <mbstring.h>
#include <ddraw.h>
#include <dsound.h>
#include "pt_aliases.h"
'''


def orig_bytes(va, n):
    off = 0x1000 + (va - 0x401000)
    return IMAGE[off:off + n]


def read_blocks():
    """addr -> full block text (marker + body) from the current chunk files."""
    blocks = {}
    for fn in sorted(glob.glob('src/*_layout.cpp')):
        lines = open(fn, errors='replace').read().splitlines()
        starts = [i for i, l in enumerate(lines) if MARK.match(l)]
        for n, i in enumerate(starts):
            end = starts[n + 1] if n + 1 < len(starts) else len(lines)
            addr = int(MARK.match(lines[i]).group(1), 16)
            blocks[addr] = '\n'.join(lines[i:end]).rstrip() + '\n'
    return blocks


def read_entries():
    rows = []
    for line in open('ghidra/export/text_layout.tsv').read().splitlines()[1:]:
        a, s, k, name = line.split('\t')
        a = int(a, 16)
        if a >= 0x496fa4:
            continue
        rows.append((a, int(s), k, name))
    return rows


def hand_addresses():
    """Addresses defined by a per-address hand-written source file."""
    hand = set()
    for fn in glob.glob('src/*.cpp'):
        base = os.path.basename(fn)
        m = re.match(r'^([0-9a-f]{7,8})[_\.]', base)
        if not m:
            continue
        a = int(m.group(1), 16)
        t = open(fn, errors='replace').read()
        for mm in FUNCMARK.finditer(t):
            if int(mm.group(1), 16) == a:
                hand.add(a)
    return hand


def filler_block(addr, size):
    body = orig_bytes(addr, size)
    L = ['// GAP: PORT1111 0x%08x' % addr,
         '__declspec(naked) void gap_%08x(void)' % addr,
         '{',
         '    __asm {']
    L += ['        _emit 0x%02x' % b for b in body]
    L += ['    }', '}']
    return '\n'.join(L) + '\n'


def main():
    dry = '--dry' in sys.argv
    blocks = read_blocks()
    entries = read_entries()
    hand = hand_addresses()
    print('chunk blocks %d, entries %d, hand %d' % (len(blocks), len(entries), len(hand)))

    runs = []
    cur = []
    counts = {'raw': 0, 'hand': 0, 'fill': 0, 'extra': 0}
    # entries plus the split-tail gap blocks that are not text_layout entries
    known = set(a for a, s, k, n in entries)
    items = list(entries) + [(a, 0, 'gap', '') for a in sorted(blocks) if a not in known]
    items.sort(key=lambda r: r[0])
    for addr, size, kind, name in items:
        if addr in blocks:
            cur.append(addr)
            counts['raw' if addr in known else 'extra'] += 1
        else:
            if cur:
                runs.append(cur)
                cur = []
            if addr in hand:
                counts['hand'] += 1
            else:
                counts['fill'] += 1
    if cur:
        runs.append(cur)
    print('runs %d, raw %d, extra %d, hand %d, fill %d'
          % (len(runs), counts['raw'], counts['extra'], counts['hand'], counts['fill']))

    if dry:
        return

    for fn in glob.glob('src/*_layout.cpp'):
        os.remove(fn)
    for fn in glob.glob('src/*_fill.cpp'):
        os.remove(fn)

    for run in runs:
        path = 'src/%08x_layout.cpp' % run[0]
        with open(path, 'w') as f:
            f.write(HEADER + '\n')
            for a in run:
                f.write('\n' + blocks[a])

    # fillers for entries that are neither raw nor hand
    for addr, size, kind, name in entries:
        if addr in blocks or addr in hand:
            continue
        path = 'src/%08x_fill.cpp' % addr
        with open(path, 'w') as f:
            f.write('// auto-generated by tools/rebuild_layout_stream.py\n')
            f.write(filler_block(addr, size))
    print('wrote %d chunk files, %d fillers' % (len(runs), counts['fill']))


if __name__ == '__main__':
    main()
