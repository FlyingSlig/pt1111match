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

extern const unsigned char DAT_004cc884[];
extern const unsigned char s_list_T__too_long_004bce98[];
extern void * DAT_004e240c;
extern const unsigned char DAT_004c36f8[8];
extern const unsigned char s_verdade_004c36f0[8];
extern const unsigned char s_FALSE_004c36e8[8];
extern const unsigned char s_falso_004c36e0[8];
extern const unsigned char DAT_004c36d8[8];
extern const unsigned char DAT_004c36d0[8];
extern const unsigned char DAT_004c36cc[4];
extern const unsigned char s_baixo_004c36c4[8];
extern const unsigned char DAT_004c36bc[8];
extern const unsigned char DAT_004c36b4[8];
extern const unsigned char s_EMPTY_004c36ac[8];
extern const unsigned char s_vazio_004c36a4[8];
extern const unsigned char s_MEDIUM_004c369c[8];
extern const unsigned char DAT_004c3694[8];
extern const unsigned char DAT_004c368c[8];
extern const unsigned char DAT_004c3684[8];
extern const unsigned char s_UNKNOWN_004c367c[8];













// FUNCTION: PORT1111 0x0043d4d0
__declspec(naked) void __fastcall FUN_0043d4d0(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7e78
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x83
        _emit 0xec
        _emit 0x44
        _emit 0x56
        _emit 0xbe
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x3f
        _emit 0x2b
        _emit 0xf0
        _emit 0x3b
        _emit 0xf2
        _emit 0x5e
        _emit 0x73
        _emit 0x51
        _emit 0x6a
        _emit 0x10
        push OFFSET s_list_T__too_long_004bce98
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
        _emit 0x03
        _emit 0xc2
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x44
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x50
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043d563
__declspec(naked) void gap_0043d563(void)
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

// FUNCTION: PORT1111 0x0043d570
__declspec(naked) void FUN_0043d570(void *pthis,int param_1,int param_2,void *param_3,int param_4)
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
        push OFFSET pt_eh_stub_004b7e9b
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x55
        _emit 0x8b
        _emit 0xe9
        _emit 0x8b
        _emit 0x45
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0x30
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x5a
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x53
        call FUN_0043cdf0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x39
        _emit 0x41
        _emit 0x04
        _emit 0x0f
        _emit 0x84
        _emit 0x16
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x53
        call FUN_0043ce50
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x39
        _emit 0x51
        _emit 0x04
        _emit 0x75
        _emit 0x16
        _emit 0x8b
        _emit 0x41
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0xf9
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0xbf
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0043d150
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x75
        _emit 0x08
        _emit 0x75
        _emit 0xb4
        _emit 0x85
        _emit 0xff
        _emit 0x0f
        _emit 0x85
        _emit 0x99
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x53
        call FUN_00414c30
        _emit 0x6a
        _emit 0x28
        _emit 0x8b
        _emit 0xf8
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x33
        _emit 0xf6
        _emit 0x3b
        _emit 0xc6
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0043cf10
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x4e
        _emit 0x08
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x56
        _emit 0x14
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0xcf
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x28
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x34
        _emit 0x89
        _emit 0x4e
        _emit 0x18
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_0043d150
        _emit 0x8b
        _emit 0x7d
        _emit 0x08
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x8d
        _emit 0x75
        _emit 0x04
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x52
        _emit 0x50
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
        call FUN_0043d4d0
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x8b
        _emit 0x4b
        _emit 0x04
        _emit 0x89
        _emit 0x19
        _emit 0x8b
        _emit 0x75
        _emit 0x10
        _emit 0x85
        _emit 0xf6
        _emit 0x7e
        _emit 0x3f
        _emit 0x8b
        _emit 0x55
        _emit 0x08
        _emit 0x8b
        _emit 0x02
        _emit 0x33
        _emit 0xc9
        _emit 0x3b
        _emit 0xc2
        _emit 0x74
        _emit 0x0f
        _emit 0x90
        _emit 0x8b
        _emit 0x78
        _emit 0x08
        _emit 0x8b
        _emit 0x5f
        _emit 0x0c
        _emit 0x8b
        _emit 0x00
        _emit 0x03
        _emit 0xcb
        _emit 0x3b
        _emit 0xc2
        _emit 0x75
        _emit 0xf2
        _emit 0x8b
        _emit 0x55
        _emit 0x14
        _emit 0x8b
        _emit 0x42
        _emit 0x38
        _emit 0x2b
        _emit 0xc6
        _emit 0x2b
        _emit 0xc1
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x05
        _emit 0x03
        _emit 0xf0
        _emit 0x89
        _emit 0x75
        _emit 0x10
        _emit 0x8b
        _emit 0x45
        _emit 0x10
        _emit 0x50
        _emit 0x8b
        _emit 0xcd
        _emit 0xc7
        _emit 0x45
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0043d310
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
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
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043d6e8
__declspec(naked) void gap_0043d6e8(void)
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
