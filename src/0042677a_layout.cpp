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

extern int DAT_004e2404;
extern unsigned char DAT_004e2050[4];
extern unsigned char DAT_004e2058[4];
extern volatile int DAT_004e2c34;
extern volatile int DAT_004e2c30;
extern unsigned char DAT_004e2044[4];
extern unsigned char DAT_004e205c[4];
extern unsigned char DAT_004e2040[4];











// GAP: PORT1111 0x0042677a
__declspec(naked) void gap_0042677a(void)
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

// FUNCTION: PORT1111 0x00426780
__declspec(naked) void __fastcall FUN_00426780(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xdb
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x29
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x53
        _emit 0x50
        _emit 0xe8
        _emit 0x64
        _emit 0x1a
        _emit 0x07
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xdb
        _emit 0x7e
        _emit 0x13
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0xc6
        _emit 0x04
        _emit 0x08
        _emit 0xff
        _emit 0x40
        _emit 0x3b
        _emit 0xc3
        _emit 0x7c
        _emit 0xf4
        _emit 0x88
        _emit 0x5e
        _emit 0x2c
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x004267c4
__declspec(naked) void gap_004267c4(void)
{
    __asm {
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

// FUNCTION: PORT1111 0x004267d0
__declspec(naked) void __fastcall FUN_004267d0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x0f
        _emit 0xbf
        _emit 0x51
        _emit 0x4c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x0f
        _emit 0xbf
        _emit 0x49
        _emit 0x4e
        _emit 0x03
        _emit 0x50
        _emit 0x04
        _emit 0x52
        _emit 0x03
        _emit 0x08
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        call FUN_00429ac0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x004267f1
__declspec(naked) void gap_004267f1(void)
{
    __asm {
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
