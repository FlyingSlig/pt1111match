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


// GAP: PORT1111 0x0047fcd4
__declspec(naked) void gap_0047fcd4(void)
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

// FUNCTION: PORT1111 0x0047fce0
__declspec(naked) void __fastcall FUN_0047fce0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0e
        _emit 0x50
        call dword ptr [CloseHandle]
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047fcfa
__declspec(naked) void gap_0047fcfa(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047fd00
__declspec(naked) bool __fastcall FUN_0047fd00(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x01
        _emit 0xc3
        _emit 0x50
        call dword ptr [ResumeThread]
        _emit 0x33
        _emit 0xc9
        _emit 0x83
        _emit 0xf8
        _emit 0xff
        _emit 0x0f
        _emit 0x95
        _emit 0xc1
        _emit 0x8b
        _emit 0xc1
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047fd1a
__declspec(naked) void gap_0047fd1a(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
