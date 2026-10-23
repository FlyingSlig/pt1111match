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
extern const unsigned char DAT_004bd2c8[1];
extern unsigned char DAT_004e26fc[4];
extern unsigned char DAT_004e26f0[4];












// FUNCTION: PORT1111 0x00454ab0
__declspec(naked) int __fastcall FUN_00454ab0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push OFFSET pt_eh_stub_004b8d13
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
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x6a
        _emit 0x29
        call FUN_0047cf90
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x10
        _emit 0x68
        _emit 0x10
        _emit 0x27
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x52
        _emit 0x60
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0xc7
        _emit 0x80
        _emit 0xe8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xf9
        _emit 0x99
        _emit 0x00
        _emit 0x8d
        _emit 0x5e
        _emit 0x0c
        _emit 0xbd
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        call FUN_00466af0
        _emit 0x8b
        _emit 0x43
        _emit 0x04
        _emit 0x8b
        _emit 0x30
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0xcb
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0041d3c0
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcb
        _emit 0x8b
        _emit 0xf8
        call FUN_0041e280
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x38
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x4d
        _emit 0x75
        _emit 0xab
        _emit 0x6a
        _emit 0x34
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
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0042fc40
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x68
        _emit 0xb8
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00412ec0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00454bab
__declspec(naked) void gap_00454bab(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00454bb0
__declspec(naked) void __fastcall FUN_00454bb0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8d28
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
        _emit 0x55
        _emit 0x56
        _emit 0x8d
        _emit 0x59
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0xcb
        call FUN_0041dc00
        _emit 0xbd
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        call FUN_00466af0
        _emit 0x8b
        _emit 0x43
        _emit 0x04
        _emit 0x8b
        _emit 0x30
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0xcb
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0041d3c0
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcb
        _emit 0x8b
        _emit 0xf8
        call FUN_0041e280
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x38
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x4d
        _emit 0x75
        _emit 0xab
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
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
    }
}

// GAP: PORT1111 0x00454c48
__declspec(naked) void gap_00454c48(void)
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

// FUNCTION: PORT1111 0x00454c50
__declspec(naked) void __fastcall FUN_00454c50(void *pthis,void *param_1,int param_2)
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
        push OFFSET pt_eh_stub_004b8d48
        _emit 0x50
        mov eax, dword ptr [DAT_004e26fc]
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0xe9
        mov ecx, dword ptr [DAT_004e26f0]
        _emit 0x8b
        _emit 0x04
        _emit 0x81
        _emit 0x8b
        _emit 0x40
        _emit 0x34
        _emit 0x39
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x56
        _emit 0x57
        _emit 0x0f
        _emit 0x85
        _emit 0x8b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x6a
        _emit 0xff
        _emit 0x52
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        call FUN_00466af0
        _emit 0x8b
        _emit 0x7d
        _emit 0x10
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x8d
        _emit 0x75
        _emit 0x0c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x50
        _emit 0x51
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0041d3c0
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0x8b
        _emit 0xd8
        call FUN_0041e280
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x8b
        _emit 0x43
        _emit 0x04
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x18
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x8b
        _emit 0x55
        _emit 0x10
        _emit 0x8b
        _emit 0x3a
        _emit 0x3b
        _emit 0x7e
        _emit 0x04
        _emit 0x74
        _emit 0x27
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x8b
        _emit 0x0f
        _emit 0x89
        _emit 0x08
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x8d
        _emit 0x4f
        _emit 0x08
        _emit 0x89
        _emit 0x42
        _emit 0x04
        call FUN_00465e40
        _emit 0x57
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0xcd
        call FUN_004549a0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
    }
}

// GAP: PORT1111 0x00454d1c
__declspec(naked) void gap_00454d1c(void)
{
    __asm {
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x0c
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
