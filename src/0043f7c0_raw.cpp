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

extern int DAT_004c3738;
extern void * DAT_004e240c;
extern unsigned char DAT_004e26fc[4];
extern unsigned char DAT_004e2408[4];
extern int DAT_004e2404;
extern const unsigned char PTR_FUN_004c373c[4];
extern unsigned char DAT_004e26f0[4];




// FUNCTION: PORT1111 0x0043f7c0
__declspec(naked) int __fastcall FUN_0043f7c0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x34
        mov edx, dword ptr [DAT_004e26fc]
        _emit 0x33
        _emit 0xc9
        _emit 0x3b
        _emit 0xc2
        _emit 0x0f
        _emit 0x94
        _emit 0xc1
        _emit 0x51
        _emit 0x6a
        _emit 0x05
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_0043f590
        _emit 0x85
        _emit 0xc0
        _emit 0x5f
        _emit 0x5e
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
