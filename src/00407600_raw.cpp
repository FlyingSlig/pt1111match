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

extern unsigned char DAT_004e2683[];
extern "C" void free_thunk(void *);
extern unsigned char DAT_004e2408[4];
extern void * DAT_004e240c;





// FUNCTION: PORT1111 0x00407600
__declspec(naked) int __fastcall FUN_00407600(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        call FUN_0047fd20
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x49
        _emit 0x08
        _emit 0x49
        _emit 0x83
        _emit 0xf9
        _emit 0x13
        _emit 0x77
        _emit 0x73
        movzx edx, byte ptr [ecx + gap_0040768f + 13]
        jmp dword ptr [edx*4 + gap_0040768f + 1]
        _emit 0x8d
        _emit 0x48
        _emit 0xff
        _emit 0x83
        _emit 0xf9
        _emit 0x03
        _emit 0x57
        _emit 0x77
        _emit 0x5b
        jmp dword ptr [ecx*4 + gap_0040768f + 33]
        _emit 0xbf
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_004072a0
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xbf
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_004074c0
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        call FUN_004056a0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x1d
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x50
        call FUN_00405de0
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_004072a0
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xbf
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_004072a0
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
