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

extern const unsigned char PTR_FUN_004c3a30[192];





// FUNCTION: PORT1111 0x004460b0
__declspec(naked) bool __fastcall FUN_004460b0(void *pthis,unsigned short param_1,unsigned short param_2)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8d
        _emit 0x7e
        _emit 0x4c
        _emit 0x53
        _emit 0x8b
        _emit 0xcf
        call FUN_0044a7e0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x26
        _emit 0x0f
        _emit 0xb7
        _emit 0xc3
        _emit 0x8d
        _emit 0x48
        _emit 0xff
        _emit 0x83
        _emit 0xf9
        _emit 0x04
        _emit 0x77
        _emit 0x2f
        jmp dword ptr [ecx*4 + gap_0044612c]
        _emit 0x89
        _emit 0x46
        _emit 0x48
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        call FUN_0044a700
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        call FUN_0044a6c0
        _emit 0xeb
        _emit 0x07
        _emit 0x8b
        _emit 0xcf
        call FUN_0044a700
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x52
        _emit 0x50
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_00480c10
        _emit 0xf7
        _emit 0xd8
        _emit 0x5f
        _emit 0x1b
        _emit 0xc0
        _emit 0x5e
        _emit 0xf7
        _emit 0xd8
        _emit 0x5b
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}
