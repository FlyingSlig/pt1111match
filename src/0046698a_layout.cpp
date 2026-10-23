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

extern const unsigned char DAT_004c5e54[4];
extern const unsigned char s_____f_004c5e4c[8];
extern unsigned char PTR_DAT_004dd95c[4];












// GAP: PORT1111 0x0046698a
__declspec(naked) void gap_0046698a(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00466990
__declspec(naked) int __fastcall FUN_00466990(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xfb
        _emit 0x8b
        _emit 0xe9
        _emit 0x75
        _emit 0x08
        _emit 0x5f
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x07
        _emit 0x6a
        _emit 0x04
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4f
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x42
        _emit 0x56
        _emit 0x52
        call malloc
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x20
        _emit 0x8b
        _emit 0x17
        _emit 0x50
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xc1
        _emit 0x75
        _emit 0x1b
        _emit 0x6a
        _emit 0xff
        _emit 0x88
        _emit 0x1c
        _emit 0x0e
        _emit 0x56
        _emit 0x8b
        _emit 0xcd
        call FUN_00466160
        _emit 0xeb
        _emit 0x07
        _emit 0x8b
        _emit 0xcd
        call FUN_00465e40
        _emit 0xbb
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x5e
        _emit 0x5f
        _emit 0x5d
        _emit 0x8b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00466a10
__declspec(naked) void gap_00466a10(void)
{
    __asm {
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
