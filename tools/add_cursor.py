#!/usr/bin/env python3
"""Append the RT_CURSOR / RT_GROUP_CURSOR resources to the .res file.

rc.exe (7.1) rejects the original cursor because its DIB is in an old format
("RC2176 old DIB ... SDKPAINT"). The .res format is a simple sequence of
resource records, so we append the two cursor resources with their ORIGINAL
bytes after rc has produced everything else.

.res record (32-byte header + data, data padded to 4):
  DWORD DataSize; DWORD HeaderSize(=32);
  DWORD TYPE  = 0xFFFF | (type  << 16);
  DWORD NAME  = 0xFFFF | (name  << 16);
  DWORD DataVersion; DWORD MemoryFlags|Language; DWORD Version; DWORD Characteristics;
"""
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RES = os.path.join(ROOT, "rsrc/Port1111.res")

# (type, name, lang, datafile)
CURSOR_RES = [
    (1, 3, 0x0816, "rsrc/t1_id3_lang22.bin"),      # RT_CURSOR
    (12, 132, 0x0816, "rsrc/t12_id132_lang22.bin"),  # RT_GROUP_CURSOR
]
MEMFLAGS = 0x1030  # MOVEABLE | PURE | PRELOAD (matches rc's output)


def record(typ, name, lang, data):
    hdr = struct.pack("<IIIII", 32, 0xFFFF | (typ << 16), 0xFFFF | (name << 16),
                      0, MEMFLAGS | (lang << 16))
    hdr += struct.pack("<II", 0, 0)
    body = data + b"\0" * ((-len(data)) % 4)
    return struct.pack("<I", len(data)) + hdr + body


def already_has(res: bytes, typ: int, name: int) -> bool:
    pat = struct.pack("<I", 0xFFFF | (typ << 16)) + struct.pack("<I", 0xFFFF | (name << 16))
    return pat in res


def main():
    res = open(RES, "rb").read()
    add = b""
    for typ, name, lang, f in CURSOR_RES:
        if already_has(res, typ, name):
            continue
        data = open(os.path.join(ROOT, f), "rb").read()
        add += record(typ, name, lang, data)
    if add:
        with open(RES, "ab") as fp:
            fp.write(add)
        print(f"appended {len(add)} bytes of cursor resources")
    else:
        print("cursor resources already present")
    return 0


if __name__ == "__main__":
    sys.exit(main())
