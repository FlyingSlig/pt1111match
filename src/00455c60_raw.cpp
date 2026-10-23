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





// FUNCTION: PORT1111 0x00455c60
__declspec(naked) int __fastcall FUN_00455c60(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x86
        _emit 0xa0
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xff
        _emit 0x8d
        _emit 0x9e
        _emit 0xa4
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x07
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4f
        _emit 0x0b
        _emit 0x51
        _emit 0x8b
        _emit 0x8e
        _emit 0xa0
        _emit 0x08
        _emit 0x00
        _emit 0x00
        call FUN_0047d0a0
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x43
        _emit 0x04
        _emit 0x74
        _emit 0x69
        _emit 0xc7
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x47
        _emit 0x83
        _emit 0xc3
        _emit 0x08
        _emit 0x83
        _emit 0xff
        _emit 0x12
        _emit 0x7c
        _emit 0xdb
        _emit 0x8b
        _emit 0x96
        _emit 0xa0
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x8d
        _emit 0x4e
        _emit 0x18
        call FUN_004525c0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x47
        _emit 0x8b
        _emit 0x8e
        _emit 0xa0
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x2e
        _emit 0x8d
        _emit 0x46
        _emit 0x04
        _emit 0x50
        call FUN_0047d610
        _emit 0x8b
        _emit 0x8e
        _emit 0xa0
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x38
        call FUN_0047d060
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x74
        _emit 0x22
        push OFFSET DAT_004bd2c8
        _emit 0x8b
        _emit 0xc8
        call FUN_004737d0
        _emit 0x8b
        _emit 0x8e
        _emit 0xa0
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x8d
        _emit 0x8e
        _emit 0x88
        _emit 0x08
        _emit 0x00
        _emit 0x00
        call FUN_00453270
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00455220
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
    }
}
