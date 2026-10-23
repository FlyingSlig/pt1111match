#!/usr/bin/env python3
"""Split raw functions whose Ghidra byte range overlaps the next entity.

Ghidra reports a function's `getBytes()` range, which can *include* a chunk
that is also listed as its own function (the SEH `Catch@...` funclets).  We
emit the whole range as the outer raw function and then emit the inner
function again -> duplicated bytes, and reccmp bounds the original function at
the inner function's start, so the outer function looks like it has a big
"extra" tail (the catch block).

This tool:
  * writes `src/pt_func_trims.txt` (`<addr> <keep-bytes>`), which
    `rewrite_layout_chunks.py` honours so re-rendering does not restore the
    full range;
  * inserts a GAP filler for the unlisted tail (bytes after the inner entity,
    up to the outer function's end) right after the inner function, preserving
    address order and the original byte sequence.

Net effect: the duplicated bytes disappear, the outer function's PDB extent
matches the original's Ghidra body, and `.text` shrinks by the sum of the
inner entity sizes (re-balance `src/zzzz_text_pad.cpp` afterwards).

Run before `make` (and before/after `rewrite_layout_chunks.py`, which is safe
because of the trim file).  Idempotent: an existing `gap_<tail>` block or trim
entry is skipped.
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
TRIM_FILE = 'src/pt_func_trims.txt'
DRY = '--dry' in sys.argv

orig = open(EXE, 'rb').read()


def obytes(va, n):
    off = va - 0x400000
    return orig[off:off + n]


# layout entries (address ordered, non-overlapping except the Ghidra ranges)
rows = []
for r in csv.DictReader(open('ghidra/export/text_layout.tsv'), delimiter='\t'):
    rows.append((int(r['start'], 16), int(r['size']), r['kind'], r['name']))
rows.sort()
starts = [r[0] for r in rows]


def entry_at(va):
    i = bisect.bisect_right(starts, va) - 1
    if i >= 0 and rows[i][0] <= va < rows[i][0] + rows[i][1]:
        return rows[i]
    return None


# existing trims
trims = {}
if os.path.exists(TRIM_FILE):
    for line in open(TRIM_FILE):
        line = line.strip()
        if line and not line.startswith('#'):
            a, k = line.split()
            trims[int(a, 16)] = int(k)

# find game-region overlaps: outer func -> next entry inside its range
jobs = []
for i in range(len(rows) - 1):
    s, n, kind, name = rows[i]
    if kind != 'func' or s >= 0x496FA4:
        continue
    ns = rows[i + 1][0]
    if s + n <= ns:
        continue
    keep = ns - s
    if trims.get(s) == keep:
        continue
    jobs.append((s, n, ns, keep, name, rows[i + 1][3]))

print('overlaps to split:', len(jobs))


def find_block(lines, addr):
    """Return (marker_index, block_end_index) for `// FUNCTION ... 0x<addr>`."""
    pat = re.compile(r'//\s*FUNCTION:\s*PORT1111\s+0x%08x\b' % addr)
    for i, l in enumerate(lines):
        if pat.search(l):
            # signature line (may be wrapped), then the function opening brace
            j = i + 1
            while j < len(lines) and '{' not in lines[j]:
                j += 1
            if j >= len(lines):
                return None
            # block ends at the matching closing brace at column 0
            depth = 0
            k = j
            while k < len(lines):
                depth += lines[k].count('{') - lines[k].count('}')
                if depth <= 0 and k > j:
                    return i, k
                k += 1
            return None
    return None


def gap_block(tail_start, tail):
    out = ['// GAP: PORT1111 0x%08x' % tail_start,
           '__declspec(naked) void gap_%08x(void)' % tail_start,
           '{',
           '    __asm {']
    out += ['        _emit 0x%02x' % b for b in tail]
    out += ['    }', '}', '']
    return out


added = 0
for s, n, ns, keep, name, nname in sorted(jobs, reverse=True):
    a_end = s + n
    b = entry_at(ns)
    if b is None:
        print('  no entity at %08x' % ns)
        continue
    b_start, b_size, b_kind, b_name = b
    tail_start = b_start + b_size
    if tail_start >= a_end:
        # inner entity covers the whole rest; only the trim is needed
        tail = b''
    else:
        # unlisted ranges between inner entity end and outer end
        tail = obytes(tail_start, a_end - tail_start)
    trims[s] = keep
    if not tail:
        continue
    # locate the inner entity's source block
    fn = None
    blk = None
    for f in sorted(glob.glob('src/*_layout.cpp')):
        lines = open(f, errors='replace').read().splitlines()
        blk = find_block(lines, b_start)
        if blk:
            fn = f
            break
    if not fn:
        print('  inner block not found: %08x' % b_start)
        continue
    if any(('gap_%08x(void)' % tail_start) in open(f, errors='replace').read()
           for f in glob.glob('src/*_layout.cpp')):
        continue
    lines = open(fn).read().splitlines()
    blk = find_block(lines, b_start)
    ins = blk[1] + 1
    lines[ins:ins] = gap_block(tail_start, tail)
    if not DRY:
        open(fn, 'w').write('\n'.join(lines) + '\n')
    added += 1

if not DRY:
    with open(TRIM_FILE, 'w') as f:
        f.write('# generated by tools/split_overlapping_funcs.py: '
                'original address -> emitted byte count\n')
        for a in sorted(trims):
            f.write('%08x %d\n' % (a, trims[a]))
print('split %d gap(s)%s; %d trim entr(ies)'
      % (added, ' (dry)' if DRY else '', len(trims)))
