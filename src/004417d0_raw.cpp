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




// FUNCTION: PORT1111 0x004417d0
__declspec(naked) unsigned int FUN_004417d0(int param_1,int param_2,unsigned char param_3)
{
    __asm {
        _emit 0x0f
        _emit 0xbe
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x83
        _emit 0xf8
        _emit 0x05
        _emit 0x77
        _emit 0x61
        jmp dword ptr [eax*4 + gap_00441869 + 3]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x33
        _emit 0xc0
        _emit 0x3b
        _emit 0xca
        _emit 0x0f
        _emit 0x94
        _emit 0xc0
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x52
        _emit 0x50
        call FUN_00441430
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0xc2
        _emit 0x74
        _emit 0x2a
        _emit 0x52
        _emit 0x50
        call FUN_00441430
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x1f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0xc2
        _emit 0x74
        _emit 0xec
        _emit 0x52
        _emit 0x50
        call FUN_00441430
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0xe1
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x52
        _emit 0x50
        call FUN_00441430
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x40
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x33
        _emit 0xc0
        _emit 0x3b
        _emit 0xca
        _emit 0x0f
        _emit 0x95
        _emit 0xc0
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}
