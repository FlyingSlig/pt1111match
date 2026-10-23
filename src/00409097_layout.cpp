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

extern int DAT_004bd0a8;
extern int DAT_004bd0f0;
extern int DAT_004bd0c8;











// GAP: PORT1111 0x00409097
__declspec(naked) void gap_00409097(void)
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

// FUNCTION: PORT1111 0x004090a0
__declspec(naked) void __fastcall FUN_004090a0(void *pthis,int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x51
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x0c
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}


// GAP: PORT1111 0x004090b8
__declspec(naked) void gap_004090b8(void)
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
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x01
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov dword ptr [esi], OFFSET DAT_004bd0a8
        _emit 0x74
        _emit 0x09
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004090e0
__declspec(naked) int * __fastcall FUN_004090e0(void *pthis,int param_1,unsigned int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_00408ae0
        mov dword ptr [esi], OFFSET DAT_004bd0f0
        mov dword ptr [esi + 0x14], OFFSET DAT_004bd0c8
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00409107
__declspec(naked) void gap_00409107(void)
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
