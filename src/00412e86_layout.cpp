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

extern unsigned char DAT_004e2424[4];
extern unsigned char DAT_004e2c58[4];











// GAP: PORT1111 0x00412e86
__declspec(naked) void gap_00412e86(void)
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

// FUNCTION: PORT1111 0x00412e90
__declspec(naked) void FUN_00412e90(void *param_1)
{
    __asm {
        mov ecx, dword ptr [DAT_004e2424]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        jmp FUN_00434760
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x11
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x22
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00412eb6
__declspec(naked) void gap_00412eb6(void)
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

// FUNCTION: PORT1111 0x00412ec0
__declspec(naked) void FUN_00412ec0(void *param_1,int param_2)
{
    __asm {
        mov ecx, dword ptr [DAT_004e2424]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        jmp FUN_00434500
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x00412ee0
__declspec(naked) void __fastcall FUN_00412ee0(void *pthis,int param_1)
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
        push OFFSET pt_eh_stub_004b6156
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x4f
        _emit 0x74
        _emit 0x33
        _emit 0xf6
        _emit 0x3b
        _emit 0xce
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x83
        _emit 0xfb
        _emit 0x35
        _emit 0x74
        _emit 0x39
        _emit 0x83
        _emit 0xfb
        _emit 0x50
        _emit 0x74
        _emit 0x34
        _emit 0x6a
        _emit 0x2c
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x3b
        _emit 0xc6
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0043a740
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x2c
        _emit 0xeb
        _emit 0x2e
        _emit 0x6a
        _emit 0x14
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x3b
        _emit 0xc6
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0043a500
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x50
        _emit 0x2c
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x77
        _emit 0x74
        _emit 0x8b
        _emit 0x11
        _emit 0x53
        _emit 0xff
        _emit 0x52
        _emit 0x34
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
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00412f99
__declspec(naked) void gap_00412f99(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00412fa0
__declspec(naked) void __fastcall FUN_00412fa0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x51
        _emit 0x58
        _emit 0x42
        _emit 0x89
        _emit 0x51
        _emit 0x58
        _emit 0x8b
        _emit 0xca
        _emit 0x83
        _emit 0xf9
        _emit 0x01
        _emit 0x7f
        _emit 0x15
        mov ecx, dword ptr [DAT_004e2424]
        mov dword ptr [DAT_004e2c58], 1
        jmp FUN_004339d0
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00412fc4
__declspec(naked) void gap_00412fc4(void)
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
    }
}

// FUNCTION: PORT1111 0x00412fd0
__declspec(naked) void __fastcall FUN_00412fd0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x51
        _emit 0x58
        _emit 0x4a
        _emit 0x89
        _emit 0x51
        _emit 0x58
        _emit 0x8b
        _emit 0xca
        _emit 0x85
        _emit 0xc9
        _emit 0x7f
        _emit 0x15
        mov ecx, dword ptr [DAT_004e2424]
        mov dword ptr [DAT_004e2c58], 0
        jmp FUN_00433a20
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00412ff3
__declspec(naked) void gap_00412ff3(void)
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
