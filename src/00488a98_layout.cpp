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

extern const unsigned char PTR_FUN_004c6bf8[8];
extern const unsigned char PTR_PeekMessageA_004bc324[4];











// GAP: PORT1111 0x00488a98
__declspec(naked) void gap_00488a98(void)
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

// FUNCTION: PORT1111 0x00488aa0
__declspec(naked) void __fastcall FUN_00488aa0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8d
        _emit 0x71
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_004963d0
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        _emit 0x8b
        _emit 0x17
        _emit 0x57
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00488acf
__declspec(naked) void gap_00488acf(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00488ad0
__declspec(naked) void __fastcall FUN_00488ad0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba9d6
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        mov dword ptr [esi], OFFSET PTR_FUN_004c6bf8
        _emit 0x8d
        _emit 0x7e
        _emit 0x08
        _emit 0x8b
        _emit 0xcf
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004963d0
        _emit 0x8d
        _emit 0x4e
        _emit 0x68
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        call FUN_00465e40
        _emit 0x8b
        _emit 0xcf
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_004966e0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00488b33
__declspec(naked) void gap_00488b33(void)
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
    }
}
