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
extern volatile int DAT_004e2c34;
extern volatile int DAT_004e2c30;
extern unsigned char DAT_004e20c8[140];
extern unsigned char DAT_004e2040[4];
extern unsigned char DAT_004e2044[4];
extern unsigned char DAT_004e2048[4];
extern unsigned char DAT_004e204c[4];
extern unsigned char DAT_004e2054[4];
extern unsigned char DAT_004e2050[4];
extern unsigned char DAT_004e2060[4];
extern unsigned char DAT_004e2058[4];
extern unsigned char DAT_004e205c[4];











// GAP: PORT1111 0x00426804
__declspec(naked) void gap_00426804(void)
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

// FUNCTION: PORT1111 0x00426810
__declspec(naked) void __fastcall FUN_00426810(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x48
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xf2
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xb7
        _emit 0x46
        _emit 0x3c
        _emit 0xc7
        _emit 0x46
        _emit 0x44
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov edx, dword ptr [DAT_004e2050]
        mov ecx, dword ptr [DAT_004e2058]
        _emit 0x23
        _emit 0xc2
        _emit 0x3b
        _emit 0xc1
        _emit 0x53
        _emit 0x57
        _emit 0x75
        _emit 0x38
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x33
        _emit 0xc0
        _emit 0x8a
        _emit 0x46
        _emit 0x3e
        _emit 0x83
        _emit 0xe0
        _emit 0x0f
        _emit 0x74
        _emit 0x61
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x06
        add ecx, dword ptr [DAT_004e2c34]
        mov ebx, dword ptr [DAT_004e2c30]
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x04
        _emit 0x03
        _emit 0xcb
        _emit 0x8d
        _emit 0x04
        _emit 0x40
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2044]
        _emit 0xc1
        _emit 0xe0
        _emit 0x04
        _emit 0x03
        _emit 0xc1
        _emit 0xeb
        _emit 0x2f
        mov ecx, dword ptr [DAT_004e205c]
        mov ebx, dword ptr [DAT_004e2c34]
        _emit 0x3b
        _emit 0xc1
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x06
        _emit 0x6a
        _emit 0x00
        _emit 0x75
        _emit 0x64
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x03
        _emit 0xc3
        mov ebx, dword ptr [DAT_004e2c30]
        _emit 0x50
        mov eax, dword ptr [DAT_004e2044]
        _emit 0x03
        _emit 0xcb
        _emit 0x51
        _emit 0x8b
        _emit 0x17
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x28
        _emit 0x0f
        _emit 0xb6
        _emit 0x46
        _emit 0x3e
        _emit 0xc1
        _emit 0xe8
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x57
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x06
        mov ebx, dword ptr [DAT_004e2c34]
        _emit 0x8b
        _emit 0x17
        _emit 0x03
        _emit 0xcb
        mov ebx, dword ptr [DAT_004e2c30]
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x04
        mov esi, dword ptr [DAT_004e2040]
        _emit 0x8d
        _emit 0x04
        _emit 0x40
        _emit 0x03
        _emit 0xcb
        _emit 0xc1
        _emit 0xe0
        _emit 0x04
        _emit 0x51
        _emit 0x03
        _emit 0xc6
        _emit 0x8b
        _emit 0xcf
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x28
        _emit 0x5f
        _emit 0x5b
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x11
        _emit 0x03
        _emit 0xc3
        mov ebx, dword ptr [DAT_004e2c30]
        _emit 0x50
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x04
        _emit 0x03
        _emit 0xc3
        _emit 0x50
        mov eax, dword ptr [DAT_004e2040]
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x28
        _emit 0x5f
        _emit 0x5b
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00426914
__declspec(naked) void gap_00426914(void)
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

// FUNCTION: PORT1111 0x00426920
__declspec(naked) void __fastcall FUN_00426920(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x38
        _emit 0x0f
        _emit 0xbf
        _emit 0x51
        _emit 0x06
        _emit 0x50
        add edx, dword ptr [DAT_004e2c34]
        _emit 0x0f
        _emit 0xbf
        _emit 0x41
        _emit 0x04
        add eax, dword ptr [DAT_004e2c30]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x74
        _emit 0x50
        mov ecx, OFFSET DAT_004e20c8
        call FUN_004291a0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00426951
__declspec(naked) void gap_00426951(void)
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

// FUNCTION: PORT1111 0x00426960
__declspec(naked) void __fastcall FUN_00426960(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x06
        _emit 0x0f
        _emit 0xbf
        _emit 0x56
        _emit 0x04
        _emit 0x50
        add ecx, dword ptr [DAT_004e2c34]
        _emit 0x51
        add edx, dword ptr [DAT_004e2c30]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x74
        _emit 0x50
        mov ecx, OFFSET DAT_004e20c8
        call FUN_004291a0
        _emit 0xc7
        _emit 0x46
        _emit 0x44
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0042699c
__declspec(naked) void gap_0042699c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004269a0
__declspec(naked) void __fastcall FUN_004269a0(void *pthis,char param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x0f
        _emit 0xb6
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x03
        _emit 0xc9
        _emit 0xba
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xd3
        _emit 0xe2
        _emit 0x56
        _emit 0xbe
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xd3
        _emit 0xe6
        _emit 0xf7
        _emit 0xd2
        _emit 0x66
        _emit 0x23
        _emit 0x50
        _emit 0x3c
        _emit 0x0b
        _emit 0xd6
        _emit 0x66
        _emit 0x89
        _emit 0x50
        _emit 0x3c
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004269c8
__declspec(naked) void gap_004269c8(void)
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

// FUNCTION: PORT1111 0x004269d0
__declspec(naked) void __fastcall FUN_004269d0(void *pthis,char param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x0f
        _emit 0xb6
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x03
        _emit 0xc9
        _emit 0xba
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xd3
        _emit 0xe2
        _emit 0x56
        _emit 0xbe
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xd3
        _emit 0xe6
        _emit 0xf7
        _emit 0xd2
        _emit 0x66
        _emit 0x23
        _emit 0x50
        _emit 0x3c
        _emit 0x0b
        _emit 0xd6
        _emit 0x66
        _emit 0x89
        _emit 0x50
        _emit 0x3c
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x004269f8
__declspec(naked) void gap_004269f8(void)
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

// FUNCTION: PORT1111 0x00426a00
__declspec(naked) void FUN_00426a00(void)
{
    __asm {
        mov ecx, dword ptr [DAT_004e2040]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x25
        _emit 0x8b
        _emit 0x51
        _emit 0xfc
        _emit 0x85
        _emit 0xd2
        _emit 0x8d
        _emit 0x41
        _emit 0xfc
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x03
        _emit 0xff
        _emit 0x10
        _emit 0xeb
        _emit 0x09
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        mov dword ptr [DAT_004e2040], 0
        mov ecx, dword ptr [DAT_004e2044]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x25
        _emit 0x8b
        _emit 0x51
        _emit 0xfc
        _emit 0x85
        _emit 0xd2
        _emit 0x8d
        _emit 0x41
        _emit 0xfc
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x03
        _emit 0xff
        _emit 0x12
        _emit 0xeb
        _emit 0x09
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        mov dword ptr [DAT_004e2044], 0
        mov ecx, dword ptr [DAT_004e2048]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x10
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0xc7
        _emit 0x05
        _emit 0x48
        _emit 0x20
        _emit 0x4e
    }
}


// GAP: PORT1111 0x00426a73
__declspec(naked) void gap_00426a73(void)
{
    __asm {
        _emit 0x00
        _emit 0x00
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
    }
}

// FUNCTION: PORT1111 0x00426a80
__declspec(naked) void __cdecl FUN_00426a80(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x03
        _emit 0xc9
        _emit 0x33
        _emit 0xd2
        _emit 0xd3
        _emit 0xe2
        _emit 0xb8
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xd3
        _emit 0xe0
        mov dword ptr [DAT_004e204c], ecx
        mov dword ptr [DAT_004e2054], edx
        _emit 0xba
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xd3
        _emit 0xe2
        mov dword ptr [DAT_004e2050], eax
        mov dword ptr [DAT_004e2060], eax
        mov dword ptr [DAT_004e2058], edx
        _emit 0xba
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xd3
        _emit 0xe2
        mov dword ptr [DAT_004e205c], edx
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00426ac2
__declspec(naked) void gap_00426ac2(void)
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

// FUNCTION: PORT1111 0x00426ad0
__declspec(naked) void FUN_00426ad0(void)
{
    __asm {
        _emit 0x33
        _emit 0xc0
        mov dword ptr [DAT_004e204c], eax
        mov dword ptr [DAT_004e2050], eax
        mov dword ptr [DAT_004e2054], eax
        mov dword ptr [DAT_004e2058], eax
        mov dword ptr [DAT_004e205c], eax
        mov dword ptr [DAT_004e2060], eax
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00426af1
__declspec(naked) void gap_00426af1(void)
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
