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

extern const unsigned char DAT_004bd614[];
extern const unsigned char DAT_004bd618[];
extern unsigned char DAT_004d54e8[];
extern unsigned char DAT_004d54ec[];
extern unsigned char DAT_004d54f0[];
extern unsigned char DAT_004d54f4[];
extern const unsigned char DAT_004bd65c[576];
extern int DAT_004e2404;
extern const unsigned char DAT_004bd8a4[4];
extern const unsigned char PTR_FUN_004be2e4[36];











// GAP: PORT1111 0x0040d624
__declspec(naked) void gap_0040d624(void)
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

// FUNCTION: PORT1111 0x0040d630
__declspec(naked) void __fastcall FUN_0040d630(void *pthis,RECT *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0xcf
        call FUN_00479890
        _emit 0x57
        call dword ptr [IsRectEmpty]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x41
        _emit 0x40
        _emit 0x89
        _emit 0x4f
        _emit 0x08
        _emit 0x89
        _emit 0x47
        _emit 0x0c
        _emit 0x8b
        _emit 0x86
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x76
        _emit 0x08
        _emit 0xc1
        _emit 0xe0
        _emit 0x04
        mov edx, dword ptr [eax + DAT_004d54e8]
        _emit 0x03
        _emit 0xd1
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x08
        mov edx, dword ptr [eax + DAT_004d54ec]
        _emit 0x03
        _emit 0xd6
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        mov edx, dword ptr [eax + DAT_004d54f0]
        mov eax, dword ptr [eax + DAT_004d54f4]
        _emit 0x03
        _emit 0xd1
        _emit 0x57
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x8b
        _emit 0xd1
        _emit 0x03
        _emit 0xc6
        _emit 0x52
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        call dword ptr [IntersectRect]
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040d6b1
__declspec(naked) void gap_0040d6b1(void)
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
    }
}

// FUNCTION: PORT1111 0x0040d6c0
__declspec(naked) void __fastcall FUN_0040d6c0(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x81
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc1
        _emit 0xe0
        _emit 0x04
        _emit 0x56
        mov esi, dword ptr [eax + DAT_004d54e8]
        mov eax, dword ptr [eax + DAT_004d54f0]
        _emit 0x2b
        _emit 0xc6
        _emit 0x83
        _emit 0xe8
        _emit 0x14
        _emit 0x99
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0xd1
        _emit 0xf8
        _emit 0x03
        _emit 0xc6
        _emit 0x89
        _emit 0x02
        _emit 0x8b
        _emit 0x81
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0xc1
        _emit 0xe0
        _emit 0x04
        mov ecx, dword ptr [eax + DAT_004d54ec]
        _emit 0x83
        _emit 0xe9
        _emit 0x03
        _emit 0x89
        _emit 0x0a
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x0040d704
__declspec(naked) void gap_0040d704(void)
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
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x87
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x66
        _emit 0x8b
        _emit 0x4f
        _emit 0x40
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x5f
        _emit 0x8b
        _emit 0xc8
        _emit 0x69
        _emit 0xc9
        _emit 0x90
        _emit 0x02
        _emit 0x00
        _emit 0x00
        mov edx, dword ptr [ecx + DAT_004bd614]
        _emit 0x56
        _emit 0x33
        _emit 0xf6
        _emit 0x85
        _emit 0xd2
        _emit 0x7e
        _emit 0x40
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x40
        _emit 0x6b
        _emit 0xc0
        _emit 0x52
        _emit 0x03
        _emit 0xc6
        lea edx, [eax*8 + DAT_004bd618]
        _emit 0x52
        call FUN_004267d0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0xc8
        call FUN_004274f0
        _emit 0x8b
        _emit 0x87
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0x69
        _emit 0xc9
        _emit 0x90
        _emit 0x02
        _emit 0x00
        _emit 0x00
        mov edx, dword ptr [ecx + DAT_004bd614]
        _emit 0x46
        _emit 0x3b
        _emit 0xf2
        _emit 0x7c
        _emit 0xc7
        _emit 0x8b
        _emit 0x4f
        _emit 0x40
        _emit 0x5e
        _emit 0x5f
        jmp FUN_004274f0
        _emit 0x5f
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

// FUNCTION: PORT1111 0x0040d790
__declspec(naked) void __fastcall FUN_0040d790(void *param_1)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x83
        _emit 0xe4
        _emit 0xf8
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xe9
        _emit 0x8b
        _emit 0x45
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xb6
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x45
        _emit 0x3c
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xab
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x85
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x9d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x69
        _emit 0xc0
        _emit 0x90
        _emit 0x02
        _emit 0x00
        _emit 0x00
        add eax, OFFSET DAT_004bd65c
        _emit 0x0f
        _emit 0x84
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x45
        _emit 0x2c
        _emit 0x0f
        _emit 0xbf
        _emit 0x48
        _emit 0x4e
        _emit 0x0f
        _emit 0xbf
        _emit 0x40
        _emit 0x4c
        _emit 0x83
        _emit 0xe9
        _emit 0x07
        _emit 0x83
        _emit 0xe8
        _emit 0x07
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x33
        _emit 0xdb
        _emit 0x90
        _emit 0x33
        _emit 0xff
        _emit 0x8b
        _emit 0x85
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x69
        _emit 0xc0
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0xc3
        _emit 0x8d
        _emit 0x0c
        _emit 0x7f
        _emit 0x8d
        _emit 0x14
        _emit 0x88
        mov eax, dword ptr [edx*4 + DAT_004bd65c]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x43
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x03
        _emit 0xc3
        _emit 0x03
        _emit 0xcf
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x50
        call FUN_00429b00
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x19
        _emit 0x8d
        _emit 0x45
        _emit 0xec
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x23
        _emit 0xc5
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00428460
        _emit 0x56
        _emit 0x8b
        _emit 0xcd
        call FUN_0041f0c0
        _emit 0x47
        _emit 0x83
        _emit 0xff
        _emit 0x0c
        _emit 0x7c
        _emit 0x98
        _emit 0x43
        _emit 0x83
        _emit 0xfb
        _emit 0x0c
        _emit 0x7c
        _emit 0x90
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0040d868
__declspec(naked) void gap_0040d868(void)
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
        _emit 0x83
        _emit 0xe9
        _emit 0x14
        jmp pt_a_0040d880
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
