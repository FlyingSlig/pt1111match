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

extern unsigned char DAT_004e2b14[];
extern void * DAT_004e240c;
extern const unsigned char DAT_004c4654[4];
extern unsigned char DAT_004e2810[4];
extern unsigned char DAT_004e2814[4];
extern const unsigned char DAT_004bd2c8[1];
extern int DAT_004c4658;













// GAP: PORT1111 0x00452bc3
__declspec(naked) void gap_00452bc3(void)
{
    __asm {
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00452bd0
__declspec(naked) void __cdecl FUN_00452bd0(void *param_1,int param_2,void *param_3)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x46
        _emit 0x44
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x74
        _emit 0x30
        _emit 0x8b
        _emit 0x40
        _emit 0x34
        _emit 0x3b
        _emit 0x43
        _emit 0x34
        _emit 0x75
        _emit 0x28
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x21
        _emit 0x8b
        _emit 0x48
        _emit 0x14
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x15
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        call FUN_004520b0
        _emit 0x39
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x0d
        _emit 0x6a
        _emit 0x01
        _emit 0x57
        _emit 0x6a
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_004723f0
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x59
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00452c29
__declspec(naked) void gap_00452c29(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
