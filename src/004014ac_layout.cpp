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

extern const unsigned char PTR_FUN_004c6e14[12];












// FUNCTION: PORT1111 0x004014ac
__declspec(naked) void __fastcall FUN_004014ac(int param_1,void *param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x4d
        _emit 0x0c
        _emit 0x85
        _emit 0xc9
        _emit 0x76
        _emit 0x24
        _emit 0x83
        _emit 0x7e
        _emit 0x18
        _emit 0x10
        _emit 0x72
        _emit 0x05
        _emit 0x8b
        _emit 0x76
        _emit 0x04
        _emit 0xeb
        _emit 0x03
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0x8b
        _emit 0xc1
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0x8b
        _emit 0xfa
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0xc8
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xa4
        _emit 0x8b
        _emit 0x75
        _emit 0xec
        _emit 0x8b
        _emit 0x4d
        _emit 0x0c
        _emit 0x83
        _emit 0x7e
        _emit 0x18
        _emit 0x10
        _emit 0x72
        _emit 0x12
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x51
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x55
        _emit 0x08
        _emit 0x8b
        _emit 0x4d
        _emit 0x0c
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x83
        _emit 0xfb
        _emit 0x10
        _emit 0x8d
        _emit 0x46
        _emit 0x04
        _emit 0xc6
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x10
        _emit 0x89
        _emit 0x5e
        _emit 0x18
        _emit 0x89
        _emit 0x4e
        _emit 0x14
        _emit 0x72
        _emit 0x02
        _emit 0x8b
        _emit 0xc2
        _emit 0x5f
        _emit 0xc6
        _emit 0x04
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x4d
        _emit 0xf4
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
    }
}

// GAP: PORT1111 0x00401512
__declspec(naked) void gap_00401512(void)
{
    __asm {
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x0040151b
__declspec(naked) void FUN_0040151b(void)
{
    __asm {
        _emit 0x8b
        _emit 0x75
        _emit 0xec
        _emit 0x83
        _emit 0x7e
        _emit 0x18
        _emit 0x10
        _emit 0x72
        _emit 0x0c
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x52
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x6a
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x18
        _emit 0x0f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0xc6
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0xe8
        _emit 0xb7
    }
}

// GAP: PORT1111 0x00401548
__declspec(naked) void gap_00401548(void)
{
    __asm {
        _emit 0x63
        _emit 0x09
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
