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

extern const unsigned char PTR_FUN_004c051c[12592];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];











// GAP: PORT1111 0x0043d23a
__declspec(naked) void gap_0043d23a(void)
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

// FUNCTION: PORT1111 0x0043d240
__declspec(naked) void __fastcall FUN_0043d240(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7e5b
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
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        mov dword ptr [esi], OFFSET PTR_FUN_004c051c
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x38
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xf8
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x08
        _emit 0x75
        _emit 0xec
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x89
        _emit 0x09
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x89
        _emit 0x49
        _emit 0x04
        _emit 0x3b
        _emit 0x46
        _emit 0x08
        _emit 0x89
        _emit 0x5e
        _emit 0x0c
        _emit 0x74
        _emit 0x17
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x38
        _emit 0x50
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xf9
        _emit 0x8b
        _emit 0xc7
        _emit 0x75
        _emit 0xec
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x89
        _emit 0x09
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x89
        _emit 0x49
        _emit 0x04
        _emit 0x3b
        _emit 0x46
        _emit 0x08
        _emit 0x89
        _emit 0x5e
        _emit 0x0c
        _emit 0x74
        _emit 0x1b
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x38
        _emit 0x50
        _emit 0xe8
        _emit 0x25
    }
}

// GAP: PORT1111 0x0043d2d5
__declspec(naked) void gap_0043d2d5(void)
{
    __asm {
        _emit 0xa6
        _emit 0x05
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xf9
        _emit 0x8b
        _emit 0xc7
        _emit 0x75
        _emit 0xec
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x51
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x5e
        _emit 0x08
        _emit 0x5f
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
        _emit 0x10
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
    }
}

// FUNCTION: PORT1111 0x0043d310
__declspec(naked) void __fastcall FUN_0043d310(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        call FUN_0043d190
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0b
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x43
        _emit 0x10
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xcb
        call FUN_0043d190
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0xc7
        _emit 0x99
        _emit 0xf7
        _emit 0xf9
        _emit 0x8b
        _emit 0xe8
        _emit 0x85
        _emit 0xed
        _emit 0x75
        _emit 0x05
        _emit 0xbd
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x2d
        _emit 0x85
        _emit 0xff
        _emit 0x7e
        _emit 0x29
        _emit 0x3b
        _emit 0xef
        _emit 0x8b
        _emit 0xc5
        _emit 0x7e
        _emit 0x02
        _emit 0x8b
        _emit 0xc7
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x8b
        _emit 0x4a
        _emit 0x08
        _emit 0x2b
        _emit 0x4a
        _emit 0x0c
        _emit 0x3b
        _emit 0xc1
        _emit 0x7e
        _emit 0x02
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x50
        _emit 0x2b
        _emit 0xf8
        call FUN_0043cf60
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x73
        _emit 0x08
        _emit 0x75
        _emit 0xd3
        _emit 0x8b
        _emit 0x4b
        _emit 0x10
        _emit 0x03
        _emit 0xcf
        _emit 0x5f
        _emit 0x8b
        _emit 0xc1
        _emit 0x85
        _emit 0xc0
        _emit 0x5e
        _emit 0x89
        _emit 0x4b
        _emit 0x10
        _emit 0x5d
        _emit 0x7e
        _emit 0x07
        _emit 0x8b
        _emit 0xcb
        call FUN_0043d3a0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043d399
__declspec(naked) void gap_0043d399(void)
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

// FUNCTION: PORT1111 0x0043d3a0
__declspec(naked) void __fastcall FUN_0043d3a0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x08
        _emit 0x8b
        _emit 0x06
        _emit 0x33
        _emit 0xd2
        _emit 0x3b
        _emit 0xc6
        _emit 0x74
        _emit 0x14
        _emit 0x53
        _emit 0x57
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x78
        _emit 0x08
        _emit 0x8b
        _emit 0x5f
        _emit 0x0c
        _emit 0x8b
        _emit 0x00
        _emit 0x03
        _emit 0xd3
        _emit 0x3b
        _emit 0xc6
        _emit 0x75
        _emit 0xf2
        _emit 0x5f
        _emit 0x5b
        _emit 0x8b
        _emit 0x41
        _emit 0x14
        _emit 0x8b
        _emit 0x40
        _emit 0x38
        _emit 0x8b
        _emit 0x71
        _emit 0x10
        _emit 0x2b
        _emit 0xc6
        _emit 0x2b
        _emit 0xc2
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x05
        _emit 0x03
        _emit 0xf0
        _emit 0x89
        _emit 0x71
        _emit 0x10
        _emit 0x8b
        _emit 0x41
        _emit 0x10
        _emit 0x50
        _emit 0xc7
        _emit 0x41
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0043d310
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043d3e8
__declspec(naked) void gap_0043d3e8(void)
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

// FUNCTION: PORT1111 0x0043d3f0
__declspec(naked) void __fastcall FUN_0043d3f0(int param_1)
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
        _emit 0x5b
        _emit 0x53
        _emit 0x55
        _emit 0x90
        _emit 0x8b
        _emit 0x5e
        _emit 0x08
        _emit 0x8b
        _emit 0x43
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x45
        _emit 0x3b
        _emit 0x77
        _emit 0x08
        _emit 0x8b
        _emit 0x2e
        _emit 0x74
        _emit 0x1d
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x28
        _emit 0x8b
        _emit 0x0e
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x56
        _emit 0x89
        _emit 0x51
        _emit 0x04
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x47
        _emit 0x0c
        _emit 0x8b
        _emit 0xcb
        _emit 0x8b
        _emit 0xf5
        call FUN_0043cdd0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x43
        _emit 0x0c
        _emit 0x01
        _emit 0x47
        _emit 0x10
        _emit 0x85
        _emit 0xdb
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x13
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x12
        _emit 0xeb
        _emit 0x02
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x08
        _emit 0x75
        _emit 0xaa
        _emit 0x5d
        _emit 0x5b
        _emit 0x8b
        _emit 0x47
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x09
        _emit 0x8b
        _emit 0xcf
    }
}


// GAP: PORT1111 0x0043d461
__declspec(naked) void gap_0043d461(void)
{
    __asm {
        _emit 0x5f
        _emit 0x5e
        jmp FUN_0043d3a0
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043d470
__declspec(naked) int * __fastcall FUN_0043d470(void *pthis,int param_1,int param_2)
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
        mov dword ptr [esi], OFFSET PTR_FUN_004c051c
        call FUN_0043d220
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0xc7
        _emit 0x47
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x5f
        _emit 0x89
        _emit 0x4e
        _emit 0x14
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x0043d4a3
__declspec(naked) void gap_0043d4a3(void)
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
