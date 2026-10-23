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




// FUNCTION: PORT1111 0x0046c280
__declspec(naked) void __fastcall FUN_0046c280(void *pthis,unsigned int param_1,void *param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x83
        _emit 0x7e
        _emit 0x04
        _emit 0x02
        _emit 0x74
        _emit 0x5f
        _emit 0x8b
        _emit 0x06
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x0f
        _emit 0xb6
        _emit 0xc0
        _emit 0x83
        _emit 0xc0
        _emit 0xf8
        _emit 0x83
        _emit 0xf8
        _emit 0x18
        _emit 0x77
        _emit 0x4f
        movzx ecx, byte ptr [eax + gap_0046c2ec + 20]
        jmp dword ptr [ecx*4 + gap_0046c2ec]
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_0046beb0
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_0046bef0
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_0046c170
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0046c080
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}
