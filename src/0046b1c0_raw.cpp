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




// FUNCTION: PORT1111 0x0046b1c0
__declspec(naked) int __cdecl FUN_0046b1c0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xc0
        _emit 0xec
        _emit 0x83
        _emit 0xf8
        _emit 0x15
        _emit 0x77
        _emit 0x2c
        movzx eax, byte ptr [eax + gap_0046b1fb + 25]
        jmp dword ptr [eax*4 + gap_0046b1fb + 1]
        _emit 0xb8
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0xb8
        _emit 0x0f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0xb8
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0xb8
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0xb8
        _emit 0x20
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x33
        _emit 0xc0
        _emit 0xc3
    }
}
