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


// GAP: PORT1111 0x0040ae6b
__declspec(naked) void gap_0040ae6b(void)
{
    __asm {
        _emit 0x84
        _emit 0xc0
        _emit 0x8b
        _emit 0xfe
        _emit 0x74
        _emit 0xe1
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
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

// FUNCTION: PORT1111 0x0040ae80
__declspec(naked) void __fastcall FUN_0040ae80(int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x26
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0xc7
        _emit 0x46
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call pt_a_00413730
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0x77
        _emit 0x08
        _emit 0x75
        _emit 0xda
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x8b
        _emit 0x69
        _emit 0x04
        _emit 0x8a
        _emit 0x45
        _emit 0x15
        _emit 0x83
        _emit 0xc7
        _emit 0x04
        _emit 0x84
        _emit 0xc0
        _emit 0x8b
        _emit 0xf5
        _emit 0x75
        _emit 0x24
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call pt_a_0040ae40
        _emit 0x8b
        _emit 0x36
        _emit 0x55
        call pt_a_004978fd
        _emit 0x8a
        _emit 0x46
        _emit 0x15
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x84
        _emit 0xc0
        _emit 0x8b
        _emit 0xee
        _emit 0x74
        _emit 0xe1
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0xc7
        _emit 0x47
        _emit 0x08
        _emit 0x00
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040aefd
__declspec(naked) void gap_0040aefd(void)
{
    __asm {
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x00
        _emit 0x8b
        _emit 0x7f
        _emit 0x04
        _emit 0x89
        _emit 0x7f
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x59
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040af10
__declspec(naked) int __fastcall FUN_0040af10(int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x8d
        _emit 0x4e
        _emit 0x04
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x3b
        _emit 0xc1
        _emit 0x5e
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040af3f
__declspec(naked) void gap_0040af3f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040af40
__declspec(naked) void __fastcall FUN_0040af40(void *pthis,void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xe9
        _emit 0x57
        _emit 0x8b
        _emit 0x7d
        _emit 0x08
        _emit 0x8b
        _emit 0x37
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xf7
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x74
        _emit 0x19
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x01
        _emit 0x43
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call pt_a_00413730
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0xf7
        _emit 0x75
        _emit 0xe7
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x53
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x3b
        _emit 0x75
        _emit 0x08
        _emit 0x74
        _emit 0x5f
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x57
        call FUN_0040a7e0
        _emit 0x8a
        _emit 0x46
        _emit 0x15
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0x46
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0x1f
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x06
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0x31
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x06
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x74
        _emit 0xf5
        _emit 0xeb
        _emit 0x1d
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0x11
        _emit 0x3b
        _emit 0x70
        _emit 0x08
        _emit 0x75
        _emit 0x0c
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x74
        _emit 0xef
        _emit 0x8b
        _emit 0xf0
        _emit 0x3b
        _emit 0x75
        _emit 0x08
        _emit 0x75
        _emit 0xa1
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040afe7
__declspec(naked) void gap_0040afe7(void)
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
