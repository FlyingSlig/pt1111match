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

extern const unsigned char PTR_FUN_004be8e0[4];
extern void * DAT_004e240c;
extern unsigned char DAT_004e279c[48];
extern const unsigned char PTR_FUN_004be8e4[44];













// GAP: PORT1111 0x00410fe3
__declspec(naked) void gap_00410fe3(void)
{
    __asm {
        _emit 0x8b
        _emit 0x4d
        _emit 0xf4
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
    }
}

// GAP: PORT1111 0x00410fef
__declspec(naked) void gap_00410fef(void)
{
    __asm {
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc2
        _emit 0x08
        _emit 0x00
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

// FUNCTION: PORT1111 0x00411000
__declspec(naked) void __fastcall FUN_00411000(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x48
        _emit 0x30
        _emit 0x8b
        _emit 0x40
        _emit 0x34
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_00410f20
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0xc7
        _emit 0x40
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x08
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        _emit 0xff
        _emit 0x62
        _emit 0x24
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041102d
__declspec(naked) void gap_0041102d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00411030
__declspec(naked) int * __fastcall FUN_00411030(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6053
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
        call FUN_00411b60
        _emit 0x33
        _emit 0xff
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        mov dword ptr [esi], OFFSET PTR_FUN_004be8e4
        call FUN_0047b1c0
        _emit 0x89
        _emit 0x7e
        _emit 0x3c
        _emit 0x89
        _emit 0x7e
        _emit 0x40
        _emit 0x89
        _emit 0x7e
        _emit 0x44
        _emit 0x33
        _emit 0xc0
        _emit 0x8d
        _emit 0x4e
        _emit 0x48
        _emit 0x89
        _emit 0x01
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x7e
        _emit 0x54
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
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

// GAP: PORT1111 0x00411093
__declspec(naked) void gap_00411093(void)
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
