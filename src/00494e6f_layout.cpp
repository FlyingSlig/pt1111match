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













// GAP: PORT1111 0x00494e6f
__declspec(naked) void gap_00494e6f(void)
{
    __asm {
        _emit 0x90
        _emit 0xe7
        _emit 0x4d
        _emit 0x49
        _emit 0x00
        _emit 0x0c
        _emit 0x4e
        _emit 0x49
        _emit 0x00
        _emit 0xc9
        _emit 0x4d
        _emit 0x49
        _emit 0x00
        _emit 0x31
        _emit 0x4e
        _emit 0x49
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x00494e80
__declspec(naked) void __fastcall FUN_00494e80(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x50
        _emit 0x08
        _emit 0x85
        _emit 0xd2
        _emit 0x56
        _emit 0x8b
        _emit 0x70
        _emit 0x14
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc9
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x48
        _emit 0x0c
        _emit 0x2b
        _emit 0xca
        _emit 0xc1
        _emit 0xf9
        _emit 0x02
        _emit 0x3b
        _emit 0xf1
        _emit 0x7d
        _emit 0x1e
        _emit 0x85
        _emit 0xf6
        _emit 0x7c
        _emit 0x1a
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x8d
        _emit 0x0c
        _emit 0xb1
        _emit 0x8b
        _emit 0x09
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x40
        _emit 0x20
        _emit 0x52
        _emit 0x50
        call FUN_00494cb0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00494ebf
__declspec(naked) void gap_00494ebf(void)
{
    __asm {
        _emit 0xcc
    }
}
