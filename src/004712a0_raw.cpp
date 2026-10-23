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

extern unsigned char DAT_004e2c40[4];
extern const unsigned char PTR_FUN_004c6408[168];
extern unsigned char DAT_004e2b30[120];
extern const unsigned char PTR_UnionRect_004bc304[4];
extern int DAT_004bc2f4;
extern const unsigned char DAT_004bd578[8];
extern unsigned char DAT_004dd970[4];
extern unsigned char DAT_004e2b28[1];




// FUNCTION: PORT1111 0x004712a0
__declspec(naked) int * __fastcall FUN_004712a0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xf8
        _emit 0x05
        _emit 0x56
        _emit 0x77
        _emit 0x58
        jmp dword ptr [eax*4 + gap_00471308]
        _emit 0x8d
        _emit 0xb1
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x26
        _emit 0x8d
        _emit 0xb1
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x1e
        _emit 0x8d
        _emit 0xb1
        _emit 0xb8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x16
        _emit 0x8d
        _emit 0xb1
        _emit 0xbc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x0e
        _emit 0x8d
        _emit 0xb1
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x06
        _emit 0x8d
        _emit 0xb1
        _emit 0xc4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x0e
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x17
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x54
        _emit 0x8b
        _emit 0x0e
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0xc7
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
