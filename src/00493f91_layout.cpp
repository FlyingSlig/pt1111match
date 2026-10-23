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













// GAP: PORT1111 0x00493f91
__declspec(naked) void gap_00493f91(void)
{
    __asm {
        _emit 0xff
        _emit 0xff
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0xc2
        _emit 0x18
        _emit 0x00
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x29
        _emit 0x3e
        _emit 0x49
        _emit 0x00
        _emit 0x67
        _emit 0x3d
        _emit 0x49
        _emit 0x00
        _emit 0x4d
        _emit 0x3c
        _emit 0x49
        _emit 0x00
        _emit 0xe6
        _emit 0x3a
        _emit 0x49
        _emit 0x00
    }
}
