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

extern unsigned char DAT_004e2b14[];
extern void * DAT_004e240c;
extern const unsigned char DAT_004c4654[4];
extern unsigned char DAT_004e2810[4];
extern unsigned char DAT_004e2814[4];
extern const unsigned char DAT_004bd2c8[1];
extern int DAT_004c4658;





// FUNCTION: PORT1111 0x004531e0
__declspec(naked) void __fastcall FUN_004531e0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x86
        _emit 0x4c
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x07
        call FUN_00453150
        _emit 0xeb
        _emit 0x26
        _emit 0x8b
        _emit 0x86
        _emit 0x50
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0b
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00452c30
        _emit 0xeb
        _emit 0x11
        _emit 0x8b
        _emit 0x86
        _emit 0x54
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0xce
        call FUN_00452ad0
        _emit 0xc7
        _emit 0x86
        _emit 0x54
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x86
        _emit 0x4c
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x86
        _emit 0x50
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}
