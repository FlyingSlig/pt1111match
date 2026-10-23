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

extern "C" void free_thunk(void *);
extern int DAT_004d6450;
extern const unsigned char s_ConvexFilename_004bf814[];
extern const unsigned char s_Filename_004bf824[];
extern const unsigned char DAT_004bf830[];
extern unsigned char DAT_004d6448[];
extern unsigned char DAT_004e0b2c[];
extern unsigned char DAT_004e0b30[];
extern unsigned char DAT_004e0b34[];
extern unsigned char DAT_004e0b38[];
extern const unsigned char PTR_FUN_004bc804[20];
extern const unsigned char PTR_FUN_004bf834[24];
extern unsigned char DAT_004e0b20[8];
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e1f28[4];
extern unsigned char DAT_004e1f2c[4];
extern unsigned char DAT_004e0b28[4];











// GAP: PORT1111 0x00424a69
__declspec(naked) void gap_00424a69(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x74
        _emit 0x1e
        _emit 0x83
        _emit 0xf8
        _emit 0x03
        _emit 0x75
        _emit 0x64
        push OFFSET DAT_004bf830
        _emit 0x8d
        _emit 0x4e
        _emit 0x04
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x53
        _emit 0x5f
        _emit 0x5e
        _emit 0xb0
        _emit 0x01
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8d
        _emit 0x5e
        _emit 0x04
        push OFFSET s_Filename_004bf824
        _emit 0x8b
        _emit 0xcb
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x50
        _emit 0x8d
        _emit 0x4f
        _emit 0x0c
        call FUN_00466a50
        _emit 0x5f
        _emit 0x5e
        _emit 0xb0
        _emit 0x01
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        push OFFSET s_ConvexFilename_004bf814
        _emit 0x8b
        _emit 0xcb
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x51
        _emit 0x8d
        _emit 0x4f
        _emit 0x10
        call FUN_00466a50
        _emit 0x5f
        _emit 0x5e
        _emit 0xb0
        _emit 0x01
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x32
        _emit 0xc0
        _emit 0x5b
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
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00424b00
__declspec(naked) void FUN_00424b00(unsigned int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x0c
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xc5
        _emit 0x25
        _emit 0xb7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [eax*4 + DAT_004d6450]
        _emit 0x83
        _emit 0xf8
        _emit 0x0c
        _emit 0x56
        _emit 0x57
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x7e
        _emit 0x13
        _emit 0x8b
        _emit 0xcd
        _emit 0x81
        _emit 0xe1
        _emit 0x83
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov edx, dword ptr [ecx*4 + DAT_004d6450]
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xc5
        _emit 0x83
        _emit 0xe0
        _emit 0x1f
        mov eax, dword ptr [eax*4 + DAT_004d6450]
        _emit 0x83
        _emit 0xf8
        _emit 0x0c
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x7e
        _emit 0x10
        _emit 0x8b
        _emit 0xcd
        _emit 0x83
        _emit 0xe1
        _emit 0x0e
        mov edx, dword ptr [ecx*4 + DAT_004d6450]
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0xc5
        _emit 0x83
        _emit 0xe0
        _emit 0x7b
        _emit 0x53
        mov ebx, dword ptr [eax*4 + DAT_004d6450]
        _emit 0x83
        _emit 0xfb
        _emit 0x0c
        _emit 0x7e
        _emit 0x0c
        _emit 0x8b
        _emit 0xcd
        _emit 0x83
        _emit 0xe1
        _emit 0x38
        mov ebx, dword ptr [ecx*4 + DAT_004d6450]
        _emit 0x8b
        _emit 0xd5
        _emit 0x81
        _emit 0xe2
        _emit 0xf1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov edi, dword ptr [edx*4 + DAT_004d6450]
        _emit 0x83
        _emit 0xff
        _emit 0x0c
        _emit 0x7e
        _emit 0x0e
        _emit 0x8b
        _emit 0xc5
        _emit 0x25
        _emit 0xe0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov edi, dword ptr [eax*4 + DAT_004d6450]
        mov esi, dword ptr [DAT_004e1f2c]
        _emit 0x83
        _emit 0xc9
        _emit 0xff
        _emit 0x8d
        _emit 0x04
        _emit 0xb6
        _emit 0xc1
        _emit 0xe0
        _emit 0x02
        mov dword ptr [eax + DAT_004e0b28], ecx
        mov dword ptr [eax + DAT_004e0b2c], ecx
        mov dword ptr [eax + DAT_004e0b30], ecx
        mov dword ptr [eax + DAT_004e0b34], ecx
        _emit 0x8d
        _emit 0x14
        _emit 0xb6
        _emit 0x33
        _emit 0xc9
        _emit 0xc1
        _emit 0xe2
        _emit 0x02
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x18
        lea edx, [edx + DAT_004e0b28]
        _emit 0x83
        _emit 0xf9
        _emit 0x04
        _emit 0x74
        _emit 0x1d
        _emit 0x39
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x74
        _emit 0x0e
        _emit 0x3b
        _emit 0xf9
        _emit 0x74
        _emit 0x0a
        _emit 0x39
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x04
        _emit 0x3b
        _emit 0xd9
        _emit 0x75
        _emit 0x05
        _emit 0x89
        _emit 0x0a
        _emit 0x83
        _emit 0xc2
        _emit 0x04
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x20
        _emit 0x41
        _emit 0x83
        _emit 0xf9
        _emit 0x0d
        _emit 0x7c
        _emit 0xd8
        _emit 0x33
        _emit 0xff
        _emit 0x85
        _emit 0xf6
        _emit 0x7e
        _emit 0x63
        mov ecx, dword ptr [eax + DAT_004e0b2c]
        mov edx, dword ptr [eax + DAT_004e0b30]
        mov ebx, dword ptr [eax + DAT_004e0b28]
        mov eax, dword ptr [eax + DAT_004e0b34]
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        mov ecx, OFFSET DAT_004e0b2c
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x59
        _emit 0xfc
        _emit 0xb2
        _emit 0x01
        _emit 0x74
        _emit 0x02
        _emit 0x32
        _emit 0xd2
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x3b
        _emit 0x01
        _emit 0x74
        _emit 0x02
        _emit 0x32
        _emit 0xd2
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0x41
        _emit 0x04
        _emit 0x74
        _emit 0x02
        _emit 0x32
        _emit 0xd2
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0x41
        _emit 0x08
        _emit 0x75
        _emit 0x04
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0x08
        _emit 0x47
        _emit 0x83
        _emit 0xc1
        _emit 0x14
        _emit 0x3b
        _emit 0xfe
        _emit 0x7c
        _emit 0xcd
        _emit 0x3b
        _emit 0xfe
        _emit 0x5b
        _emit 0x75
        _emit 0x2c
        mov eax, dword ptr [DAT_004d6448]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x46
        _emit 0x5f
        mov dword ptr [ebp*4 + DAT_004d6450], eax
        mov dword ptr [ecx + DAT_004e0b38], eax
        mov dword ptr [DAT_004e1f2c], esi
        _emit 0x40
        _emit 0x5e
        mov dword ptr [DAT_004d6448], eax
        _emit 0x5d
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8d
        _emit 0x14
        _emit 0xbf
        mov eax, dword ptr [edx*4 + DAT_004e0b38]
        _emit 0x5f
        _emit 0x5e
        mov dword ptr [ebp*4 + DAT_004d6450], eax
        _emit 0x5d
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00424cae
__declspec(naked) void gap_00424cae(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00424cb0
__declspec(naked) int __fastcall FUN_00424cb0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0xff
        _emit 0x50
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xce
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x16
        _emit 0x5e
        _emit 0xff
        _emit 0x62
        _emit 0x14
        _emit 0x8b
        _emit 0x06
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0xf7
        _emit 0xd8
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00424ccd
__declspec(naked) void gap_00424ccd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00424cd0
__declspec(naked) int * __fastcall FUN_00424cd0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6e13
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
        _emit 0x04
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x04
        mov dword ptr [esi], OFFSET PTR_FUN_004bc804
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x4e
        _emit 0x0c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [esi], OFFSET PTR_FUN_004bf834
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x4e
        _emit 0x10
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x01
        call FUN_00465cf0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
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


// GAP: PORT1111 0x00424d37
__declspec(naked) void gap_00424d37(void)
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

// FUNCTION: PORT1111 0x00424d40
__declspec(naked) void __fastcall FUN_00424d40(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6e3e
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
        mov dword ptr [esi], OFFSET PTR_FUN_004bf834
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x22
        _emit 0x8b
        _emit 0x51
        _emit 0xfc
        _emit 0x85
        _emit 0xd2
        _emit 0x8d
        _emit 0x41
        _emit 0xfc
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x03
        _emit 0xff
        _emit 0x10
        _emit 0xeb
        _emit 0x09
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4e
        _emit 0x10
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x01
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x0c
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x04
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
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
    }
}

// GAP: PORT1111 0x00424dcb
__declspec(naked) void gap_00424dcb(void)
{
    __asm {
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00424dd0
__declspec(naked) unsigned char FUN_00424dd0(void)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x33
        _emit 0xf6
        _emit 0xeb
        _emit 0x08
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        cmp dword ptr [esi*4 + DAT_004d6450], 0xff
        _emit 0x75
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_00424b00
        _emit 0x46
        _emit 0x81
        _emit 0xfe
        _emit 0x00
        _emit 0x01
        _emit 0x00
    }
}


// GAP: PORT1111 0x00424dfb
__declspec(naked) void gap_00424dfb(void)
{
    __asm {
        _emit 0x00
        _emit 0x7c
        _emit 0xe2
        _emit 0x5f
        _emit 0xb0
        _emit 0x01
        _emit 0x5e
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
    }
}

// FUNCTION: PORT1111 0x00424e10
__declspec(naked) int __fastcall FUN_00424e10(void *pthis)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x1c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x4b
        _emit 0x08
        _emit 0x6a
        _emit 0x01
        _emit 0x8d
        _emit 0x2c
        _emit 0x40
        _emit 0x6a
        _emit 0x20
        _emit 0xc1
        _emit 0xe5
        _emit 0x04
        _emit 0x03
        _emit 0xe9
        _emit 0x6a
        _emit 0x40
        _emit 0x6a
        _emit 0x08
        _emit 0x8b
        _emit 0xcd
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x38
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x34
        call FUN_0047e3d0
        mov eax, dword ptr [DAT_004e0b20]
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x11
        _emit 0x8b
        _emit 0x7d
        _emit 0x04
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x18
        _emit 0x8b
        _emit 0xf8
        _emit 0xb9
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0x4d
        _emit 0x04
        call FUN_0046da80
        _emit 0x8b
        _emit 0x4d
        _emit 0x04
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        call FUN_0046c280
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x11
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x28
        _emit 0xeb
        _emit 0x07
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x8c
        _emit 0x30
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x8c
        _emit 0x07
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x14
        _emit 0x40
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0xc1
        _emit 0xe2
        _emit 0x04
        _emit 0x8b
        _emit 0x5c
        _emit 0x02
        _emit 0x04
        _emit 0x8b
        _emit 0x13
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x52
        _emit 0x30
        _emit 0x8b
        _emit 0x13
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x52
        _emit 0x2c
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x03
        _emit 0x8b
        _emit 0xcb
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0x50
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xcb
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x13
        _emit 0xff
        _emit 0x52
        _emit 0x14
        _emit 0xeb
        _emit 0x07
        _emit 0x8b
        _emit 0x03
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0xf7
        _emit 0xd8
        _emit 0x8b
        _emit 0x6d
        _emit 0x04
        _emit 0x8b
        _emit 0x55
        _emit 0x00
        _emit 0x8b
        _emit 0xcd
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0x52
        _emit 0x30
        _emit 0x8b
        _emit 0x55
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xcd
        _emit 0xff
        _emit 0x52
        _emit 0x2c
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x45
        _emit 0x00
        _emit 0x8b
        _emit 0xcd
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0xff
        _emit 0x50
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xcd
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x55
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x14
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x45
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0xf7
        _emit 0xd8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x20
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
        _emit 0xba
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8a
        _emit 0x0f
        _emit 0x3a
        _emit 0x0e
        _emit 0x76
        _emit 0x02
        _emit 0x88
        _emit 0x0e
        _emit 0x8a
        _emit 0x4f
        _emit 0x01
        _emit 0x47
        _emit 0x46
        _emit 0x3a
        _emit 0x0e
        _emit 0x76
        _emit 0x02
        _emit 0x88
        _emit 0x0e
        _emit 0x8a
        _emit 0x4f
        _emit 0x01
        _emit 0x47
        _emit 0x46
        _emit 0x3a
        _emit 0x0e
        _emit 0x76
        _emit 0x02
        _emit 0x88
        _emit 0x0e
        _emit 0x8a
        _emit 0x4f
        _emit 0x01
        _emit 0x47
        _emit 0x46
        _emit 0x3a
        _emit 0x0e
        _emit 0x76
        _emit 0x02
        _emit 0x88
        _emit 0x0e
        _emit 0x47
        _emit 0x46
        _emit 0x4a
        _emit 0x75
        _emit 0xd2
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x03
        _emit 0xfe
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x03
        _emit 0xf0
        _emit 0x49
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x75
        _emit 0xaa
        _emit 0x8b
        _emit 0x13
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x52
        _emit 0x34
        _emit 0x8b
        _emit 0x45
        _emit 0x00
        _emit 0x8b
        _emit 0xcd
        _emit 0xff
        _emit 0x50
        _emit 0x34
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x40
        _emit 0x83
        _emit 0xf8
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x0f
        _emit 0x8c
        _emit 0xd8
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
    }
}


// GAP: PORT1111 0x00424fac
__declspec(naked) void gap_00424fac(void)
{
    __asm {
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x1c
        _emit 0xc2
        _emit 0x14
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
