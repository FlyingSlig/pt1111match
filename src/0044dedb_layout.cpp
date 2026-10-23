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


// GAP: PORT1111 0x0044dedb
__declspec(naked) void gap_0044dedb(void)
{
    __asm {
        _emit 0x8b
        _emit 0x45
        _emit 0x08
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x5f
        _emit 0x5b
        _emit 0x76
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x45
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x64
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x60
        _emit 0x89
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x50
        _emit 0x5e
        _emit 0x5d
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x54
        _emit 0xc2
        _emit 0x08
        _emit 0x00
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

// FUNCTION: PORT1111 0x0044df10
__declspec(naked) int * FUN_0044df10(void * pthis, int param_1, int param_2, int param_3, void * param_4, unsigned char param_5)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x6a
        _emit 0xff
        _emit 0x89
        _emit 0x4e
        _emit 0x04
        _emit 0x8d
        _emit 0x7e
        _emit 0x0c
        _emit 0x89
        _emit 0x06
        _emit 0x89
        _emit 0x56
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        _emit 0xc7
        _emit 0x47
        _emit 0x18
        _emit 0x0f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x47
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x47
        _emit 0x04
        _emit 0x00
        call pt_a_004015c0
        _emit 0x8b
        _emit 0x45
        _emit 0x1c
        _emit 0x8a
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x47
        _emit 0x1c
        _emit 0x5f
        _emit 0x88
        _emit 0x4e
        _emit 0x2c
        _emit 0xc6
        _emit 0x46
        _emit 0x2d
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5d
        _emit 0xc2
        _emit 0x14
        _emit 0x00
    }
}

// GAP: PORT1111 0x0044df67
__declspec(naked) void gap_0044df67(void)
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

// FUNCTION: PORT1111 0x0044df70
__declspec(naked) void FUN_0044df70(void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x8a
        _emit 0x47
        _emit 0x2d
        _emit 0x84
        _emit 0xc0
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0xf7
        _emit 0x75
        _emit 0x26
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x50
        _emit 0x8b
        _emit 0xcb
        _emit 0xe8
        _emit 0xe3
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x36
        _emit 0x8b
        _emit 0xcf
        call FUN_00436d80
        _emit 0x57
        call pt_a_004978fd
        _emit 0x8a
        _emit 0x46
        _emit 0x2d
        _emit 0x83
        _emit 0xc4
        _emit 0x04
    }
}

// GAP: PORT1111 0x0044dfa2
__declspec(naked) void gap_0044dfa2(void)
{
    __asm {
        _emit 0x84
        _emit 0xc0
        _emit 0x8b
        _emit 0xfe
        _emit 0x74
        _emit 0xda
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
    }
}
