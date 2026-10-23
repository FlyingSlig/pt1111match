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

extern unsigned char DAT_004e2b14[12];
extern const unsigned char DAT_004c462c[36];
extern const unsigned char PTR_FUN_004c4650[4];











// GAP: PORT1111 0x00452038
__declspec(naked) void gap_00452038(void)
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

// FUNCTION: PORT1111 0x00452040
__declspec(naked) void __fastcall FUN_00452040(int param_1)
{
    __asm {
        push OFFSET FUN_004534e0
        _emit 0x6a
        _emit 0x1a
        _emit 0x6a
        _emit 0x30
        _emit 0x81
        _emit 0xc1
        _emit 0xa0
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0xe8
        _emit 0x17
        _emit 0x5c
        _emit 0x04
        _emit 0x00
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00452056
__declspec(naked) void gap_00452056(void)
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
    }
}

// FUNCTION: PORT1111 0x00452060
__declspec(naked) void __fastcall FUN_00452060(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8c1b
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
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x04
        _emit 0x8d
        _emit 0x4e
        _emit 0x54
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004534e0
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_004534e0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
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
        _emit 0x10
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004520ad
__declspec(naked) void gap_004520ad(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004520b0
__declspec(naked) void __fastcall FUN_004520b0(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        call FUN_0047baa0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x18
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xc7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x0f
        _emit 0xb6
        _emit 0x42
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x01
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x0f
        _emit 0xb6
        _emit 0x42
        _emit 0x11
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x01
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x004520f5
__declspec(naked) void gap_004520f5(void)
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

// FUNCTION: PORT1111 0x00452100
__declspec(naked) void __fastcall FUN_00452100(int param_1)
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
        push OFFSET pt_eh_stub_004b8ca8
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x83
        _emit 0xc1
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466a50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0045214b
__declspec(naked) void gap_0045214b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00452150
__declspec(naked) int __fastcall FUN_00452150(void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x6a
        _emit 0x02
        call FUN_00468ef0
        _emit 0x8b
        _emit 0xd8
        _emit 0x85
        _emit 0xdb
        _emit 0x74
        _emit 0x50
        _emit 0x6a
        _emit 0x02
        _emit 0x8b
        _emit 0xcb
        call FUN_0047cf90
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x43
        _emit 0x8b
        _emit 0x10
        _emit 0x57
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x52
        _emit 0x30
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x8b
        _emit 0x57
        _emit 0x04
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x2b
        _emit 0xc2
        _emit 0x50
        _emit 0x2b
        _emit 0x0f
        _emit 0x51
        _emit 0x8d
        _emit 0x4f
        _emit 0x10
        call FUN_004534f0
        _emit 0x6a
        _emit 0x03
        _emit 0x8b
        _emit 0xcb
        call FUN_0047d060
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x47
        _emit 0x40
        _emit 0x74
        _emit 0x10
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcb
        call FUN_0047d020
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x47
        _emit 0x44
        _emit 0x75
        _emit 0x05
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc3
        _emit 0x56
        _emit 0xbe
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc7
        _emit 0x4c
        _emit 0x8d
        _emit 0x56
        _emit 0xff
        _emit 0x52
        _emit 0x8b
        _emit 0xcb
        call FUN_0047d020
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x47
        _emit 0xfc
        _emit 0x74
        _emit 0x32
        _emit 0x8b
        _emit 0xc8
        call FUN_0046ff40
        _emit 0x56
        _emit 0x8b
        _emit 0xcb
        call FUN_0047d060
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x07
        _emit 0x74
        _emit 0x1d
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        call FUN_004737d0
        _emit 0x83
        _emit 0xc6
        _emit 0x02
        _emit 0x83
        _emit 0xc7
        _emit 0x08
        _emit 0x83
        _emit 0xfe
        _emit 0x11
        _emit 0x7c
        _emit 0xc5
        _emit 0x5e
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc3
        _emit 0x5e
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0045220f
__declspec(naked) void gap_0045220f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00452210
__declspec(naked) int __fastcall FUN_00452210(int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x6a
        _emit 0x03
        call FUN_00468ef0
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x75
        _emit 0x05
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
        _emit 0x53
        _emit 0x55
        _emit 0x8d
        _emit 0x8e
        _emit 0xa0
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x89
        _emit 0x86
        _emit 0xe8
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xae
        _emit 0x80
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0xbf
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0xeb
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8d
        _emit 0x57
        _emit 0x01
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        call FUN_0047cf90
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x68
        _emit 0x8b
        _emit 0x10
        _emit 0x8d
        _emit 0x5e
        _emit 0xfc
        _emit 0x53
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x52
        _emit 0x30
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x2b
        _emit 0xc2
        _emit 0x50
        _emit 0x2b
        _emit 0x0b
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        call FUN_004534f0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x57
        call FUN_0047d0a0
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x45
        _emit 0x00
        _emit 0x74
        _emit 0x31
        _emit 0x8b
        _emit 0x88
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0046ff40
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x83
        _emit 0xc2
        _emit 0x30
        _emit 0x83
        _emit 0xc7
        _emit 0x02
        _emit 0x83
        _emit 0xc5
        _emit 0x04
        _emit 0x83
        _emit 0xc6
        _emit 0x10
        _emit 0x83
        _emit 0xff
        _emit 0x35
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x7c
        _emit 0x92
        _emit 0x5f
        _emit 0x5d
        _emit 0x5b
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
        _emit 0x5f
        _emit 0x5d
        _emit 0x5b
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004522d8
__declspec(naked) void gap_004522d8(void)
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

// FUNCTION: PORT1111 0x004522e0
__declspec(naked) int * __fastcall FUN_004522e0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8c1b
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
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x04
        call FUN_004535d0
        _emit 0x8d
        _emit 0x4e
        _emit 0x54
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004535d0
        _emit 0x33
        _emit 0xc0
        _emit 0x8d
        _emit 0x8e
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x01
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x0c
        _emit 0x89
        _emit 0x41
        _emit 0x10
        _emit 0x89
        _emit 0x41
        _emit 0x14
        _emit 0x89
        _emit 0x41
        _emit 0x18
        _emit 0x89
        _emit 0x41
        _emit 0x1c
        _emit 0x89
        _emit 0x41
        _emit 0x20
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x86
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x06
        _emit 0x8b
        _emit 0xc6
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
        _emit 0x10
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00452357
__declspec(naked) void gap_00452357(void)
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

// FUNCTION: PORT1111 0x00452360
__declspec(naked) int __fastcall FUN_00452360(void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x6a
        _emit 0x04
        call FUN_00468ef0
        _emit 0x8b
        _emit 0xd8
        _emit 0x85
        _emit 0xdb
        _emit 0x0f
        _emit 0x84
        _emit 0xfb
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x02
        _emit 0x8b
        _emit 0xcb
        _emit 0x89
        _emit 0x1e
        call FUN_0047cf90
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xe8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x10
        _emit 0x8d
        _emit 0x7e
        _emit 0x04
        _emit 0x57
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x52
        _emit 0x30
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x8b
        _emit 0x57
        _emit 0x04
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x2b
        _emit 0xc2
        _emit 0x50
        _emit 0x2b
        _emit 0x0f
        _emit 0x51
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        call FUN_004534f0
        _emit 0x6a
        _emit 0x03
        _emit 0x8b
        _emit 0xcb
        call FUN_0047d060
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x86
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x84
        _emit 0xab
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcb
        call FUN_0047d020
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x86
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x84
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x09
        _emit 0x8b
        _emit 0xcb
        call FUN_0047cf90
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x83
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x10
        _emit 0x8d
        _emit 0x7e
        _emit 0x44
        _emit 0x57
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x52
        _emit 0x30
        _emit 0x8b
        _emit 0x57
        _emit 0x04
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x17
        _emit 0x6a
        _emit 0x00
        _emit 0x2b
        _emit 0xca
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x4e
        _emit 0x54
        call FUN_004534f0
        _emit 0x33
        _emit 0xff
        _emit 0x81
        _emit 0xc6
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x57
        _emit 0x0a
        _emit 0x52
        _emit 0x8b
        _emit 0xcb
        call FUN_0047d0a0
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x06
        _emit 0x74
        _emit 0x42
        _emit 0x8b
        _emit 0x10
        _emit 0x68
        _emit 0x00
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x52
        _emit 0x44
        _emit 0x8b
        _emit 0x0e
        _emit 0x6a
        _emit 0x01
        call FUN_00472ef0
        _emit 0x51
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x10
        _emit 0x6a
        _emit 0xff
        push OFFSET DAT_004c462c
        call FUN_00466af0
        _emit 0x8b
        _emit 0x0e
        call FUN_00452100
        _emit 0x47
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0x83
        _emit 0xff
        _emit 0x09
        _emit 0x7c
        _emit 0xb7
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x59
        _emit 0xc3
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x59
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0045247f
__declspec(naked) void gap_0045247f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00452480
__declspec(naked) int * __fastcall FUN_00452480(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8c54
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
        _emit 0x8d
        _emit 0x4e
        _emit 0x08
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        mov dword ptr [esi], OFFSET PTR_FUN_004c4650
        call FUN_00487dc0
        _emit 0x33
        _emit 0xdb
        _emit 0x8d
        _emit 0x4e
        _emit 0x48
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        call FUN_004535d0
        _emit 0xb9
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x8d
        _emit 0xbe
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xf3
        _emit 0xab
        _emit 0x89
        _emit 0x5e
        _emit 0x78
        _emit 0x89
        _emit 0x5e
        _emit 0x7c
        push OFFSET FUN_004534e0
        push OFFSET FUN_004535d0
        _emit 0x6a
        _emit 0x1a
        _emit 0x6a
        _emit 0x30
        _emit 0x8d
        _emit 0x86
        _emit 0x50
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x01
        _emit 0xe8
        _emit 0xdd
        _emit 0x57
        _emit 0x04
        _emit 0x00
        _emit 0xb9
        _emit 0x1a
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x8d
        _emit 0xbe
        _emit 0x30
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x9e
        _emit 0x98
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xf3
        _emit 0xab
        _emit 0x8d
        _emit 0x8e
        _emit 0x9c
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x02
        call FUN_004522e0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x5e
        _emit 0x04
        _emit 0x89
        _emit 0x9e
        _emit 0x54
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x9e
        _emit 0x4c
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x9e
        _emit 0x50
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
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
    }
}


// GAP: PORT1111 0x0045253d
__declspec(naked) void gap_0045253d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00452540
__declspec(naked) void __fastcall FUN_00452540(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8c54
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
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x04
        mov dword ptr [esi], OFFSET PTR_FUN_004c4650
        _emit 0x8d
        _emit 0x8e
        _emit 0x9c
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00452060
        push OFFSET FUN_004534e0
        _emit 0x6a
        _emit 0x1a
        _emit 0x6a
        _emit 0x30
        _emit 0x8d
        _emit 0x86
        _emit 0x50
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x01
        _emit 0xe8
        _emit 0xdc
        _emit 0x56
        _emit 0x04
        _emit 0x00
        _emit 0x8d
        _emit 0x4e
        _emit 0x48
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        call FUN_004534e0
        _emit 0x8d
        _emit 0x4e
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00487df0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
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
        _emit 0x10
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004525bd
__declspec(naked) void gap_004525bd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004525c0
__declspec(naked) int __fastcall FUN_004525c0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x6a
        _emit 0x30
        _emit 0x8d
        _emit 0x86
        _emit 0x5c
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x89
        _emit 0x4e
        _emit 0x04
        call FUN_0047d610
        _emit 0x8d
        _emit 0x4e
        _emit 0x38
        call FUN_00452150
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x37
        _emit 0x8d
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00452210
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x28
        _emit 0x8d
        _emit 0x8e
        _emit 0x9c
        _emit 0x07
        _emit 0x00
        _emit 0x00
        call FUN_00452360
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x19
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x41
        _emit 0x34
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x30
        _emit 0x83
        _emit 0xc6
        _emit 0x08
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00487c80
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x06
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x6a
        _emit 0x02
        _emit 0x8b
        _emit 0xce
        call FUN_00487ef0
        _emit 0x6a
        _emit 0x03
        _emit 0x8b
        _emit 0xce
        call FUN_00487ef0
        _emit 0x6a
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        call FUN_00487ef0
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

// GAP: PORT1111 0x00452645
__declspec(naked) void gap_00452645(void)
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

// FUNCTION: PORT1111 0x00452650
__declspec(naked) void __cdecl FUN_00452650(void *param_1,void *param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8d
        _emit 0x8f
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466ad0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0f
        _emit 0x8b
        _emit 0xce
        call FUN_00465e00
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_004737d0
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0045267c
__declspec(naked) void gap_0045267c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
