#!/usr/bin/env python3
"""Decode and compare the Rich header of a PE file.

Usage:
  tools/richcheck.py <file.exe>            # print decoded entries
  tools/richcheck.py <a.exe> --diff <b.exe> # compare (for Gate A/B)

ProdID names for MSVC 7.x from the public compid database
(dishather/richprint comp_id.txt / saferwall/pe mapping).
"""
import struct
import sys

# prodid -> name (subset covering MSVC 7.1 + common vendor tools)
PRODNAMES = {
    0x0001: "Import0",
    0x000A: "Cvtres600",
    0x000F: "Link600",
    0x0019: "Masm614",
    0x001C: "Masm710",
    0x001D: "Masm710_",
    0x005A: "Linker710",
    0x005B: "Cvtomf710",
    0x005C: "Export710",
    0x005D: "Implib710",
    0x005E: "Cvtres710",
    0x005F: "Utc1310_C",
    0x0060: "Utc1310_CPP",
    0x0069: "Cvtres1310?",
}


def read_rich(data: bytes):
    """Return (entries, checksum) or (None, None). Entries: [(prodid, build, count)]."""
    rich = data.find(b"Rich")
    if rich < 0 or rich + 8 > len(data):
        return None, None
    key = struct.unpack_from("<I", data, rich + 4)[0]
    dans = None
    for i in range(0x80, rich, 4):
        if struct.unpack_from("<I", data, i)[0] ^ key == 0x536E6144:
            dans = i
            break
    if dans is None:
        return None, None
    entries = []
    i = dans + 16  # DanS + 3 zeroed padding dwords (all XORed)
    while i + 8 <= rich:
        v, cnt = struct.unpack_from("<II", data, i)
        v ^= key
        entries.append((v >> 16, v & 0xFFFF, cnt ^ key))
        i += 8
    return entries, key


def fmt(entries, checksum):
    out = [f"checksum=0x{checksum & 0xFFFFFFFF:08x}"]
    for prod, build, count in entries:
        name = PRODNAMES.get(prod, f"prod_{prod:02x}")
        out.append(f"  {name:14s} prod=0x{prod:02x} build={build:<6d} count={count}")
    return "\n".join(out)


def main():
    args = sys.argv[1:]
    if not args:
        print(__doc__)
        return 1
    if "--diff" in args:
        i = args.index("--diff")
        a, b = args[:i], args[i + 1:]
        ea, ka = read_rich(open(a[0], "rb").read())
        eb, kb = read_rich(open(b[0], "rb").read())
        print("A:", a[0])
        print(fmt(ea, ka))
        print("B:", b[0])
        print(fmt(eb, kb))
        sa, sb = set(ea), set(eb)
        if sa == sb:
            print("\nMATCH: identical prodid/build/count sets")
            return 0
        print("\nonly in A:")
        for e in sorted(sa - sb):
            print(f"  {PRODNAMES.get(e[0], hex(e[0]))} build={e[1]} count={e[2]}")
        print("only in B:")
        for e in sorted(sb - sa):
            print(f"  {PRODNAMES.get(e[0], hex(e[0]))} build={e[1]} count={e[2]}")
        return 1
    e, k = read_rich(open(args[0], "rb").read())
    if e is None:
        print("no Rich header found")
        return 1
    print(fmt(e, k))
    return 0


if __name__ == "__main__":
    sys.exit(main())
