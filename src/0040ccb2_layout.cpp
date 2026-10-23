#include "pt1111_funcs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#include <mbstring.h>
#include <ddraw.h>
#include <dsound.h>
#include "pt_aliases.h"

extern void * DAT_004e240c;
extern unsigned char DAT_004d5474[];
extern const unsigned char PTR_FUN_004bd60c[4];













// GAP: PORT1111 0x0040ccb2
__declspec(naked) void gap_0040ccb2(void)
{
    __asm {
        _emit 0x8b
        _emit 0xff
        _emit 0xae
        _emit 0xcc
        _emit 0x40
        _emit 0x00
        _emit 0x86
        _emit 0xcc
        _emit 0x40
        _emit 0x00
        _emit 0xa6
        _emit 0xcc
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x01
        _emit 0x02
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040ccd0
__declspec(naked) int __fastcall FUN_0040ccd0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5e4b
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x56
        _emit 0x57
        _emit 0x6a
        _emit 0x30
        _emit 0x8b
        _emit 0xf1
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_004535d0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x79
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00412720
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0x87
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x6a
        _emit 0x02
        _emit 0x6a
        _emit 0x14
        call FUN_004534f0
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8d
        _emit 0x56
        _emit 0x10
        _emit 0x52
        call FUN_0040d6c0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040cd5f
__declspec(naked) void gap_0040cd5f(void)
{
    __asm {
        _emit 0xcc
    }
}
