#!/usr/bin/env python3
"""Locate our CRT data symbols inside the original binary.

The original `.data`/`.rdata` sections contain CRT data (locale tables, stdio
buffers, ctype tables, ...) that our scaffold already covers as "gaps".  Our
own linked CRT data is then added on top, double-counting that space and making
the sections too large.  To fix the layout we need to know *where* in the
original those CRT data ranges live.

For every CRT data symbol in our PDB (object `libcmt:` / `libcpmt:`), search
the original `.rdata`/`.data` for its bytes.  Address-dependent blobs will not
match (pointers), but static tables/strings will.

Output: a summary and `src/pt_crt_data_ranges.txt` (original RVA, size), one
range per matched symbol.
"""
import csv
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)
sys.path.insert(0, os.path.join(ROOT, '.venv', 'lib', 'python3.14',
                                'site-packages'))

from reccmp.cvdump import Cvdump, CvdumpAnalysis  # noqa: E402

from ptconfig import ORIG_EXE
ORIG = ORIG_EXE
OURS = 'build/Port1111.exe'
PDB = 'build/Port1111.pdb'


def pe_sections(path):
    d = open(path, 'rb').read()
    pe = struct.unpack_from('<I', d, 0x3c)[0]
    n = struct.unpack_from('<H', d, pe + 6)[0]
    so = pe + 24 + struct.unpack_from('<H', d, pe + 20)[0]
    out = {}
    for i in range(n):
        o = so + i * 40
        name = d[o:o + 8].rstrip(b'\0').decode()
        vs, va, rs, rp = struct.unpack_from('<IIII', d, o + 8)
        out[name] = (va, rs, rp, d)
    return out


def read_sec(sec, rva, n):
    va, rs, rp, d = sec
    if not (va <= rva < va + rs):
        return None
    off = rp + (rva - va)
    return d[off:off + n]


def map_objects():
    out = {}
    for line in open('build/Port1111.map', errors='replace'):
        m = re.match(r'\s*(000[23]):([0-9A-Fa-f]{8})\s+(\S+)\s+'
                     r'([0-9a-fA-F]{8})\s+(?:f\s+)?(\S+)\s*$', line)
        if m:
            out[(int(m.group(1)), int(m.group(2), 16))] = m.group(5)
    return out


def main():
    c = (Cvdump(PDB).lines().globals().publics().symbols()
         .section_contributions().types().run())
    a = CvdumpAnalysis(c)
    objs = map_objects()
    os_sec = pe_sections(ORIG)
    ns_sec = pe_sections(OURS)
    ranges = []
    total = 0
    for n in a.nodes:
        if n.section not in (2, 3):
            continue
        obj = objs.get((n.section, n.offset), '')
        if not (obj.startswith('libcmt:') or obj.startswith('libcpmt:')):
            continue
        size = n.size() or 0
        if size < 8:
            continue
        name = n.name() or ''
        secname = '.rdata' if n.section == 2 else '.data'
        os_ = os_sec.get(secname)
        ns_ = ns_sec.get(secname)
        if not os_ or not ns_:
            continue
        ours = read_sec(ns_, ns_[0] + n.offset, min(size, 32))
        if not ours:
            continue
        pat = bytes(ours)
        # skip all-zero blobs (match anywhere) and short patterns
        if len(pat) < 12 or not any(pat):
            continue
        ova, ors, orp, od = os_
        hits = []
        start = 0
        while len(hits) < 2:
            k = od.find(pat, orp + start, orp + ors)
            if k < 0:
                break
            hits.append(k - orp + ova)
            start = k + 1
        if len(hits) == 1:
            ranges.append((hits[0], size, name, obj))
            total += size
    ranges.sort()
    with open('src/pt_crt_data_ranges.txt', 'w') as f:
        for rva, size, name, obj in ranges:
            f.write('%08x %d %s\n' % (rva, size, name))
    print('matched %d CRT data symbols, %d bytes' % (len(ranges), total))
    for rva, size, name, obj in ranges[:40]:
        print('  %08x %5d  %-32s %s' % (rva, size, name[:32], obj))


if __name__ == '__main__':
    main()
