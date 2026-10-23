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

extern int DAT_004e2404;
extern unsigned char DAT_004e2b14[12];












// FUNCTION: PORT1111 0x0041b530
__declspec(naked) void __fastcall FUN_0041b530(void *param_1)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x83
        _emit 0xe4
        _emit 0xf8
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x43
        _emit 0x28
        _emit 0x57
        _emit 0x50
        call FUN_0042aab0
        _emit 0x8b
        _emit 0xf8
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xff
        _emit 0x0f
        _emit 0x84
        _emit 0xaf
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x58
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x43
        _emit 0x40
        _emit 0x0f
        _emit 0xbf
        _emit 0x50
        _emit 0x4e
        _emit 0x8b
        _emit 0x4b
        _emit 0x3c
        _emit 0x2b
        _emit 0x51
        _emit 0x4c
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x71
        _emit 0x50
        _emit 0x0f
        _emit 0xbf
        _emit 0x40
        _emit 0x4c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x2b
        _emit 0xc6
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        call FUN_00429b00
        _emit 0x8b
        _emit 0xe8
        _emit 0x85
        _emit 0xed
        _emit 0x74
        _emit 0x70
        _emit 0x8b
        _emit 0x47
        _emit 0x54
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
        _emit 0x7e
        _emit 0x61
        _emit 0x33
        _emit 0xc9
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x7e
        _emit 0x47
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x0f
        _emit 0xaf
        _emit 0xc1
        _emit 0x03
        _emit 0xc2
        _emit 0x8b
        _emit 0x57
        _emit 0x58
        _emit 0x83
        _emit 0x3c
        _emit 0x82
        _emit 0x00
        _emit 0x74
        _emit 0x22
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8b
        _emit 0xcd
        call FUN_004267d0
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x10
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_00428460
        _emit 0x56
        _emit 0x8b
        _emit 0xcb
        call FUN_0041f0c0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x47
        _emit 0x54
        _emit 0x41
        _emit 0x3b
        _emit 0xc8
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x7c
        _emit 0xbc
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x47
        _emit 0x54
        _emit 0x41
        _emit 0x3b
        _emit 0xc8
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x7c
        _emit 0x9f
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041b60c
__declspec(naked) void gap_0041b60c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0041b610
__declspec(naked) void FUN_0041b610(void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x0f
        _emit 0xbf
        _emit 0x58
        _emit 0x42
        _emit 0x8b
        _emit 0x4e
        _emit 0x2c
        _emit 0x57
        _emit 0x0f
        _emit 0xbf
        _emit 0x78
        _emit 0x40
        _emit 0x03
        _emit 0x5e
        _emit 0x30
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x03
        _emit 0xf9
        _emit 0x50
        _emit 0x8b
        _emit 0xcd
        call FUN_0042f670
        _emit 0x57
        _emit 0x8b
        _emit 0xcd
        call FUN_0042f670
        _emit 0x53
        _emit 0x8b
        _emit 0xcd
        call FUN_0042f670
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x51
        _emit 0x8b
        _emit 0xcd
        call FUN_0042f670
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0041b65a
__declspec(naked) void gap_0041b65a(void)
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

// FUNCTION: PORT1111 0x0041b660
__declspec(naked) void __fastcall FUN_0041b660(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4a
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x8d
        _emit 0x49
        _emit 0x00
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
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x24
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x56
        call FUN_00428890
        _emit 0x85
        _emit 0xc0
        _emit 0x5f
        _emit 0x74
        _emit 0x0c
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x56
        call FUN_00429ee0
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041b6b6
__declspec(naked) void gap_0041b6b6(void)
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

// FUNCTION: PORT1111 0x0041b6c0
__declspec(naked) int __fastcall FUN_0041b6c0(void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x50
        call FUN_0042aab0
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x3c
        _emit 0x0f
        _emit 0x84
        _emit 0x22
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x50
        _emit 0x28
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x03
        _emit 0x52
        _emit 0xeb
        _emit 0x2f
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x8a
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x50
        _emit 0x24
        _emit 0x8b
        _emit 0x40
        _emit 0x34
        _emit 0x52
        _emit 0x50
        call FUN_004750b0
        _emit 0x8b
        _emit 0xc8
        call FUN_00475080
        _emit 0x8b
        _emit 0x48
        _emit 0x14
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0x42
        _emit 0x0c
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x50
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00475080
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x38
        _emit 0x0f
        _emit 0x84
        _emit 0xcd
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x30
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x8b
        _emit 0x56
        _emit 0x2c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x52
        call FUN_004296c0
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        call FUN_00429b00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x40
        _emit 0x8b
        _emit 0x46
        _emit 0x3c
        _emit 0x8b
        _emit 0x48
        _emit 0x4c
        _emit 0x2b
        _emit 0xd1
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x50
        _emit 0x50
        _emit 0x29
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        call FUN_00429b00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x6e
        _emit 0x8b
        _emit 0x4e
        _emit 0x3c
        _emit 0x8b
        _emit 0x49
        _emit 0x54
        _emit 0x49
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        call FUN_004267d0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4f
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x66
        _emit 0x8b
        _emit 0x48
        _emit 0x42
        _emit 0x0f
        _emit 0xbf
        _emit 0x40
        _emit 0x40
        _emit 0x8b
        _emit 0x56
        _emit 0x2c
        _emit 0x2b
        _emit 0xd0
        _emit 0x0f
        _emit 0xbf
        _emit 0xc9
        _emit 0x89
        _emit 0x56
        _emit 0x2c
        _emit 0x8b
        _emit 0x56
        _emit 0x30
        _emit 0x2b
        _emit 0xd1
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x85
        _emit 0xc9
        _emit 0x89
        _emit 0x56
        _emit 0x30
        _emit 0x74
        _emit 0x31
        _emit 0x56
        call FUN_00428170
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x56
        call FUN_0042bda0
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x20
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
        _emit 0xc7
        _emit 0x46
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041b806
__declspec(naked) void gap_0041b806(void)
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
