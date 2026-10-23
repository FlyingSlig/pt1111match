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
extern const unsigned char PTR_LAB_004c0514[4];
extern const unsigned char PTR_FUN_004c0518[4];
extern unsigned char DAT_004e26f0[4];












// GAP: PORT1111 0x0043cccf
__declspec(naked) void gap_0043cccf(void)
{
    __asm {
        _emit 0x90
        _emit 0xea
        _emit 0xcb
        _emit 0x43
        _emit 0x00
        _emit 0x10
        _emit 0xcc
        _emit 0x43
        _emit 0x00
        _emit 0x33
        _emit 0xcc
        _emit 0x43
        _emit 0x00
        _emit 0x53
        _emit 0xcc
        _emit 0x43
        _emit 0x00
        _emit 0x73
        _emit 0xcc
        _emit 0x43
        _emit 0x00
        _emit 0x93
        _emit 0xcc
        _emit 0x43
        _emit 0x00
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

// FUNCTION: PORT1111 0x0043ccf0
__declspec(naked) void __fastcall FUN_0043ccf0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x1b
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        call FUN_00414e10
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x08
        _emit 0x75
        _emit 0xe8
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043cd1b
__declspec(naked) void gap_0043cd1b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043cd20
__declspec(naked) int * __fastcall FUN_0043cd20(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8d
        _emit 0x7e
        _emit 0x04
        _emit 0x8b
        _emit 0xcf
        mov dword ptr [esi], OFFSET PTR_LAB_004c0514
        call FUN_0043d220
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x47
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x89
        _emit 0x46
        _emit 0x1c
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x89
        _emit 0x46
        _emit 0x24
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x89
        _emit 0x46
        _emit 0x2c
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043cd59
__declspec(naked) void gap_0043cd59(void)
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

// FUNCTION: PORT1111 0x0043cd60
__declspec(naked) void __fastcall FUN_0043cd60(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8d
        _emit 0x71
        _emit 0x04
        mov dword ptr [ecx], OFFSET PTR_LAB_004c0514
        _emit 0x8b
        _emit 0xce
        call FUN_00419480
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
    }
}

// GAP: PORT1111 0x0043cd7a
__declspec(naked) void gap_0043cd7a(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
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
    }
}

// FUNCTION: PORT1111 0x0043cd90
__declspec(naked) void __fastcall FUN_0043cd90(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x79
        _emit 0x08
        _emit 0x8d
        _emit 0x71
        _emit 0x04
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
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
        call FUN_00409f80
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

// GAP: PORT1111 0x0043cdc3
__declspec(naked) void gap_0043cdc3(void)
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

// FUNCTION: PORT1111 0x0043cdd0
__declspec(naked) bool __fastcall FUN_0043cdd0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x0c
        _emit 0x33
        _emit 0xd2
        _emit 0x3b
        _emit 0xc6
        _emit 0x0f
        _emit 0x9f
        _emit 0xc2
        _emit 0x5e
        _emit 0x8b
        _emit 0xc2
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043cde2
__declspec(naked) void gap_0043cde2(void)
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

// FUNCTION: PORT1111 0x0043cdf0
__declspec(naked) int __fastcall FUN_0043cdf0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x49
        _emit 0x20
        _emit 0x8b
        _emit 0x01
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x39
        _emit 0x50
        _emit 0x08
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
        _emit 0xc1
        _emit 0x75
        _emit 0xf5
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043ce18
__declspec(naked) void gap_0043ce18(void)
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

// FUNCTION: PORT1111 0x0043ce20
__declspec(naked) void __fastcall FUN_0043ce20(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8d
        _emit 0x71
        _emit 0x1c
        mov dword ptr [ecx], OFFSET PTR_FUN_004c0518
        _emit 0x8b
        _emit 0xce
        call FUN_00419480
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
    }
}

// GAP: PORT1111 0x0043ce3a
__declspec(naked) void gap_0043ce3a(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
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
    }
}

// FUNCTION: PORT1111 0x0043ce50
__declspec(naked) void __fastcall FUN_0043ce50(void *pthis,int param_1)
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
        push OFFSET pt_eh_stub_004b7e0b
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x8b
        _emit 0x01
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x36
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0x48
        _emit 0x08
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
        _emit 0x46
        _emit 0x20
        _emit 0x75
        _emit 0xf4
        _emit 0xeb
        _emit 0x24
        _emit 0x3b
        _emit 0x46
        _emit 0x20
        _emit 0x74
        _emit 0x1f
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x10
        _emit 0x89
        _emit 0x11
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x50
        _emit 0x89
        _emit 0x51
        _emit 0x04
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x46
        _emit 0x24
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x46
        _emit 0x6a
        _emit 0x34
        _emit 0xc7
        _emit 0x46
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_004305e0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x89
        _emit 0x48
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00412e90
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043cefc
__declspec(naked) void gap_0043cefc(void)
{
    __asm {
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
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
    }
}

// FUNCTION: PORT1111 0x0043cf10
__declspec(naked) int * __fastcall FUN_0043cf10(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8d
        _emit 0x7e
        _emit 0x1c
        _emit 0x8b
        _emit 0xcf
        mov dword ptr [esi], OFFSET PTR_FUN_004c0518
        call FUN_0043d220
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x47
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043cf3d
__declspec(naked) void gap_0043cf3d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
