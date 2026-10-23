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

extern "C" void free_thunk(void *);
extern const unsigned char PTR_FUN_004c6028[140];
extern unsigned char DAT_004ddb0c[12];
extern const unsigned char PTR_SelectObject_004bc07c[4];
extern const unsigned char PTR_DeleteDC_004bc070[4];
extern unsigned char DAT_004dd964[4];
extern const unsigned char DAT_004c60cc[4];
extern const unsigned char DAT_004c60c8[4];
extern const unsigned char PTR_LAB_004c60c4[4];
extern const unsigned char DAT_004c60c0[4];
extern const unsigned char DAT_004c60bc[4];
extern const unsigned char PTR_SetRect_004bc2e8[4];
extern const unsigned char PTR_IntersectRect_004bc2ec[4];
extern unsigned char DAT_004e2c98[4];
extern const unsigned char s_1_0_12_004c60b4[8];
extern const unsigned char PTR_FUN_004c60d0[136];
extern unsigned char DAT_004e2c38[4];
extern unsigned char DAT_004e2c3c[4];












// GAP: PORT1111 0x0046e11c
__declspec(naked) void gap_0046e11c(void)
{
    __asm {
        _emit 0x03
        _emit 0x00
        _emit 0x57
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x52
        _emit 0xe8
        _emit 0xba
        _emit 0x9c
        _emit 0x03
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x14
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0xe8
        _emit 0x4e
        _emit 0x9f
        _emit 0x03
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x34
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x48
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x90
        _emit 0xb5
        _emit 0xdc
        _emit 0x46
        _emit 0x00
        _emit 0x36
        _emit 0xdb
        _emit 0x46
        _emit 0x00
        _emit 0xe6
        _emit 0xdb
        _emit 0x46
        _emit 0x00
        _emit 0x83
        _emit 0xdc
        _emit 0x46
        _emit 0x00
        _emit 0xa8
        _emit 0xdc
        _emit 0x46
        _emit 0x00
        _emit 0x36
        _emit 0xdb
        _emit 0x46
        _emit 0x00
        _emit 0x63
        _emit 0xdc
        _emit 0x46
        _emit 0x00
        _emit 0xd3
        _emit 0xdd
        _emit 0x46
        _emit 0x00
        _emit 0x0b
        _emit 0xdf
        _emit 0x46
        _emit 0x00
        _emit 0x0b
        _emit 0xdf
        _emit 0x46
        _emit 0x00
        _emit 0x49
        _emit 0xdd
        _emit 0x46
        _emit 0x00
        _emit 0x29
        _emit 0xde
        _emit 0x46
        _emit 0x00
        _emit 0x0b
        _emit 0xdf
        _emit 0x46
        _emit 0x00
        _emit 0xc3
        _emit 0xdc
        _emit 0x46
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

// FUNCTION: PORT1111 0x0046e1b0
__declspec(naked) int __fastcall FUN_0046e1b0(void *pthis,int param_1,void *param_2)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x03
        _emit 0x57
        _emit 0xff
        _emit 0x50
        _emit 0x5c
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0xf3
        call FUN_0046b270
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xcb
        _emit 0x75
        _emit 0x0d
        _emit 0x8b
        _emit 0x13
        _emit 0xff
        _emit 0x52
        _emit 0x5c
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x03
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x3c
        _emit 0x08
        _emit 0x75
        _emit 0x17
        cmp dword ptr [DAT_004dd964], 0xf
        _emit 0x8b
        _emit 0xcb
        _emit 0x75
        _emit 0x07
        call FUN_0046d440
        _emit 0xeb
        _emit 0x05
        call FUN_0046d4d0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x55
        _emit 0x74
        _emit 0x48
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x18
        _emit 0x85
        _emit 0xed
        _emit 0x74
        _emit 0x40
        _emit 0x8b
        _emit 0x43
        _emit 0x20
        _emit 0x8b
        _emit 0x4b
        _emit 0x04
        _emit 0x50
        _emit 0x51
        call FUN_0046abb0
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x52
        _emit 0x8b
        _emit 0xf0
        _emit 0x89
        _emit 0x45
        _emit 0x00
        call FUN_0046b270
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x1d
        _emit 0x8b
        _emit 0x4d
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x8b
        _emit 0x13
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x52
        _emit 0x5c
        _emit 0x5d
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x5d
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}
