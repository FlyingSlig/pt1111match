#!/usr/bin/env python3
"""Minimal MS COFF archive (`.lib`) member extractor.

Usage:
  tools/ar_members.py <archive> --list
  tools/ar_members.py <archive> --find <symbol> <out.obj>
  tools/ar_members.py <archive> --extract-all <dir>

The archive's members are raw COFF objects; `--find` locates the member that
defines `symbol` (in its COFF symbol table) and writes the object bytes.
"""
import os
import struct
import sys


def members(data):
    """Yield (member_name, offset, size) for each regular member."""
    if data[:8] != b'!<arch>\n':
        raise ValueError('not an archive')
    off = 8
    longnames = b''
    while off + 60 <= len(data):
        hdr = data[off:off + 60]
        name = hdr[0:16].decode('latin1').rstrip()
        if hdr[58:60] != b'\x60\n':
            raise ValueError('bad member header at %#x' % off)
        size = int(hdr[48:58].decode('latin1').strip() or 0)
        body = off + 60
        if name.startswith('//'):
            longnames = data[body:body + size]
            off = body + size + (size & 1)
            continue
        if name in ('/', '/SYM64/'):
            # first/second linker member; not an object
            off = body + size + (size & 1)
            continue
        if name.startswith('/') and name[1:].isdigit():
            no = int(name[1:])
            end = len(longnames)
            for sep in (b'\0', b'\n'):
                k = longnames.find(sep, no)
                if k >= 0:
                    end = min(end, k)
            name = longnames[no:end].rstrip(b'/').decode('latin1')
        yield name, body, size
        off = body + size + (size & 1)


def coff_symbols(obj):
    if len(obj) < 20:
        return []
    nsym = struct.unpack_from('<I', obj, 12)[0]
    symoff = struct.unpack_from('<I', obj, 8)[0]
    if not nsym or not symoff:
        return []
    stroff = symoff + nsym * 18
    if stroff + 4 > len(obj):
        return []
    strlen = struct.unpack_from('<I', obj, stroff)[0]
    out = []
    i = 0
    while i < nsym:
        o = symoff + i * 18
        raw = obj[o:o + 8]
        if raw[:4] == b'\0\0\0\0':
            no = struct.unpack_from('<I', obj, o + 4)[0]
            if 4 <= no < strlen:
                end = obj.find(b'\0', stroff + no)
                name = obj[stroff + no:end].decode('latin1')
            else:
                name = ''
        else:
            name = raw.rstrip(b'\0').decode('latin1')
        sec = struct.unpack_from('<h', obj, o + 12)[0]
        out.append((name, sec, i))
        i += 1 + obj[o + 17]
    return out


def main():
    path = sys.argv[1]
    data = open(path, 'rb').read()
    if '--list' in sys.argv:
        n = 0
        for name, off, size in members(data):
            print('%6d %8d %s' % (n, size, name))
            n += 1
        return
    if '--find' in sys.argv:
        i = sys.argv.index('--find')
        sym, out = sys.argv[i + 1], sys.argv[i + 2]
        for name, off, size in members(data):
            obj = data[off:off + size]
            for sname, sec, idx in coff_symbols(obj):
                if sname == sym and sec > 0:
                    open(out, 'wb').write(obj)
                    print('%s: %s member %d bytes' % (sym, name, size))
                    return
        raise SystemExit('symbol %s not found' % sym)
    if '--extract-all' in sys.argv:
        outdir = sys.argv[sys.argv.index('--extract-all') + 1]
        os.makedirs(outdir, exist_ok=True)
        for k, (name, off, size) in enumerate(members(data)):
            open(os.path.join(outdir, 'm%05d.obj' % k), 'wb').write(data[off:off + size])
        print('extracted')
        return
    raise SystemExit('usage: --list | --find SYM OUT | --extract-all DIR')


if __name__ == '__main__':
    main()
