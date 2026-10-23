#!/usr/bin/env python3
"""Compare the import tables (DLL set, per-DLL function set, IAT slot order) of
the original binary and our build.

Phase 4 depends on reproducing the original import table exactly: the IAT is
the first thing in `.rdata`, so any difference shifts every following byte.
Usage: python3 tools/import_diff.py
"""
import collections
import struct
import sys

from ptconfig import ORIG_EXE
ORIG = ORIG_EXE
NEW = sys.argv[1] if len(sys.argv) > 1 else 'build/Port1111.exe'


def imports(path):
    d = open(path, 'rb').read()
    e = struct.unpack_from('<I', d, 0x3C)[0]
    nsec = struct.unpack_from('<H', d, e + 6)[0]
    soh = struct.unpack_from('<H', d, e + 20)[0]
    base = e + 24 + soh
    secs = []
    for i in range(nsec):
        h = base + i * 40
        vs, va, rs, rp = struct.unpack_from('<IIII', d, h + 8)
        secs.append((va, max(vs, rs), rp))

    def off(rva):
        for sv, vs, rp in secs:
            if sv <= rva < sv + vs:
                return rp + (rva - sv)
        return None

    dd = e + 24 + 96
    imp = struct.unpack_from('<I', d, dd + 8)[0]
    o = off(imp)
    out = collections.OrderedDict()
    while True:
        ent = d[o:o + 20]
        if len(ent) < 20:
            break
        oft, _ts, _fwd, name, iat = struct.unpack('<IIIII', ent)
        if not (oft or name or iat):
            break
        dll = d[off(name):off(name) + 80].split(b'\0')[0].decode('latin1')
        names = []
        k = 0
        while True:
            t = struct.unpack_from('<I', d, off(oft or iat) + k * 4)[0]
            if t == 0:
                break
            if t & 0x80000000:
                names.append('#%d' % (t & 0xFFFF))
            else:
                names.append(d[off(t) + 2:off(t) + 80].split(b'\0')[0].decode('latin1'))
            k += 1
        if dll in out:
            # A PE may contain more than one descriptor for the same DLL
            # (used by the keep-extras runtime variant); merge them so the
            # original 110 KERNEL32 imports are compared first.
            out[dll].extend(names)
        else:
            out[dll] = names
        o += 20
    return out


def main():
    a = imports(ORIG)
    b = imports(NEW)
    print('orig: %d DLLs, %d imports' % (len(a), sum(map(len, a.values()))))
    print('ours: %d DLLs, %d imports' % (len(b), sum(map(len, b.values()))))
    for dll in a:
        if dll not in b:
            print('MISSING DLL', dll, a[dll])
            continue
        miss = [x for x in a[dll] if x not in b[dll]]
        extra = [x for x in b[dll] if x not in a[dll]]
        if miss:
            print('MISSING', dll, miss)
        if extra:
            print('EXTRA  ', dll, extra)
        if a[dll] != b[dll]:
            for i, (x, y) in enumerate(zip(a[dll], b[dll])):
                if x != y:
                    print('ORDER DIFF', dll, 'slot', i, 'orig', x, 'ours', y)
                    break
    for dll in b:
        if dll not in a:
            print('EXTRA DLL', dll, b[dll])


if __name__ == '__main__':
    main()
