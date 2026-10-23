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












// GAP: PORT1111 0x0046aba4
__declspec(naked) void gap_0046aba4(void)
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

// FUNCTION: PORT1111 0x0046abb0
__declspec(naked) int * __cdecl FUN_0046abb0(int param_1,int param_2)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b9c41
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x48
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x6b
        _emit 0x48
        _emit 0x74
        _emit 0x39
        _emit 0x48
        _emit 0x0f
        _emit 0x85
        _emit 0x97
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x7a
        _emit 0x8b
        _emit 0xc8
        call FUN_004670c0
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
        _emit 0x6a
        _emit 0x40
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x4b
        _emit 0x8b
        _emit 0xc8
        call FUN_004798c0
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
        _emit 0x6a
        _emit 0x34
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x6a
        _emit 0x01
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        call FUN_0047f8b0
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x33
        _emit 0xc0
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0046ac7d
__declspec(naked) void gap_0046ac7d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0046ac80
__declspec(naked) void __fastcall FUN_0046ac80(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0xc1
        _emit 0x33
        _emit 0xc9
        _emit 0x89
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        mov dword ptr [eax], OFFSET PTR_FUN_004c6028
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0xc7
        _emit 0x40
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x48
        _emit 0x20
        _emit 0x89
        _emit 0x50
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x24
        _emit 0xc7
        _emit 0x40
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x89
        _emit 0x48
        _emit 0x18
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0046acb8
__declspec(naked) void gap_0046acb8(void)
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

// FUNCTION: PORT1111 0x0046acc0
__declspec(naked) int __fastcall FUN_0046acc0(void *pthis,void *param_1)
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
        _emit 0x0c
        _emit 0x3c
        _emit 0x08
        _emit 0x75
        _emit 0x43
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x3c
        _emit 0x08
        _emit 0x75
        _emit 0x34
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0xb8
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xc8
        _emit 0x74
        _emit 0x28
        _emit 0x39
        _emit 0x47
        _emit 0x08
        _emit 0x74
        _emit 0x23
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x18
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0xcf
        _emit 0x8b
        _emit 0xf0
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x8b
        _emit 0xf8
        _emit 0xb9
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xf3
        _emit 0xa5
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0046ad17
__declspec(naked) void gap_0046ad17(void)
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

// FUNCTION: PORT1111 0x0046ad20
__declspec(naked) void __fastcall FUN_0046ad20(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x3c
        _emit 0x08
        _emit 0x74
        _emit 0x4a
        _emit 0x3c
        _emit 0x10
        _emit 0x74
        _emit 0x0f
        _emit 0x3c
        _emit 0x18
        _emit 0x75
        _emit 0x4a
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x4e
        _emit 0x1c
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0xd0
        _emit 0xc1
        _emit 0xea
        _emit 0x10
        _emit 0x66
        _emit 0x0f
        _emit 0xb6
        _emit 0xca
        _emit 0x66
        _emit 0x0f
        _emit 0xb6
        _emit 0xd4
        _emit 0x81
        _emit 0xe1
        _emit 0xf8
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0xc1
        _emit 0xe1
        _emit 0x05
        _emit 0x0b
        _emit 0xca
        _emit 0x81
        _emit 0xe1
        _emit 0xfc
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0xc1
        _emit 0xe1
        _emit 0x03
        _emit 0x0f
        _emit 0xb6
        _emit 0xd0
        _emit 0x0f
        _emit 0xb7
        _emit 0xc9
        _emit 0xc1
        _emit 0xea
        _emit 0x03
        _emit 0x0b
        _emit 0xca
        _emit 0x89
        _emit 0x4e
        _emit 0x1c
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x0f
        _emit 0xb6
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x1c
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0046ad82
__declspec(naked) void gap_0046ad82(void)
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
    }
}
