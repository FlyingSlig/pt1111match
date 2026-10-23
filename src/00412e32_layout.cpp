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

extern unsigned char DAT_004e2424[4];











// GAP: PORT1111 0x00412e32
__declspec(naked) void gap_00412e32(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00412e40
__declspec(naked) void __fastcall FUN_00412e40(void *pthis,void *param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x74
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x11
        _emit 0x56
        _emit 0x8b
        _emit 0x70
        _emit 0x04
        _emit 0x8b
        _emit 0x00
        _emit 0x56
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x20
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x81
        _emit 0xc1
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        jmp FUN_00454690
    }
}


// GAP: PORT1111 0x00412e6e
__declspec(naked) void gap_00412e6e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}
