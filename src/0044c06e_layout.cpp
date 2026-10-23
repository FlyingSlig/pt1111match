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

extern unsigned char DAT_004e2b2c[];











// GAP: PORT1111 0x0044c06e
__declspec(naked) void gap_0044c06e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0044c070
__declspec(naked) int __fastcall FUN_0044c070(void *pthis,int param_1)
{
    __asm {
        mov eax, dword ptr [DAT_004e2b2c]
        _emit 0x56
        _emit 0x50
        _emit 0x6a
        _emit 0x08
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x68
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x8d
        _emit 0x4e
        _emit 0x10
        call FUN_0044bcc0
        _emit 0x85
        _emit 0xc0
        _emit 0x7d
        _emit 0x06
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x56
        _emit 0x18
        _emit 0x57
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x7e
        _emit 0x74
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x56
        _emit 0x60
        call FUN_0047fed0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x05
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8d
        _emit 0x46
        _emit 0x70
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0047ff40
        _emit 0x6a
        _emit 0x02
        _emit 0x8b
        _emit 0xcf
        call FUN_0047fd60
        _emit 0x8b
        _emit 0x96
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x60
        _emit 0x8b
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x50
        _emit 0x5f
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

// GAP: PORT1111 0x0044c0e7
__declspec(naked) void gap_0044c0e7(void)
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

// FUNCTION: PORT1111 0x0044c0f0
__declspec(naked) unsigned int __cdecl FUN_0044c0f0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b89fb
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
        _emit 0x57
        _emit 0x68
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xff
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0xc7
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0xc8
        call FUN_00485840
        _emit 0x8b
        _emit 0xf0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xf6
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x06
        _emit 0x6a
        _emit 0x01
        _emit 0x57
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x7c
        _emit 0x1a
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x69
        _emit 0xc0
        _emit 0xe8
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xd2
        _emit 0xf7
        _emit 0x71
        _emit 0x08
        _emit 0x8b
        _emit 0xce
        _emit 0x8b
        _emit 0xf8
        call FUN_00485c50
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x12
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xc7
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
        _emit 0x10
        _emit 0xc3
    }
}
