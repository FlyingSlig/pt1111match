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



// FUNCTION: PORT1111 0x0041ebe0
__declspec(naked) void __fastcall FUN_0041ebe0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x33
        _emit 0xff
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf8
        _emit 0x73
        _emit 0x10
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x0c
        _emit 0xb8
        _emit 0x8d
        _emit 0x04
        _emit 0xb8
        call FUN_00426b00
        _emit 0x47
        _emit 0xeb
        _emit 0xdd
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041ec0c
__declspec(naked) void gap_0041ec0c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0041ec10
__declspec(naked) void __fastcall FUN_0041ec10(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x33
        _emit 0xff
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf8
        _emit 0x73
        _emit 0x10
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x0c
        _emit 0xb8
        _emit 0x8d
        _emit 0x04
        _emit 0xb8
        call FUN_00426b10
        _emit 0x47
        _emit 0xeb
        _emit 0xdd
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041ec3c
__declspec(naked) void gap_0041ec3c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0041ec40
__declspec(naked) void __fastcall FUN_0041ec40(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8b
        _emit 0x7e
        _emit 0x0c
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0xeb
        _emit 0x37
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x07
        _emit 0xb8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x29
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x07
        _emit 0xb8
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x1b
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x03
        _emit 0xd0
        _emit 0x3b
        _emit 0xd1
        _emit 0x74
        _emit 0x07
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x0b
        _emit 0x03
        _emit 0xc7
        _emit 0x2b
        _emit 0xc1
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0x48
        _emit 0x74
        _emit 0x06
        _emit 0x48
        _emit 0x74
        _emit 0x03
        _emit 0x48
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0xce
        call FUN_0041ebe0
        _emit 0x8b
        _emit 0x06
        _emit 0x5f
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        _emit 0xff
        _emit 0x60
        _emit 0x0c
    }
}

// GAP: PORT1111 0x0041ec9f
__declspec(naked) void gap_0041ec9f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0041eca0
__declspec(naked) void __fastcall FUN_0041eca0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x2e
        _emit 0x57
        _emit 0xc7
        _emit 0x46
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xff
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf8
        _emit 0x73
        _emit 0x10
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x0c
        _emit 0xb8
        _emit 0x8d
        _emit 0x04
        _emit 0xb8
        call FUN_00427480
        _emit 0x47
        _emit 0xeb
        _emit 0xdd
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041ecda
__declspec(naked) void gap_0041ecda(void)
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

// FUNCTION: PORT1111 0x0041ece0
__declspec(naked) void __fastcall FUN_0041ece0(int param_1)
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
        _emit 0x57
        _emit 0x74
        _emit 0x2c
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x25
        _emit 0x33
        _emit 0xff
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf8
        _emit 0x73
        _emit 0x10
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x0c
        _emit 0xb8
        _emit 0x8d
        _emit 0x04
        _emit 0xb8
        call FUN_00426b10
        _emit 0x47
        _emit 0xeb
        _emit 0xdd
        _emit 0x33
        _emit 0xff
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1a
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf8
        _emit 0x73
        _emit 0x0e
        _emit 0x8d
        _emit 0x04
        _emit 0xb9
        _emit 0x8b
        _emit 0x08
        _emit 0x56
        call FUN_00428990
        _emit 0x47
        _emit 0xeb
        _emit 0xdf
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x5f
        _emit 0xc7
        _emit 0x46
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x20
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// GAP: PORT1111 0x0041ed66
__declspec(naked) void gap_0041ed66(void)
{
    __asm {
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
