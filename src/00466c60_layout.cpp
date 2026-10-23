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

extern unsigned char PTR_DAT_004dd95c[4];
extern unsigned char DAT_004ddb0c[12];
extern const unsigned char PTR_FUN_004c5e58[140];














// FUNCTION: PORT1111 0x00466c60
__declspec(naked) int * __fastcall FUN_00466c60(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x51
        _emit 0xc7
        _emit 0x04
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x09
        mov eax, dword ptr [PTR_DAT_004dd95c]
        _emit 0x6a
        _emit 0xff
        _emit 0x51
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        call FUN_00466160
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        call FUN_00466040
        mov edx, dword ptr [PTR_DAT_004dd95c]
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x08
        _emit 0x6a
        _emit 0xff
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x16
        call FUN_00466160
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x11
        cmp edi, dword ptr [PTR_DAT_004dd95c]
        _emit 0x74
        _emit 0x09
        _emit 0x57
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x59
    }
}

// GAP: PORT1111 0x00466cc7
__declspec(naked) void gap_00466cc7(void)
{
    __asm {
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00466cd0
__declspec(naked) int * __fastcall FUN_00466cd0(void *pthis,void *param_1,void *param_2,int param_3)
{
    __asm {
        _emit 0x51
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x07
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc2
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x74
        _emit 0x7d
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xed
        _emit 0x74
        _emit 0x6c
        _emit 0x56
        _emit 0x6a
        _emit 0x00
        _emit 0x55
        _emit 0x8b
        _emit 0xcf
        call FUN_00466490
        _emit 0x8b
        _emit 0xf0
        _emit 0x83
        _emit 0xfe
        _emit 0xff
        _emit 0x74
        _emit 0x51
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x90
        _emit 0x8b
        _emit 0xc5
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc2
        _emit 0x8d
        _emit 0x44
        _emit 0x30
        _emit 0xff
        _emit 0x50
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_00466bc0
        _emit 0x85
        _emit 0xdb
        _emit 0x74
        _emit 0x09
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_00465f10
        _emit 0x6a
        _emit 0x00
        _emit 0x55
        _emit 0x8b
        _emit 0xcf
        call FUN_00466490
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x05
        _emit 0x83
        _emit 0xfe
        _emit 0xff
        _emit 0x75
        _emit 0xbf
        _emit 0x5b
        _emit 0x5e
        _emit 0x5d
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x59
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x5e
        _emit 0x5d
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x59
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x5d
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x59
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x59
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00466d73
__declspec(naked) void gap_00466d73(void)
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

// FUNCTION: PORT1111 0x00466d80
__declspec(naked) int * __fastcall FUN_00466d80(void *pthis,void *param_1,unsigned int param_2,unsigned int param_3)
{
    __asm {
        _emit 0x51
        _emit 0xc7
        _emit 0x04
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x09
        _emit 0x56
        _emit 0x57
        mov edi, dword ptr [PTR_DAT_004dd95c]
        _emit 0x8b
        _emit 0xc1
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x08
        _emit 0x8d
        _emit 0x70
        _emit 0x01
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8a
        _emit 0x10
        _emit 0x40
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc6
        _emit 0x74
        _emit 0x31
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x3b
        _emit 0xde
        _emit 0x73
        _emit 0x23
        _emit 0x3b
        _emit 0xf0
        _emit 0x77
        _emit 0x1f
        _emit 0x03
        _emit 0xcb
        _emit 0x6a
        _emit 0xff
        _emit 0x51
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call FUN_00466160
        _emit 0x2b
        _emit 0xf3
        _emit 0x46
        _emit 0x56
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call FUN_00465d40
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x5b
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        mov eax, dword ptr [PTR_DAT_004dd95c]
        _emit 0x6a
        _emit 0xff
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x06
        call FUN_00466160
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x11
        cmp edi, dword ptr [PTR_DAT_004dd95c]
        _emit 0x74
        _emit 0x09
        _emit 0x57
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x5f
        _emit 0x8b
    }
}

// GAP: PORT1111 0x00466e08
__declspec(naked) void gap_00466e08(void)
{
    __asm {
        _emit 0xc6
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00466e10
__declspec(naked) int * __fastcall FUN_00466e10(void *pthis,void *param_1,unsigned int param_2)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x0e
        mov eax, dword ptr [PTR_DAT_004dd95c]
        _emit 0x6a
        _emit 0xff
        _emit 0x51
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        call FUN_00466160
        _emit 0x8b
        _emit 0x06
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xc2
        _emit 0x72
        _emit 0x1b
        _emit 0x8b
        _emit 0xc6
        _emit 0x8d
        _emit 0x78
        _emit 0x01
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc7
        _emit 0x3b
        _emit 0xd0
        _emit 0x73
        _emit 0x03
        _emit 0x88
        _emit 0x0c
        _emit 0x16
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        mov edx, dword ptr [PTR_DAT_004dd95c]
        _emit 0x6a
        _emit 0xff
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x17
        call FUN_00466160
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x11
        cmp esi, dword ptr [PTR_DAT_004dd95c]
        _emit 0x74
        _emit 0x09
        _emit 0x56
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0x59
    }
}

// GAP: PORT1111 0x00466ea0
__declspec(naked) void gap_00466ea0(void)
{
    __asm {
        _emit 0xc2
        _emit 0x08
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00466eb0
__declspec(naked) int FUN_00466eb0(void *param_1)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x83
        _emit 0xe4
        _emit 0xf8
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b97cb
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
        _emit 0x81
        _emit 0xec
        _emit 0x20
        _emit 0x04
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004ddb0c]
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0x75
        _emit 0x08
        _emit 0x85
        _emit 0xf6
        _emit 0x89
        _emit 0x84
        _emit 0x24
        _emit 0x20
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x75
        _emit 0x07
        _emit 0x33
        _emit 0xc0
        _emit 0xe9
        _emit 0x99
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ebx, dword ptr [PTR_DAT_004dd95c]
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x33
        _emit 0xc0
        _emit 0xb9
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0xf3
        _emit 0xab
        _emit 0x68
        _emit 0x00
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0xaa
        _emit 0x8b
        _emit 0x06
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x84
        _emit 0x24
        _emit 0x3c
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x3b
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x52
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call FUN_00466040
        _emit 0x33
        _emit 0xc0
        _emit 0xb9
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0xf3
        _emit 0xab
        _emit 0x68
        _emit 0x00
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0xaa
        _emit 0x8b
        _emit 0x06
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0xcf
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x6a
        _emit 0xff
        _emit 0x53
        call FUN_00466160
        _emit 0x85
        _emit 0xdb
        _emit 0x74
        _emit 0x11
        cmp ebx, dword ptr [PTR_DAT_004dd95c]
        _emit 0x74
        _emit 0x09
        _emit 0x53
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0x2c
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0x24
        _emit 0x04
        _emit 0x00
        _emit 0x00
        call pt_a_00497aa6
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
    }
}

// GAP: PORT1111 0x00466fab
__declspec(naked) void gap_00466fab(void)
{
    __asm {
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00466fb0
__declspec(naked) int * __fastcall FUN_00466fb0(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x56
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466c60
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x00466fd0
__declspec(naked) int * __fastcall FUN_00466fd0(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x10
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x56
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466c60
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00466ff2
__declspec(naked) void gap_00466ff2(void)
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

// FUNCTION: PORT1111 0x00467000
__declspec(naked) void __fastcall FUN_00467000(void *pthis,char param_1)
{
    __asm {
        _emit 0x8a
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x52
        _emit 0x88
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x09
        _emit 0x00
        call FUN_00466040
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0046701a
__declspec(naked) void gap_0046701a(void)
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

// FUNCTION: PORT1111 0x00467020
__declspec(naked) int * __cdecl FUN_00467020(void *param_1,void *param_2,void *param_3)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [PTR_DAT_004dd95c]
        _emit 0x6a
        _emit 0xff
        _emit 0x51
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        call FUN_00466160
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x53
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call FUN_00466040
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        mov edx, dword ptr [PTR_DAT_004dd95c]
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x6a
        _emit 0xff
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x17
        call FUN_00466160
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x11
        cmp esi, dword ptr [PTR_DAT_004dd95c]
        _emit 0x74
        _emit 0x09
        _emit 0x56
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xdb
        _emit 0x74
        _emit 0x11
        cmp ebx, dword ptr [PTR_DAT_004dd95c]
        _emit 0x74
        _emit 0x09
        _emit 0x53
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
    }
}

// GAP: PORT1111 0x00467098
__declspec(naked) void gap_00467098(void)
{
    __asm {
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x59
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004670a0
__declspec(naked) void __fastcall FUN_004670a0(void *pthis,void *param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        call FUN_00466cd0
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x004670b4
__declspec(naked) void gap_004670b4(void)
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

// FUNCTION: PORT1111 0x004670c0
__declspec(naked) int * __fastcall FUN_004670c0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x03
        _emit 0x8b
        _emit 0xf1
        call FUN_0046ac80
        mov dword ptr [esi], OFFSET PTR_FUN_004c5e58
        _emit 0xc7
        _emit 0x46
        _emit 0x2c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x86
        _emit 0xac
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004670e7
__declspec(naked) void gap_004670e7(void)
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x24
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00467100
__declspec(naked) int __fastcall FUN_00467100(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0x8b
        _emit 0xf8
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x0f
        _emit 0xaf
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00467118
__declspec(naked) void gap_00467118(void)
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
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x04
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
        _emit 0x8b
        _emit 0x41
        _emit 0x3c
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
        _emit 0x8a
        _emit 0x81
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0x8b
        _emit 0x41
        _emit 0x40
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
