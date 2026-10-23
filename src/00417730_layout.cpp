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

extern int DAT_004e0af4;
extern unsigned char DAT_004e2424[];
extern unsigned char DAT_004e0b04[4];
extern unsigned char DAT_004e0b08[4];
extern unsigned char DAT_004e0b0c[4];
extern unsigned char DAT_004e0b00[4];
extern unsigned char DAT_004e26fc[4];
extern const unsigned char PTR_GetAsyncKeyState_004bc2dc[4];
extern unsigned char DAT_004e086c[4];
extern unsigned char DAT_004e2414[4];
extern unsigned char DAT_004e26f0[4];
extern const unsigned char s_Nenhuma_regra__004bef78[16];
extern const unsigned char PTR_FUN_004bef74[4];












// GAP: PORT1111 0x00417730
__declspec(naked) void gap_00417730(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x5e
        _emit 0x59
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00417740
__declspec(naked) void __cdecl FUN_00417740(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8d
        _emit 0x46
        _emit 0x14
        _emit 0x50
        mov ecx, OFFSET DAT_004e0af4
        call FUN_00417480
        _emit 0x89
        _emit 0x30
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00417757
__declspec(naked) void gap_00417757(void)
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
    }
}

// FUNCTION: PORT1111 0x00417760
__declspec(naked) void __cdecl FUN_00417760(int param_1)
{
    __asm {
        mov edx, dword ptr [DAT_004e0b04]
        _emit 0x85
        _emit 0xd2
        _emit 0x56
        mov esi, dword ptr [DAT_004e0b08]
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x25
        mov ecx, dword ptr [DAT_004e0b0c]
        _emit 0x8b
        _emit 0xc6
        _emit 0x2b
        _emit 0xc2
        _emit 0x2b
        _emit 0xca
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0xc1
        _emit 0xf9
        _emit 0x02
        _emit 0x3b
        _emit 0xc1
        _emit 0x73
        _emit 0x0f
        _emit 0x8b
        _emit 0xc6
        _emit 0x89
        _emit 0x3e
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0x5f
        mov dword ptr [DAT_004e0b08], eax
        _emit 0x5e
        _emit 0xc3
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x6a
        _emit 0x01
        _emit 0x56
        mov ecx, OFFSET DAT_004e0b00
        call pt_a_00416e50
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004177b4
__declspec(naked) void gap_004177b4(void)
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

// FUNCTION: PORT1111 0x004177c0
__declspec(naked) void __fastcall FUN_004177c0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b64a8
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
        _emit 0x14
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x86
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call FUN_0040ada0
        _emit 0x8b
        _emit 0x8e
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00453b70
        _emit 0x8b
        _emit 0xf8
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0x29
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x06
        _emit 0x3b
        _emit 0xc6
        _emit 0x89
        _emit 0x36
        _emit 0x89
        _emit 0x76
        _emit 0x04
        _emit 0x0f
        _emit 0x84
        _emit 0xcd
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x38
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xfe
        _emit 0x8b
        _emit 0xc7
        _emit 0x75
        _emit 0xef
        _emit 0xe9
        _emit 0xb7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x34
        cmp ecx, dword ptr [DAT_004e26fc]
        _emit 0x0f
        _emit 0x85
        _emit 0x7e
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        call FUN_00412b60
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x73
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x53
        _emit 0x8b
        _emit 0x1f
        _emit 0x3b
        _emit 0xdf
        _emit 0x74
        _emit 0x3d
        _emit 0x55
        _emit 0x8d
        _emit 0x6e
        _emit 0x04
        _emit 0x8b
        _emit 0x53
        _emit 0x08
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x8b
        _emit 0xcd
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x18
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0x46
        _emit 0x08
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_004131e0
        _emit 0x8b
        _emit 0x1b
        _emit 0x3b
        _emit 0xdf
        _emit 0x75
        _emit 0xc8
        _emit 0x5d
        _emit 0x8b
        _emit 0x8e
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_00453950
        _emit 0x8b
        _emit 0x07
        _emit 0x3b
        _emit 0xc7
        _emit 0x89
        _emit 0x3f
        _emit 0x89
        _emit 0x7f
        _emit 0x04
        _emit 0x5b
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x30
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xf7
        _emit 0x8b
        _emit 0xc6
        _emit 0x75
        _emit 0xef
        _emit 0x57
        _emit 0xeb
        _emit 0x21
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x06
    }
}

// GAP: PORT1111 0x004178cb
__declspec(naked) void gap_004178cb(void)
{
    __asm {
        _emit 0x3b
        _emit 0xc6
        _emit 0x89
        _emit 0x36
        _emit 0x89
        _emit 0x76
        _emit 0x04
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x38
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xfe
        _emit 0x8b
        _emit 0xc7
        _emit 0x75
        _emit 0xef
        _emit 0x56
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x83
        _emit 0xc4
        _emit 0x04
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
        _emit 0x20
        _emit 0xc3
        _emit 0xcc
    }
}
