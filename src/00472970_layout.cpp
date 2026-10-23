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

extern unsigned char DAT_004e2b2c[4];
extern unsigned char DAT_004e2b14[12];












// FUNCTION: PORT1111 0x00472970
__declspec(naked) int __fastcall FUN_00472970(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x33
        _emit 0xc0
        _emit 0x3b
        _emit 0xc8
        _emit 0x74
        _emit 0x07
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
        _emit 0x39
        _emit 0x46
        _emit 0x1c
        _emit 0x89
        _emit 0x46
        _emit 0x3c
        _emit 0x89
        _emit 0x46
        _emit 0x40
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x0c
        _emit 0x8b
        _emit 0x06
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8e
        _emit 0xac
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x96
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_00470cb0
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004729b8
__declspec(naked) void gap_004729b8(void)
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
    }
}
