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

extern const unsigned char PTR_LAB_004c68f0[];
extern const unsigned char DAT_004bd578[8];
extern const unsigned char PTR_FUN_004c6908[8];




// FUNCTION: PORT1111 0x004818b0
__declspec(naked) void __fastcall FUN_004818b0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x83
        _emit 0xc0
        _emit 0xdf
        _emit 0x83
        _emit 0xf8
        _emit 0x07
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8b
        _emit 0x7e
        _emit 0x2c
        _emit 0x77
        _emit 0x2a
        jmp dword ptr [eax*4 + gap_00481901 + 3]
        _emit 0x6a
        _emit 0x01
        _emit 0xeb
        _emit 0x18
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        call FUN_00481540
        _emit 0xeb
        _emit 0x14
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00481540
        _emit 0xeb
        _emit 0x09
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00481600
        _emit 0x39
        _emit 0x7e
        _emit 0x2c
        _emit 0x74
        _emit 0x0a
        _emit 0xc7
        _emit 0x86
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
