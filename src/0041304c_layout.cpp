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


// GAP: PORT1111 0x0041304c
__declspec(naked) void gap_0041304c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00413050
__declspec(naked) void __fastcall FUN_00413050(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x01
        _emit 0x8a
        _emit 0x50
        _emit 0x15
        _emit 0x84
        _emit 0xd2
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x89
        _emit 0x01
        _emit 0xc3
        _emit 0x8b
        _emit 0x10
        _emit 0x53
        _emit 0x8a
        _emit 0x5a
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x1a
        _emit 0x8b
        _emit 0x42
        _emit 0x08
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x0c
        _emit 0x8b
        _emit 0xd0
        _emit 0x8b
        _emit 0x42
        _emit 0x08
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x74
        _emit 0xf4
        _emit 0x89
        _emit 0x11
        _emit 0x5b
        _emit 0xc3
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8a
        _emit 0x50
        _emit 0x15
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0x1e
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x11
        _emit 0x3b
        _emit 0x10
        _emit 0x75
        _emit 0x0c
        _emit 0x89
        _emit 0x01
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8a
        _emit 0x50
        _emit 0x15
        _emit 0x84
        _emit 0xd2
        _emit 0x74
        _emit 0xee
        _emit 0x8a
        _emit 0x50
        _emit 0x15
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0x02
        _emit 0x89
        _emit 0x01
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004130ad
__declspec(naked) void gap_004130ad(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x83
        _emit 0xe9
        _emit 0x14
        jmp pt_a_004130c0
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
