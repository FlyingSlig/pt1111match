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
extern unsigned char DAT_004e26f0[];
extern const unsigned char PTR_FUN_004c051c[12592];












// FUNCTION: PORT1111 0x0043cf60
__declspec(naked) void __fastcall FUN_0043cf60(void *pthis,int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7e41
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x57
        _emit 0x0c
        _emit 0x8b
        _emit 0x4f
        _emit 0x10
        _emit 0x03
        _emit 0xd0
        _emit 0x85
        _emit 0xc9
        _emit 0x89
        _emit 0x57
        _emit 0x0c
        _emit 0x8b
        _emit 0xc2
        _emit 0x0f
        _emit 0x85
        _emit 0x9e
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x47
        _emit 0x08
        _emit 0x0f
        _emit 0x85
        _emit 0x95
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x53
        _emit 0x55
        _emit 0x51
        call FUN_004147d0
        _emit 0x8b
        _emit 0xe8
        _emit 0x8b
        _emit 0x47
        _emit 0x20
        _emit 0x8b
        _emit 0x18
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xd8
        _emit 0x0f
        _emit 0x84
        _emit 0x30
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x53
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x52
        call FUN_00414c30
        _emit 0x33
        _emit 0xf6
        _emit 0x3b
        _emit 0xc6
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x0f
        _emit 0x84
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x77
        _emit 0x14
        _emit 0x74
        _emit 0x73
        _emit 0x6a
        _emit 0x38
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0xc6
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_004332b0
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0xc7
        _emit 0x46
        _emit 0x30
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x45
        _emit 0x14
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x34
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x33
        _emit 0xc9
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x4e
        _emit 0x1c
        _emit 0x89
        _emit 0x4e
        _emit 0x20
        _emit 0x89
        _emit 0x4e
        _emit 0x24
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x89
        _emit 0x46
        _emit 0x2c
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        mov edx, dword ptr [DAT_004e26f0]
        _emit 0x8b
        _emit 0x04
        _emit 0x82
        _emit 0x6a
        _emit 0x01
        _emit 0x51
        _emit 0xeb
        _emit 0x73
        mov ecx, dword ptr [DAT_004e26f0]
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x8b
        _emit 0x04
        _emit 0x81
        _emit 0x8b
        _emit 0x48
        _emit 0x44
        _emit 0x8b
        _emit 0x50
        _emit 0x4c
        _emit 0x03
        _emit 0xd1
        _emit 0x3b
        _emit 0x50
        _emit 0x48
        _emit 0x7d
        _emit 0x6e
        _emit 0x6a
        _emit 0x34
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x3b
        _emit 0xc6
        _emit 0xba
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0xc8
        call FUN_004306b0
        _emit 0x8b
        _emit 0xf0
        _emit 0xba
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x56
        _emit 0x30
        _emit 0x33
        _emit 0xc9
        _emit 0x89
        _emit 0x4e
        _emit 0x14
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x89
        _emit 0x4e
        _emit 0x1c
        _emit 0x89
        _emit 0x56
        _emit 0x28
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        mov ecx, dword ptr [DAT_004e26f0]
        _emit 0x8b
        _emit 0x04
        _emit 0x81
        _emit 0x52
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0x55
        call FUN_00423080
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x56
        call FUN_00412e90
        _emit 0x8b
        _emit 0x1b
        _emit 0x3b
        _emit 0x5f
        _emit 0x20
        _emit 0x0f
        _emit 0x85
        _emit 0xd9
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        _emit 0x5e
        _emit 0x6a
        _emit 0x34
        _emit 0xc7
        _emit 0x47
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
        _emit 0x20
        _emit 0x85
        _emit 0xc0
        _emit 0x5d
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
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
        _emit 0x57
        _emit 0x18
        _emit 0x89
        _emit 0x50
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00412e90
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x5f
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
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043d142
__declspec(naked) void gap_0043d142(void)
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

// FUNCTION: PORT1111 0x0043d150
__declspec(naked) void __fastcall FUN_0043d150(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x79
        _emit 0x20
        _emit 0x8d
        _emit 0x71
        _emit 0x1c
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

// GAP: PORT1111 0x0043d183
__declspec(naked) void gap_0043d183(void)
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

// FUNCTION: PORT1111 0x0043d190
__declspec(naked) int __fastcall FUN_0043d190(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x8b
        _emit 0x30
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x1e
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        call FUN_0043cdd0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x48
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x01
        _emit 0x43
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x08
        _emit 0x75
        _emit 0xe2
        _emit 0x5f
        _emit 0x5e
        _emit 0x8b
        _emit 0xc3
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043d1c4
__declspec(naked) void gap_0043d1c4(void)
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

// FUNCTION: PORT1111 0x0043d1d0
__declspec(naked) int __fastcall FUN_0043d1d0(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x55
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
        _emit 0x28
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x41
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0f
        _emit 0x39
        _emit 0x69
        _emit 0x04
        _emit 0x75
        _emit 0x0a
        _emit 0x53
        call FUN_0043cdf0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x10
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x08
        _emit 0x75
        _emit 0xe0
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043d21c
__declspec(naked) void gap_0043d21c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
