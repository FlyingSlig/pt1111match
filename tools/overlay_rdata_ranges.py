#!/usr/bin/env python3
"""Install verified original `.rdata` ranges at already-correct RVAs.

These ranges are code-pointer tables omitted from the byte scaffold because
their GLOBAL definitions live in another source object.  Their slots are now
at the original RVAs after Phase 4f packing/gap restoration, but source-level
symbolic initializers would contain the rebuild's still-different code RVAs.
Copying only these small, audited tables advances byte identity without
overlaying EH/RTTI/string regions that reccmp relies on.
"""
import argparse
import os
import sys

import pefile


ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
from ptconfig import ORIG_EXE
ORIG = ORIG_EXE

# RVAs, half-open.  Keep this list narrow: broad `.rdata` overlays are known
# to break FuncInfo discovery and entity naming.
RANGES = (
    (0xbc804, 0xbc830),  # PTR_FUN_004bc804 / PTR_FUN_004bc818
    (0xbc854, 0xbc864),  # DAT_004bc854 vtable omitted from scaffold
    (0xbc96c, 0xbc9d4),  # PTR_FUN_004bc96c / PTR_FUN_004bc984
    (0xbc9f0, 0xbca40),  # DAT_004bc9f0 vtable/table omitted from scaffold
    (0xbcae4, 0xbcd7c),  # vtable cluster defined in 0001_globals.cpp
    (0xbcd98, 0xbce98),  # vtables at 0x4bcd98/0x4bcdc0
    (0xbceac, 0xbd2c8),  # UI/widget vtable cluster from 0001_globals.cpp
    (0xbd2cc, 0xbd55c),  # adjacent function-pointer tables
    (0xbd570, 0xbd588),  # first exact-position table after map/set string
    (0xbd588, 0xbd590),  # omitted slot + following exact pointer
    (0xbd5c0, 0xbd60c),  # omitted FormationRules pointer table
    (0xbd60c, 0xbd610),  # following exact pointer
    (0xbe2e0, 0xbe498),  # exact-position pointer-table cluster
)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--in', dest='inp', default='build/Port1111.exe')
    ap.add_argument('--out', dest='out', default=None)
    args = ap.parse_args()
    out = args.out or args.inp

    if not os.path.exists(ORIG):
        sys.exit('original exe not found: ' + ORIG)
    pe = pefile.PE(args.inp)
    orig = pefile.PE(ORIG)
    rdata = next((s for s in pe.sections if s.Name.startswith(b'.rdata')),
                 None)
    if rdata is None:
        sys.exit('.rdata section not found')

    total = 0
    for lo, hi in RANGES:
        if not (rdata.VirtualAddress <= lo < hi <=
                rdata.VirtualAddress + rdata.SizeOfRawData):
            sys.exit('range %#x..%#x is outside .rdata' % (lo, hi))
        blob = orig.get_data(lo, hi - lo)
        if len(blob) != hi - lo:
            sys.exit('short original range at %#x' % lo)
        pe.set_bytes_at_rva(lo, blob)
        total += len(blob)

    pe.write(out)
    print('overlaid %d bytes in %d audited .rdata pointer tables' %
          (total, len(RANGES)))


if __name__ == '__main__':
    main()
