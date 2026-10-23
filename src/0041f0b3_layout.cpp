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

extern unsigned char DAT_004e204c[];
extern unsigned char DAT_004e2050[];











// GAP: PORT1111 0x0041f0b3
__declspec(naked) void gap_0041f0b3(void)
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0041f0c0
__declspec(naked) void __fastcall FUN_0041f0c0(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x57
        _emit 0x18
        _emit 0x85
        _emit 0xd2
        _emit 0x8d
        _emit 0x4f
        _emit 0x14
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xf6
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x71
        _emit 0x08
        _emit 0x2b
        _emit 0xf2
        _emit 0xc1
        _emit 0xfe
        _emit 0x02
        _emit 0x85
        _emit 0xd2
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x74
        _emit 0x19
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x2b
        _emit 0xc2
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf0
        _emit 0x73
        _emit 0x0d
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x89
        _emit 0x18
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0xeb
        _emit 0x10
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        call FUN_0041eeb0
        _emit 0xff
        _emit 0x47
        _emit 0x10
        _emit 0x0f
        _emit 0xb7
        _emit 0x43
        _emit 0x3c
        mov esi, dword ptr [DAT_004e2050]
        mov ecx, dword ptr [DAT_004e204c]
        _emit 0x23
        _emit 0xc6
        _emit 0xd3
        _emit 0xf8
        _emit 0x0f
        _emit 0xbe
        _emit 0xc0
        _emit 0x48
        _emit 0x74
        _emit 0x2e
        _emit 0x48
        _emit 0x74
        _emit 0x17
        _emit 0x48
        _emit 0x75
        _emit 0x36
        _emit 0x8b
        _emit 0x4f
        _emit 0x0c
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x41
        _emit 0x40
        _emit 0x89
        _emit 0x4f
        _emit 0x0c
        _emit 0x89
        _emit 0x47
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x41
        _emit 0x40
        _emit 0x89
        _emit 0x4f
        _emit 0x04
        _emit 0x89
        _emit 0x47
        _emit 0x0c
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x41
        _emit 0x40
        _emit 0x89
        _emit 0x4f
        _emit 0x04
        _emit 0x89
        _emit 0x47
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0041f16b
__declspec(naked) void gap_0041f16b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        jmp FUN_00474710
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
