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
extern int DAT_004c6da8;
extern unsigned char DAT_004e2cac[12];
extern unsigned char DAT_004e2ca8[4];
extern const unsigned char PTR_DeleteObject_004bc084[4];
extern const unsigned char DAT_004bd578[8];
extern unsigned char DAT_004e2ca4[4];
extern const unsigned char DAT_004c6db4[4];
extern const unsigned char DAT_004c3720[4];
extern const unsigned char DAT_004c6dac[8];
extern const unsigned char PTR_DrawTextA_004bc318[4];
extern const unsigned char DAT_004c6dc8[4];
extern const unsigned char s__c__d__d__d__004c6db8[16];
extern unsigned char DAT_004dda40[8];
extern unsigned char DAT_004dda28[24];
extern unsigned char DAT_004dda20[8];
extern unsigned char DAT_004dda18[8];
extern unsigned char DAT_004dda48[40];
extern unsigned char DAT_004e2cb8[16];
extern const unsigned char PTR_FUN_004c6dcc[4];












// GAP: PORT1111 0x0048a0c7
__declspec(naked) void gap_0048a0c7(void)
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
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x01
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov dword ptr [esi], OFFSET DAT_004c6da8
        _emit 0x74
        _emit 0x09
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0048a0f0
__declspec(naked) int __fastcall FUN_0048a0f0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a108
__declspec(naked) void gap_0048a108(void)
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

// FUNCTION: PORT1111 0x0048a110
__declspec(naked) int __fastcall FUN_0048a110(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x04
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a128
__declspec(naked) void gap_0048a128(void)
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

// FUNCTION: PORT1111 0x0048a130
__declspec(naked) int __fastcall FUN_0048a130(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x02
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a148
__declspec(naked) void gap_0048a148(void)
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

// FUNCTION: PORT1111 0x0048a150
__declspec(naked) int __fastcall FUN_0048a150(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x20
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a166
__declspec(naked) void gap_0048a166(void)
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
    }
}

// FUNCTION: PORT1111 0x0048a170
__declspec(naked) int __fastcall FUN_0048a170(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x10
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a188
__declspec(naked) void gap_0048a188(void)
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

// FUNCTION: PORT1111 0x0048a190
__declspec(naked) int __fastcall FUN_0048a190(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x08
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a1a8
__declspec(naked) void gap_0048a1a8(void)
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

// FUNCTION: PORT1111 0x0048a1b0
__declspec(naked) int __fastcall FUN_0048a1b0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x04
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a1c8
__declspec(naked) void gap_0048a1c8(void)
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

// FUNCTION: PORT1111 0x0048a1d0
__declspec(naked) int __fastcall FUN_0048a1d0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x02
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a1e8
__declspec(naked) void gap_0048a1e8(void)
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

// FUNCTION: PORT1111 0x0048a1f0
__declspec(naked) int __fastcall FUN_0048a1f0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a208
__declspec(naked) void gap_0048a208(void)
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

// FUNCTION: PORT1111 0x0048a210
__declspec(naked) void * __fastcall FUN_0048a210(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_0048a090
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a223
__declspec(naked) void gap_0048a223(void)
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
    }
}

// FUNCTION: PORT1111 0x0048a230
__declspec(naked) int __fastcall FUN_0048a230(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x10
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a248
__declspec(naked) void gap_0048a248(void)
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

// FUNCTION: PORT1111 0x0048a250
__declspec(naked) int __fastcall FUN_0048a250(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x08
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048a268
__declspec(naked) void gap_0048a268(void)
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

// FUNCTION: PORT1111 0x0048a270
__declspec(naked) void __cdecl FUN_0048a270(unsigned short param_1)
{
    __asm {
        _emit 0x56
        _emit 0x66
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x0f
        _emit 0xb7
        _emit 0xc6
        _emit 0xc1
        _emit 0xe0
        _emit 0x06
        _emit 0x50
        _emit 0x6a
        _emit 0x40
        call dword ptr [LocalAlloc]
        _emit 0x85
        _emit 0xc0
        mov dword ptr [DAT_004e2cac], eax
        _emit 0x74
        _emit 0x07
        mov word ptr [DAT_004e2ca8], si
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048a297
__declspec(naked) void gap_0048a297(void)
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

// FUNCTION: PORT1111 0x0048a2a0
__declspec(naked) void FUN_0048a2a0(void)
{
    __asm {
        _emit 0x57
        _emit 0x33
        _emit 0xff
        cmp word ptr [DAT_004e2ca8], di
        _emit 0x76
        _emit 0x2a
        _emit 0x53
        mov ebx, dword ptr [DeleteObject]
        _emit 0x56
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x06
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x09
        _emit 0x50
        _emit 0xff
        _emit 0xd3
        _emit 0xc7
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        movzx eax, word ptr [DAT_004e2ca8]
        _emit 0x47
        _emit 0x83
        _emit 0xc6
        _emit 0x40
        _emit 0x3b
        _emit 0xf8
        _emit 0x7c
        _emit 0xe2
        _emit 0x5e
        _emit 0x5b
        _emit 0x5f
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048a2d8
__declspec(naked) void gap_0048a2d8(void)
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

// FUNCTION: PORT1111 0x0048a2e0
__declspec(naked) int __cdecl FUN_0048a2e0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x6a
        _emit 0x00
        call dword ptr [GetDC]
        _emit 0x8b
        _emit 0xf0
        _emit 0x6a
        _emit 0x5a
        _emit 0x56
        call dword ptr [GetDeviceCaps]
        _emit 0x8b
        _emit 0xc8
        _emit 0x0f
        _emit 0xaf
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xb8
        _emit 0x39
        _emit 0x8e
        _emit 0xe3
        _emit 0x38
        _emit 0xf7
        _emit 0xe9
        _emit 0xc1
        _emit 0xfa
        _emit 0x04
        _emit 0x8b
        _emit 0xc2
        _emit 0xc1
        _emit 0xe8
        _emit 0x1f
        _emit 0x03
        _emit 0xc2
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x14
        fadd qword ptr [DAT_004bd578]
        _emit 0xdd
        _emit 0x1c
        _emit 0x24
        call FUN_004980e0
        _emit 0xd9
        _emit 0xe0
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xe8
        _emit 0x58
        _emit 0xda
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xf8
        call dword ptr [ReleaseDC]
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x0048a340
__declspec(naked) void __cdecl FUN_0048a340(void *param_1,void *param_2,int param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x50
        call FUN_0048a2e0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x33
        _emit 0xd2
        _emit 0x89
        _emit 0x01
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8d
        _emit 0x71
        _emit 0x1c
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x51
        _emit 0x04
        _emit 0x89
        _emit 0x51
        _emit 0x08
        _emit 0x89
        _emit 0x51
        _emit 0x0c
        _emit 0xc7
        _emit 0x41
        _emit 0x10
        _emit 0xbc
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x51
        _emit 0x14
        _emit 0x88
        _emit 0x51
        _emit 0x15
        _emit 0x88
        _emit 0x51
        _emit 0x16
        _emit 0x88
        _emit 0x51
        _emit 0x17
        _emit 0x88
        _emit 0x51
        _emit 0x18
        _emit 0x88
        _emit 0x51
        _emit 0x19
        _emit 0x88
        _emit 0x51
        _emit 0x1a
        _emit 0xc6
        _emit 0x41
        _emit 0x1b
        _emit 0x02
        _emit 0x2b
        _emit 0xf0
        _emit 0x8a
        _emit 0x08
        _emit 0x88
        _emit 0x0c
        _emit 0x06
        _emit 0x40
        _emit 0x3a
        _emit 0xca
        _emit 0x75
        _emit 0xf6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048a394
__declspec(naked) void gap_0048a394(void)
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

// FUNCTION: PORT1111 0x0048a3a0
__declspec(naked) void __cdecl FUN_0048a3a0(LONG *param_1,HDC param_2,LPCSTR param_3,LONG *param_4)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0c
        _emit 0x24
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x50
        _emit 0x0c
        _emit 0x68
        _emit 0x10
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x6a
        _emit 0xff
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x51
        _emit 0x52
        call dword ptr [DrawTextA]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x14
        _emit 0x24
        _emit 0x8b
        _emit 0xc8
        _emit 0x89
        _emit 0x11
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x51
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x51
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x51
        _emit 0x0c
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048a401
__declspec(naked) void gap_0048a401(void)
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

// FUNCTION: PORT1111 0x0048a410
__declspec(naked) void FUN_0048a410(HDC param_1, int param_2, int param_3, LPCSTR param_4, UINT param_5, int param_6, int param_7, int param_8)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x53
        _emit 0x2b
        _emit 0xc2
        _emit 0x33
        _emit 0xdb
        _emit 0x85
        _emit 0xc9
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x7e
        _emit 0x67
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x38
        _emit 0x4e
        _emit 0x85
        _emit 0xf6
        _emit 0x7c
        _emit 0x25
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x34
        _emit 0x8d
        _emit 0x0c
        _emit 0x03
        _emit 0x8b
        _emit 0xc6
        _emit 0xc1
        _emit 0xe0
        _emit 0x04
        _emit 0x8d
        _emit 0x44
        _emit 0x10
        _emit 0x08
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x3b
        _emit 0x48
        _emit 0xfc
        _emit 0x7c
        _emit 0x04
        _emit 0x3b
        _emit 0x08
        _emit 0x7e
        _emit 0x3f
        _emit 0x4e
        _emit 0x83
        _emit 0xe8
        _emit 0x10
        _emit 0x85
        _emit 0xf6
        _emit 0x7d
        _emit 0xef
        mov ecx, dword ptr [DAT_004e2ca4]
        _emit 0x51
        _emit 0x55
        call dword ptr [SetTextColor]
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x2c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        _emit 0x52
        _emit 0x55
        call dword ptr [ExtTextOutA]
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
        _emit 0x8b
        _emit 0xce
        _emit 0xc1
        _emit 0xe1
        _emit 0x04
        _emit 0x8b
        _emit 0x04
        _emit 0x11
        _emit 0x8d
        _emit 0x3c
        _emit 0x11
        _emit 0x50
        _emit 0x55
        mov dword ptr [DAT_004e2ca4], eax
        call dword ptr [SetTextColor]
        _emit 0x8b
        _emit 0x7f
        _emit 0x08
        _emit 0x8d
        _emit 0x46
        _emit 0x01
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x38
        _emit 0x3b
        _emit 0xc6
        _emit 0x7d
        _emit 0x31
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x34
        _emit 0x8b
        _emit 0xd0
        _emit 0xc1
        _emit 0xe2
        _emit 0x04
        _emit 0x8d
        _emit 0x4c
        _emit 0x0a
        _emit 0x04
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x30
        _emit 0x03
        _emit 0xd3
        _emit 0x39
        _emit 0x11
        _emit 0x7d
        _emit 0x0a
        _emit 0x40
        _emit 0x83
        _emit 0xc1
        _emit 0x10
        _emit 0x3b
        _emit 0xc6
        _emit 0x7c
        _emit 0xee
        _emit 0xeb
        _emit 0x0b
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x34
        _emit 0xc1
        _emit 0xe0
        _emit 0x04
        _emit 0x8b
        _emit 0x7c
        _emit 0x08
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x30
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x2c
        _emit 0x2b
        _emit 0xfb
        _emit 0x2b
        _emit 0xfa
        _emit 0x2b
        _emit 0xf3
        _emit 0x3b
        _emit 0xfe
        _emit 0x7d
        _emit 0x02
        _emit 0x8b
        _emit 0xf7
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x6a
        _emit 0x00
        _emit 0x56
        _emit 0x8d
        _emit 0x3c
        _emit 0x13
        _emit 0x57
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x51
        _emit 0x55
        call dword ptr [ExtTextOutA]
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x56
        _emit 0x57
        _emit 0x55
        call dword ptr [GetTextExtentPoint32A]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x03
        _emit 0xd0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x03
        _emit 0xde
        _emit 0x3b
        _emit 0xd8
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x0f
        _emit 0x8d
        _emit 0x43
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0xe9
        _emit 0xdd
    }
}

// GAP: PORT1111 0x0048a553
__declspec(naked) void gap_0048a553(void)
{
    __asm {
        _emit 0xfe
        _emit 0xff
        _emit 0xff
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

// FUNCTION: PORT1111 0x0048a560
__declspec(naked) void __cdecl FUN_0048a560(void *param_1,void *param_2)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004baad8
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x56
        _emit 0x6a
        _emit 0xff
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call FUN_00466af0
        _emit 0x6a
        _emit 0x00
        push OFFSET DAT_004c6db4
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466490
        _emit 0x8b
        _emit 0xf0
        _emit 0x56
        push OFFSET DAT_004c3720
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call FUN_00466490
        _emit 0x85
        _emit 0xf6
        _emit 0x7c
        _emit 0x34
        _emit 0x85
        _emit 0xc0
        _emit 0x7c
        _emit 0x30
        _emit 0x50
        _emit 0x56
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call FUN_00466bc0
        _emit 0x6a
        _emit 0x00
        push OFFSET DAT_004c6db4
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call FUN_00466490
        _emit 0x8b
        _emit 0xf0
        _emit 0x56
        push OFFSET DAT_004c3720
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call FUN_00466490
        _emit 0x85
        _emit 0xf6
        _emit 0x7d
        _emit 0xcc
        _emit 0x6a
        _emit 0x01
        push OFFSET DAT_004c6dac
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call FUN_004670a0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        call FUN_00466a50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
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

// GAP: PORT1111 0x0048a627
__declspec(naked) void gap_0048a627(void)
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

// FUNCTION: PORT1111 0x0048a630
__declspec(naked) int __cdecl FUN_0048a630(void *param_1,int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x33
        _emit 0xed
        cmp word ptr [DAT_004e2ca8], bp
        _emit 0x56
        _emit 0x57
        _emit 0x76
        _emit 0x42
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x83
        _emit 0xc3
        _emit 0x04
        _emit 0x8b
        _emit 0x43
        _emit 0xfc
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x34
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x8d
        _emit 0x47
        _emit 0x1c
        _emit 0x50
        _emit 0x8d
        _emit 0x4b
        _emit 0x1c
        _emit 0x51
        call _mbscmp
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0d
        _emit 0xb9
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xf3
        _emit 0x33
        _emit 0xd2
        _emit 0xf3
        _emit 0xa7
        _emit 0x74
        _emit 0x16
        movzx eax, word ptr [DAT_004e2ca8]
        _emit 0x45
        _emit 0x83
        _emit 0xc3
        _emit 0x40
        _emit 0x3b
        _emit 0xe8
        _emit 0x7c
        _emit 0xc5
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc3
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x5f
        _emit 0xc1
        _emit 0xe5
        _emit 0x06
        _emit 0x8b
        _emit 0x04
        _emit 0x29
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048a697
__declspec(naked) void gap_0048a697(void)
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

// FUNCTION: PORT1111 0x0048a6a0
__declspec(naked) HFONT __cdecl FUN_0048a6a0(LOGFONTA *param_1,void *param_2)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x50
        call dword ptr [CreateFontIndirectA]
        mov si, word ptr [DAT_004e2ca8]
        _emit 0x0f
        _emit 0xb7
        _emit 0xce
        _emit 0x8b
        _emit 0xe8
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xc9
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x0c
        _emit 0x7e
        _emit 0x18
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0x3a
        _emit 0x00
        _emit 0x74
        _emit 0x08
        _emit 0x40
        _emit 0x83
        _emit 0xc2
        _emit 0x40
        _emit 0x3b
        _emit 0xc1
        _emit 0x7c
        _emit 0xf3
        _emit 0x3b
        _emit 0xc1
        _emit 0x75
        _emit 0x39
        _emit 0x53
        _emit 0x33
        _emit 0xdb
        _emit 0x85
        _emit 0xc9
        _emit 0x7e
        _emit 0x2f
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        mov ebp, dword ptr [DeleteObject]
        _emit 0x8b
        _emit 0x07
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x10
        _emit 0x50
        _emit 0xff
        _emit 0xd5
        mov si, word ptr [DAT_004e2ca8]
        _emit 0xc7
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xb7
        _emit 0xce
        _emit 0x43
        _emit 0x83
        _emit 0xc7
        _emit 0x40
        _emit 0x3b
        _emit 0xd9
        _emit 0x7c
        _emit 0xdf
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x0f
        _emit 0xb7
        _emit 0xd6
        _emit 0x3b
        _emit 0xc2
        _emit 0x74
        _emit 0x19
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0xc1
        _emit 0xe0
        _emit 0x06
        _emit 0x03
        _emit 0xc1
        _emit 0x8d
        _emit 0x78
        _emit 0x04
        _emit 0xb9
        _emit 0x0f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x28
        _emit 0xf3
        _emit 0xa5
        _emit 0x5f
        _emit 0x5e
        _emit 0x8b
        _emit 0xc5
        _emit 0x5d
        _emit 0x59
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048a741
__declspec(naked) void gap_0048a741(void)
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

// FUNCTION: PORT1111 0x0048a750
__declspec(naked) void FUN_0048a750(HDC param_1,LPCSTR param_2,LONG *param_3,int param_4,int param_5,unsigned int param_6)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x53
        mov ebx, dword ptr [DrawTextA]
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0xc6
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x74
        _emit 0x6b
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x38
        _emit 0x10
        _emit 0x74
        _emit 0x0c
        _emit 0x68
        _emit 0x10
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0xeb
        _emit 0x0a
        _emit 0x68
        _emit 0x00
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x6a
        _emit 0xff
        _emit 0x57
        _emit 0x55
        _emit 0xff
        _emit 0xd3
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x16
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x2b
        _emit 0xca
        _emit 0x3b
        _emit 0xc1
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x7d
        _emit 0x27
        _emit 0xd1
        _emit 0xf9
        _emit 0xd1
        _emit 0xf8
        _emit 0x2b
        _emit 0xc8
        _emit 0x03
        _emit 0xca
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0xdd
        _emit 0x1c
        _emit 0x24
        call FUN_004980e0
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xe8
        _emit 0x93
        _emit 0xd5
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x83
        _emit 0xe8
        _emit 0x6a
        _emit 0x74
        _emit 0x1a
        _emit 0x48
        _emit 0x74
        _emit 0x0c
        _emit 0x48
        _emit 0x75
        _emit 0x14
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x38
        _emit 0x83
        _emit 0xc8
        _emit 0x01
        _emit 0xeb
        _emit 0x07
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x38
        _emit 0x83
        _emit 0xc8
        _emit 0x02
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x38
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x38
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x6a
        _emit 0xff
        _emit 0x57
        _emit 0x55
        _emit 0xff
        _emit 0xd3
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048a834
__declspec(naked) void gap_0048a834(void)
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

// FUNCTION: PORT1111 0x0048a840
__declspec(naked) void FUN_0048a840(HDC param_1, LPCSTR param_2, void * param_3, int param_4, int param_5, UINT param_6, COLORREF param_7, COLORREF param_8)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x53
        mov ebx, dword ptr [DrawTextA]
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0xcd
        _emit 0x8b
        _emit 0x01
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x83
        _emit 0xc0
        _emit 0x02
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x8b
        _emit 0x49
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x74
        _emit 0x68
        _emit 0x68
        _emit 0x10
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x6a
        _emit 0xff
        _emit 0x57
        _emit 0x56
        _emit 0xff
        _emit 0xd3
        _emit 0x8b
        _emit 0x55
        _emit 0x04
        _emit 0x8b
        _emit 0x4d
        _emit 0x00
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x55
        _emit 0x08
        _emit 0x8b
        _emit 0x6d
        _emit 0x0c
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        _emit 0x83
        _emit 0xc1
        _emit 0x02
        _emit 0x2b
        _emit 0xea
        _emit 0x3b
        _emit 0xc5
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x7d
        _emit 0x2f
        _emit 0xd1
        _emit 0xfd
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x2c
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0xd1
        _emit 0xf8
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0xda
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xda
        _emit 0x64
        _emit 0x24
        _emit 0x34
        _emit 0xdd
        _emit 0x1c
        _emit 0x24
        call FUN_004980e0
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xe8
        _emit 0xa3
        _emit 0xd4
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x83
        _emit 0xe8
        _emit 0x6a
        _emit 0x74
        _emit 0x18
        _emit 0x48
        _emit 0x74
        _emit 0x0c
        _emit 0x48
        _emit 0x75
        _emit 0x12
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x38
        _emit 0x83
        _emit 0xcd
        _emit 0x01
        _emit 0xeb
        _emit 0x0d
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x38
        _emit 0x83
        _emit 0xcd
        _emit 0x02
        _emit 0xeb
        _emit 0x04
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x38
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x40
        _emit 0x50
        _emit 0x56
        call dword ptr [SetTextColor]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x41
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x40
        _emit 0x42
        _emit 0x41
        _emit 0x55
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x6a
        _emit 0xff
        _emit 0x57
        _emit 0x56
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0xff
        _emit 0xd3
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xb8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xd0
        _emit 0x55
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x6a
        _emit 0xff
        _emit 0x57
        _emit 0x2b
        _emit 0xc8
        _emit 0x56
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0xff
        _emit 0xd3
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0xb8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x2b
        _emit 0xd0
        _emit 0x2b
        _emit 0xc8
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x6a
        _emit 0xff
        _emit 0x57
        _emit 0x56
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0xff
        _emit 0xd3
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0xb8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0xc8
        _emit 0x55
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x6a
        _emit 0xff
        _emit 0x57
        _emit 0x03
        _emit 0xd0
        _emit 0x56
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0xff
        _emit 0xd3
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x41
        _emit 0x40
        _emit 0x4a
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x3c
        _emit 0x52
        _emit 0x49
        _emit 0x56
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        call dword ptr [SetTextColor]
        _emit 0x55
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x6a
        _emit 0xff
        _emit 0x57
        _emit 0x56
        _emit 0xff
        _emit 0xd3
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048a9fd
__declspec(naked) void gap_0048a9fd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
