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

extern int DAT_004bfca0;
extern unsigned char DAT_004e26f0[4];
extern unsigned char DAT_004e2420[4];
extern int DAT_004e2404;











// GAP: PORT1111 0x004332eb
__declspec(naked) void gap_004332eb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004332f0
__declspec(naked) int * __fastcall FUN_004332f0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b779b
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
        _emit 0x38
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
        _emit 0x10
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_0040a4f0
        mov dword ptr [esi], OFFSET DAT_004bfca0
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


// GAP: PORT1111 0x00433345
__declspec(naked) void gap_00433345(void)
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
    }
}
