#!/usr/bin/env python3
"""Set the size of the deterministic .text tail pad.

The pad is a naked function of N 0xcc bytes emitted last before the CRT
objects.  Its purpose is to place the CRT region (and therefore .rdata, .data,
.rsrc) at the original RVAs after the game region was packed exactly.

Usage: python3 tools/set_text_pad.py <bytes>
       python3 tools/set_text_pad.py --delta <bytes>
       python3 tools/set_text_pad.py --show
"""
import sys

PATH = 'src/zzzz_text_pad.cpp'
HEAD = ('// pt1111match — deterministic .text tail pad.\n'
        '__declspec(naked) void pt_text_pad(void)\n'
        '{\n    __asm {\n')
TAIL = '    }\n}\n'


def current():
    n = 0
    for line in open(PATH):
        if '_emit' in line:
            n += 1
    return n


def write(n):
    with open(PATH, 'w') as f:
        f.write(HEAD)
        for _ in range(n):
            f.write('        _emit 0xcc\n')
        f.write(TAIL)


def main():
    n = current()
    if len(sys.argv) < 2 or sys.argv[1] == '--show':
        print(n)
        return
    if sys.argv[1] == '--delta':
        n += int(sys.argv[2], 0)
    else:
        n = int(sys.argv[1], 0)
    if n < 0:
        raise SystemExit('negative pad')
    write(n)
    print('text pad set to %d (0x%x) bytes' % (n, n))


if __name__ == '__main__':
    main()
