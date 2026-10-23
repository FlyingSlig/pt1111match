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

extern int DAT_004be510;
extern int DAT_004be4e4;
extern void * DAT_004e240c;





// FUNCTION: PORT1111 0x0040e360
__declspec(naked) int __fastcall FUN_0040e360(void *pthis,int param_1)
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
        _emit 0x0b
        _emit 0x77
        _emit 0x4f
        movzx ecx, byte ptr [ecx + gap_0040e3d3 + 13]
        jmp dword ptr [ecx*4 + gap_0040e3d3 + 1]
        _emit 0x8d
        _emit 0x48
        _emit 0xff
        _emit 0x83
        _emit 0xf9
        _emit 0x03
        _emit 0x77
        _emit 0x41
        jmp dword ptr [ecx*4 + gap_0040e3d3 + 25]
        _emit 0xb8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x56
        _emit 0x34
        _emit 0x8b
        _emit 0xb2
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xf6
        _emit 0x0f
        _emit 0x95
        _emit 0xc0
        _emit 0x5e
        _emit 0x83
        _emit 0xc0
        _emit 0x03
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xb8
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xb8
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
