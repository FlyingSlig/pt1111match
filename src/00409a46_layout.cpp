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

extern void * DAT_004e240c;











// GAP: PORT1111 0x00409a46
__declspec(naked) void gap_00409a46(void)
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
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call FUN_00408840
        _emit 0x8b
        _emit 0x86
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x5f
        _emit 0x5e
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call FUN_00408cf0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x31
        _emit 0x83
        _emit 0x7f
        _emit 0x08
        _emit 0x18
        _emit 0x7c
        _emit 0x17
        _emit 0x8b
        _emit 0xcf
        call FUN_00424310
        _emit 0x89
        _emit 0x86
        _emit 0x20
        _emit 0x01
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
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0xc7
        _emit 0x86
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00409ad0
__declspec(naked) int __fastcall FUN_00409ad0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5b8b
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
        _emit 0x55
        _emit 0x8b
        _emit 0xe9
        call FUN_00407d20
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x1d
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x85
        _emit 0x30
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xfa
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x85
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0x80
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc9
        _emit 0x83
        _emit 0xf8
        _emit 0x02
        _emit 0x0f
        _emit 0x95
        _emit 0xc1
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x0f
        _emit 0x84
        _emit 0x7d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x85
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x6f
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0x57
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x52
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x86
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xbb
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xc3
        _emit 0x75
        _emit 0x19
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00405d00
        _emit 0x8b
        _emit 0x86
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xdb
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x95
        _emit 0xc3
        _emit 0x83
        _emit 0xc3
        _emit 0x03
        _emit 0x8b
        _emit 0x46
        _emit 0x60
        _emit 0x8b
        _emit 0x40
        _emit 0x18
        _emit 0x53
        _emit 0x8b
        _emit 0xc8
        call pt_a_0045f050
        _emit 0x8b
        _emit 0x46
        _emit 0x60
        _emit 0x8b
        _emit 0x40
        _emit 0x18
        _emit 0x53
        _emit 0x8b
        _emit 0xc8
        call FUN_0045f100
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x40
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0xbd
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x95
        _emit 0x5e
        _emit 0x5b
        _emit 0x5f
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x44
        _emit 0x6a
        _emit 0x34
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_00430e10
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4d
        _emit 0x10
        _emit 0x68
        _emit 0x98
        _emit 0x3a
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00412ec0
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5d
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
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
        _emit 0xc3
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x33
        _emit 0xc0
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
        _emit 0x10
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00409c25
__declspec(naked) void gap_00409c25(void)
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
    }
}

// FUNCTION: PORT1111 0x00409c30
__declspec(naked) void __fastcall FUN_00409c30(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        call FUN_00408900
        _emit 0x8b
        _emit 0x87
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x1b
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        call FUN_00415300
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0xb7
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0xe5
        _emit 0x8d
        _emit 0x8f
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        jmp FUN_00419480
    }
}

// GAP: PORT1111 0x00409c6d
__declspec(naked) void gap_00409c6d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00409c70
__declspec(naked) void __fastcall FUN_00409c70(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x3b
        _emit 0x46
        _emit 0x04
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x74
        _emit 0x1f
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x10
        _emit 0x89
        _emit 0x11
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x50
        _emit 0x89
        _emit 0x51
        _emit 0x04
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x8b
    }
}


// GAP: PORT1111 0x00409c9f
__declspec(naked) void gap_00409c9f(void)
{
    __asm {
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x38
        _emit 0x5f
        _emit 0x5e
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
    }
}
