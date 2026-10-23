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

extern const unsigned char PTR_FUN_004bd570[8];











// GAP: PORT1111 0x0040b52d
__declspec(naked) void gap_0040b52d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040b530
__declspec(naked) void __fastcall FUN_0040b530(int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x0c
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x74
        _emit 0x55
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x35
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x56
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0xeb
        _emit 0x26
        call FUN_0040a6a0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        call FUN_0040abe0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        call pt_a_00413730
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0xeb
        _emit 0x14
        _emit 0x56
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x8d
        _emit 0x4f
        _emit 0x04
        call pt_a_0040b000
        _emit 0x8b
        _emit 0x30
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0x77
        _emit 0x08
        _emit 0x75
        _emit 0xab
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0040b59f
__declspec(naked) void gap_0040b59f(void)
{
    __asm {
        _emit 0xcc
    }
}
