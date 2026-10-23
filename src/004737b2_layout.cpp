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













// GAP: PORT1111 0x004737b2
__declspec(naked) void gap_004737b2(void)
{
    __asm {
        _emit 0x8b
        _emit 0xff
        _emit 0x6a
        _emit 0x36
        _emit 0x47
        _emit 0x00
        _emit 0x3e
        _emit 0x37
        _emit 0x47
        _emit 0x00
        _emit 0xa0
        _emit 0x36
        _emit 0x47
        _emit 0x00
        _emit 0x70
        _emit 0x37
        _emit 0x47
        _emit 0x00
        _emit 0xd6
        _emit 0x36
        _emit 0x47
        _emit 0x00
        _emit 0x0c
        _emit 0x37
        _emit 0x47
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004737d0
__declspec(naked) void __fastcall FUN_004737d0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x74
        _emit 0x29
        _emit 0x56
        _emit 0x8d
        _emit 0xb7
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00466a40
        _emit 0x8b
        _emit 0xce
        call FUN_00466b70
        _emit 0x8b
        _emit 0xce
        call FUN_00465d10
        _emit 0x5e
        _emit 0x8b
        _emit 0xcf
        call FUN_00473200
        _emit 0x5f
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8d
        _emit 0x8f
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465e40
        _emit 0x8b
        _emit 0xcf
        call FUN_00473200
        _emit 0x5f
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047381a
__declspec(naked) void gap_0047381a(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
