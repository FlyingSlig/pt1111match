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

extern int DAT_004e2404;
extern int DAT_004bfafc;
extern int DAT_004bfb14;











// GAP: PORT1111 0x0043126b
__declspec(naked) void gap_0043126b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00431270
__declspec(naked) int __fastcall FUN_00431270(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x57
        _emit 0x50
        call FUN_004147d0
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x76
        _emit 0x14
        _emit 0x50
        _emit 0x56
        call FUN_00429b40
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x03
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
        _emit 0x0f
        _emit 0xbf
        _emit 0x48
        _emit 0x4e
        _emit 0x0f
        _emit 0xbf
        _emit 0x40
        _emit 0x4c
        _emit 0x50
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        call FUN_00429ac0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        _emit 0x6a
        _emit 0x64
        _emit 0x57
        _emit 0x8b
        _emit 0xc8
        call FUN_00427540
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x004312c7
__declspec(naked) void gap_004312c7(void)
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

// FUNCTION: PORT1111 0x004312d0
__declspec(naked) int * __fastcall FUN_004312d0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b756b
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
        _emit 0x34
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
        mov dword ptr [esi], OFFSET DAT_004bfafc
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


// GAP: PORT1111 0x00431325
__declspec(naked) void gap_00431325(void)
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
