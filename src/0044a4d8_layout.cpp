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

extern unsigned char DAT_004dc2a8[];
extern unsigned char DAT_004e26c8[];
extern unsigned char DAT_004e26d8[];
extern unsigned char DAT_004e27f0[];
extern const unsigned char PTR_FUN_004c4280[192];
extern const unsigned char PTR_FUN_004c4340[188];
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004ddb0c[12];
extern const unsigned char PTR_RegQueryValueExA_004bc000[4];
extern const unsigned char s_SoundLevel_004c4420[12];
extern unsigned char DAT_004dc2a0[4];
extern const unsigned char s_MusicLevel_004c4414[12];
extern unsigned char DAT_004dc29c[4];
extern const unsigned char s_SpeedLevel_004c4408[12];
extern unsigned char DAT_004db290[4];
extern const unsigned char s_DifLevel_004c43fc[12];
extern unsigned char DAT_004db294[4];
extern const unsigned char PTR_RegSetValueExA_004bc008[4];
extern unsigned char DAT_004e2800[4];
extern unsigned char DAT_004dc2a4[4];
extern unsigned char DAT_004dc2ac[4];
extern unsigned char DAT_004e2424[4];
extern unsigned char DAT_004d6a80[8];
extern unsigned char DAT_004e27f4[4];
extern unsigned char DAT_004e27f8[4];
extern unsigned char DAT_004e27fc[4];
extern const unsigned char s_Display_004c442c[8];













// GAP: PORT1111 0x0044a4d8
__declspec(naked) void gap_0044a4d8(void)
{
    __asm {
        _emit 0x83
        _emit 0xfe
        _emit 0x64
        _emit 0x7e
        _emit 0x0b
        _emit 0xbe
        _emit 0x64
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [DAT_004dc2a0], esi
        mov edx, dword ptr [DAT_004dc29c]
        _emit 0x85
        _emit 0xd2
        _emit 0x7d
        _emit 0x04
        _emit 0x33
        _emit 0xd2
        _emit 0xeb
        _emit 0x0a
        _emit 0x83
        _emit 0xfa
        _emit 0x64
        _emit 0x7e
        _emit 0x0b
        _emit 0xba
        _emit 0x64
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [DAT_004dc29c], edx
        mov ecx, dword ptr [DAT_004db290]
        _emit 0x85
        _emit 0xc9
        _emit 0x7d
        _emit 0x04
        _emit 0x33
        _emit 0xc9
        _emit 0xeb
        _emit 0x0a
        _emit 0x83
        _emit 0xf9
        _emit 0x02
        _emit 0x7e
        _emit 0x0b
        _emit 0xb9
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [DAT_004db290], ecx
        mov eax, dword ptr [DAT_004db294]
        _emit 0x85
        _emit 0xc0
        _emit 0x7d
        _emit 0x09
        _emit 0x33
        _emit 0xc0
        mov dword ptr [DAT_004db294], eax
        _emit 0xeb
        _emit 0x28
        _emit 0x83
        _emit 0xf8
        _emit 0x02
        _emit 0x7e
        _emit 0x23
        _emit 0xb8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [DAT_004db294], eax
        _emit 0xeb
        _emit 0x17
        _emit 0x8b
        _emit 0x35
        _emit 0xa0
        _emit 0xc2
        _emit 0x4d
    }
}

// GAP: PORT1111 0x0044a54c
__declspec(naked) void gap_0044a54c(void)
{
    __asm {
        _emit 0x00
        _emit 0x8b
        _emit 0x15
        _emit 0x9c
        _emit 0xc2
        _emit 0x4d
        _emit 0x00
        _emit 0x8b
        _emit 0x0d
        _emit 0x90
        _emit 0xb2
        _emit 0x4d
        add byte ptr [ecx + DAT_004db294], ah
        mov dword ptr [DAT_004dc2a4], edx
        mov dword ptr [DAT_004dc2a8], esi
        mov dword ptr [DAT_004dc2ac], ecx
        mov dword ptr [DAT_004e27f0], eax
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
        _emit 0x8b
        _emit 0x4d
        _emit 0xec
        call pt_a_00497aa6
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0044a590
__declspec(naked) void FUN_0044a590(void)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8980
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
        _emit 0x08
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x83
        _emit 0xc1
        _emit 0x3c
        _emit 0x89
        _emit 0x65
        _emit 0xf0
        _emit 0xc7
        _emit 0x45
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465e00
        _emit 0x8d
        _emit 0x4d
        _emit 0xec
        _emit 0x51
        _emit 0x68
        _emit 0x06
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x68
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x80
        call dword ptr [RegOpenKeyExA]
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x29
        _emit 0x8b
        _emit 0x55
        _emit 0xec
        mov esi, dword ptr [RegSetValueExA]
        _emit 0x6a
        _emit 0x04
        push OFFSET DAT_004dc2a0
        _emit 0x6a
        _emit 0x04
        _emit 0x50
        push OFFSET s_SoundLevel_004c4420
        _emit 0x52
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1b
        _emit 0x8b
        _emit 0x45
        _emit 0xec
        _emit 0x50
        call dword ptr [RegCloseKey]
        _emit 0x8b
        _emit 0x4d
        _emit 0xf4
        _emit 0x5f
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc3
        _emit 0x8b
        _emit 0x4d
        _emit 0xec
        _emit 0x6a
        _emit 0x04
        push OFFSET DAT_004dc29c
        _emit 0x6a
        _emit 0x04
        _emit 0x6a
        _emit 0x00
        push OFFSET s_MusicLevel_004c4414
        _emit 0x51
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x55
        _emit 0xec
        _emit 0x52
        _emit 0xeb
        _emit 0xc9
        _emit 0x8b
        _emit 0x45
        _emit 0xec
        _emit 0x6a
        _emit 0x04
        push OFFSET DAT_004db290
        _emit 0x6a
        _emit 0x04
        _emit 0x6a
        _emit 0x00
        push OFFSET s_SpeedLevel_004c4408
        _emit 0x50
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x4d
        _emit 0xec
        _emit 0x51
        _emit 0xeb
        _emit 0xa9
        _emit 0x8b
        _emit 0x55
        _emit 0xec
        _emit 0x6a
        _emit 0x04
        push OFFSET DAT_004db294
        _emit 0x6a
        _emit 0x04
        _emit 0x6a
        _emit 0x00
        push OFFSET s_DifLevel_004c43fc
        _emit 0x52
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xe0
        _emit 0xeb
        _emit 0x89
    }
}

// FUNCTION: PORT1111 0x0044a677
__declspec(naked) void FUN_0044a677(void)
{
    __asm {
        _emit 0xb8
        _emit 0x0a
        _emit 0xa6
        _emit 0x44
        _emit 0x00
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0044a67d
__declspec(naked) void gap_0044a67d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0044a680
__declspec(naked) void FUN_0044a680(void)
{
    __asm {
        call FUN_0044a320
        mov ecx, dword ptr [DAT_004e2800]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x33
        _emit 0xc0
        mov al, byte ptr [DAT_004dc29c]
        _emit 0x50
        call FUN_0044c020
        mov ecx, dword ptr [DAT_004db290]
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x51
        _emit 0x8b
        _emit 0x8a
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00475230
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0044a6b5
__declspec(naked) void gap_0044a6b5(void)
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

// FUNCTION: PORT1111 0x0044a6c0
__declspec(naked) void __fastcall FUN_0044a6c0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x18
        mov dword ptr [DAT_004dc29c], eax
        _emit 0x8b
        _emit 0x51
        _emit 0x48
        mov dword ptr [DAT_004dc2a0], edx
        _emit 0x8b
        _emit 0x41
        _emit 0x78
        mov dword ptr [DAT_004db290], eax
        _emit 0x8b
        _emit 0x81
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x91
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [DAT_004db294], edx
        jmp FUN_0044a590
    }
}

// GAP: PORT1111 0x0044a6f4
__declspec(naked) void gap_0044a6f4(void)
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

// FUNCTION: PORT1111 0x0044a700
__declspec(naked) void FUN_0044a700(void)
{
    __asm {
        mov ecx, dword ptr [DAT_004e2800]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x33
        _emit 0xc0
        mov al, byte ptr [DAT_004dc2a4]
        _emit 0x50
        call FUN_0044c020
        mov ecx, dword ptr [DAT_004dc2ac]
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x51
        _emit 0x8b
        _emit 0x8a
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00475230
        mov eax, dword ptr [DAT_004e2424]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        mov eax, dword ptr [DAT_004dc2ac]
        mov dword ptr [DAT_004d6a80], eax
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0044a743
__declspec(naked) void gap_0044a743(void)
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

// FUNCTION: PORT1111 0x0044a750
__declspec(naked) void __fastcall FUN_0044a750(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x48
        _emit 0x0c
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        cmp eax, dword ptr [DAT_004e27f4]
        _emit 0x57
        _emit 0x75
        _emit 0x21
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x82
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0x8b
        _emit 0x3e
        _emit 0xff
        _emit 0x52
        _emit 0x70
        _emit 0x8b
        _emit 0xce
        _emit 0x50
        _emit 0xff
        _emit 0x57
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        cmp eax, dword ptr [DAT_004e27f8]
        _emit 0x75
        _emit 0x05
        _emit 0x83
        _emit 0xc6
        _emit 0x30
        _emit 0xeb
        _emit 0x1d
        cmp eax, dword ptr [DAT_004e27fc]
        _emit 0x75
        _emit 0x05
        _emit 0x83
        _emit 0xc6
        _emit 0x60
        _emit 0xeb
        _emit 0x10
        _emit 0x8b
        _emit 0x86
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x21
        _emit 0x81
        _emit 0xc6
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x49
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0x8b
        _emit 0x3e
        _emit 0xff
        _emit 0x52
        _emit 0x70
        _emit 0x8b
        _emit 0xce
        _emit 0x50
        _emit 0xff
        _emit 0x57
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0044a7d1
__declspec(naked) void gap_0044a7d1(void)
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
