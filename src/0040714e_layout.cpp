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

extern unsigned char DAT_004e2683[1];











// GAP: PORT1111 0x0040714e
__declspec(naked) void gap_0040714e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00407150
__declspec(naked) void __fastcall FUN_00407150(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b59eb
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x85
        _emit 0xdb
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x7e
        _emit 0x41
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x20
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x39
        mov al, byte ptr [DAT_004e2683]
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x30
        _emit 0x6a
        _emit 0x74
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0a
        _emit 0x56
        _emit 0x8b
        _emit 0xc8
        call FUN_0041be10
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x47
        _emit 0x40
        _emit 0x74
        _emit 0x03
        _emit 0x89
        _emit 0x58
        _emit 0x6c
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
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x004071c7
__declspec(naked) void gap_004071c7(void)
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
