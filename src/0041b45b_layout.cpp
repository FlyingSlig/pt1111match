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

extern volatile int DAT_004e2c34;
extern volatile int DAT_004e2c30;
extern int DAT_004e2404;











// GAP: PORT1111 0x0041b45b
__declspec(naked) void gap_0041b45b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0041b460
__declspec(naked) void __fastcall FUN_0041b460(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0xcf
        call FUN_00424310
        _emit 0x3d
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x73
        _emit 0x09
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x15
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xcf
        call FUN_00424310
        _emit 0x8b
        _emit 0xcf
        _emit 0x8b
        _emit 0xd8
        call FUN_00424310
        _emit 0x8b
        _emit 0xcf
        _emit 0x8b
        _emit 0xe8
        call FUN_00424310
        _emit 0x83
        _emit 0xf8
        _emit 0x05
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x4e
        _emit 0x28
        _emit 0x89
        _emit 0x6e
        _emit 0x30
        _emit 0x89
        _emit 0x5e
        _emit 0x2c
        _emit 0x7c
        _emit 0x0e
        _emit 0x5f
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x89
        _emit 0x46
        _emit 0x34
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0041b4c8
__declspec(naked) void gap_0041b4c8(void)
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
    }
}

// FUNCTION: PORT1111 0x0041b4d0
__declspec(naked) void __fastcall FUN_0041b4d0(void *pthis,void *param_1)
{
    __asm {
        mov edx, dword ptr [DAT_004e2c34]
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x7e
        _emit 0x30
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x01
        _emit 0x03
        _emit 0xd7
        _emit 0x8b
        _emit 0x7e
        _emit 0x2c
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        mov edx, dword ptr [DAT_004e2c30]
        _emit 0x03
        _emit 0xd7
        _emit 0x52
        _emit 0x8b
        _emit 0x56
        _emit 0x38
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x34
        _emit 0x5f
        _emit 0xc7
        _emit 0x46
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0041b507
__declspec(naked) void gap_0041b507(void)
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
