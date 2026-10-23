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

extern const unsigned char s_vector_T__too_long_004be704[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];
extern int DAT_004bf6d4;












// FUNCTION: PORT1111 0x0041ed90
__declspec(naked) void __fastcall FUN_0041ed90(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x4a
        _emit 0x40
        _emit 0x83
        _emit 0xf8
        _emit 0x01
        _emit 0x89
        _emit 0x51
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x0c
        _emit 0x75
        _emit 0x05
        jmp FUN_0041ebe0
        _emit 0x3b
        _emit 0x41
        _emit 0x10
        _emit 0x75
        _emit 0x05
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x1c
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041edb3
__declspec(naked) void gap_0041edb3(void)
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

// FUNCTION: PORT1111 0x0041edc0
__declspec(naked) void __fastcall FUN_0041edc0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x42
        _emit 0x8b
        _emit 0xc2
        _emit 0x49
        _emit 0x83
        _emit 0xf8
        _emit 0x01
        _emit 0x89
        _emit 0x56
        _emit 0x04
        _emit 0x89
        _emit 0x4e
        _emit 0x0c
        _emit 0x75
        _emit 0x09
        _emit 0x8b
        _emit 0xce
        call FUN_0041ebe0
        _emit 0xeb
        _emit 0x0b
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0xce
        call FUN_0041ec10
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x48
        _emit 0x3b
        _emit 0xc8
        _emit 0x75
        _emit 0x08
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        _emit 0xff
        _emit 0x62
        _emit 0x18
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041ee01
__declspec(naked) void gap_0041ee01(void)
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

// FUNCTION: PORT1111 0x0041ee10
__declspec(naked) void __fastcall FUN_0041ee10(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x41
        _emit 0x48
        _emit 0x89
        _emit 0x4e
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0xce
        call FUN_0041ec10
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x48
        _emit 0x3b
        _emit 0xc8
        _emit 0x75
        _emit 0x08
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        _emit 0xff
        _emit 0x62
        _emit 0x18
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041ee3f
__declspec(naked) void gap_0041ee3f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0041ee40
__declspec(naked) void FUN_0041ee40(void)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6b68
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

// GAP: PORT1111 0x0041eea9
__declspec(naked) void gap_0041eea9(void)
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

// FUNCTION: PORT1111 0x0041eeb0
__declspec(naked) void __fastcall FUN_0041eeb0(void *pthis,void *param_1,unsigned int param_2,void *param_3)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x85
        _emit 0xd2
        _emit 0x8b
        _emit 0x08
        _emit 0x57
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x2b
        _emit 0xc2
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x85
        _emit 0xff
        _emit 0x0f
        _emit 0x84
        _emit 0xac
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc9
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x2b
        _emit 0xca
        _emit 0xc1
        _emit 0xf9
        _emit 0x02
        _emit 0x53
        _emit 0xbb
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x3f
        _emit 0x2b
        _emit 0xd9
        _emit 0x3b
        _emit 0xdf
        _emit 0x73
        _emit 0x07
        _emit 0x8b
        _emit 0xce
        call FUN_0041ee40
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc9
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x2b
        _emit 0xca
        _emit 0xc1
        _emit 0xf9
        _emit 0x02
        _emit 0x03
        _emit 0xcf
        _emit 0x3b
        _emit 0xc1
        _emit 0x55
        _emit 0x0f
        _emit 0x83
        _emit 0xd6
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0xd1
        _emit 0xe9
        _emit 0xbb
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x3f
        _emit 0x2b
        _emit 0xd9
        _emit 0x3b
        _emit 0xd8
        _emit 0x73
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0xeb
        _emit 0x02
        _emit 0x03
        _emit 0xc1
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc9
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x2b
        _emit 0xca
        _emit 0xc1
        _emit 0xf9
        _emit 0x02
        _emit 0x03
        _emit 0xcf
        _emit 0x3b
        _emit 0xc1
        _emit 0x73
        _emit 0x12
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x2b
        _emit 0xc2
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x03
        _emit 0xc7
        _emit 0xc1
        _emit 0xe0
        _emit 0x02
        _emit 0x50
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        call pt_a_00496fa4
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0xd0
        _emit 0x8b
        _emit 0xc3
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x8d
        _emit 0x2c
        _emit 0x85
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x51
        _emit 0x52
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x20
        call memmove
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x52
        _emit 0x03
        _emit 0xc5
        _emit 0x57
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call pt_a_0042a600
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x2b
        _emit 0xcb
        _emit 0xc1
        _emit 0xf9
        _emit 0x02
        _emit 0xc1
        _emit 0xe1
        _emit 0x02
        _emit 0x51
        _emit 0x53
        _emit 0x50
        call memmove
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc9
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x2b
        _emit 0xc8
        _emit 0xc1
        _emit 0xf9
        _emit 0x02
        _emit 0x03
        _emit 0xf9
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x5d
        _emit 0x5b
        _emit 0x8d
        _emit 0x0c
        _emit 0xb8
        _emit 0x03
        _emit 0xd0
        _emit 0x5f
        _emit 0x89
        _emit 0x56
        _emit 0x0c
        _emit 0x89
        _emit 0x4e
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0x6e
        _emit 0x08
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0xd5
        _emit 0x2b
        _emit 0xd3
        _emit 0xc1
        _emit 0xfa
        _emit 0x02
        _emit 0x3b
        _emit 0xd7
        _emit 0x8d
        _emit 0x04
        _emit 0xbd
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x73
        _emit 0x4b
        _emit 0x03
        _emit 0xc3
        _emit 0x50
        _emit 0x55
        _emit 0x53
        call pt_a_00457c40
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0xd0
        _emit 0x2b
        _emit 0xd3
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x51
        _emit 0xc1
        _emit 0xfa
        _emit 0x02
        _emit 0x2b
        _emit 0xfa
        _emit 0x57
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call pt_a_0042a600
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x03
        _emit 0xc8
        _emit 0x89
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x51
        _emit 0x2b
        _emit 0xf0
        _emit 0x56
        _emit 0x53
        call pt_a_0044c050
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x5d
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x55
        _emit 0x8b
        _emit 0xfd
        _emit 0x2b
        _emit 0xf8
        _emit 0x55
        _emit 0x57
        call pt_a_00457c40
        _emit 0x55
        _emit 0x57
        _emit 0x53
        _emit 0x89
        _emit 0x46
        _emit 0x08
        call pt_a_004193c0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x2c
        _emit 0x52
        _emit 0x03
        _emit 0xc3
        _emit 0x50
        _emit 0x53
        call pt_a_0044c050
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0x5d
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0x59
    }
}

// GAP: PORT1111 0x0041f08d
__declspec(naked) void gap_0041f08d(void)
{
    __asm {
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}
