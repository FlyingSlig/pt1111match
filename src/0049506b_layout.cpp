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

extern const unsigned char PTR_CreatePenIndirect_004bc040[4];
extern const unsigned char PTR_SelectObject_004bc07c[4];
extern const unsigned char PTR_Polyline_004bc034[4];
extern const unsigned char PTR_DeleteObject_004bc084[4];
extern const unsigned char PTR_FUN_004c6dd0[4];
extern const unsigned char PTR_FUN_004c6dd4[12];
extern unsigned char PTR_PTR_004dd9e8[48];
extern unsigned char DAT_004ddaa0[8];
extern unsigned char DAT_004dda88[24];
extern unsigned char DAT_004dda80[8];
extern unsigned char DAT_004dda78[8];
extern unsigned char DAT_004ddaa8[12];
extern unsigned char DAT_004dda70[8];
extern const unsigned char PTR_GetKeyState_004bc2e0[4];
extern const unsigned char PTR_FUN_004c6de0[4];













// GAP: PORT1111 0x0049506b
__declspec(naked) void gap_0049506b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00495070
__declspec(naked) void __fastcall FUN_00495070(int param_1)
{
    __asm {
        _emit 0xc7
        _emit 0x41
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x22
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x2b
        _emit 0xc2
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x16
        _emit 0x8b
        _emit 0xca
        _emit 0x8b
        _emit 0x01
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0e
        _emit 0xc7
        _emit 0x40
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x40
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004950a1
__declspec(naked) void gap_004950a1(void)
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

// FUNCTION: PORT1111 0x004950b0
__declspec(naked) void __fastcall FUN_004950b0(void *pthis,int param_1)
{
    __asm {
        _emit 0x55
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x8b
        _emit 0x57
        _emit 0x14
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xd0
        _emit 0x7d
        _emit 0x4f
        _emit 0x85
        _emit 0xd2
        _emit 0x7c
        _emit 0x4b
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x8b
        _emit 0x2c
        _emit 0x90
        _emit 0x85
        _emit 0xed
        _emit 0x8d
        _emit 0x14
        _emit 0x90
        _emit 0x74
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0xcd
        call FUN_00494b40
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x39
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0x77
        _emit 0x08
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x29
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x0e
        _emit 0x52
        call FUN_00494b40
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x11
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0x43
        _emit 0x3b
        _emit 0xf0
        _emit 0x75
        _emit 0xe5
        _emit 0xeb
        _emit 0x09
        _emit 0x33
        _emit 0xed
        _emit 0xeb
        _emit 0xce
        _emit 0x8b
        _emit 0x2e
        _emit 0x89
        _emit 0x5f
        _emit 0x14
        _emit 0x5e
        _emit 0x5b
        _emit 0x85
        _emit 0xed
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xcd
        call FUN_00494bb0
        _emit 0x5f
        _emit 0x5d
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0049513d
__declspec(naked) void gap_0049513d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00495140
__declspec(naked) void __fastcall FUN_00495140(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x77
        _emit 0x08
        _emit 0x3b
        _emit 0x77
        _emit 0x0c
        _emit 0x74
        _emit 0x1a
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8b
        _emit 0x0e
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
        _emit 0x47
        _emit 0x0c
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0x3b
        _emit 0xf0
        _emit 0x75
        _emit 0xea
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x47
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x47
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x47
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// GAP: PORT1111 0x0049518b
__declspec(naked) void gap_0049518b(void)
{
    __asm {
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00495190
__declspec(naked) void __fastcall FUN_00495190(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004bab1b
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
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        mov dword ptr [esi], OFFSET PTR_FUN_004c6de0
        _emit 0x33
        _emit 0xff
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        call FUN_00495140
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        _emit 0x89
        _emit 0x7e
        _emit 0x10
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
    }
}

// GAP: PORT1111 0x004951e6
__declspec(naked) void gap_004951e6(void)
{
    __asm {
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
    }
}

// FUNCTION: PORT1111 0x004951f0
__declspec(naked) int __fastcall FUN_004951f0(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_00495140
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00495208
__declspec(naked) void gap_00495208(void)
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
