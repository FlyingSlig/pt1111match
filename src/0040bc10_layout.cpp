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

extern const unsigned char PTR_FUN_004bd58c[4];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];












// FUNCTION: PORT1111 0x0040bc10
__declspec(naked) unsigned int __fastcall FUN_0040bc10(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x20
        _emit 0x3b
        _emit 0x41
        _emit 0x14
        _emit 0x72
        _emit 0x05
        _emit 0x32
        _emit 0xc0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x0040bc1d
__declspec(naked) int __fastcall FUN_0040bc1d(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x79
        _emit 0x1c
        _emit 0x8b
        _emit 0x57
        _emit 0x04
        _emit 0x8d
        _emit 0x71
        _emit 0x18
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x52
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_00413870
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0x8b
        _emit 0xd8
        call FUN_00409f80
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x8b
        _emit 0x43
        _emit 0x04
        _emit 0x5f
        _emit 0x89
        _emit 0x18
        _emit 0x5e
        _emit 0xb0
        _emit 0x01
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040bc52
__declspec(naked) void gap_0040bc52(void)
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040bc60
__declspec(naked) int * __fastcall FUN_0040bc60(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5ccb
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
        _emit 0x8d
        _emit 0x7e
        _emit 0x04
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        mov dword ptr [esi], OFFSET PTR_FUN_004bd58c
        call FUN_0043d220
        _emit 0x33
        _emit 0xdb
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x5f
        _emit 0x08
        _emit 0x8d
        _emit 0x7e
        _emit 0x10
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        call FUN_0043d220
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x5f
        _emit 0x08
        _emit 0x89
        _emit 0x5e
        _emit 0x1c
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
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040bcc2
__declspec(naked) void gap_0040bcc2(void)
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040bcd0
__declspec(naked) void __fastcall FUN_0040bcd0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5cf6
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
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x08
        mov dword ptr [edi], OFFSET PTR_FUN_004bd58c
        _emit 0x8b
        _emit 0x47
        _emit 0x14
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
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
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x14
        _emit 0x75
        _emit 0xec
        _emit 0x8d
        _emit 0x77
        _emit 0x10
        _emit 0x8b
        _emit 0xce
        call FUN_00419480
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x51
        call pt_a_004978fd
    }
}

// GAP: PORT1111 0x0040bd2c
__declspec(naked) void gap_0040bd2c(void)
{
    __asm {
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x77
        _emit 0x04
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        call FUN_00419480
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x52
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
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
        _emit 0xcc
    }
}
