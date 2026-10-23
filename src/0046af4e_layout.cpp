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












// GAP: PORT1111 0x0046af4e
__declspec(naked) void gap_0046af4e(void)
{
    __asm {
        _emit 0x8b
        _emit 0xff
        _emit 0xc9
        _emit 0xad
        _emit 0x46
        _emit 0x00
        _emit 0xe2
        _emit 0xad
        _emit 0x46
        _emit 0x00
        _emit 0xfb
        _emit 0xad
        _emit 0x46
        _emit 0x00
        _emit 0x1b
        _emit 0xae
        _emit 0x46
        _emit 0x00
        _emit 0x2f
        _emit 0xae
        _emit 0x46
        _emit 0x00
        _emit 0x58
        _emit 0xae
        _emit 0x46
        _emit 0x00
        _emit 0x7a
        _emit 0xae
        _emit 0x46
        _emit 0x00
        _emit 0xc9
        _emit 0xad
        _emit 0x46
        _emit 0x00
        _emit 0xb2
        _emit 0xae
        _emit 0x46
        _emit 0x00
        _emit 0xc5
        _emit 0xae
        _emit 0x46
        _emit 0x00
        _emit 0xdf
        _emit 0xae
        _emit 0x46
        _emit 0x00
        _emit 0xe5
        _emit 0xae
        _emit 0x46
        _emit 0x00
        _emit 0x0e
        _emit 0xaf
        _emit 0x46
        _emit 0x00
        _emit 0x2a
        _emit 0xaf
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
    }
}

// FUNCTION: PORT1111 0x0046af90
__declspec(naked) int __fastcall FUN_0046af90(void *pthis,int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0xff
        _emit 0x50
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0x74
        _emit 0x25
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x0f
        _emit 0xb6
        _emit 0xf8
        _emit 0x8b
        _emit 0x06
        _emit 0xc1
        _emit 0xef
        _emit 0x03
        _emit 0x0f
        _emit 0xaf
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0x0f
        _emit 0xaf
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x03
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x03
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x06
        _emit 0x2b
        _emit 0xf9
        _emit 0x8b
        _emit 0xce
        _emit 0x4f
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0x0f
        _emit 0xaf
        _emit 0xf8
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x0f
        _emit 0xb6
        _emit 0xc0
        _emit 0xc1
        _emit 0xe8
        _emit 0x03
        _emit 0x0f
        _emit 0xaf
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x03
        _emit 0xfa
        _emit 0x03
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x0046affb
__declspec(naked) void gap_0046affb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0046b000
__declspec(naked) int __cdecl FUN_0046b000(void *param_1,void *param_2,int param_3,void *param_4)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x8b
        _emit 0xf8
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0x03
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xce
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x06
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0xeb
        _emit 0x07
        _emit 0x8b
        _emit 0x16
        _emit 0xff
        _emit 0x52
        _emit 0x14
        _emit 0xf7
        _emit 0xd8
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x01
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x00
        _emit 0x8b
        _emit 0x16
        _emit 0x51
        _emit 0x50
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x2c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x5f
        _emit 0x89
        _emit 0x01
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0046b058
__declspec(naked) void gap_0046b058(void)
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
    }
}

// FUNCTION: PORT1111 0x0046b060
__declspec(naked) void FUN_0046b060(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x34
    }
}

// GAP: PORT1111 0x0046b069
__declspec(naked) void gap_0046b069(void)
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

// FUNCTION: PORT1111 0x0046b070
__declspec(naked) void __cdecl FUN_0046b070(void *param_1,void *param_2,void *param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x34
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x34
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x34
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0046b090
__declspec(naked) void gap_0046b090(void)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x44
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0046b0b0
__declspec(naked) int __fastcall FUN_0046b0b0(void *pthis,int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x83
        _emit 0x7e
        _emit 0x04
        _emit 0x02
        _emit 0x75
        _emit 0x06
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xdb
        _emit 0x57
        _emit 0x7c
        _emit 0x76
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x85
        _emit 0xff
        _emit 0x7c
        _emit 0x6e
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x3b
        _emit 0xd8
        _emit 0x7d
        _emit 0x63
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x3b
        _emit 0xf8
        _emit 0x7d
        _emit 0x58
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4d
        _emit 0x8b
        _emit 0x16
        _emit 0x57
        _emit 0x53
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x2c
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x3c
        _emit 0x10
        _emit 0x74
        _emit 0x1b
        _emit 0x0f
        _emit 0xb6
        _emit 0x0f
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x0a
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x34
        _emit 0x5f
        _emit 0x5b
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x0f
        _emit 0xb7
        _emit 0x07
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x01
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x34
        _emit 0x5f
        _emit 0x5b
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x5f
        _emit 0x5b
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x0046b147
__declspec(naked) void gap_0046b147(void)
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
    }
}
