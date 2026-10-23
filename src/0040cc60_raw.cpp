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

extern void * DAT_004e240c;
extern unsigned char DAT_004d5474[];
extern const unsigned char PTR_FUN_004bd60c[4];





// FUNCTION: PORT1111 0x0040cc60
__declspec(naked) int __fastcall FUN_0040cc60(void *pthis,int param_1)
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
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x4a
        _emit 0x08
        _emit 0x49
        _emit 0x83
        _emit 0xf9
        _emit 0x09
        _emit 0x77
        _emit 0x2e
        movzx ecx, byte ptr [ecx + gap_0040ccb2 + 14]
        jmp dword ptr [ecx*4 + gap_0040ccb2 + 2]
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x57
        mov edi, dword ptr [eax*4 + DAT_004d5474]
        _emit 0x57
        call FUN_0040d580
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
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_00407600
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
