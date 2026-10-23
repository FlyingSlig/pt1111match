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

extern const unsigned char PTR_FUN_004bf440[184];











// GAP: PORT1111 0x0041b82a
__declspec(naked) void gap_0041b82a(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x49
        _emit 0x44
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x10
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

// FUNCTION: PORT1111 0x0041b840
__declspec(naked) void __fastcall FUN_0041b840(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0041eca0
        _emit 0x8b
        _emit 0x46
        _emit 0x48
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x01
        _emit 0x5e
        _emit 0xff
        _emit 0x60
        _emit 0x0c
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0041b859
__declspec(naked) void gap_0041b859(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
