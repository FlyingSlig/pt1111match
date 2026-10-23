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

extern const unsigned char DAT_004bd2c8[];
extern const unsigned char PTR_FUN_004c6910[];











// GAP: PORT1111 0x004821dd
__declspec(naked) void gap_004821dd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004821e0
__declspec(naked) int * FUN_004821e0(void * pthis, int param_1, void * param_2, void * param_3, void * param_4, int param_5, int param_6, void * param_7)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba6cc
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8d
        _emit 0x7e
        _emit 0x08
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        mov dword ptr [esi], OFFSET PTR_FUN_004c6910
        _emit 0x89
        _emit 0x46
        _emit 0x04
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x5e
        _emit 0x0c
        _emit 0x8b
        _emit 0xcb
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465cf0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x6a
        _emit 0xff
        _emit 0x89
        _emit 0x4e
        _emit 0x14
        _emit 0x52
        _emit 0x8d
        _emit 0x4e
        _emit 0x1c
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x01
        _emit 0xc7
        _emit 0x46
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466af0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x6a
        _emit 0xff
        _emit 0x50
        _emit 0x8d
        _emit 0x4e
        _emit 0x20
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x02
        call FUN_00466af0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x4e
        _emit 0x18
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x03
        _emit 0x8b
        _emit 0xcf
        _emit 0x74
        _emit 0x03
        _emit 0x50
        _emit 0xeb
        _emit 0x05
        push OFFSET DAT_004bd2c8
        call FUN_00466a40
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x38
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xcb
        _emit 0x74
        _emit 0x03
        _emit 0x50
        _emit 0xeb
        _emit 0x05
        push OFFSET DAT_004bd2c8
        call FUN_00466a40
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0xff
        _emit 0x80
        _emit 0xb0
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x56
        _emit 0x18
        _emit 0x8b
        _emit 0x82
        _emit 0xb0
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x46
        _emit 0x24
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5b
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
        _emit 0xc2
        _emit 0x1c
        _emit 0x00
    }
}

// GAP: PORT1111 0x004822c3
__declspec(naked) void gap_004822c3(void)
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
