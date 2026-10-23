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

extern const unsigned char PTR_CreatePenIndirect_004bc040[4];
extern const unsigned char PTR_SelectObject_004bc07c[4];
extern const unsigned char PTR_Polyline_004bc034[4];
extern const unsigned char PTR_DeleteObject_004bc084[4];
extern const unsigned char PTR_FUN_004c6dd0[4];
extern const unsigned char PTR_FUN_004c6dd4[12];
extern unsigned char PTR_PTR_004dd9e8[48];
extern unsigned char DAT_004ddaa0[8];
extern unsigned char DAT_004dda88[24];
extern unsigned char DAT_004dda80[8];
extern unsigned char DAT_004dda78[8];
extern unsigned char DAT_004ddaa8[12];
extern unsigned char DAT_004dda70[8];
extern const unsigned char PTR_GetKeyState_004bc2e0[4];
extern const unsigned char PTR_FUN_004c6de0[4];





// FUNCTION: PORT1111 0x00494d90
__declspec(naked) void __fastcall FUN_00494d90(void *pthis,int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x06
        _emit 0x51
        _emit 0x55
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x05
        _emit 0x5e
        _emit 0x5d
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0x5e
        _emit 0x14
        _emit 0x8d
        _emit 0x45
        _emit 0xdb
        _emit 0x83
        _emit 0xf8
        _emit 0x03
        _emit 0x57
        _emit 0x8b
        _emit 0x7e
        _emit 0x10
        _emit 0x0f
        _emit 0x87
        _emit 0x99
        _emit 0x00
        _emit 0x00
        _emit 0x00
        jmp dword ptr [eax*4 + gap_00494e6f + 1]
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        call FUN_004949a0
        _emit 0x39
        _emit 0x7e
        _emit 0x10
        _emit 0x75
        _emit 0x76
        _emit 0x39
        _emit 0x5e
        _emit 0x14
        _emit 0x75
        _emit 0x71
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        call FUN_00494760
        _emit 0xeb
        _emit 0x66
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_004949a0
        _emit 0x39
        _emit 0x7e
        _emit 0x10
        _emit 0x75
        _emit 0x0e
        _emit 0x39
        _emit 0x5e
        _emit 0x14
        _emit 0x75
        _emit 0x09
        _emit 0x6a
        _emit 0xff
        _emit 0x8b
        _emit 0xce
        call FUN_00494760
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        _emit 0xeb
        _emit 0x48
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00494a70
        _emit 0x39
        _emit 0x7e
        _emit 0x10
        _emit 0x75
        _emit 0x0e
        _emit 0x39
        _emit 0x5e
        _emit 0x14
        _emit 0x75
        _emit 0x09
        _emit 0x6a
        _emit 0xff
        _emit 0x8b
        _emit 0xce
        call FUN_00494880
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x6a
        _emit 0x01
        _emit 0x51
        _emit 0xeb
        _emit 0x23
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        call FUN_00494a70
        _emit 0x39
        _emit 0x7e
        _emit 0x10
        _emit 0x75
        _emit 0x0e
        _emit 0x39
        _emit 0x5e
        _emit 0x14
        _emit 0x75
        _emit 0x09
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        call FUN_00494880
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x6a
        _emit 0x01
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_00494cb0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x06
        _emit 0x51
        _emit 0x55
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x5f
        _emit 0x5b
        _emit 0x5e
        _emit 0x5d
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}
