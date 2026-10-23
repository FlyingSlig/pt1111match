#!/usr/bin/env python3
"""Compare two PE images section-by-section (content only, ignoring RVA).

Usage: tools/bincmp.py <orig.exe> <new.exe> [--max N]
"""
import struct, sys

def sections(path):
    d=open(path,'rb').read()
    e=struct.unpack_from('<I',d,0x3C)[0]
    assert d[e:e+4]==b'PE\0\0'
    coff=e+4
    nsec, = struct.unpack_from('<H',d,coff+2)
    opt=coff+20
    soh, = struct.unpack_from('<H',d,opt+16)[0:1]
    sectab=opt+struct.unpack_from('<H',d,coff+16)[0]
    out={}
    for i in range(nsec):
        off=sectab+i*40
        name=d[off:off+8].rstrip(b'\0').decode('latin1')
        vsize,vaddr,rawsize,rawptr=struct.unpack_from('<IIII',d,off+8)
        out[name]=(d[rawptr:rawptr+rawsize], vsize, rawsize)
    return out, d

def main():
    a,b=sys.argv[1],sys.argv[2]
    maxdiff=int(sys.argv[sys.argv.index('--max')+1]) if '--max' in sys.argv else 10
    sa,da=sections(a); sb,db=sections(b)
    for name in sa:
        ca=sa[name][0]; cb=sb[name][0] if name in sb else b''
        n=min(len(ca),len(cb))
        diffs=[i for i in range(n) if ca[i]!=cb[i]]
        print(f"{name:9s} orig={len(ca):7d} new={len(cb):7d} first_diff=" +
              (f"0x{diffs[0]:x}" if diffs else "none") +
              f" ndiff={len(diffs)}")
        for i in diffs[:maxdiff]:
            print(f"    +0x{i:06x}: {ca[i]:02x} != {cb[i]:02x}")
        if len(diffs)>maxdiff:
            print(f"    ... {len(diffs)-maxdiff} more")
    print('total size', len(da), len(db))

if __name__=='__main__':
    main()
