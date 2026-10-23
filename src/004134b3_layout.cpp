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

extern const unsigned char PTR_GetTickCount_004bc158[4];
extern unsigned char DAT_004e2424[4];
extern const unsigned char DAT_004bef48[8];
extern const unsigned char DAT_004bd578[8];
extern const unsigned char DAT_004bef40[8];
extern const unsigned char DAT_004bef38[8];
extern const unsigned char DAT_004bef30[8];
extern const unsigned char DAT_004bef28[8];











// GAP: PORT1111 0x004134b3
__declspec(naked) void gap_004134b3(void)
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

// FUNCTION: PORT1111 0x004134c0
__declspec(naked) void __fastcall FUN_004134c0(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x40
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x3b
        _emit 0xc2
        _emit 0x75
        _emit 0x09
        _emit 0x57
        _emit 0x8b
        _emit 0x79
        _emit 0x48
        _emit 0x85
        _emit 0xff
        _emit 0x5f
        _emit 0x74
        _emit 0x26
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x40
        _emit 0x60
        _emit 0xc7
        _emit 0x40
        _emit 0x30
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x51
        _emit 0x40
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x41
        _emit 0x44
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x41
        _emit 0x4c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x51
        _emit 0x48
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x004134fd
__declspec(naked) void gap_004134fd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00413500
__declspec(naked) void __fastcall FUN_00413500(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x76
        _emit 0x57
        mov edi, dword ptr [GetTickCount]
        _emit 0xff
        _emit 0xd7
        _emit 0x2b
        _emit 0x46
        _emit 0x44
        _emit 0x83
        _emit 0xf8
        _emit 0x64
        _emit 0x76
        _emit 0x64
        _emit 0x8b
        _emit 0x46
        _emit 0x48
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1a
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x8b
        _emit 0x48
        _emit 0x60
        _emit 0x5f
        _emit 0xc7
        _emit 0x41
        _emit 0x30
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2424]
        _emit 0x5e
        jmp FUN_00433e30
        _emit 0x83
        _emit 0x7e
        _emit 0x4c
        _emit 0x0a
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x75
        _emit 0x22
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x50
        _emit 0x60
        _emit 0xc7
        _emit 0x42
        _emit 0x30
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2424]
        _emit 0x5f
        _emit 0x5e
        jmp FUN_00433e30
        _emit 0x8b
        _emit 0x40
        _emit 0x60
        _emit 0x8b
        _emit 0x50
        _emit 0x30
        _emit 0x33
        _emit 0xc9
        _emit 0x85
        _emit 0xd2
        _emit 0x0f
        _emit 0x94
        _emit 0xc1
        _emit 0x89
        _emit 0x48
        _emit 0x30
        _emit 0xff
        _emit 0xd7
        _emit 0x89
        _emit 0x46
        _emit 0x44
        _emit 0xff
        _emit 0x46
        _emit 0x4c
        _emit 0x5f
        mov ecx, dword ptr [DAT_004e2424]
        _emit 0x5e
        jmp FUN_00433e30
    }
}


// GAP: PORT1111 0x0041358c
__declspec(naked) void gap_0041358c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00413590
__declspec(naked) int FUN_00413590(int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x81
        _emit 0xa8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x83
        _emit 0xf8
        _emit 0x09
        _emit 0x75
        _emit 0x08
        _emit 0x33
        _emit 0xc0
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x81
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0x99
        _emit 0xcc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x97
        _emit 0xc4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xd3
        _emit 0x8b
        _emit 0xb7
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x7e
        _emit 0x08
        _emit 0x8b
        _emit 0x91
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x06
        _emit 0x8b
        _emit 0x91
        _emit 0xd4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x99
        _emit 0xd0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0xc2
        _emit 0x8b
        _emit 0x97
        _emit 0xc8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xd3
        _emit 0x7e
        _emit 0x08
        _emit 0x8b
        _emit 0x91
        _emit 0xe0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x06
        _emit 0x8b
        _emit 0x91
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0xc2
        _emit 0x8b
        _emit 0x97
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x08
        _emit 0x8b
        _emit 0x91
        _emit 0xe4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x25
        _emit 0x83
        _emit 0xfa
        _emit 0x01
        _emit 0x75
        _emit 0x08
        _emit 0x8b
        _emit 0x91
        _emit 0xe8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x18
        _emit 0x83
        _emit 0xfa
        _emit 0x02
        _emit 0x75
        _emit 0x08
        _emit 0x8b
        _emit 0x91
        _emit 0xec
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x0b
        _emit 0x83
        _emit 0xfa
        _emit 0x03
        _emit 0x75
        _emit 0x08
        _emit 0x8b
        _emit 0x91
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0xc2
        _emit 0x2b
        _emit 0xf0
        _emit 0x8b
        _emit 0xc6
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x79
        _emit 0x28
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x24
        fmul qword ptr [DAT_004bef48]
        _emit 0xd9
        _emit 0xea
        _emit 0xde
        _emit 0xc9
        _emit 0xd9
        _emit 0xc0
        _emit 0xd9
        _emit 0xfc
        _emit 0xd9
        _emit 0xc9
        _emit 0xd8
        _emit 0xe1
        _emit 0xd9
        _emit 0xf0
        _emit 0xd9
        _emit 0xe8
        _emit 0xde
        _emit 0xc1
        _emit 0xd9
        _emit 0xfd
        _emit 0xdd
        _emit 0xd9
        fmul qword ptr [DAT_004bd578]
        _emit 0xeb
        _emit 0x3a
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x08
        fld qword ptr [DAT_004bd578]
        _emit 0xeb
        _emit 0x2e
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x24
        fmul qword ptr [DAT_004bef40]
        _emit 0xd9
        _emit 0xea
        _emit 0xde
        _emit 0xc9
        _emit 0xd9
        _emit 0xc0
        _emit 0xd9
        _emit 0xfc
        _emit 0xd9
        _emit 0xc9
        _emit 0xd8
        _emit 0xe1
        _emit 0xd9
        _emit 0xf0
        _emit 0xd9
        _emit 0xe8
        _emit 0xde
        _emit 0xc1
        _emit 0xd9
        _emit 0xfd
        _emit 0xdd
        _emit 0xd9
        fmul qword ptr [DAT_004bd578]
        _emit 0xd9
        _emit 0xe0
        fadd qword ptr [DAT_004bef38]
        _emit 0xdd
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0xdb
        _emit 0x87
        _emit 0xbc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        fmul qword ptr [DAT_004bef30]
        _emit 0xd8
        _emit 0xc9
        _emit 0xdd
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0xdd
        _emit 0xd8
        call rand
        _emit 0x99
        _emit 0xb9
        _emit 0xe8
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xf7
        _emit 0xf9
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x24
        fmul qword ptr [DAT_004bef28]
        _emit 0xdc
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x05
        _emit 0x7a
        _emit 0x10
        _emit 0x5f
        _emit 0xdd
        _emit 0xd8
        _emit 0x5e
        _emit 0xb8
        _emit 0x3f
        _emit 0x42
        _emit 0x0f
        _emit 0x00
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xdc
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x05
        _emit 0x7a
        _emit 0x28
        _emit 0x8b
        _emit 0xb7
        _emit 0xb8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xb7
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x46
        call rand
        _emit 0x99
        _emit 0xf7
        _emit 0xfe
        _emit 0x8b
        _emit 0x8f
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x8b
        _emit 0xc2
        _emit 0x03
        _emit 0xc1
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0041372e
__declspec(naked) void gap_0041372e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}
