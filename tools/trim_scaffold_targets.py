#!/usr/bin/env python3
"""Apply the final targeted scaffold sizes (Phase 4d/4f).

`tools/gen_phase4_data.py` regenerates `src/0999_globals_phase4.cpp` from the
original data map, so a regeneration loses the layout trims.  The
byte-located CRT ranges are handled by `find_crt_data.py` +
`shrink_scaffold_crt.py`; this script applies the two remaining trims whose
size is known statically:

  * `DWORD_004d3b80` - the empty filler for the original import-table range;
    the rebuilder installs the real tables there.  Sized so the section
    covers the verbatim tables (ends at 0xd4e9f).
  * `DAT_004e0b4c` / `DAT_004e3580` - uninitialized BSS arrays at the end of
    `.data`; shrinking them removes the duplicate of our linked CRT BSS
    without losing non-zero data.
  * `DAT_004bc850` / `s_AffectedTilesBaseSize_004bc9d4` - restore holes left
    when globals already defined in `0001_globals.cpp` were omitted from the
    scaffold.  Phase 4f's COFF packing saved enough bytes to retain these
    holes without growing the section.

The script is idempotent (it sets the final sizes, never subtracts).  Run
after the generators and before `make`.

Regeneration recipe:
  python3 tools/gen_phase4_data.py
  python3 tools/fill_scaffold_bytes.py
  python3 tools/find_crt_data.py
  python3 tools/shrink_scaffold_crt.py
  python3 tools/trim_scaffold_targets.py
  make
"""
import os
import re

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

SRC = 'src/0999_globals_phase4.cpp'
TARGETS = {
    'DWORD_004d3b80': 2,      # dead import filler, reclaimed for early gaps
    'DAT_004e0b4c': 1,        # BSS duplicate of our linked CRT data
    'DAT_004e3580': 775,      # BSS duplicate (4,096 - 3,321 retained)
}
RDATA_RESTORES = {
    'DAT_004bc850': 20,
    's_AffectedTilesBaseSize_004bc9d4': 108,
    's_Gerado_no_CActionControl__InitAF_004bcab0': 716,
    'DAT_004bcd7c': 284,
    's_list_T__too_long_004bce98': 1072,
    'PTR_FUN_004bd2f8': 612,
    'DAT_004bd580': 12,
    's_unidades_passadas_para_Formation_004bd590': 124,
    'PTR_FUN_004be3e8': 96,
}

lines = open(SRC).read().splitlines()
out = []
changed = 0
for line in lines:
    m = re.match(r'(.*\b)(%s)\[(\d+)\](\s*;|\s*=\s*\{\};\s*)$'
                 % '|'.join(TARGETS), line)
    if m:
        name = m.group(2)
        new = TARGETS[name]
        if int(m.group(3)) != new:
            line = '%s%s[%d]%s' % (m.group(1), name, new, m.group(4))
            changed += 1
    for name, new in RDATA_RESTORES.items():
        m = re.match(r'(.*\b%s)\[(\d+)\](.*)$' % re.escape(name), line)
        if m and int(m.group(2)) != new:
            line = '%s[%d]%s' % (m.group(1), new, m.group(3))
            changed += 1
            break
    out.append(line)
open(SRC, 'w').write('\n'.join(out) + '\n')
print('trim_scaffold_targets: %d declaration(s) updated' % changed)
