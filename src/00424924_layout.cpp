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

extern const unsigned char PTR_FUN_004bf794[];
extern int DAT_004bf810;











// GAP: PORT1111 0x00424924
__declspec(naked) void gap_00424924(void)
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
    }
}

// FUNCTION: PORT1111 0x00424930
__declspec(naked) int * __fastcall FUN_00424930(void *pthis,unsigned char param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xc7
        mov dword ptr [esi], OFFSET PTR_FUN_004bf794
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x01
        _emit 0x89
        _emit 0x7e
        _emit 0x18
        _emit 0x89
        _emit 0x7e
        _emit 0x14
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        _emit 0x89
        _emit 0x7e
        _emit 0x10
        _emit 0x74
        _emit 0x09
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x5f
    }
}


// GAP: PORT1111 0x00424969
__declspec(naked) void gap_00424969(void)
{
    __asm {
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
    }
}
