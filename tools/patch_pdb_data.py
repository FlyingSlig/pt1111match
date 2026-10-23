#!/usr/bin/env python3
"""Patch data-symbol addresses in an MSVC PDB after a post-link data move.

`tools/compact_rdata_prologue.py` (and any future data re-layout pass) moves
bytes inside `.rdata`, but the PDB written by link.exe still names the old
addresses.  reccmp normalises code operands through those PDB data symbols, so
without this step every function that references moved data loses its match.

The PDB is an MSF 7.0 file:
  superblock -> block map -> directory stream -> stream sizes + block lists.
The DBI stream (3) names the symbol-record stream (usually 8); that stream is
a flat sequence of CodeView records.  `S_GDATA32` (0x110d) and `S_PUB32`
(0x110e) carry `type index` (4), `section offset` (4), `section index` (2),
then the NUL-terminated name.  For every record in the moved `.rdata` range,
subtract `delta` from the section offset.  Record sizes and the GSI/public
hash tables are unchanged, so the file stays a valid PDB.

Run once after the exe move.  Keep the link's PDB (or re-link) if you need to
re-run.
"""
import argparse
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)

import pefile


def msf_streams(data):
    magic = data[:32]
    if magic[:20] != b'Microsoft C/C++ MSF ':
        sys.exit('not an MSF PDB')
    bs, _free, _nb, ndir, _unk, bmap = struct.unpack_from('<IIIIII', data, 32)
    nmap = (ndir + bs - 1) // bs
    blocks = struct.unpack_from('<%dI' % nmap, data, bmap * bs)
    directory = b''.join(data[b * bs:(b + 1) * bs] for b in blocks)[:ndir]
    nstreams = struct.unpack_from('<I', directory, 0)[0]
    sizes = list(struct.unpack_from('<%dI' % nstreams, directory, 4))
    off = 4 + 4 * nstreams
    streams = []
    for size in sizes:
        count = 0 if size == 0xFFFFFFFF else (size + bs - 1) // bs
        bl = (list(struct.unpack_from('<%dI' % count, directory, off))
              if count else [])
        off += 4 * count
        streams.append(bl)
    return bs, sizes, streams


def read_stream(data, bs, sizes, streams, idx):
    size = sizes[idx]
    if size == 0xFFFFFFFF:
        return b''
    return b''.join(data[b * bs:(b + 1) * bs]
                    for b in streams[idx])[:size]


def write_stream(data, bs, sizes, streams, idx, buf):
    for i, b in enumerate(streams[idx]):
        chunk = buf[i * bs:(i + 1) * bs]
        if not chunk:
            break
        data[b * bs:b * bs + len(chunk)] = chunk


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--pdb', default='build/Port1111.pdb')
    ap.add_argument('--exe', default='build/Port1111.exe')
    ap.add_argument('--lo', type=lambda x: int(x, 0), required=True,
                    help='first old .rdata RVA that moved')
    ap.add_argument('--hi', type=lambda x: int(x, 0), required=True,
                    help='end of the moved .rdata range (old RVA)')
    ap.add_argument('--delta', type=lambda x: int(x, 0), required=True,
                    help='bytes subtracted from the moved addresses')
    ap.add_argument('--sections-only', action='store_true',
                    help='only patch DBI section contributions')
    ap.add_argument('--keep-ptd', action='store_true',
                    help='do not hide pt_d_<addr> alias globals')
    args = ap.parse_args()

    pe = pefile.PE(args.exe)
    rva2sec = {}
    for i, sec in enumerate(pe.sections, 1):
        rva2sec[i] = sec.VirtualAddress
    rdata_idx = next((i for i, s in rva2sec.items()
                      if pe.sections[i - 1].Name.startswith(b'.rdata')), None)
    if rdata_idx is None:
        sys.exit('.rdata section not found')

    data = bytearray(open(args.pdb, 'rb').read())
    bs, sizes, streams = msf_streams(data)
    dbi = bytearray(read_stream(data, bs, sizes, streams, 3))
    if len(dbi) < 64:
        sys.exit('short DBI stream')

    patched = 0
    if not args.sections_only:
        symrec = struct.unpack_from('<H', dbi, 20)[0]
        st = bytearray(read_stream(data, bs, sizes, streams, symrec))
        o = 0
        hidden = 0
        while o + 4 <= len(st):
            reclen, rectyp = struct.unpack_from('<HH', st, o)
            total = 2 + reclen
            if total < 4 or o + total > len(st):
                break
            if rectyp in (0x110C, 0x110D, 0x110E) and reclen >= 12:
                off, seg = struct.unpack_from('<IH', st, o + 8)
                if seg == rdata_idx:
                    rva = rva2sec[seg] + off
                    if args.lo <= rva < args.hi:
                        struct.pack_into('<I', st, o + 8, off - args.delta)
                        patched += 1
                name = st[o + 14:o + total].split(b'\0')[0]
                if name.startswith(b'pt_d_') and not args.keep_ptd:
                    # Let reccmp fall back to the public decorated name
                    # (??_7.../??_R...) at this address instead of the alias.
                    struct.pack_into('<I', st, o + 8, 0)
                    struct.pack_into('<H', st, o + 12, 0)
                    hidden += 1
            o += total
        if hidden:
            print('hid %d pt_d_ alias global(s)' % hidden)
        write_stream(data, bs, sizes, streams, symrec, st)

    # DBI section-contribution substream: 4-byte header, 28-byte entries
    modsize = struct.unpack_from('<I', dbi, 24)[0]
    scsize = struct.unpack_from('<I', dbi, 28)[0]
    base = 64 + modsize
    if base + scsize <= len(dbi) and scsize >= 4 and (scsize - 4) % 28 == 0:
        count = (scsize - 4) // 28
        secpatched = 0
        for i in range(count):
            o = base + 4 + i * 28
            isect, off = struct.unpack_from('<II', dbi, o)
            if isect == rdata_idx:
                rva = rva2sec[isect] + off
                if args.lo <= rva < args.hi:
                    struct.pack_into('<I', dbi, o + 4, off - args.delta)
                    secpatched += 1
        if secpatched:
            write_stream(data, bs, sizes, streams, 3, bytes(dbi))
        patched += secpatched
        print('patched %d DBI .rdata section contribution(s) of %d' %
              (secpatched, count))

    open(args.pdb, 'wb').write(data)
    print('patched %d PDB record(s)' % patched)


if __name__ == '__main__':
    main()
