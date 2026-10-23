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

extern const unsigned char PTR_FUN_004c376c[];
extern const unsigned char PTR_FUN_004c6788[168];
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e2b20[4];
extern unsigned char DAT_004ddb0c[12];
extern int DAT_004c6830;













// FUNCTION: PORT1111 0x004800d0
__declspec(naked) int __fastcall FUN_004800d0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba628
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
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0x56
        _emit 0x60
        _emit 0x8b
        _emit 0x4e
        _emit 0x14
        _emit 0x57
        _emit 0x52
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x50
        _emit 0x6a
        _emit 0x02
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        call dword ptr [WaitForMultipleObjects]
        _emit 0x8b
        _emit 0xf8
        _emit 0x83
        _emit 0xff
        _emit 0xff
        _emit 0x0f
        _emit 0x84
        _emit 0xae
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x6e
        _emit 0x1c
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x20
        mov dword ptr [esp + 0x1c], OFFSET PTR_FUN_004c376c
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x55
        _emit 0x00
        _emit 0x8b
        _emit 0xcd
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x85
        _emit 0xff
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x84
        _emit 0xa3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x8d
        _emit 0x5e
        _emit 0x38
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x4e
        _emit 0x54
        _emit 0x8b
        _emit 0x13
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x81
        _emit 0xff
        _emit 0x02
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x50
        call dword ptr [ResetEvent]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x12
        _emit 0x81
        _emit 0xff
        _emit 0x02
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x17
        _emit 0x8b
        _emit 0x4e
        _emit 0x64
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x56
        call FUN_00495e00
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x50
        call dword ptr [SetEvent]
        _emit 0x8b
        _emit 0x55
        _emit 0x00
        _emit 0x8b
        _emit 0xcd
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x60
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x51
        _emit 0x6a
        _emit 0x02
        call dword ptr [WaitForMultipleObjects]
        _emit 0x8b
        _emit 0xf8
        _emit 0x83
        _emit 0xff
        _emit 0xff
        _emit 0x0f
        _emit 0x85
        _emit 0x68
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x4e
        _emit 0x64
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x56
        call FUN_00495e00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5b
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
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
        _emit 0x8b
        _emit 0x4e
        _emit 0x64
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x56
        call FUN_00495e00
        _emit 0x8b
        _emit 0x55
        _emit 0x00
        _emit 0x8b
        _emit 0xcd
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
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
        _emit 0x20
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048021d
__declspec(naked) void gap_0048021d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00480220
__declspec(naked) void FUN_00480220(void *pthis,int param_1,int param_2,unsigned short param_3,int param_4)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        mov dword ptr [esi], OFFSET PTR_FUN_004c6788
        _emit 0x89
        _emit 0x46
        _emit 0x1c
        _emit 0x89
        _emit 0x4e
        _emit 0x04
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x52
        call FUN_00468ef0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x24
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x20
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
        _emit 0x4e
        _emit 0x0c
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x00480268
__declspec(naked) void gap_00480268(void)
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
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x14
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
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x18
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

// FUNCTION: PORT1111 0x00480290
__declspec(naked) void __fastcall FUN_00480290(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x49
        _emit 0x24
        _emit 0x6a
        _emit 0x01
        call FUN_0047c870
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048029b
__declspec(naked) void gap_0048029b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004802a0
__declspec(naked) void __fastcall FUN_004802a0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x28
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004802af
__declspec(naked) void gap_004802af(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004802b0
__declspec(naked) void __fastcall FUN_004802b0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x19
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0xc7
        _emit 0x46
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004802d5
__declspec(naked) void gap_004802d5(void)
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
    }
}

// FUNCTION: PORT1111 0x004802e0
__declspec(naked) void __fastcall FUN_004802e0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x19
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0xc7
        _emit 0x46
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0c
        call FUN_0047ce50
        _emit 0xc7
        _emit 0x46
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00480318
__declspec(naked) void gap_00480318(void)
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

// FUNCTION: PORT1111 0x00480320
__declspec(naked) void __fastcall FUN_00480320(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        mov dword ptr [esi], OFFSET PTR_FUN_004c6788
        _emit 0x74
        _emit 0x19
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0xc7
        _emit 0x46
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0c
        call FUN_0047ce50
        _emit 0xc7
        _emit 0x46
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00480372
__declspec(naked) void gap_00480372(void)
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

// FUNCTION: PORT1111 0x00480380
__declspec(naked) int __fastcall FUN_00480380(void *param_1)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba640
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
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x89
        _emit 0x65
        _emit 0xf0
        _emit 0x74
        _emit 0x6d
        mov ecx, dword ptr [DAT_004e2b20]
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x45
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x56
        call FUN_0047d3a0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x44
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x39
        mov ecx, dword ptr [DAT_004e2b20]
        _emit 0x8b
        _emit 0x11
        _emit 0xc7
        _emit 0x45
        _emit 0xfc
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4d
        _emit 0xf4
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc3
    }
}
