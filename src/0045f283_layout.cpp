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

extern "C" void free_thunk(void *);
extern const unsigned char PTR_FUN_004c4b38[24];
extern const unsigned char s_vector_T__too_long_004be704[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];











// GAP: PORT1111 0x0045f283
__declspec(naked) void gap_0045f283(void)
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

// FUNCTION: PORT1111 0x0045f290
__declspec(naked) int __fastcall FUN_0045f290(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x0f
        _emit 0xaf
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x49
        _emit 0x38
        _emit 0x03
        _emit 0xc2
        _emit 0x8d
        _emit 0x04
        _emit 0x81
        _emit 0x8b
        _emit 0x00
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045f2a9
__declspec(naked) void gap_0045f2a9(void)
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

// FUNCTION: PORT1111 0x0045f2b0
__declspec(naked) unsigned int __fastcall FUN_0045f2b0(void *pthis,int param_1)
{
    __asm {
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0x7f
        _emit 0x08
        _emit 0x03
        _emit 0x75
        _emit 0x40
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x83
        _emit 0x78
        _emit 0x08
        _emit 0x01
        _emit 0x76
        _emit 0x37
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x02
        _emit 0x56
        _emit 0x8b
        _emit 0x70
        _emit 0x08
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
        _emit 0xc2
        _emit 0x74
        _emit 0x21
        _emit 0x53
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x8b
        _emit 0x58
        _emit 0x08
        _emit 0x0f
        _emit 0xaf
        _emit 0xd6
        _emit 0x03
        _emit 0xd3
        _emit 0x8b
        _emit 0x59
        _emit 0x14
        _emit 0xc7
        _emit 0x04
        _emit 0x93
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x57
        _emit 0x0c
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
        _emit 0x42
        _emit 0x04
        _emit 0x75
        _emit 0xe1
        _emit 0x5b
        _emit 0x5e
        _emit 0xb0
        _emit 0x01
        _emit 0x5f
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x32
        _emit 0xc0
        _emit 0x5f
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045f301
__declspec(naked) void gap_0045f301(void)
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0045f310
__declspec(naked) int __fastcall FUN_0045f310(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x28
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x8d
        _emit 0x04
        _emit 0x88
        _emit 0x8b
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045f31f
__declspec(naked) void gap_0045f31f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0045f320
__declspec(naked) void __fastcall FUN_0045f320(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x43
        _emit 0x3c
        _emit 0x55
        _emit 0x8b
        _emit 0x6b
        _emit 0x38
        _emit 0x3b
        _emit 0xe8
        _emit 0x57
        _emit 0x74
        _emit 0x59
        _emit 0x56
        _emit 0x8b
        _emit 0x75
        _emit 0x00
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xf7
        _emit 0x74
        _emit 0x42
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x89
        _emit 0x09
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x89
        _emit 0x49
        _emit 0x04
        _emit 0x3b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        _emit 0x74
        _emit 0x18
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x38
        _emit 0x50
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xf9
        _emit 0x8b
        _emit 0xc7
        _emit 0x75
        _emit 0xec
        _emit 0x33
        _emit 0xff
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
        _emit 0x56
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0x43
        _emit 0x3c
        _emit 0x83
        _emit 0xc5
        _emit 0x04
        _emit 0x3b
        _emit 0xe8
        _emit 0x75
        _emit 0xab
        _emit 0x5e
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xff
        _emit 0x8b
        _emit 0x43
        _emit 0x14
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x0c
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7b
        _emit 0x14
        _emit 0x8b
        _emit 0x43
        _emit 0x18
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x0c
        _emit 0x50
        _emit 0xe8
        _emit 0x5f
        _emit 0x88
    }
}


// GAP: PORT1111 0x0045f3a8
__declspec(naked) void gap_0045f3a8(void)
{
    __asm {
        _emit 0x03
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7b
        _emit 0x18
        _emit 0x8b
        _emit 0x43
        _emit 0x1c
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x0c
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7b
        _emit 0x1c
        _emit 0x8b
        _emit 0x43
        _emit 0x20
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x0c
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7b
        _emit 0x20
        _emit 0x5f
        _emit 0x5d
        _emit 0x5b
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0045f3e0
__declspec(naked) void __fastcall FUN_0045f3e0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        mov dword ptr [esi], OFFSET PTR_FUN_004c4b38
        call FUN_0045f320
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7e
        _emit 0x38
        _emit 0x89
        _emit 0x7e
        _emit 0x3c
        _emit 0x89
        _emit 0x7e
        _emit 0x40
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7e
        _emit 0x28
        _emit 0x89
        _emit 0x7e
        _emit 0x2c
        _emit 0x89
        _emit 0x7e
        _emit 0x30
        _emit 0x5f
        _emit 0x8d
        _emit 0x4e
        _emit 0x04
    }
}


// GAP: PORT1111 0x0045f427
__declspec(naked) void gap_0045f427(void)
{
    __asm {
        _emit 0x5e
        jmp FUN_00465e40
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0045f430
__declspec(naked) void FUN_0045f430(void)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b9738
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
        _emit 0x83
        _emit 0xec
        _emit 0x44
        _emit 0x6a
        _emit 0x12
        push OFFSET s_vector_T__too_long_004be704
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x0f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        call pt_a_004016b0
        _emit 0x8d
        _emit 0x04
        _emit 0x24
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x50
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call pt_a_004017e0
        push OFFSET DAT_004cc884
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x51
        mov dword ptr [esp + 0x24], OFFSET pt_d_004c6e20
        call _CxxThrowException
    }
}

// GAP: PORT1111 0x0045f499
__declspec(naked) void gap_0045f499(void)
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
