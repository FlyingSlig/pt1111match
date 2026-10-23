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

extern unsigned char PTR_DAT_004dd95c[4];
extern unsigned char DAT_004ddb0c[12];
extern const unsigned char PTR_FUN_004c5e58[140];














// FUNCTION: PORT1111 0x00466bc0
__declspec(naked) int * __fastcall FUN_00466bc0(void *pthis,unsigned int param_1,unsigned int param_2)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0xc2
        _emit 0x8d
        _emit 0x70
        _emit 0x01
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc6
        mov esi, dword ptr [PTR_DAT_004dd95c]
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x74
        _emit 0x56
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x18
        _emit 0x3b
        _emit 0xeb
        _emit 0x77
        _emit 0x46
        _emit 0x3b
        _emit 0xd8
        _emit 0x73
        _emit 0x42
        _emit 0x52
        call _strdup
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xf0
        _emit 0x6a
        _emit 0xff
        _emit 0x56
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0xc6
        _emit 0x04
        _emit 0x2e
        _emit 0x00
        call FUN_00466160
        _emit 0x8b
        _emit 0x07
        _emit 0x8d
        _emit 0x4c
        _emit 0x18
        _emit 0x01
        _emit 0x51
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call FUN_00466040
        _emit 0x56
        call free
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x6a
        _emit 0xff
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_00466160
        _emit 0x5d
        _emit 0x5b
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x11
        _emit 0x3b
        _emit 0x35
        _emit 0x5c
        _emit 0xd9
        _emit 0x4d
    }
}
