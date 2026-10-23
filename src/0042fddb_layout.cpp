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

extern int DAT_004be64c;
extern int DAT_004bfa58;
extern void * DAT_004e240c;











// GAP: PORT1111 0x0042fddb
__declspec(naked) void gap_0042fddb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042fde0
__declspec(naked) int * __fastcall FUN_0042fde0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b73eb
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
        _emit 0x57
        _emit 0x6a
        _emit 0x44
        _emit 0x8b
        _emit 0xf9
        call pt_a_00496fa4
        _emit 0x8b
        _emit 0xf0
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x33
        _emit 0xc0
        _emit 0x3b
        _emit 0xf0
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x28
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_0040a4f0
        mov dword ptr [esi], OFFSET DAT_004be64c
        _emit 0x8b
        _emit 0x47
        _emit 0x34
        _emit 0x89
        _emit 0x46
        _emit 0x34
        _emit 0x8b
        _emit 0x4f
        _emit 0x38
        _emit 0x89
        _emit 0x4e
        _emit 0x38
        _emit 0x8b
        _emit 0x57
        _emit 0x3c
        _emit 0x89
        _emit 0x56
        _emit 0x3c
        mov dword ptr [esi], OFFSET DAT_004bfa58
        _emit 0x8b
        _emit 0xc6
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


// GAP: PORT1111 0x0042fe4d
__declspec(naked) void gap_0042fe4d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
