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

extern unsigned char DAT_004ddb0c[12];
extern const unsigned char PTR_Sleep_004bc11c[4];
extern int DAT_004c6b3c;












// GAP: PORT1111 0x00486599
__declspec(naked) void gap_00486599(void)
{
    __asm {
        _emit 0x8b
        _emit 0x4d
        _emit 0xf4
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
    }
}

// GAP: PORT1111 0x004865a8
__declspec(naked) void gap_004865a8(void)
{
    __asm {
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004865b0
__declspec(naked) void __fastcall FUN_004865b0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x08
        _emit 0xc7
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004865c7
__declspec(naked) void gap_004865c7(void)
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

// FUNCTION: PORT1111 0x004865d0
__declspec(naked) unsigned int __fastcall FUN_004865d0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x08
        _emit 0xc7
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x56
        _emit 0x6a
        _emit 0x00
        _emit 0xe8
        _emit 0xaf
        _emit 0xe0
        _emit 0x01
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x7c
        _emit 0x1c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x36
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0x51
        _emit 0x56
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x33
        _emit 0xd2
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x9d
        _emit 0xc2
        _emit 0x4a
        _emit 0x23
        _emit 0xc2
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00486613
__declspec(naked) void gap_00486613(void)
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

// FUNCTION: PORT1111 0x00486620
__declspec(naked) int __fastcall FUN_00486620(void *pthis,short param_1,int param_2,unsigned short param_3)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x40
        _emit 0x8b
        _emit 0x09
        _emit 0x85
        _emit 0xc9
        mov eax, dword ptr [DAT_004ddb0c]
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x3c
        _emit 0xc7
        _emit 0x04
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x14
        _emit 0xb8
        _emit 0xf0
        _emit 0x01
        _emit 0x04
        _emit 0x80
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x3c
        call pt_a_00497aa6
        _emit 0x83
        _emit 0xc4
        _emit 0x40
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x34
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x38
        _emit 0x33
        _emit 0xd2
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x66
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x4c
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x66
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x12
        _emit 0x66
        _emit 0xc1
        _emit 0xe8
        _emit 0x03
        _emit 0x66
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x44
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x4c
        _emit 0x6a
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xaf
        _emit 0xc2
        _emit 0x66
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x0f
        _emit 0xb7
        _emit 0xc0
        _emit 0x0f
        _emit 0xaf
        _emit 0xc6
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x16
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x11
        _emit 0x51
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x5e
        _emit 0x7c
        _emit 0x21
        _emit 0x8b
        _emit 0x04
        _emit 0x24
        _emit 0x8b
        _emit 0x08
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x52
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x38
        _emit 0x85
        _emit 0xc0
        _emit 0x7c
        _emit 0x0f
        _emit 0x8b
        _emit 0x04
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x08
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x3c
        call pt_a_00497aa6
        _emit 0x83
        _emit 0xc4
        _emit 0x40
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00486728
__declspec(naked) void gap_00486728(void)
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

// FUNCTION: PORT1111 0x00486730
__declspec(naked) int FUN_00486730(void *param_1,void *param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x09
        _emit 0xb8
        _emit 0xf0
        _emit 0x01
        _emit 0x04
        _emit 0x80
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xdb
        _emit 0x74
        _emit 0x06
        _emit 0xc7
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x06
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x56
        _emit 0xff
        _emit 0x50
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x7c
        _emit 0x42
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x02
        _emit 0x74
        _emit 0x36
        _emit 0x57
        mov edi, dword ptr [Sleep]
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x16
        _emit 0x56
        _emit 0xff
        _emit 0x52
        _emit 0x50
        _emit 0x3d
        _emit 0x96
        _emit 0x00
        _emit 0x78
        _emit 0x88
        _emit 0x75
        _emit 0x04
        _emit 0x6a
        _emit 0x0a
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0x06
        _emit 0x56
        _emit 0xff
        _emit 0x50
        _emit 0x50
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0xe5
        _emit 0x85
        _emit 0xdb
        _emit 0x5f
        _emit 0x74
        _emit 0x06
        _emit 0xc7
        _emit 0x03
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x004867a7
__declspec(naked) void gap_004867a7(void)
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

// FUNCTION: PORT1111 0x004867b0
__declspec(naked) int __fastcall FUN_004867b0(void *pthis,int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x07
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x85
        _emit 0xc0
        _emit 0x76
        _emit 0x34
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x83
        _emit 0x3c
        _emit 0xf8
        _emit 0x00
        _emit 0x74
        _emit 0x1f
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x04
        _emit 0xf9
        _emit 0x8b
        _emit 0x10
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x24
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x01
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x47
        _emit 0x3b
        _emit 0xf8
        _emit 0x72
        _emit 0xd0
        _emit 0x3b
        _emit 0x7e
        _emit 0x18
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x8d
        _emit 0x04
        _emit 0xfa
        _emit 0x5f
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x8b
        _emit 0x11
        _emit 0x8b
        _emit 0x06
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x5f
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048682f
__declspec(naked) void gap_0048682f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00486830
__declspec(naked) int __fastcall FUN_00486830(int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x05
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0x59
        _emit 0xc3
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x56
        _emit 0x33
        _emit 0xf6
        _emit 0x85
        _emit 0xc0
        _emit 0x76
        _emit 0x36
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x83
        _emit 0x3c
        _emit 0xf0
        _emit 0x00
        _emit 0x74
        _emit 0x1f
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x04
        _emit 0xf1
        _emit 0x8b
        _emit 0x10
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x24
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x01
        _emit 0x75
        _emit 0x0e
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x46
        _emit 0x3b
        _emit 0xf0
        _emit 0x72
        _emit 0xd0
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0x59
        _emit 0xc3
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x59
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048688f
__declspec(naked) void gap_0048688f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00486890
__declspec(naked) int __fastcall FUN_00486890(void *pthis,int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x07
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x56
        _emit 0x33
        _emit 0xf6
        _emit 0x85
        _emit 0xc0
        _emit 0x76
        _emit 0x42
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x8b
        _emit 0x0c
        _emit 0xf0
        _emit 0x85
        _emit 0xc9
        _emit 0x8d
        _emit 0x04
        _emit 0xf0
        _emit 0x74
        _emit 0x29
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x39
        _emit 0x48
        _emit 0x04
        _emit 0x75
        _emit 0x20
        _emit 0x8b
        _emit 0x57
        _emit 0x0c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x04
        _emit 0xf2
        _emit 0x8b
        _emit 0x08
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x24
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x01
        _emit 0x75
        _emit 0x10
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x46
        _emit 0x3b
        _emit 0xf0
        _emit 0x72
        _emit 0xc2
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00486901
__declspec(naked) void gap_00486901(void)
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
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x48
        _emit 0x54
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x20
        _emit 0xff
        _emit 0x48
        _emit 0x04
        _emit 0xc3
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
