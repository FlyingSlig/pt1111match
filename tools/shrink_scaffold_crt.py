#!/usr/bin/env python3
"""Shrink scaffold arrays that cover original CRT data ranges.

`tools/find_crt_data.py` writes `src/pt_crt_data_ranges.txt` with the original
RVAs of our CRT data blobs (found by byte-matching).  The 0999 scaffold already
reserves those ranges as gap arrays, and our linked CRT data is added on top —
double-counting the space.  Reduce each scaffold array by the part of its range
that overlaps a located CRT range, so the section total shrinks by the CRT data
size.

Only arrays with an empty (`= {}`) or absent initializer are resized; arrays
with byte initializers are left alone (report them).  Run after
find_crt_data.py, then rebuild.
"""
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

SRC = 'src/0999_globals_phase4.cpp'
RANGES = 'src/pt_crt_data_ranges.txt'

IMAGE_BASE = 0x400000  # GLOBAL markers use VAs, the finder writes RVAs

ranges = []
for line in open(RANGES):
    a, s, _n = line.split(None, 2)
    va = int(a, 16) + IMAGE_BASE
    ranges.append((va, va + int(s)))
ranges.sort()


def overlap(a, b):
    n = 0
    for lo, hi in ranges:
        if hi <= a:
            continue
        if lo >= b:
            break
        n += max(0, min(hi, b) - max(lo, a))
    return n


lines = open(SRC).read().splitlines()
out = []
i = 0
resized = skipped = 0
while i < len(lines):
    m = re.match(r'// GLOBAL: PORT1111 0x([0-9a-fA-F]+)', lines[i])
    if not m:
        out.append(lines[i])
        i += 1
        continue
    addr = int(m.group(1), 16)
    out.append(lines[i])
    i += 1
    # declaration is the next non-comment non-blank line
    while i < len(lines) and (lines[i].startswith('//') or not lines[i].strip()):
        out.append(lines[i])
        i += 1
    decl = lines[i]
    dm = re.search(r'\[\s*(\d+)\s*\]\s*(.*)$', decl)
    if not dm:
        out.append(decl)
        i += 1
        continue
    size = int(dm.group(1))
    tail = dm.group(2).strip()
    shrinkable = tail in ('= {};', '= {}', ';', '')
    cut = min(size - 1, overlap(addr, addr + size)) if shrinkable else 0
    if cut > 0:
        decl = decl[:dm.start(1)] + str(size - cut) + decl[dm.end(1):]
        resized += 1
    elif overlap(addr, addr + size):
        # filled initializer: truncate the byte list to the new size
        im = re.search(r'\[(\d+)\]\s*=\s*\{(.*)\}\s*;?\s*$', decl)
        if im:
            cur = int(im.group(1))
            new = max(1, cur - min(cur - 1, overlap(addr, addr + cur)))
            vals = re.findall(r'0x[0-9a-fA-F]+|\b\d+\b', im.group(2))
            if new < cur:
                vals = vals[:new]
                decl = (decl[:im.start(1)] + str(new) + '] = {' +
                        ','.join(vals) + '};')
                resized += 1
            else:
                skipped += 1
        else:
            skipped += 1
    out.append(decl)
    i += 1
open(SRC, 'w').write('\n'.join(out) + '\n')
print('resized %d arrays, skipped %d with initializers' % (resized, skipped))
