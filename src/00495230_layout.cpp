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

extern const unsigned char PTR_FUN_004c6de0[];












// FUNCTION: PORT1111 0x00495230
__declspec(naked) void __fastcall FUN_00495230(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x33
        _emit 0xc9
        mov dword ptr [eax], OFFSET PTR_FUN_004c6de0
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x0c
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0xc7
        _emit 0x40
        _emit 0x18
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x1c
        _emit 0x89
        _emit 0x48
        _emit 0x20
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00495254
__declspec(naked) void gap_00495254(void)
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
