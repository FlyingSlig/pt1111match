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

extern int DAT_004c3cf8;
extern const unsigned char PTR_FUN_004c3db8[188];











// GAP: PORT1111 0x0044718a
__declspec(naked) void gap_0044718a(void)
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

// FUNCTION: PORT1111 0x00447190
__declspec(naked) void __fastcall FUN_00447190(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x57
        _emit 0x40
        _emit 0x50
        _emit 0x8d
        _emit 0x4e
        _emit 0x04
        call FUN_00453550
        mov edi, dword ptr [GetTickCount]
        _emit 0xff
        _emit 0xd7
        _emit 0x2b
        _emit 0x86
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xf8
        _emit 0x32
        _emit 0x76
        _emit 0x0f
        _emit 0x8b
        _emit 0xce
        call FUN_00447110
        _emit 0xff
        _emit 0xd7
        _emit 0x89
        _emit 0x86
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x004471c6
__declspec(naked) void gap_004471c6(void)
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
    }
}

// FUNCTION: PORT1111 0x004471d0
__declspec(naked) int * __fastcall FUN_004471d0(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        _emit 0x68
        _emit 0xd4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        _emit 0x6a
        _emit 0x12
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_00480aa0
        mov dword ptr [esi], OFFSET DAT_004c3cf8
        _emit 0xc7
        _emit 0x46
        _emit 0x4c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x00447206
__declspec(naked) void gap_00447206(void)
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x51
        _emit 0x52
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_00480c10
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x50
        _emit 0x0f
        _emit 0xb7
        _emit 0xc7
        _emit 0x2d
        _emit 0xd3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x2e
        _emit 0x83
        _emit 0xe8
        _emit 0x02
        _emit 0x74
        _emit 0x07
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x46
        _emit 0x50
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x4c
        _emit 0xd5
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x90
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x46
        _emit 0x50
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x4c
        _emit 0xd3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x92
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
