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













// GAP: PORT1111 0x00455724
__declspec(naked) void gap_00455724(void)
{
    __asm {
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x1c
        _emit 0xc3
        _emit 0x90
        _emit 0xb1
        _emit 0x54
        _emit 0x45
        _emit 0x00
        _emit 0x5a
        _emit 0x55
        _emit 0x45
        _emit 0x00
        _emit 0xff
        _emit 0x54
        _emit 0x45
        _emit 0x00
        _emit 0x2e
        _emit 0x55
        _emit 0x45
        _emit 0x00
        _emit 0x8d
        _emit 0x55
        _emit 0x45
        _emit 0x00
        _emit 0xbd
        _emit 0x55
        _emit 0x45
        _emit 0x00
        _emit 0xec
        _emit 0x55
        _emit 0x45
        _emit 0x00
        _emit 0x1e
        _emit 0x56
        _emit 0x45
        _emit 0x00
        _emit 0x4e
        _emit 0x56
        _emit 0x45
        _emit 0x00
        _emit 0x00
        _emit 0x08
        _emit 0x01
        _emit 0x08
        _emit 0x08
        _emit 0x02
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x08
        _emit 0x03
        _emit 0x04
        _emit 0x05
        _emit 0x06
        _emit 0x07
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
