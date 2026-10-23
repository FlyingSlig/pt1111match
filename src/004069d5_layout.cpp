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

extern int DAT_004bcc58;
extern int DAT_004bcc2c;











// GAP: PORT1111 0x004069d5
__declspec(naked) void gap_004069d5(void)
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

// FUNCTION: PORT1111 0x004069e0
__declspec(naked) int * __fastcall FUN_004069e0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x68
        _emit 0x10
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_00408ae0
        mov dword ptr [esi], OFFSET DAT_004bcc58
        mov dword ptr [esi + 0x14], OFFSET DAT_004bcc2c
        _emit 0xc7
        _emit 0x86
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00406a0f
__declspec(naked) void gap_00406a0f(void)
{
    __asm {
        _emit 0xcc
    }
}
