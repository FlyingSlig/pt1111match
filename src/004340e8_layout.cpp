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

extern const unsigned char PTR_LAB_004bfcd0[];
extern unsigned char DAT_004db294[];
extern unsigned char DAT_004e0ae0[];
extern unsigned char DAT_004e0aec[];
extern unsigned char DAT_004e26ac[];
extern unsigned char DAT_004e26b0[];
extern unsigned char DAT_004e26b4[];
extern unsigned char DAT_004e26b8[];
extern unsigned char DAT_004e26c0[];
extern unsigned char DAT_004e26c4[];
extern unsigned char DAT_004e26f0[];
extern unsigned char DAT_004e26fc[];
extern unsigned char DAT_004e2700[];
extern unsigned char DAT_004e2800[];
extern const unsigned char PTR_LAB_004bfd38[4];
extern const unsigned char PTR_FUN_004bfd3c[4];
extern const unsigned char PTR_InitializeCriticalSection_004bc12c[4];
extern const unsigned char PTR_FUN_004bfcdc[12];
extern unsigned char DAT_004e21b4[4];
extern unsigned char DAT_004e21b8[4];
extern unsigned char DAT_004ddb0c[12];
extern void * DAT_004e240c;
extern unsigned char DAT_004d6a80[8];
extern const unsigned char PTR_FUN_004bfd08[12];
extern unsigned char DAT_004e2424[4];
extern const unsigned char PTR_FUN_004bfd40[24];
extern const unsigned char PTR_FUN_004bfd58[24];












// GAP: PORT1111 0x004340e8
__declspec(naked) void gap_004340e8(void)
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

// FUNCTION: PORT1111 0x004340f0
__declspec(naked) void __fastcall FUN_004340f0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b78b9
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
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00433a20
        _emit 0x8d
        _emit 0x7e
        _emit 0x4c
        _emit 0x8b
        _emit 0xcf
        call FUN_0047fe60
        _emit 0x8d
        _emit 0x9e
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcb
        call FUN_0047fe60
        _emit 0x8b
        _emit 0xce
        call FUN_00433cf0
        mov ebp, dword ptr [DeleteCriticalSection]
        _emit 0x8d
        _emit 0x86
        _emit 0xdc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x50
        mov dword ptr [esi + 0x1d8], OFFSET PTR_FUN_004bfcdc
        _emit 0xff
        _emit 0xd5
        _emit 0x8d
        _emit 0x8e
        _emit 0xc0
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov dword ptr [esi + 0x1d8], OFFSET PTR_LAB_004bfcd0
        _emit 0x51
        mov dword ptr [esi + 0x1bc], OFFSET PTR_FUN_004bfcdc
        _emit 0xff
        _emit 0xd5
        _emit 0x8d
        _emit 0x8e
        _emit 0x70
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov dword ptr [esi + 0x1bc], OFFSET PTR_LAB_004bfcd0
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x03
        call FUN_00433f30
        _emit 0x8d
        _emit 0x8e
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x02
        call FUN_00433f30
        _emit 0x8b
        _emit 0xcb
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x01
        call FUN_0047fff0
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x00
        call FUN_0047fff0
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00433f30
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

// GAP: PORT1111 0x004341d5
__declspec(naked) void gap_004341d5(void)
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

// FUNCTION: PORT1111 0x004341e0
__declspec(naked) void __fastcall FUN_004341e0(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x0c
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0xb9
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x0f
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x2b
        _emit 0xc8
        _emit 0x3b
        _emit 0xcf
        _emit 0x73
        _emit 0x07
        _emit 0x8b
        _emit 0xcb
        call FUN_00434070
        _emit 0x8b
        _emit 0xc8
        _emit 0xd1
        _emit 0xe9
        _emit 0x83
        _emit 0xf9
        _emit 0x08
        _emit 0x73
        _emit 0x05
        _emit 0xb9
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xf9
        _emit 0x73
        _emit 0x11
        _emit 0xba
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x0f
        _emit 0x2b
        _emit 0xd1
        _emit 0x3b
        _emit 0xc2
        _emit 0x77
        _emit 0x06
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0xf9
        _emit 0x55
        _emit 0x8b
        _emit 0x6b
        _emit 0x0c
        _emit 0x03
        _emit 0xc7
        _emit 0xc1
        _emit 0xe0
        _emit 0x02
        _emit 0x56
        _emit 0x50
        _emit 0xc1
        _emit 0xed
        _emit 0x02
        call pt_a_00496fa4
        _emit 0x8b
        _emit 0x4b
        _emit 0x04
        _emit 0x8b
        _emit 0xd0
        _emit 0x8d
        _emit 0x34
        _emit 0xad
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x04
        _emit 0x0e
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0xc1
        _emit 0xe0
        _emit 0x02
        _emit 0x2b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x03
        _emit 0xc1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0xc1
        _emit 0xe0
        _emit 0x02
        _emit 0x50
        _emit 0x51
        _emit 0x03
        _emit 0xd6
        _emit 0x52
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x28
        call memmove
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0x4b
        _emit 0x04
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0x03
        _emit 0xc2
        _emit 0x3b
        _emit 0xef
        _emit 0x77
        _emit 0x3f
        _emit 0xc1
        _emit 0xfe
        _emit 0x02
        _emit 0x8b
        _emit 0xd6
        _emit 0xc1
        _emit 0xe2
        _emit 0x02
        _emit 0x52
        _emit 0x51
        _emit 0x8b
        _emit 0xf7
        _emit 0x50
        _emit 0x2b
        _emit 0xf5
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x24
        call memmove
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0xd0
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x03
        _emit 0xd1
        _emit 0x85
        _emit 0xf6
        _emit 0x76
        _emit 0x0c
        _emit 0x8b
        _emit 0xce
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0xfa
        _emit 0xf3
        _emit 0xab
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x85
        _emit 0xed
        _emit 0x76
        _emit 0x52
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0xcd
        _emit 0xeb
        _emit 0x42
        _emit 0x8d
        _emit 0x2c
        _emit 0xbd
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xd5
        _emit 0xc1
        _emit 0xfa
        _emit 0x02
        _emit 0xc1
        _emit 0xe2
        _emit 0x02
        _emit 0x52
        _emit 0x51
        _emit 0x50
        call memmove
        _emit 0x8b
        _emit 0x43
        _emit 0x04
        _emit 0x8d
        _emit 0x0c
        _emit 0x28
        _emit 0x2b
        _emit 0xf1
        _emit 0x03
        _emit 0xf0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xc1
        _emit 0xfe
        _emit 0x02
        _emit 0xc1
        _emit 0xe6
        _emit 0x02
        _emit 0x56
        _emit 0x51
        _emit 0x50
        call memmove
        _emit 0x8b
        _emit 0xd0
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0x03
        _emit 0xd6
        _emit 0x85
        _emit 0xff
        _emit 0x76
        _emit 0x0c
        _emit 0x8b
        _emit 0xcf
        _emit 0x8b
        _emit 0xfa
        _emit 0x33
        _emit 0xc0
        _emit 0xf3
        _emit 0xab
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x43
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x5e
        _emit 0x5d
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x03
        _emit 0xc7
        _emit 0x5f
        _emit 0x89
        _emit 0x4b
        _emit 0x04
        _emit 0x89
        _emit 0x43
        _emit 0x08
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
    }
}

// GAP: PORT1111 0x00434330
__declspec(naked) void gap_00434330(void)
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00434340
__declspec(naked) void * __fastcall FUN_00434340(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b78ff
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
        _emit 0x8b
        _emit 0xf1
        _emit 0x6a
        _emit 0x01
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        call FUN_00433ea0
        _emit 0x8d
        _emit 0x4e
        _emit 0x4c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0047ff90
        _emit 0x8d
        _emit 0x8e
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        call FUN_0047ff90
        _emit 0x6a
        _emit 0x01
        _emit 0x8d
        _emit 0x8e
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x02
        mov dword ptr [esi + 0x11c], OFFSET PTR_LAB_004bfd38
        call FUN_00433ea0
        _emit 0x6a
        _emit 0x01
        _emit 0x8d
        _emit 0x8e
        _emit 0x70
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x03
        mov dword ptr [esi + 0x16c], OFFSET PTR_FUN_004bfd3c
        call FUN_00433ea0
        mov edi, dword ptr [InitializeCriticalSection]
        _emit 0x8d
        _emit 0x86
        _emit 0xc0
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x50
        mov dword ptr [esi + 0x1bc], OFFSET PTR_FUN_004bfcdc
        _emit 0xff
        _emit 0xd7
        _emit 0x8d
        _emit 0x8e
        _emit 0xdc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x51
        mov dword ptr [esi + 0x1d8], OFFSET PTR_FUN_004bfcdc
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        mov dword ptr [DAT_004e21b4], 0
        mov dword ptr [DAT_004e21b8], 0
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

// FUNCTION: PORT1111 0x00434410
__declspec(naked) void __fastcall FUN_00434410(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x03
        _emit 0xc8
        _emit 0xf6
        _emit 0xc1
        _emit 0x03
        _emit 0x75
        _emit 0x16
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0xc1
        _emit 0xe8
        _emit 0x02
        _emit 0x3b
        _emit 0xc8
        _emit 0x77
        _emit 0x09
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        call FUN_004341e0
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x53
        _emit 0x8b
        _emit 0x5e
        _emit 0x10
        _emit 0x57
        _emit 0x8b
        _emit 0x7e
        _emit 0x0c
        _emit 0x03
        _emit 0xfb
        _emit 0x8b
        _emit 0xdf
        _emit 0xc1
        _emit 0xeb
        _emit 0x02
        _emit 0x3b
        _emit 0xc3
        _emit 0x77
        _emit 0x02
        _emit 0x2b
        _emit 0xd8
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x83
        _emit 0x3c
        _emit 0x9a
        _emit 0x00
        _emit 0x75
        _emit 0x10
        _emit 0x6a
        _emit 0x10
        call pt_a_00496fa4
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x04
        _emit 0x99
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x8b
        _emit 0x04
        _emit 0x9a
        _emit 0x83
        _emit 0xe7
        _emit 0x03
        _emit 0x8d
        _emit 0x04
        _emit 0xb8
        _emit 0x85
        _emit 0xc0
        _emit 0x5f
        _emit 0x5b
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x11
        _emit 0x89
        _emit 0x10
        _emit 0xff
        _emit 0x46
        _emit 0x10
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00434488
__declspec(naked) void gap_00434488(void)
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

// FUNCTION: PORT1111 0x00434490
__declspec(naked) void __fastcall FUN_00434490(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x0c
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x8d
        _emit 0x77
        _emit 0x18
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x18
        call dword ptr [GetTickCount]
        _emit 0x8b
        _emit 0x5f
        _emit 0x3c
        _emit 0x8b
        _emit 0x4b
        _emit 0x04
        _emit 0x83
        _emit 0xc7
        _emit 0x38
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x51
        _emit 0x53
        _emit 0x8b
        _emit 0xcf
        call FUN_00433b30
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcf
        _emit 0x8b
        _emit 0xe8
        call FUN_00433fd0
        _emit 0x89
        _emit 0x6b
        _emit 0x04
        _emit 0x8b
        _emit 0x55
        _emit 0x04
        _emit 0x89
        _emit 0x2a
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x004344f9
__declspec(naked) void gap_004344f9(void)
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

// FUNCTION: PORT1111 0x00434500
__declspec(naked) void __fastcall FUN_00434500(void *pthis,void *param_1,int param_2)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x68
        mov eax, dword ptr [DAT_004ddb0c]
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x64
        mov eax, dword ptr [DAT_004e21b8]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1d
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x6c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x79
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x64
        call pt_a_00497aa6
        _emit 0x83
        _emit 0xc4
        _emit 0x68
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        mov edx, dword ptr [DAT_004e240c]
        _emit 0x83
        _emit 0x7a
        _emit 0x60
        _emit 0x02
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x6c
        _emit 0x75
        _emit 0x43
        _emit 0x8b
        _emit 0x50
        _emit 0x0c
        _emit 0x83
        _emit 0xfa
        _emit 0x09
        _emit 0x74
        _emit 0x3b
        _emit 0x83
        _emit 0xfa
        _emit 0x13
        _emit 0x74
        _emit 0x36
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x70
        _emit 0x8d
        _emit 0x14
        _emit 0x24
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        call FUN_00433980
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x49
        _emit 0x64
        _emit 0x6a
        _emit 0x64
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        call FUN_00445740
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x64
        call pt_a_00497aa6
        _emit 0x83
        _emit 0xc4
        _emit 0x68
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x70
        _emit 0x52
        _emit 0x50
        _emit 0x81
        _emit 0xc1
        _emit 0x70
        _emit 0x01
        _emit 0x00
        _emit 0x00
        call FUN_00434490
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x64
        call pt_a_00497aa6
        _emit 0x83
        _emit 0xc4
        _emit 0x68
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x004345a5
__declspec(naked) void gap_004345a5(void)
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

// FUNCTION: PORT1111 0x004345b0
__declspec(naked) void __fastcall FUN_004345b0(int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x8d
        _emit 0x5f
        _emit 0x18
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x50
        _emit 0x04
        call dword ptr [GetTickCount]
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x47
        _emit 0x3c
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x77
        _emit 0x55
        _emit 0x8b
        _emit 0x47
        _emit 0x48
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x03
        _emit 0x01
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        mov ecx, dword ptr [DAT_004d6a80]
        _emit 0x2b
        _emit 0xd0
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0xd3
        _emit 0xe2
        _emit 0xd1
        _emit 0xfa
        _emit 0x3b
        _emit 0xd0
        _emit 0x76
        _emit 0x4a
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x13
        _emit 0x8b
        _emit 0xcb
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x8d
        _emit 0x4f
        _emit 0x04
        call FUN_00434410
        _emit 0x8b
        _emit 0x13
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x3b
        _emit 0x77
        _emit 0x3c
        _emit 0x8b
        _emit 0x2e
        _emit 0x74
        _emit 0x1d
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x28
        _emit 0x8b
        _emit 0x0e
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x56
        _emit 0x89
        _emit 0x51
        _emit 0x04
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x47
        _emit 0x40
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x47
        _emit 0x40
        _emit 0x8b
        _emit 0xf5
        _emit 0xeb
        _emit 0x02
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x3c
        _emit 0x75
        _emit 0x8b
        _emit 0x5d
        _emit 0x8b
        _emit 0x03
        _emit 0x8b
        _emit 0xcb
        _emit 0xc7
        _emit 0x47
        _emit 0x48
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// GAP: PORT1111 0x00434658
__declspec(naked) void gap_00434658(void)
{
    __asm {
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        mov eax, dword ptr [DAT_004e21b4]
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x70
        _emit 0x55
        _emit 0x53
        _emit 0x56
        _emit 0x8d
        _emit 0x69
        _emit 0x04
        _emit 0x57
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8b
        _emit 0xcd
        call FUN_00433c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x55
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x10
        mov ebx, dword ptr [DAT_004e2424]
        _emit 0x8b
        _emit 0x83
        _emit 0xbc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xb3
        _emit 0xbc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x53
        _emit 0x18
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x8d
        _emit 0x7b
        _emit 0x18
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x8d
        _emit 0x4b
        _emit 0x04
        call FUN_00434410
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x08
        mov eax, dword ptr [DAT_004e21b4]
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x9b
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x5d
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x004346f0
__declspec(naked) void __fastcall FUN_004346f0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x86
        _emit 0xd8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8d
        _emit 0xbe
        _emit 0xd8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x13
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x8b
        _emit 0x86
        _emit 0x38
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x8d
        _emit 0x9e
        _emit 0x38
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x8d
        _emit 0x8e
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        call FUN_00434410
        _emit 0x8b
        _emit 0x13
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x4e
        _emit 0x4c
        call FUN_00480070
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00434754
__declspec(naked) void gap_00434754(void)
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
