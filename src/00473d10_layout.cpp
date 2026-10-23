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

extern unsigned char DAT_004e2b30[120];
extern const unsigned char PTR_FUN_004c655c[4];













// FUNCTION: PORT1111 0x00473d10
__declspec(naked) int __fastcall FUN_00473d10(void *pthis,short param_1,int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x66
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x66
        _emit 0x3b
        _emit 0x5e
        _emit 0x18
        _emit 0x75
        _emit 0x07
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x3b
        _emit 0xc1
        _emit 0x57
        _emit 0x74
        _emit 0x10
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x66
        _emit 0x39
        _emit 0x59
        _emit 0x2c
        _emit 0x74
        _emit 0x33
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
        _emit 0x46
        _emit 0x08
        _emit 0x75
        _emit 0xf0
        _emit 0x33
        _emit 0xff
        _emit 0x8b
        _emit 0x4e
        _emit 0x14
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        call FUN_00471e90
        _emit 0x8b
        _emit 0xcf
        call FUN_00471e40
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x1d
        _emit 0x8b
        _emit 0x47
        _emit 0x30
        _emit 0xf6
        _emit 0xc4
        _emit 0x10
        _emit 0x6a
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0x4f
        _emit 0x38
        _emit 0xeb
        _emit 0x09
        _emit 0x8b
        _emit 0xf9
        _emit 0xeb
        _emit 0xd2
        mov ecx, OFFSET DAT_004e2b30
        call FUN_00488a60
        _emit 0x89
        _emit 0x7e
        _emit 0x14
        _emit 0x5f
        _emit 0x66
        _emit 0x89
        _emit 0x5e
        _emit 0x18
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00473d8c
__declspec(naked) void gap_00473d8c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
