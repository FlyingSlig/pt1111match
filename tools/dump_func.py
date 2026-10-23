#!/usr/bin/env python3
"""Disassemble a function from the original and/or our build.

Usage: tools/dump_func.py <orig-addr> [recomp-addr] [--size N]
"""
import sys, struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

from ptconfig import ORIG_EXE
ORIG = ORIG_EXE
NEW = "build/Port1111.exe"

def load(path):
    d = open(path, "rb").read()
    pe = struct.unpack_from("<I", d, 0x3c)[0]
    nsec = struct.unpack_from("<H", d, pe + 6)[0]
    optsz = struct.unpack_from("<H", d, pe + 20)[0]
    opt = pe + 24
    base = struct.unpack_from("<I", d, opt + 28)[0]
    secs = []
    so = opt + optsz
    for i in range(nsec):
        o = so + i * 40
        name = d[o:o+8].rstrip(b"\0").decode(errors="replace")
        vsize, va, rawsize, rawptr = struct.unpack_from("<IIII", d, o + 8)
        secs.append((name, va, vsize, rawptr, rawsize))
    return d, base, secs

def read_fn(path, addr, size):
    d, base, secs = load(path)
    rva = addr - base
    for name, va, vsize, rawptr, rawsize in secs:
        if va <= rva < va + max(vsize, rawsize):
            off = rawptr + (rva - va)
            return d[off:off+size]
    raise SystemExit("addr not found")

def dis(code, addr):
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    out = []
    for i in md.disasm(code, addr):
        out.append((i.address, i.bytes, i.mnemonic, i.op_str))
    return out

def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    size = 96
    for a in sys.argv[1:]:
        if a.startswith("--size="):
            size = int(a.split("=")[1], 0)
        elif a.startswith("--size"):
            pass
    if "--size" in sys.argv:
        size = int(sys.argv[sys.argv.index("--size") + 1], 0)
    orig = int(args[0], 0)
    new = int(args[1], 0) if len(args) > 1 else None
    print("== original 0x%x ==" % orig)
    code = read_fn(ORIG, orig, size)
    print(code.hex())
    for a, b, m, o in dis(code, orig):
        print("%08x  %-20s %s %s" % (a, b.hex(), m, o))
    if new:
        print("== ours 0x%x ==" % new)
        code = read_fn(NEW, new, size)
        print(code.hex())
        for a, b, m, o in dis(code, new):
            print("%08x  %-20s %s %s" % (a, b.hex(), m, o))

main()
