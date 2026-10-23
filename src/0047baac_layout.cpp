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

extern const unsigned char PTR_FUN_004c6680[];











// GAP: PORT1111 0x0047baac
__declspec(naked) void gap_0047baac(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047bab0
__declspec(naked) void __fastcall FUN_0047bab0(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        mov dword ptr [ecx], OFFSET PTR_FUN_004c6680
        _emit 0x74
        _emit 0x0f
        _emit 0xff
        _emit 0x48
        _emit 0x14
        _emit 0x75
        _emit 0x0a
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x50
        call pt_a_004978fd
        _emit 0x59
    }
}

// GAP: PORT1111 0x0047bacc
__declspec(naked) void gap_0047bacc(void)
{
    __asm {
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
