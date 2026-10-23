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












// FUNCTION: PORT1111 0x0040ac50
__declspec(naked) void __fastcall FUN_0040ac50(void *pthis,int param_1,void *param_2,void *param_3)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5c60
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
        _emit 0x0c
        _emit 0x53
        _emit 0x8b
        _emit 0x5d
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0x75
        _emit 0x0c
        _emit 0x57
        _emit 0x89
        _emit 0x65
        _emit 0xf0
        _emit 0x89
        _emit 0x4d
        _emit 0xec
        _emit 0x89
        _emit 0x75
        _emit 0xe8
        _emit 0xc7
        _emit 0x45
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x75
        _emit 0x10
        _emit 0x74
        _emit 0x5a
        _emit 0x8b
        _emit 0x4d
        _emit 0xec
        _emit 0x8d
        _emit 0x46
        _emit 0x08
        _emit 0x50
        _emit 0x8b
        _emit 0x43
        _emit 0x04
        _emit 0x50
        _emit 0x53
        call FUN_00413870
        _emit 0x8b
        _emit 0x4d
        _emit 0xec
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xf8
        call FUN_00409f80
        _emit 0x89
        _emit 0x7b
        _emit 0x04
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x89
        _emit 0x39
        _emit 0x8b
        _emit 0x36
        _emit 0x89
        _emit 0x75
        _emit 0x0c
        _emit 0xeb
        _emit 0xcf
    }
}

// FUNCTION: PORT1111 0x0040acb5
__declspec(naked) void FUN_0040acb5(void)
{
    __asm {
        _emit 0x8b
        _emit 0x75
        _emit 0xe8
        _emit 0x8b
        _emit 0x7d
        _emit 0x0c
        _emit 0x3b
        _emit 0xf7
        _emit 0x74
        _emit 0x1b
        _emit 0x8b
        _emit 0x5d
        _emit 0xec
        _emit 0x8b
        _emit 0x55
        _emit 0x08
        _emit 0x8b
        _emit 0x42
        _emit 0x04
        _emit 0x50
        _emit 0x8d
        _emit 0x45
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xcb
        call FUN_00409c70
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0xf7
        _emit 0x75
        _emit 0xe8
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        call _CxxThrowException
    }
}

// GAP: PORT1111 0x0040ace3
__declspec(naked) void gap_0040ace3(void)
{
    __asm {
        _emit 0x8b
        _emit 0x4d
        _emit 0xf4
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
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc2
        _emit 0x10
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
    }
}

// FUNCTION: PORT1111 0x0040ad00
__declspec(naked) void __fastcall FUN_0040ad00(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x7b
        _emit 0x8b
        _emit 0x48
        _emit 0x50
        _emit 0x8b
        _emit 0x51
        _emit 0x7c
        _emit 0x0f
        _emit 0xaf
        _emit 0x51
        _emit 0x78
        _emit 0x3b
        _emit 0x56
        _emit 0x1c
        _emit 0x53
        _emit 0x57
        _emit 0x7d
        _emit 0x3e
        _emit 0x8b
        _emit 0x40
        _emit 0x50
        _emit 0x8b
        _emit 0x48
        _emit 0x7c
        _emit 0x0f
        _emit 0xaf
        _emit 0x48
        _emit 0x78
        _emit 0x8b
        _emit 0x56
        _emit 0x20
        _emit 0x89
        _emit 0x4e
        _emit 0x1c
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x52
        call FUN_00414c30
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x19
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x14
        _emit 0x75
        _emit 0xea
        _emit 0x8b
        _emit 0x7e
        _emit 0x14
        _emit 0x8b
        _emit 0x57
        _emit 0x04
        _emit 0x83
        _emit 0xc6
        _emit 0x10
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
        _emit 0x5b
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040ad96
__declspec(naked) void gap_0040ad96(void)
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

// FUNCTION: PORT1111 0x0040ada0
__declspec(naked) void * __fastcall FUN_0040ada0(void *pthis,int param_1)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5c70
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
        _emit 0x08
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x89
        _emit 0x65
        _emit 0xf0
        _emit 0x89
        _emit 0x75
        _emit 0xec
        call FUN_0043d220
        _emit 0x8b
        _emit 0x4d
        _emit 0x08
        _emit 0x8b
        _emit 0x7d
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0x8b
        _emit 0x11
        _emit 0x8b
        _emit 0x00
        _emit 0x57
        _emit 0x51
        _emit 0x52
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x45
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0040ac50
        _emit 0x8b
        _emit 0x4d
        _emit 0xf4
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x0040ae09
__declspec(naked) void FUN_0040ae09(void)
{
    __asm {
        _emit 0x8b
        _emit 0x4d
        _emit 0xec
        call FUN_00409650
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        call _CxxThrowException
    }
}

// GAP: PORT1111 0x0040ae1a
__declspec(naked) void gap_0040ae1a(void)
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

// FUNCTION: PORT1111 0x0040ae20
__declspec(naked) void * __fastcall FUN_0040ae20(void *pthis,void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x83
        _emit 0xc1
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0040ada0
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
