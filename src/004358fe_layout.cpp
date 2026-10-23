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

extern unsigned char DAT_004d6a90[];
extern unsigned char DAT_004d6a94[];
extern const unsigned char PTR_FUN_004bc804[20];
extern const unsigned char PTR_FUN_004bfda0[24];
extern unsigned char DAT_004e2b14[12];











// GAP: PORT1111 0x004358fe
__declspec(naked) void gap_004358fe(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00435900
__declspec(naked) unsigned int FUN_00435900(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xe9
        _emit 0x33
        _emit 0xff
        mov esi, OFFSET DAT_004d6a90
        _emit 0x83
        _emit 0x3e
        _emit 0x00
        _emit 0x74
        _emit 0x32
        _emit 0x8b
        _emit 0x46
        _emit 0xf8
        _emit 0x50
        _emit 0x8d
        _emit 0x4b
        _emit 0x04
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x06
        _emit 0x47
        _emit 0x83
        _emit 0xc6
        _emit 0x18
        _emit 0xeb
        _emit 0xe5
        _emit 0x8d
        _emit 0x04
        _emit 0x7f
        _emit 0xc1
        _emit 0xe0
        _emit 0x03
        mov ecx, dword ptr [eax + DAT_004d6a94]
        _emit 0x53
        _emit 0x03
        _emit 0xcd
        _emit 0xff
        _emit 0x90
        _emit 0x90
        _emit 0x6a
        _emit 0x4d
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x32
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00435951
__declspec(naked) void gap_00435951(void)
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00435960
__declspec(naked) int * __fastcall FUN_00435960(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x4e
        _emit 0x04
        mov dword ptr [esi], OFFSET PTR_FUN_004bc804
        call FUN_00465cf0
        mov dword ptr [esi], OFFSET PTR_FUN_004bfda0
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0043597b
__declspec(naked) void gap_0043597b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
