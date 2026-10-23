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
extern const unsigned char DAT_004cd26c[16];
extern const unsigned char s_Unknown_file_format_004bec88[148];












// FUNCTION: PORT1111 0x004128e0
__declspec(naked) void __fastcall FUN_004128e0(void *pthis,LPRECT param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x50
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0x70
        _emit 0x74
        _emit 0x03
        _emit 0xf2
        _emit 0x56
        _emit 0x8b
        _emit 0x70
        _emit 0x70
        _emit 0x03
        _emit 0xf1
        _emit 0x56
        _emit 0x8b
        _emit 0x70
        _emit 0x6c
        _emit 0x8b
        _emit 0x40
        _emit 0x68
        _emit 0x03
        _emit 0xf2
        _emit 0x56
        _emit 0x03
        _emit 0xc1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x51
        call dword ptr [SetRect]
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00412911
__declspec(naked) void gap_00412911(void)
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

// FUNCTION: PORT1111 0x00412920
__declspec(naked) void __fastcall FUN_00412920(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x48
        _emit 0x8b
        _emit 0xf1
        _emit 0x0f
        _emit 0x84
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x48
        _emit 0x74
        _emit 0x57
        _emit 0x48
        _emit 0x74
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        mov dword ptr [esp + 0x14], OFFSET s_Unknown_file_format_004bec88
        call _CxxThrowException
        _emit 0x8b
        _emit 0x16
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x40
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x44
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0x74
        _emit 0x69
        _emit 0x57
        _emit 0xff
        _emit 0x52
        _emit 0x48
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xce
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x06
        _emit 0xff
        _emit 0x50
        _emit 0x7c
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x16
        _emit 0xff
        _emit 0x52
        _emit 0x78
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x7c
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x40
        _emit 0x8b
        _emit 0x16
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x44
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0x75
        _emit 0x33
        _emit 0xff
        _emit 0x50
        _emit 0x74
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x78
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x7c
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x40
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x74
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x78
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x7c
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004129e6
__declspec(naked) void gap_004129e6(void)
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

// FUNCTION: PORT1111 0x004129f0
__declspec(naked) void __fastcall FUN_004129f0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x48
        _emit 0x8b
        _emit 0xf1
        _emit 0x74
        _emit 0x4f
        _emit 0x48
        _emit 0x74
        _emit 0x37
        _emit 0x48
        _emit 0x74
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        mov dword ptr [esp + 0x14], OFFSET s_Unknown_file_format_004bec88
        call _CxxThrowException
        _emit 0x8b
        _emit 0x16
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x54
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x58
        _emit 0x8b
        _emit 0x16
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x5c
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x54
        _emit 0x8b
        _emit 0x16
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x58
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x54
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00412a5a
__declspec(naked) void gap_00412a5a(void)
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

// FUNCTION: PORT1111 0x00412a60
__declspec(naked) void __fastcall FUN_00412a60(void *param_1)
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
        _emit 0x10
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xd3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x57
        _emit 0x3c
        _emit 0x85
        _emit 0xd2
        _emit 0x0f
        _emit 0x84
        _emit 0xc8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x82
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xba
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x2c
        _emit 0x0f
        _emit 0xbf
        _emit 0x70
        _emit 0x4e
        _emit 0x0f
        _emit 0xbf
        _emit 0x40
        _emit 0x4c
        _emit 0x8b
        _emit 0xca
        _emit 0x2b
        _emit 0xb1
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x2b
        _emit 0x81
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x82
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xed
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x8e
        _emit 0x89
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xdb
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x71
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x3c
        _emit 0x8b
        _emit 0x88
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x90
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xaf
        _emit 0xcb
        _emit 0x03
        _emit 0xcd
        _emit 0x83
        _emit 0x3c
        _emit 0x8a
        _emit 0x00
        _emit 0x74
        _emit 0x43
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x03
        _emit 0xc5
        _emit 0x03
        _emit 0xcb
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x50
        call FUN_00429b00
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x19
        _emit 0x8d
        _emit 0x47
        _emit 0xec
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x23
        _emit 0xc7
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00428460
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_0041f0c0
        _emit 0x8b
        _emit 0x4f
        _emit 0x3c
        _emit 0x8b
        _emit 0x81
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x43
        _emit 0x3b
        _emit 0xd8
        _emit 0x7c
        _emit 0x95
        _emit 0x8b
        _emit 0x57
        _emit 0x3c
        _emit 0x8b
        _emit 0x82
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x45
        _emit 0x3b
        _emit 0xe8
        _emit 0x0f
        _emit 0x8c
        _emit 0x77
        _emit 0xff
        _emit 0xff
        _emit 0xff
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

// GAP: PORT1111 0x00412b55
__declspec(naked) void gap_00412b55(void)
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
