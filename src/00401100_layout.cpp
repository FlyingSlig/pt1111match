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

extern const unsigned char s_cursor_d_bmp_004bc3b0[];
extern unsigned char DAT_004e2b14[12];













// FUNCTION: PORT1111 0x00401100
__declspec(naked) int __fastcall FUN_00401100(int param_1)
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
        push OFFSET pt_eh_stub_004b5743
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
        _emit 0x8b
        _emit 0xe9
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x8d
        _emit 0x75
        _emit 0x18
        _emit 0x68
        _emit 0xb0
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
        _emit 0x20
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_004670c0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x06
        call FUN_00465cf0
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x60
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0x1a
        _emit 0x51
        _emit 0x6a
        _emit 0x00
        _emit 0x47
        _emit 0x57
        push OFFSET s_cursor_d_bmp_004bc3b0
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x34
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466970
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x8b
        _emit 0xc8
        call FUN_00465e00
        _emit 0x8b
        _emit 0x0e
        _emit 0x50
        _emit 0xff
        _emit 0x53
        _emit 0x64
        _emit 0x8b
        _emit 0xd8
        _emit 0xf7
        _emit 0xdb
        _emit 0x1a
        _emit 0xdb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xfe
        _emit 0xc3
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x66
        _emit 0x8b
        _emit 0x0e
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x40
        _emit 0x83
        _emit 0xc6
        _emit 0x0c
        _emit 0x83
        _emit 0xff
        _emit 0x05
        _emit 0x0f
        _emit 0x8c
        _emit 0x5e
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x6a
        _emit 0x00
        _emit 0xc7
        _emit 0x45
        _emit 0x28
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x45
        _emit 0x2c
        _emit 0x0a
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x45
        _emit 0x40
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x45
        _emit 0x44
        _emit 0x0f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x45
        _emit 0x4c
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x45
        _emit 0x50
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x45
        _emit 0x54
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call dword ptr [ShowCursor]
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
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
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
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
        _emit 0x14
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040122b
__declspec(naked) void gap_0040122b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
