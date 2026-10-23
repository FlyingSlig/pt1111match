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

extern const unsigned char s_StateIcons_png_004c4698[];
extern const unsigned char s_BtIcons_bmp_004c46a8[];
extern unsigned char DAT_004e2814[];
extern unsigned char DAT_004e281c[];
extern unsigned char DAT_004e2a84[];
extern unsigned char DAT_004e2810[4];
extern const unsigned char DAT_004bd2c8[1];
extern unsigned char DAT_004e2b14[12];
extern unsigned char PTR_PTR_004dd9e8[48];
extern void * DAT_004e240c;
extern unsigned char DAT_004e26fc[4];
extern const unsigned char s__s_Custo__d_004c46b4[16];
extern unsigned char DAT_004e26f0[4];
extern unsigned char DAT_004e2444[4];
extern unsigned char DAT_004e2430[8];





// FUNCTION: PORT1111 0x004565e0
__declspec(naked) int __fastcall FUN_004565e0(void *pthis,unsigned int param_1,short param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x81
        _emit 0xa0
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x66
        _emit 0x3b
        _emit 0x50
        _emit 0x1c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x75
        _emit 0x26
        _emit 0x66
        _emit 0x3d
        _emit 0x0b
        _emit 0x00
        _emit 0x72
        _emit 0x1a
        _emit 0x66
        _emit 0x3d
        _emit 0x1c
        _emit 0x00
        _emit 0x77
        _emit 0x14
        _emit 0x0f
        _emit 0xb7
        _emit 0xd0
        _emit 0x83
        _emit 0xea
        _emit 0x0b
        _emit 0x52
        call FUN_00455d20
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x66
        _emit 0x3d
        _emit 0x03
        _emit 0x00
        _emit 0x74
        _emit 0xf2
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xc1
        _emit 0x18
        jmp FUN_004526e0
    }
}
