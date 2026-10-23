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

extern int DAT_004c4680;
extern unsigned char DAT_004e278c[16];
extern unsigned char DAT_004e2418[4];
extern void * DAT_004e2410;
extern void * DAT_004e240c;
extern int DAT_004e2404;
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e26c8[4];
extern unsigned char DAT_004e26cc[4];
extern unsigned char DAT_004e26d0[4];
extern unsigned char DAT_004e26d4[4];
extern volatile int DAT_004e2c34;
extern volatile int DAT_004e2c30;
extern const unsigned char PTR_PtInRect_004bc2e4[4];
extern unsigned char DAT_004e2afc[4];
extern const unsigned char DAT_004bf69c[4];
extern const unsigned char PTR_FUN_004c4690[4];
extern const unsigned char DAT_004bd2c8[1];




// FUNCTION: PORT1111 0x00454690
__declspec(naked) void __fastcall FUN_00454690(int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x86
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x74
        _emit 0x51
        _emit 0x8b
        _emit 0x86
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8e
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        call FUN_00403d10
        _emit 0x8b
        _emit 0xae
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x96
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0xbe
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x6a
        _emit 0x03
        _emit 0x55
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x8b
        _emit 0xec
        _emit 0x89
        _emit 0x55
        _emit 0x00
        _emit 0x89
        _emit 0x7d
        _emit 0x04
        _emit 0x89
        _emit 0x4d
        _emit 0x08
        _emit 0x8b
        _emit 0x8e
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x45
        _emit 0x0c
        call FUN_00454140
        _emit 0x5f
        _emit 0xc7
        _emit 0x86
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x5d
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}
