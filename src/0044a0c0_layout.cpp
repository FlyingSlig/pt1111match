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













// FUNCTION: PORT1111 0x0044a0c0
__declspec(naked) void FUN_0044a0c0(void)
{
    __asm {
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x56
        _emit 0x6a
        _emit 0x01
        call FUN_00468ef0
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x0f
        _emit 0x84
        _emit 0x3b
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x38
        _emit 0x8b
        _emit 0xce
        call FUN_0047cf90
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x2a
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0x88
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x6a
        _emit 0x03
        _emit 0x8b
        _emit 0xce
        call FUN_0047cf90
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x12
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x10
        push OFFSET DAT_004e26d8
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x52
        _emit 0x30
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x80
        _emit 0xf4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xe8
        _emit 0x00
        _emit 0x74
        _emit 0x1e
        _emit 0x48
        _emit 0x74
        _emit 0x0f
        _emit 0x48
        _emit 0x75
        _emit 0x31
        _emit 0x68
        _emit 0x00
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0x00
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x16
        _emit 0x68
        _emit 0x58
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0x20
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x0a
        _emit 0x68
        _emit 0xe0
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0x80
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        push OFFSET DAT_004e26c8
        call dword ptr [SetRect]
        _emit 0x68
        _emit 0xa0
        _emit 0x86
        _emit 0x01
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x17
        call FUN_00480d10
        _emit 0x68
        _emit 0x40
        _emit 0x0d
        _emit 0x03
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x0f
        call FUN_00480d10
        _emit 0x68
        _emit 0xa0
        _emit 0x86
        _emit 0x01
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x11
        call FUN_00480d10
        _emit 0x68
        _emit 0xa0
        _emit 0x86
        _emit 0x01
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x15
        call FUN_00480d10
        _emit 0x68
        _emit 0xa0
        _emit 0x86
        _emit 0x01
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x09
        call FUN_00480d10
        _emit 0x68
        _emit 0x20
        _emit 0xa1
        _emit 0x07
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x13
        call FUN_00480d10
        _emit 0x83
        _emit 0xc4
        _emit 0x48
        _emit 0x68
        _emit 0x20
        _emit 0xa1
        _emit 0x07
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x14
        call FUN_00480d10
        _emit 0x68
        _emit 0x20
        _emit 0xa1
        _emit 0x07
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x18
        call FUN_00480d10
        _emit 0x68
        _emit 0xa0
        _emit 0x86
        _emit 0x01
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x12
        call FUN_00480d10
        _emit 0x68
        _emit 0xa0
        _emit 0x86
        _emit 0x01
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x0b
        call FUN_00480d10
        _emit 0x68
        _emit 0x40
        _emit 0x0d
        _emit 0x03
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x0c
        call FUN_00480d10
        _emit 0x68
        _emit 0x40
        _emit 0x0d
        _emit 0x03
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x0d
        call FUN_00480d10
        _emit 0x83
        _emit 0xc4
        _emit 0x48
        _emit 0x68
        _emit 0xa0
        _emit 0x86
        _emit 0x01
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x16
        call FUN_00480d10
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0044a215
__declspec(naked) void gap_0044a215(void)
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
        jmp FUN_0044a0c0
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

// FUNCTION: PORT1111 0x0044a230
__declspec(naked) void FUN_0044a230(void *pthis,int param_1,int param_2,int param_3,int param_4)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8958
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x56
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        _emit 0x6a
        _emit 0xff
        _emit 0x68
        _emit 0xd3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x17
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x24
        call FUN_00480aa0
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x52
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [esi], OFFSET PTR_FUN_004c4280
        call FUN_004147d0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x46
        _emit 0x4c
        _emit 0x83
        _emit 0xc4
        _emit 0x04
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
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x0044a2a6
__declspec(naked) void gap_0044a2a6(void)
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

// FUNCTION: PORT1111 0x0044a2b0
__declspec(naked) void __fastcall FUN_0044a2b0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b89a3
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
        mov dword ptr [esi], OFFSET PTR_FUN_004c4340
        _emit 0x8d
        _emit 0x8e
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00473f60
        _emit 0x8d
        _emit 0x4e
        _emit 0x50
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        call FUN_00446040
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00480b10
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

// GAP: PORT1111 0x0044a312
__declspec(naked) void gap_0044a312(void)
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
    }
}

// FUNCTION: PORT1111 0x0044a320
__declspec(naked) void FUN_0044a320(void)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8970
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
        _emit 0x81
        _emit 0xec
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2b14]
        mov eax, dword ptr [DAT_004ddb0c]
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x83
        _emit 0xc1
        _emit 0x3c
        _emit 0x89
        _emit 0x45
        _emit 0xec
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
        _emit 0x8d
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x51
        _emit 0x68
        _emit 0x19
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
        _emit 0x0f
        _emit 0x85
        _emit 0xf2
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8d
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        mov esi, dword ptr [RegQueryValueExA]
        _emit 0x8d
        _emit 0x95
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x8d
        _emit 0x85
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        push OFFSET s_SoundLevel_004c4420
        _emit 0xbf
        _emit 0xc8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x89
        _emit 0xbd
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        mov dword ptr [DAT_004dc2a0], 0x64
        _emit 0xeb
        _emit 0x0c
        _emit 0x8b
        _emit 0x95
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        mov dword ptr [DAT_004dc2a0], edx
        _emit 0x8b
        _emit 0x95
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8d
        _emit 0x85
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x50
        _emit 0x8d
        _emit 0x8d
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x51
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        push OFFSET s_MusicLevel_004c4414
        _emit 0x52
        _emit 0x89
        _emit 0xbd
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        mov dword ptr [DAT_004dc29c], 0x5f
        _emit 0xeb
        _emit 0x0b
        _emit 0x8b
        _emit 0x85
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        mov dword ptr [DAT_004dc29c], eax
        _emit 0x8b
        _emit 0x85
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8d
        _emit 0x8d
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x51
        _emit 0x8d
        _emit 0x95
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        push OFFSET s_SpeedLevel_004c4408
        _emit 0x50
        _emit 0x89
        _emit 0xbd
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0xbb
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x08
        mov dword ptr [DAT_004db290], ebx
        _emit 0xeb
        _emit 0x0c
        _emit 0x8b
        _emit 0x8d
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        mov dword ptr [DAT_004db290], ecx
        _emit 0x8b
        _emit 0x8d
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8d
        _emit 0x95
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x8d
        _emit 0x85
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        push OFFSET s_DifLevel_004c43fc
        _emit 0x51
        _emit 0x89
        _emit 0xbd
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x08
        mov dword ptr [DAT_004db294], ebx
        _emit 0xeb
        _emit 0x0c
        _emit 0x8b
        _emit 0x95
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        mov dword ptr [DAT_004db294], edx
        _emit 0x8b
        _emit 0x85
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x50
        call dword ptr [RegCloseKey]
        mov esi, dword ptr [DAT_004dc2a0]
        _emit 0x85
        _emit 0xf6
        _emit 0x7d
        _emit 0x2f
        _emit 0x33
        _emit 0xf6
        _emit 0xeb
        _emit 0x35
    }
}
