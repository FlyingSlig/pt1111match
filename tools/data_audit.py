#!/usr/bin/env python3
"""Audit .rdata/.data composition against the original.

Uses the recompiled PDB (section contributions + symbols) for our side and
Ghidra's data.tsv for the original.  Symbols are bucketed by name so the excess
that keeps .rdata/.data larger than the original can be attributed:

  compiler  - ??_C@ strings, ??_7 vtables, ??_8 vbtables, ??_R RTTI, $L labels,
              EH tables (__eh*, __unwind*, UnwindMap*, TryBlock*, __TI*)
  import    - __imp_*, IMPORT_DESCRIPTOR, *_NULL_THUNK_DATA
  scaffold  - DAT_*, PTR_*, u_*, s_*, gap_* (game data scaffold)
  crt       - everything else (libcmt/libcpmt data, locale tables, ...)

Sizes are the PDB's confirmed/estimated size; for the original, zero-size
Ghidra entries are estimated from the next symbol in the same section.
Run: python3 tools/data_audit.py
"""
import collections
import csv
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)
sys.path.insert(0, os.path.join(ROOT, '.venv', 'lib', 'python3.14',
                                'site-packages'))

from reccmp.cvdump import Cvdump, CvdumpAnalysis  # noqa: E402

from ptconfig import ORIG_EXE
ORIG = ORIG_EXE
PDB = 'build/Port1111.pdb'
SECTIONS = {2: '.rdata', 3: '.data'}

PATTERNS = [
    ('compiler', re.compile(
        r'^(\?\?_C@|\?\?_7|\?\?_8|\?\?_R|\?\?_9|\?\?_E|\?\?_S|\?\?__|\?\?\$|'
        r'\$L|__eh|__unwind|UnwindMap|TryBlock|__TI|__CTA|__catch|__xframe|'
        r'__security_cookie|_load_config_used)')),
    ('import', re.compile(
        r'^(__imp_|__IMPORT_DESCRIPTOR|_IMPORT_DESCRIPTOR|'
        r'[A-Z0-9_]+_NULL_THUNK_DATA)')),
    ('scaffold', re.compile(r'^(DAT_|PTR_|u_|s_|gap_)')),
]


def bucket(name):
    for b, rx in PATTERNS:
        if rx.search(name or ''):
            return b
    return 'crt'


def our_symbols():
    c = (Cvdump(PDB).lines().globals().publics().symbols()
         .section_contributions().types().run())
    a = CvdumpAnalysis(c)
    out = collections.defaultdict(list)
    for n in a.nodes:
        if n.section not in SECTIONS:
            continue
        name = n.name() or ''
        size = n.size() or 0
        out[SECTIONS[n.section]].append((n.offset, name, size))
    return out


def orig_symbols():
    rows = list(csv.DictReader(open('ghidra/export/data.tsv'), delimiter='\t'))
    out = collections.defaultdict(list)
    for r in rows:
        mt = r['memType']
        if mt not in ('.rdata', '.data'):
            continue
        out[mt].append((int(r['addr'], 16) - 0x400000, r['name'],
                        int(r['size'] or 0)))
    # estimate zero sizes from the next symbol
    for sec, items in out.items():
        items.sort()
        for i, (off, name, size) in enumerate(items):
            if size == 0:
                nxt = items[i + 1][0] if i + 1 < len(items) else off
                items[i] = (off, name, max(0, nxt - off))
    return out


def map_objects():
    """section number -> {symbol: object} from the linker map."""
    out = {2: {}, 3: {}}
    for line in open('build/Port1111.map', errors='replace'):
        m = re.match(
            r'\s*(000[23]):([0-9A-Fa-f]{8})\s+(\S+)\s+'
            r'([0-9a-fA-F]{8})\s+(?:f\s+)?(\S+)\s*$', line)
        if m:
            out[int(m.group(1))][int(m.group(2), 16)] = m.group(5)
    return out


def summarize(label, syms):
    tot = collections.Counter()
    cnt = collections.Counter()
    rows = []
    for sec, items in syms.items():
        for off, name, size in items:
            b = bucket(name)
            tot[b] += size
            cnt[b] += 1
            rows.append((sec, off, name, size, b))
    return tot, cnt, rows


def main():
    o = orig_symbols()
    n = our_symbols()
    ot, oc, orows = summarize('orig', o)
    nt, nc, nrows = summarize('ours', n)
    print('%-10s %10s %10s %12s %10s %10s' % (
        'bucket', 'orig syms', 'our syms', 'orig bytes', 'our bytes', 'delta'))
    for b in ('scaffold', 'compiler', 'import', 'crt'):
        print('%-10s %10d %10d %12d %10d %+10d' % (
            b, oc[b], nc[b], ot[b], nt[b], nt[b] - ot[b]))
    print('%-10s %10d %10d %12d %10d %+10d' % (
        'TOTAL', sum(oc.values()), sum(nc.values()),
        sum(ot.values()), sum(nt.values()), sum(nt.values()) - sum(ot.values())))
    print()
    # largest symbols in our image with no same-name original symbol
    onames = {name for _s, _o, name, _z, _b in orows}
    only = [(z, s, o, name, b) for s, o, name, z, b in nrows
            if name not in onames]
    only.sort(reverse=True)
    print('largest symbols present in ours but not in the original data.tsv:')
    for z, s, o, name, b in only[:25]:
        print('  %6d  %-6s %08x  %-8s %s' % (z, s, 0x400000 + o, b, name[:90]))
    # compiler data attributed to the object that emitted it
    objs = map_objects()
    per_obj = collections.Counter()
    comp_rows = []
    for sec, off, name, size, b in nrows:
        if b != 'compiler':
            continue
        secno = 2 if sec == '.rdata' else 3
        obj = objs.get(secno, {}).get(off, '?')
        per_obj[obj] += size
        comp_rows.append((size, sec, off, obj, name))
    print('\ncompiler data by object (top 20):')
    for obj, size in per_obj.most_common(20):
        print('  %7d  %s' % (size, obj))
    comp_rows.sort(reverse=True)
    print('\nlargest compiler symbols (object / name):')
    for size, sec, off, obj, name in comp_rows[:20]:
        print('  %6d  %-6s %-28s %s' % (size, sec, obj[:28], name[:80]))
    # largest per-bucket ours by size
    for b in ('scaffold', 'compiler', 'crt'):
        rows = sorted((z, s, o, name) for s, o, name, z, bb in nrows if bb == b)
        rows.reverse()
        print('\nlargest %s symbols in ours:' % b)
        for z, s, o, name in rows[:12]:
            print('  %6d  %-6s %08x  %s' % (z, s, 0x400000 + o, name[:90]))


if __name__ == '__main__':
    main()
