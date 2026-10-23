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


// GAP: PORT1111 0x00475997
__declspec(naked) void gap_00475997(void)
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
    }
}

// FUNCTION: PORT1111 0x004759a0
__declspec(naked) void FUN_004759a0(void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x8a
        _emit 0x47
        _emit 0x2d
        _emit 0x84
        _emit 0xc0
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0xf7
        _emit 0x75
        _emit 0x26
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x50
        _emit 0x8b
        _emit 0xcb
        _emit 0xe8
        _emit 0xe3
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x36
        _emit 0x8b
        _emit 0xcf
        call FUN_00436d80
        _emit 0x57
        call pt_a_004978fd
        _emit 0x8a
        _emit 0x46
        _emit 0x2d
        _emit 0x83
        _emit 0xc4
        _emit 0x04
    }
}

// GAP: PORT1111 0x004759d2
__declspec(naked) void gap_004759d2(void)
{
    __asm {
        _emit 0x84
        _emit 0xc0
        _emit 0x8b
        _emit 0xfe
        _emit 0x74
        _emit 0xda
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
    }
}
