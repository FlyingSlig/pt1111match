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













// GAP: PORT1111 0x00455bc1
__declspec(naked) void gap_00455bc1(void)
{
    __asm {
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x1f
        _emit 0x5b
        _emit 0x45
        _emit 0x00
        _emit 0xe7
        _emit 0x59
        _emit 0x45
        _emit 0x00
        _emit 0xc7
        _emit 0x59
        _emit 0x45
        _emit 0x00
        _emit 0xaf
        _emit 0x5a
        _emit 0x45
        _emit 0x00
        _emit 0x12
        _emit 0x59
        _emit 0x45
        _emit 0x00
        _emit 0xb3
        _emit 0x57
        _emit 0x45
        _emit 0x00
        _emit 0x38
        _emit 0x58
        _emit 0x45
        _emit 0x00
        _emit 0xac
        _emit 0x5b
        _emit 0x45
        _emit 0x00
        _emit 0x00
        _emit 0x07
        _emit 0x01
        _emit 0x02
        _emit 0x07
        _emit 0x03
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x05
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x06
        _emit 0x04
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x58
        _emit 0x45
        _emit 0x00
        _emit 0x9c
        _emit 0x58
        _emit 0x45
        _emit 0x00
        _emit 0xad
        _emit 0x58
        _emit 0x45
        _emit 0x00
        _emit 0xbe
        _emit 0x58
        _emit 0x45
        _emit 0x00
        _emit 0x79
        _emit 0x59
        _emit 0x45
        _emit 0x00
        _emit 0x86
        _emit 0x59
        _emit 0x45
        _emit 0x00
        _emit 0x93
        _emit 0x59
        _emit 0x45
        _emit 0x00
        _emit 0xa0
        _emit 0x59
        _emit 0x45
        _emit 0x00
        _emit 0xad
        _emit 0x59
        _emit 0x45
        _emit 0x00
        _emit 0xc1
        _emit 0x59
        _emit 0x45
        _emit 0x00
        _emit 0xc1
        _emit 0x59
        _emit 0x45
        _emit 0x00
        _emit 0xc1
        _emit 0x59
        _emit 0x45
        _emit 0x00
        _emit 0xc1
        _emit 0x59
        _emit 0x45
        _emit 0x00
        _emit 0xc1
        _emit 0x59
        _emit 0x45
        _emit 0x00
        _emit 0xba
        _emit 0x59
        _emit 0x45
        _emit 0x00
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
