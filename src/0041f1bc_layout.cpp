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
extern unsigned char DAT_004e2681[1];
extern unsigned char DAT_004e2b14[12];
extern unsigned char PTR_FUN_004dd974[4];











// GAP: PORT1111 0x0041f1bc
__declspec(naked) void gap_0041f1bc(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0041f1c0
__declspec(naked) void __fastcall FUN_0041f1c0(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x01
        _emit 0x8a
        _emit 0x50
        _emit 0x11
        _emit 0x84
        _emit 0xd2
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x89
        _emit 0x01
        _emit 0xc3
        _emit 0x8b
        _emit 0x10
        _emit 0x53
        _emit 0x8a
        _emit 0x5a
        _emit 0x11
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x1a
        _emit 0x8b
        _emit 0x42
        _emit 0x08
        _emit 0x8a
        _emit 0x58
        _emit 0x11
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x0c
        _emit 0x8b
        _emit 0xd0
        _emit 0x8b
        _emit 0x42
        _emit 0x08
        _emit 0x8a
        _emit 0x58
        _emit 0x11
        _emit 0x84
        _emit 0xdb
        _emit 0x74
        _emit 0xf4
        _emit 0x89
        _emit 0x11
        _emit 0x5b
        _emit 0xc3
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8a
        _emit 0x50
        _emit 0x11
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0x1e
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x11
        _emit 0x3b
        _emit 0x10
        _emit 0x75
        _emit 0x0c
        _emit 0x89
        _emit 0x01
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8a
        _emit 0x50
        _emit 0x11
        _emit 0x84
        _emit 0xd2
        _emit 0x74
        _emit 0xee
        _emit 0x8a
        _emit 0x50
        _emit 0x11
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0x02
        _emit 0x89
        _emit 0x01
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041f21d
__declspec(naked) void gap_0041f21d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0041f220
__declspec(naked) void __cdecl FUN_0041f220(void *param_1,void *param_2,void *param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0xc2
        _emit 0x74
        _emit 0x17
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0x31
        _emit 0x89
        _emit 0x30
        _emit 0x8b
        _emit 0x71
        _emit 0x04
        _emit 0x89
        _emit 0x70
        _emit 0x04
        _emit 0x83
        _emit 0xc0
        _emit 0x08
        _emit 0x3b
        _emit 0xc2
        _emit 0x75
        _emit 0xef
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0041f244
__declspec(naked) void gap_0041f244(void)
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
    }
}

// FUNCTION: PORT1111 0x0041f250
__declspec(naked) void FUN_0041f250(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x8b
        _emit 0xcb
        call FUN_00474610
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xc5
        _emit 0x48
        _emit 0x56
        _emit 0x74
        _emit 0x51
        _emit 0x83
        _emit 0xe8
        _emit 0x09
        _emit 0x0f
        _emit 0x85
        _emit 0xb5
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov al, byte ptr [DAT_004e2681]
        _emit 0x84
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x49
        _emit 0x10
        call FUN_0042d310
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x0e
        _emit 0x85
        _emit 0xc9
        _emit 0x0f
        _emit 0x84
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x42
        _emit 0x5c
        _emit 0x50
        call FUN_00426810
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0xe7
        _emit 0x55
        _emit 0x8b
        _emit 0xcb
        call FUN_00474610
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x57
        _emit 0x8b
        _emit 0x7a
        _emit 0x5c
        call FUN_0042ab00
        mov eax, dword ptr [DAT_004e2404]
        _emit 0x8b
        _emit 0x48
        _emit 0x10
        call FUN_0042d310
        _emit 0x8b
        _emit 0xf0
        mov al, byte ptr [DAT_004e2681]
        _emit 0x84
        _emit 0xc0
        _emit 0x8b
        _emit 0x0e
        _emit 0x74
        _emit 0x1d
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x34
        _emit 0x8b
        _emit 0x41
        _emit 0x44
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x57
        call FUN_004270d0
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0xe9
        _emit 0xeb
        _emit 0x1b
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x17
        _emit 0x8b
        _emit 0x41
        _emit 0x44
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x57
        call FUN_00426960
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0xe9
        mov ecx, dword ptr [DAT_004e2404]
        call FUN_0042c050
        _emit 0x5f
        _emit 0x55
        _emit 0x8b
        _emit 0xcb
        call FUN_00474610
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0041f344
__declspec(naked) void gap_0041f344(void)
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
    }
}

// FUNCTION: PORT1111 0x0041f350
__declspec(naked) int * __fastcall FUN_0041f350(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0x70
        _emit 0x04
        _emit 0x57
        _emit 0x8b
        _emit 0xf8
        _emit 0x8a
        _emit 0x46
        _emit 0x11
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0x2a
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x03
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x50
        _emit 0x51
        call dword ptr [PTR_FUN_004dd974]
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x05
        _emit 0x8b
        _emit 0x76
        _emit 0x08
        _emit 0xeb
        _emit 0x04
        _emit 0x8b
        _emit 0xfe
        _emit 0x8b
        _emit 0x36
        _emit 0x8a
        _emit 0x46
        _emit 0x11
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0xdc
        _emit 0x5b
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0041f392
__declspec(naked) void gap_0041f392(void)
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

// FUNCTION: PORT1111 0x0041f3a0
__declspec(naked) int * __fastcall FUN_0041f3a0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0x70
        _emit 0x04
        _emit 0x57
        _emit 0x8b
        _emit 0xf8
        _emit 0x8a
        _emit 0x46
        _emit 0x11
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0x2a
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x0b
        _emit 0x50
        _emit 0x51
        call dword ptr [PTR_FUN_004dd974]
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0xfe
        _emit 0x8b
        _emit 0x36
        _emit 0xeb
        _emit 0x03
        _emit 0x8b
        _emit 0x76
        _emit 0x08
        _emit 0x8a
        _emit 0x46
        _emit 0x11
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0xdc
        _emit 0x5b
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0041f3e2
__declspec(naked) void gap_0041f3e2(void)
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

// FUNCTION: PORT1111 0x0041f3f0
__declspec(naked) void __cdecl FUN_0041f3f0(int param_1,int param_2,void *param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x3b
        _emit 0xd1
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x17
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0xf8
        _emit 0x83
        _emit 0xe9
        _emit 0x08
        _emit 0x83
        _emit 0xe8
        _emit 0x08
        _emit 0x3b
        _emit 0xca
        _emit 0x89
        _emit 0x30
        _emit 0x8b
        _emit 0x71
        _emit 0x04
        _emit 0x89
        _emit 0x70
        _emit 0x04
        _emit 0x75
        _emit 0xeb
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041f418
__declspec(naked) void gap_0041f418(void)
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

// FUNCTION: PORT1111 0x0041f420
__declspec(naked) void __cdecl FUN_0041f420(void *param_1,void *param_2,void *param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0xca
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x28
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x1e
        _emit 0x8b
        _emit 0xf8
        _emit 0x89
        _emit 0x1f
        _emit 0x8b
        _emit 0x5e
        _emit 0x04
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x8b
        _emit 0x76
        _emit 0x08
        _emit 0x89
        _emit 0x77
        _emit 0x08
        _emit 0x83
        _emit 0xc1
        _emit 0x0c
        _emit 0x83
        _emit 0xc0
        _emit 0x0c
        _emit 0x3b
        _emit 0xca
        _emit 0x75
        _emit 0xde
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041f459
__declspec(naked) void gap_0041f459(void)
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

// FUNCTION: PORT1111 0x0041f460
__declspec(naked) void __cdecl FUN_0041f460(void *param_1,void *param_2,void *param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0xca
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x1a
        _emit 0x56
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x31
        _emit 0x89
        _emit 0x30
        _emit 0x8b
        _emit 0x71
        _emit 0x04
        _emit 0x89
        _emit 0x70
        _emit 0x04
        _emit 0x83
        _emit 0xc1
        _emit 0x08
        _emit 0x83
        _emit 0xc0
        _emit 0x08
        _emit 0x3b
        _emit 0xca
        _emit 0x75
        _emit 0xe8
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041f48b
__declspec(naked) void gap_0041f48b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
