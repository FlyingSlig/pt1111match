#!/usr/bin/env python3
"""Compare two match.json files; print per-function score changes."""
import json
import sys

before = {int(x['address'], 16): x for x in json.load(open(sys.argv[1]))['data']}
after = {int(x['address'], 16): x for x in json.load(open(sys.argv[2]))['data']}
rows = []
for k in set(before) | set(after):
    sb = before.get(k, {}).get('matching', 0)
    sa = after.get(k, {}).get('matching', 0)
    if abs(sa - sb) > 1e-9:
        rows.append((sa - sb, k, before.get(k, after.get(k)).get('name'), sb, sa))
rows.sort()
down = [r for r in rows if r[0] < 0]
up = [r for r in rows if r[0] > 0]
print('down %d  up %d  (net %+d implemented)' % (len(down), len(up), len(up) - len(down)))
print('--- regressions')
for r in down[:25]:
    print('%+.3f 0x%08x %-50s %.3f -> %.3f' % (r[0], r[1], (r[2] or '')[:50], r[3], r[4]))
print('--- gains')
for r in up[-25:]:
    print('%+.3f 0x%08x %-50s %.3f -> %.3f' % (r[0], r[1], (r[2] or '')[:50], r[3], r[4]))
