#!/usr/bin/env python3
"""Compare PE headers of two binaries (Gate B tool).

Usage: tools/pehdr.py <fileA> <fileB>
Excludes TimeDateStamp and CheckSum by default (expected to differ);
use --all to include them.
"""
import struct
import sys


def pe_header(path):
    d = open(path, "rb").read(0x1000)
    e_lfanew = struct.unpack_from("<I", d, 0x3C)[0]
    assert d[e_lfanew:e_lfanew + 4] == b"PE\0\0", "not a PE"
    coff = e_lfanew + 4
    fields = {}
    (fields["Machine"], fields["NumberOfSections"], ts, _, _,
     fields["SizeOfOptionalHeader"], fields["Characteristics"]) = struct.unpack_from("<HHIIIHH", d, coff)
    opt = coff + 20
    magic = struct.unpack_from("<H", d, opt)[0]
    fields["Magic"] = magic
    fields["MajorLinkerVersion"] = d[opt + 2]
    fields["MinorLinkerVersion"] = d[opt + 3]
    (fields["SizeOfCode"], fields["SizeOfInitializedData"], fields["SizeOfUninitializedData"],
     fields["AddressOfEntryPoint"], fields["BaseOfCode"], fields["BaseOfData"]) = struct.unpack_from("<IIIIII", d, opt + 4)
    # PE32: BaseOfData@24, ImageBase@28, SectionAlignment@32, FileAlignment@36
    (fields["ImageBase"], fields["SectionAlignment"], fields["FileAlignment"]) = struct.unpack_from("<III", d, opt + 28)
    (fields["MajorOSystemVersion"], fields["MinorOSystemVersion"],
     fields["MajorImageVersion"], fields["MinorImageVersion"],
     fields["MajorSubsystemVersion"], fields["MinorSubsystemVersion"],
     fields["Win32VersionValue"]) = struct.unpack_from("<HHHHHHI", d, opt + 40)
    (fields["SizeOfImage"], fields["SizeOfHeaders"], fields["CheckSum"]) = struct.unpack_from("<III", d, opt + 56)
    (fields["Subsystem"], fields["DllCharacteristics"]) = struct.unpack_from("<HH", d, opt + 68)
    (fields["SizeOfStackReserve"], fields["SizeOfStackCommit"],
     fields["SizeOfHeapReserve"], fields["SizeOfHeapCommit"],
     fields["LoaderFlags"], fields["NumberOfRvaAndSizes"]) = struct.unpack_from("<IIIIII", d, opt + 72)
    fields["TimeDateStamp"] = ts
    # section table: name, vsize, vaddr, rawsize, rawptr
    secs = []
    nsec = fields["NumberOfSections"]
    sectab = opt + fields["SizeOfOptionalHeader"]
    for i in range(nsec):
        off = sectab + i * 40
        name = d[off:off + 8].rstrip(b"\0").decode("latin1")
        vsize, vaddr, rawsize, rawptr = struct.unpack_from("<IIII", d, off + 8)
        secs.append((name, vsize, vaddr, rawsize, rawptr))
    fields["_sections"] = secs
    return fields


IGNORE = {"TimeDateStamp", "CheckSum", "_sections"}


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    show_all = "--all" in sys.argv
    a, b = (pe_header(p) for p in args[:2])
    keys = [k for k in a if k not in IGNORE or show_all]
    bad = 0
    print(f"{'field':26s} {'A':>12s} {'B':>12s}")
    for k in keys:
        va, vb = a.get(k), b.get(k)
        mark = "" if va == vb else "  <-- MISMATCH"
        if va != vb:
            bad += 1
        print(f"{k:26s} {va!s:>12s} {vb!s:>12s}{mark}")
    print("\nsections:")
    sa, sb = a["_sections"], b["_sections"]
    for i in range(max(len(sa), len(sb))):
        x = sa[i] if i < len(sa) else None
        y = sb[i] if i < len(sb) else None
        m = "" if x == y else "  <-- MISMATCH"
        if x != y:
            bad += 1
        print(f"  A={x}  B={y}{m}")
    print(f"\n{'MATCH' if bad == 0 else f'{bad} mismatches'}")
    return 0 if bad == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
