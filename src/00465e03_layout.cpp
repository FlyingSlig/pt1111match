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

extern const unsigned char DAT_004c44c0[];
extern unsigned char PTR_DAT_004dd95c[4];











// GAP: PORT1111 0x00465e03
__declspec(naked) void gap_00465e03(void)
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

// FUNCTION: PORT1111 0x00465e10
__declspec(naked) int __fastcall FUN_00465e10(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x11
        _emit 0x8b
        _emit 0xc2
        _emit 0x56
        _emit 0x8d
        _emit 0x70
        _emit 0x01
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x2b
        _emit 0xc6
        _emit 0x3b
        _emit 0xc8
        _emit 0x5e
        _emit 0x73
        _emit 0x06
        _emit 0x8a
        _emit 0x04
        _emit 0x0a
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x32
        _emit 0xc0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00465e35
__declspec(naked) void gap_00465e35(void)
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

// FUNCTION: PORT1111 0x00465e40
__declspec(naked) void __fastcall FUN_00465e40(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0x85
        _emit 0xc0
        mov ecx, dword ptr [PTR_DAT_004dd95c]
        _emit 0x74
        _emit 0x16
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x12
        _emit 0x50
        call free
        _emit 0xa1
        _emit 0x5c
        _emit 0xd9
        _emit 0x4d
    }
}

// GAP: PORT1111 0x00465e5d
__declspec(naked) void gap_00465e5d(void)
{
    __asm {
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x06
        _emit 0x5e
        _emit 0xc3
        _emit 0x89
        _emit 0x0e
        _emit 0x5e
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00465e70
__declspec(naked) void __fastcall FUN_00465e70(void *pthis,char param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x0f
        _emit 0xbe
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0x51
        _emit 0x50
        call _mbsrchr
        _emit 0x8b
        _emit 0xf8
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x2d
        _emit 0x8b
        _emit 0x16
        _emit 0x53
        _emit 0x52
        call _strdup
        _emit 0x8b
        _emit 0xd8
        _emit 0x8d
        _emit 0x47
        _emit 0x01
        _emit 0x8b
        _emit 0xd3
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x2b
        _emit 0xd0
        _emit 0x8a
        _emit 0x08
        _emit 0x88
        _emit 0x0c
        _emit 0x02
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf6
        _emit 0x8b
        _emit 0x06
        _emit 0x50
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x1e
    }
}

// GAP: PORT1111 0x00465eb7
__declspec(naked) void gap_00465eb7(void)
{
    __asm {
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00465ec0
__declspec(naked) bool __fastcall FUN_00465ec0(void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x01
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc2
        _emit 0x89
        _emit 0x04
        _emit 0x24
        _emit 0xb8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x94
        _emit 0xc0
        _emit 0x59
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00465edc
__declspec(naked) void gap_00465edc(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00465ee0
__declspec(naked) int * __fastcall FUN_00465ee0(void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xc2
        _emit 0x57
        _emit 0x8d
        _emit 0x78
        _emit 0x01
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc7
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x74
        _emit 0x09
        _emit 0x52
        call _mbslwr
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x59
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00465f0e
__declspec(naked) void gap_00465f0e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00465f10
__declspec(naked) int * __fastcall FUN_00465f10(void *pthis,unsigned int param_1,void *param_2)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x56
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x8d
        _emit 0x70
        _emit 0x01
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8a
        _emit 0x10
        _emit 0x40
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc6
        _emit 0x8b
        _emit 0xf0
        _emit 0x3b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x0f
        _emit 0x82
        _emit 0xeb
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x18
        _emit 0x85
        _emit 0xed
        _emit 0x0f
        _emit 0x84
        _emit 0xe7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x7d
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x84
        _emit 0xdd
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc5
        _emit 0x8d
        _emit 0x48
        _emit 0x01
        _emit 0x8a
        _emit 0x10
        _emit 0x40
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc1
        _emit 0x03
        _emit 0xc6
        _emit 0x53
        _emit 0x8d
        _emit 0x70
        _emit 0x01
        _emit 0x57
        _emit 0x56
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x24
        call malloc
        _emit 0x8b
        _emit 0xd8
        _emit 0x8b
        _emit 0xce
        _emit 0x8b
        _emit 0xd1
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0xfb
        _emit 0xf3
        _emit 0xab
        _emit 0x8b
        _emit 0xca
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xaa
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0x52
        _emit 0x53
        call _mbsnbcpy
        _emit 0x8b
        _emit 0xc5
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0xff
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x8b
        _emit 0xfb
        _emit 0x2b
        _emit 0xc6
        _emit 0x4f
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8a
        _emit 0x4f
        _emit 0x01
        _emit 0x47
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf8
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xa4
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x3b
        _emit 0xc8
        _emit 0x73
        _emit 0x30
        _emit 0x8b
        _emit 0x45
        _emit 0x00
        _emit 0x03
        _emit 0xc1
        _emit 0x8b
        _emit 0xf0
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x8b
        _emit 0xfb
        _emit 0x2b
        _emit 0xc6
        _emit 0x4f
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8a
        _emit 0x4f
        _emit 0x01
        _emit 0x47
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf8
        _emit 0x8b
        _emit 0xc8
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0xc8
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xa4
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0xcd
        _emit 0xc6
        _emit 0x04
        _emit 0x03
        _emit 0x00
        call FUN_00465e40
        _emit 0x5f
        _emit 0x89
        _emit 0x5d
        _emit 0x00
        _emit 0x5b
        _emit 0x8b
        _emit 0xc5
        _emit 0x5d
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0xc1
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x5d
        _emit 0x8b
        _emit 0xc1
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00466037
__declspec(naked) void gap_00466037(void)
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

// FUNCTION: PORT1111 0x00466040
__declspec(naked) int * __fastcall FUN_00466040(void *pthis,void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xff
        _emit 0x8b
        _emit 0xd9
        _emit 0x0f
        _emit 0x84
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x3f
        _emit 0x00
        _emit 0x0f
        _emit 0x84
        _emit 0x97
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x03
        _emit 0x8b
        _emit 0xc8
        _emit 0x56
        _emit 0x8d
        _emit 0x71
        _emit 0x01
        _emit 0x8a
        _emit 0x11
        _emit 0x41
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xce
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x6c
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0xc7
        _emit 0x8d
        _emit 0x78
        _emit 0x01
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc7
        _emit 0x55
        _emit 0x8d
        _emit 0x2c
        _emit 0x30
        _emit 0x8d
        _emit 0x7d
        _emit 0x01
        _emit 0x57
        call malloc
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0xcf
        _emit 0x8b
        _emit 0xd1
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0xfe
        _emit 0xf3
        _emit 0xab
        _emit 0x8b
        _emit 0xca
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xaa
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x0b
        _emit 0x50
        _emit 0x51
        push OFFSET DAT_004c44c0
        _emit 0x56
        call sprintf
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0x8b
        _emit 0xcb
        _emit 0xc6
        _emit 0x04
        _emit 0x2e
        _emit 0x00
        call FUN_00465e40
        _emit 0x5d
        _emit 0x89
        _emit 0x33
        _emit 0x5e
        _emit 0x5f
        _emit 0x8b
        _emit 0xc3
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x57
        call _strdup
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x5e
        _emit 0x89
        _emit 0x03
        _emit 0x5f
        _emit 0x8b
        _emit 0xc3
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x8b
        _emit 0xc3
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x004660f9
__declspec(naked) void gap_004660f9(void)
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

// FUNCTION: PORT1111 0x00466100
__declspec(naked) void __fastcall FUN_00466100(void *pthis,int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xc2
        _emit 0x57
        _emit 0x8d
        _emit 0x78
        _emit 0x01
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc7
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x74
        _emit 0x1c
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x11
        cmp edx, dword ptr [PTR_DAT_004dd95c]
        _emit 0x74
        _emit 0x09
        _emit 0x52
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        mov eax, dword ptr [PTR_DAT_004dd95c]
        _emit 0x89
        _emit 0x06
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x41
        _emit 0x51
        call malloc
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x06
        _emit 0x5f
        _emit 0xc6
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x59
    }
}


// GAP: PORT1111 0x00466151
__declspec(naked) void gap_00466151(void)
{
    __asm {
        _emit 0xc2
        _emit 0x04
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
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00466160
__declspec(naked) int * __fastcall FUN_00466160(void *pthis,void *param_1,size_t param_2)
{
    __asm {
        mov edx, dword ptr [PTR_DAT_004dd95c]
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xed
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x0f
        _emit 0x84
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xea
        _emit 0x0f
        _emit 0x84
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x85
        _emit 0xf6
        _emit 0x7f
        _emit 0x12
        _emit 0x8b
        _emit 0xf5
        _emit 0x8d
        _emit 0x4e
        _emit 0x01
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8a
        _emit 0x06
        _emit 0x46
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xf1
        _emit 0x8b
        _emit 0x0f
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x51
        _emit 0x3b
        _emit 0xca
        _emit 0x74
        _emit 0x4d
        _emit 0x8b
        _emit 0xc1
        _emit 0x53
        _emit 0x8d
        _emit 0x58
        _emit 0x01
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8a
        _emit 0x10
        _emit 0x40
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc3
        _emit 0x3b
        _emit 0xf0
        _emit 0x5b
        _emit 0x7f
        _emit 0x19
        _emit 0x56
        _emit 0x55
        _emit 0x51
        call _mbsnbcpy
        _emit 0x8b
        _emit 0x07
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc6
        _emit 0x04
        _emit 0x06
        _emit 0x00
        _emit 0x5e
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5d
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        mov edx, dword ptr [PTR_DAT_004dd95c]
        _emit 0x3b
        _emit 0xca
        _emit 0x74
        _emit 0x0f
        _emit 0x51
        call free
        mov edx, dword ptr [PTR_DAT_004dd95c]
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xf6
        _emit 0x89
        _emit 0x17
        _emit 0x74
        _emit 0xd9
        _emit 0x8d
        _emit 0x4e
        _emit 0x01
        _emit 0x51
        call malloc
        _emit 0x56
        _emit 0x55
        _emit 0x50
        _emit 0x89
        _emit 0x07
        call _mbsnbcpy
        _emit 0x8b
        _emit 0x17
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc6
        _emit 0x04
        _emit 0x16
        _emit 0x00
        _emit 0x5e
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5d
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x07
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x13
        _emit 0x3b
        _emit 0xc2
        _emit 0x74
        _emit 0x0f
        _emit 0x50
        call free
    }
}

// GAP: PORT1111 0x0046622a
__declspec(naked) void gap_0046622a(void)
{
    __asm {
        mov edx, dword ptr [PTR_DAT_004dd95c]
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x17
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5d
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00466240
__declspec(naked) int __fastcall FUN_00466240(void *pthis,void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x33
        _emit 0x8b
        _emit 0xc6
        _emit 0x57
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x2b
        _emit 0xc2
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x2d
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x29
        _emit 0x8b
        _emit 0xc7
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc2
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x11
        _emit 0x57
        _emit 0x56
        call _mbscmp
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x40
        _emit 0x75
        _emit 0x50
        _emit 0x8b
        _emit 0x13
        _emit 0x8b
        _emit 0xc2
        _emit 0x8d
        _emit 0x70
        _emit 0x01
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc6
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x75
        _emit 0x04
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x36
        _emit 0x8b
        _emit 0xc2
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x90
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc2
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x75
        _emit 0x18
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0xc7
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc2
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x09
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004662ec
__declspec(naked) void gap_004662ec(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004662f0
__declspec(naked) int __fastcall FUN_004662f0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x33
        _emit 0x8b
        _emit 0xc6
        _emit 0x57
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x2b
        _emit 0xc2
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x2d
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x29
        _emit 0x8b
        _emit 0xc7
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc2
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x11
        _emit 0x57
        _emit 0x56
        call _mbsicmp
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x40
        _emit 0x75
        _emit 0x50
        _emit 0x8b
        _emit 0x13
        _emit 0x8b
        _emit 0xc2
        _emit 0x8d
        _emit 0x70
        _emit 0x01
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc6
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x75
        _emit 0x04
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x36
        _emit 0x8b
        _emit 0xc2
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x90
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc2
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x75
        _emit 0x18
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0xc7
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc2
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x09
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0046639c
__declspec(naked) void gap_0046639c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
