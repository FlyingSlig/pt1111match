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












// GAP: PORT1111 0x0046b18b
__declspec(naked) void gap_0046b18b(void)
{
    __asm {
        _emit 0x90
        _emit 0x6a
        _emit 0xb1
        _emit 0x46
        _emit 0x00
        _emit 0x70
        _emit 0xb1
        _emit 0x46
        _emit 0x00
        _emit 0x76
        _emit 0xb1
        _emit 0x46
        _emit 0x00
        _emit 0x7c
        _emit 0xb1
        _emit 0x46
        _emit 0x00
        _emit 0x82
        _emit 0xb1
        _emit 0x46
        _emit 0x00
        _emit 0x88
        _emit 0xb1
        _emit 0x46
        _emit 0x00
        _emit 0x00
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x01
        _emit 0x02
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x03
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x04
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
