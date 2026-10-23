#!/usr/bin/env bash
# Link the current objects to a throwaway exe (no post-link steps) and report
# .text layout drift, for fast layout iteration.
set -euo pipefail
cd "$(dirname "$0")/.."
OUT=${1:-build/test_layout.exe}
. tools/msvc-env.sh
cd build/obj
ls *.obj > link.rsp
pt_link /nologo /SUBSYSTEM:WINDOWS,4.00 /STACK:0x200000,0x1000 /DEBUG \
  /DEBUGTYPE:CV /INCREMENTAL:NO @link.rsp \
  /LIBPATH:Z:$PWD/../../build/importlibs /LIBPATH:Z:$PWD/../../tools/msvc71/Vc7/lib \
  /LIBPATH:Z:$PWD/../../tools/psdk/Lib /LIBPATH:Z:$PWD/../../tools/dxsdk/Lib \
  winmm.lib version.lib ws2_32.lib kernel32.lib user32.lib gdi32.lib \
  advapi32.lib ole32.lib oleaut32.lib dsound.lib ddraw.lib dxguid.lib \
  libcmt.lib libcpmt.lib oldnames.lib ../../rsrc/Port1111.res \
  "/OUT:../../$OUT" "/PDB:../../${OUT%.exe}.pdb" "/IMPLIB:../../${OUT%.exe}.lib" \
  "/MAP:../../${OUT%.exe}.map" >/dev/null
cd ../..
python3 - "$OUT" <<'EOF'
import re, sys, pefile
out = sys.argv[1]
n = pefile.PE(out, fast_load=True)
print('text vsize', hex(n.sections[0].Misc_VirtualSize))
items = {}
for line in open(out[:-4] + '.map'):
    mm = re.match(r'\s+0001:([0-9a-f]+)\s+(\S+)\s+([0-9a-f]{8})', line)
    if not mm:
        continue
    sym = mm.group(2)
    a = int(mm.group(3), 16)
    for pat, kind in ((r'\?gap_([0-9a-f]{8})@@', 'gap'), (r'\?FUN_([0-9a-f]{8})@@', 'func')):
        m = re.match(pat, sym)
        if m:
            o = int(m.group(1), 16)
            if o < 0x496fa4:
                items.setdefault(o, (kind, a))
print('items', len(items), 'zero-drift', sum(1 for o, (k, a) in items.items() if a == o))
drifts = sorted(set(a - o for o, (k, a) in items.items()))
print('drifts', drifts[:10], '...' if len(drifts) > 10 else '')
prev = None
shown = 0
for addr in sorted(items):
    k, a = items[addr]
    d = a - addr
    if prev != d and shown < 20:
        print('  first drift %+d at 0x%08x (%s)' % (d, addr, k))
        shown += 1
    prev = d
EOF
