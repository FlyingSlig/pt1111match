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

extern int DAT_004c3738;
extern void * DAT_004e240c;
extern unsigned char DAT_004e26fc[4];
extern unsigned char DAT_004e2408[4];
extern int DAT_004e2404;
extern const unsigned char PTR_FUN_004c373c[4];
extern unsigned char DAT_004e26f0[4];












// GAP: PORT1111 0x00441869
__declspec(naked) void gap_00441869(void)
{
    __asm {
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0xe1
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0xf3
        _emit 0x17
        _emit 0x44
        _emit 0x00
        _emit 0x05
        _emit 0x18
        _emit 0x44
        _emit 0x00
        _emit 0x24
        _emit 0x18
        _emit 0x44
        _emit 0x00
        _emit 0x40
        _emit 0x18
        _emit 0x44
        _emit 0x00
        _emit 0x57
        _emit 0x18
        _emit 0x44
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
    }
}

// FUNCTION: PORT1111 0x00441890
__declspec(naked) void __fastcall FUN_00441890(int param_1)
{
    __asm {
        mov eax, dword ptr [DAT_004e2404]
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x88
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x85
        _emit 0xc9
        _emit 0x76
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0x88
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xf6
        _emit 0x85
        _emit 0xc9
        _emit 0x76
        _emit 0x3a
        _emit 0x8b
        _emit 0x90
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xaf
        _emit 0xcf
        _emit 0x03
        _emit 0xce
        _emit 0x6b
        _emit 0xc9
        _emit 0x6c
        _emit 0x03
        _emit 0xca
        call FUN_00426730
        _emit 0x8a
        _emit 0x48
        _emit 0x2e
        _emit 0x84
        _emit 0xc9
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x4b
        _emit 0x08
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x14
        _emit 0x57
        _emit 0x56
        call FUN_00444020
        mov eax, dword ptr [DAT_004e2404]
        _emit 0x8b
        _emit 0x88
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x46
        _emit 0x3b
        _emit 0xf1
        _emit 0x72
        _emit 0xc6
        _emit 0x8b
        _emit 0x88
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x47
        _emit 0x3b
        _emit 0xf9
        _emit 0x72
        _emit 0xaf
        _emit 0x5e
        _emit 0x5f
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004418fb
__declspec(naked) void gap_004418fb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00441900
__declspec(naked) int __fastcall FUN_00441900(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x49
        _emit 0x10
        _emit 0x8b
        _emit 0x01
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x39
        _emit 0x50
        _emit 0x08
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
        _emit 0xc1
        _emit 0x75
        _emit 0xf5
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00441928
__declspec(naked) void gap_00441928(void)
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

// FUNCTION: PORT1111 0x00441930
__declspec(naked) void __fastcall FUN_00441930(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x1b
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        call FUN_00414e10
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x34
        _emit 0x75
        _emit 0xe8
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x01
        _emit 0x89
        _emit 0x09
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x89
        _emit 0x49
        _emit 0x04
        _emit 0x3b
        _emit 0x46
        _emit 0x34
        _emit 0xc7
        _emit 0x46
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0x38
        _emit 0x50
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
    }
}

// GAP: PORT1111 0x0044197c
__declspec(naked) void gap_0044197c(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xf9
        _emit 0x8b
        _emit 0xc7
        _emit 0x75
        _emit 0xec
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
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

// FUNCTION: PORT1111 0x00441990
__declspec(naked) void __fastcall FUN_00441990(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b818c
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
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        mov dword ptr [esi], OFFSET PTR_FUN_004c373c
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xcb
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x89
        _emit 0x5e
        _emit 0x04
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x89
        _emit 0x5e
        _emit 0x08
        _emit 0x8d
        _emit 0x7e
        _emit 0x30
        _emit 0x8b
        _emit 0xcf
        call FUN_00419480
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
    }
}

// GAP: PORT1111 0x004419f2
__declspec(naked) void gap_004419f2(void)
{
    __asm {
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x8d
        _emit 0x7e
        _emit 0x24
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xcf
        call FUN_00419480
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x51
        call pt_a_004978fd
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x8d
        _emit 0x7e
        _emit 0x18
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xcf
        call FUN_00419480
        _emit 0x8b
        _emit 0x57
        _emit 0x04
        _emit 0x52
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc6
        _emit 0x0c
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        call FUN_00419480
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x5e
        _emit 0x04
        _emit 0x5f
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
        _emit 0xc3
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
