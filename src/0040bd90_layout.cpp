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
extern unsigned char DAT_004e2418[4];
extern const unsigned char s_unidades_passadas_para_Formation_004bd590[48];













// FUNCTION: PORT1111 0x0040bd90
__declspec(naked) void __fastcall FUN_0040bd90(void *pthis,unsigned int param_1)
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
        push OFFSET pt_eh_stub_004b5d08
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

// GAP: PORT1111 0x0040be23
__declspec(naked) void gap_0040be23(void)
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

// FUNCTION: PORT1111 0x0040be30
__declspec(naked) void __fastcall FUN_0040be30(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x7e
        _emit 0x04
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x50
        _emit 0x51
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
        call FUN_0040bd90
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x8b
        _emit 0x53
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0x89
        _emit 0x1a
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040be62
__declspec(naked) void gap_0040be62(void)
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

// FUNCTION: PORT1111 0x0040be70
__declspec(naked) int * __fastcall FUN_0040be70(int param_1)
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
        push OFFSET pt_eh_stub_004b5d2b
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
        _emit 0x08
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8a
        _emit 0x46
        _emit 0x40
        _emit 0x33
        _emit 0xdb
        _emit 0x3a
        _emit 0xc3
        _emit 0x75
        _emit 0x26
        _emit 0x8b
        _emit 0x4e
        _emit 0x14
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x89
        _emit 0x56
        _emit 0x1c
        _emit 0x5e
        _emit 0x5b
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0xc3
        _emit 0x6a
        _emit 0x50
        _emit 0xc6
        _emit 0x46
        _emit 0x40
        _emit 0x01
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xc3
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0xc8
        call FUN_0040bb90
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xeb
        _emit 0x06
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0xc3
        _emit 0x8b
        _emit 0x4e
        _emit 0x44
        _emit 0x8b
        _emit 0x56
        _emit 0x2c
        _emit 0x55
        _emit 0x57
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x52
        _emit 0x8b
        _emit 0x56
        _emit 0x24
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x52
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x34
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x28
        call FUN_0040b990
        _emit 0x8b
        _emit 0x5e
        _emit 0x14
        _emit 0x8b
        _emit 0x43
        _emit 0x04
        _emit 0x8d
        _emit 0x7e
        _emit 0x10
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x50
        _emit 0x53
        _emit 0x8b
        _emit 0xcf
        call FUN_00413870
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcf
        _emit 0x8b
        _emit 0xe8
        call FUN_0040bd90
        _emit 0x89
        _emit 0x6b
        _emit 0x04
        _emit 0x8b
        _emit 0x4d
        _emit 0x04
        _emit 0x89
        _emit 0x29
        _emit 0x8b
        _emit 0x56
        _emit 0x30
        _emit 0x8b
        _emit 0x5e
        _emit 0x20
        _emit 0x8b
        _emit 0x4e
        _emit 0x38
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        _emit 0x8b
        _emit 0x7e
        _emit 0x24
        _emit 0x03
        _emit 0xda
        _emit 0x8b
        _emit 0x56
        _emit 0x28
        _emit 0x03
        _emit 0xf8
        _emit 0x8b
        _emit 0x46
        _emit 0x2c
        _emit 0x03
        _emit 0xd1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x56
        _emit 0x28
        _emit 0x8b
        _emit 0x56
        _emit 0x3c
        _emit 0x89
        _emit 0x7e
        _emit 0x24
        _emit 0x5f
        _emit 0x03
        _emit 0xc2
        _emit 0x89
        _emit 0x5e
        _emit 0x20
        _emit 0x89
        _emit 0x46
        _emit 0x2c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x5d
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
        _emit 0x14
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040bf7e
__declspec(naked) void gap_0040bf7e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}
