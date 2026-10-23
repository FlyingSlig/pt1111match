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

extern const unsigned char s_soure1234_004bff80[];
extern const unsigned char s_Data_Setup_Config_pcf_004bff8c[];
extern const unsigned char PTR_FUN_004c46f4[];
extern const unsigned char PTR_FUN_004c46fc[];
extern const unsigned char DAT_004c4798[];
extern const unsigned char s__sai__s_d_aia_004c4a74[];
extern unsigned char DAT_004dc434[];
extern unsigned char PTR_s_verdade_004dc43c[];
extern unsigned char DAT_004e2b14[12];
extern const unsigned char s_BtIcons_bmp_004c46a8[12];
extern void * DAT_004e240c;
extern const unsigned char s_Active_004c4790[8];
extern const unsigned char s__s_d_aia_004c4784[12];
extern const unsigned char s_DATA_ai_004c4a50[8];
extern const unsigned char DAT_004c4a4c[4];
extern const unsigned char DAT_004c4a84[24];
extern unsigned char DAT_004e27cc[4];
extern unsigned char PTR_DAT_004dc438[4];
extern const unsigned char PTR_FUN_004c4a9c[8];
extern int DAT_004c4aa4;













// GAP: PORT1111 0x0045c132
__declspec(naked) void gap_0045c132(void)
{
    __asm {
        _emit 0x8b
        _emit 0xff
        _emit 0x0d
        _emit 0xc1
        _emit 0x45
        _emit 0x00
        _emit 0x11
        _emit 0xc1
        _emit 0x45
        _emit 0x00
        _emit 0x1b
        _emit 0xc1
        _emit 0x45
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x02
        _emit 0x01
        _emit 0x01
        _emit 0x01
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

// FUNCTION: PORT1111 0x0045c150
__declspec(naked) int __fastcall FUN_0045c150(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        call FUN_00465e00
        _emit 0x50
        mov ecx, OFFSET DAT_004e27cc
        call FUN_0043dcb0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x04
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x04
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

// GAP: PORT1111 0x0045c17d
__declspec(naked) void gap_0045c17d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x56
        _emit 0x6a
        _emit 0x0c
        _emit 0x8b
        _emit 0xf1
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1b
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        mov dword ptr [eax], OFFSET PTR_FUN_004c46f4
        _emit 0xc7
        _emit 0x40
        _emit 0x04
        _emit 0xe8
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x48
        _emit 0x04
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
    }
}

// FUNCTION: PORT1111 0x0045c1c0
__declspec(naked) void * __fastcall FUN_0045c1c0(void *pthis,void *param_1,int param_2)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x04
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0xc1
        _emit 0xe0
        _emit 0x04
        mov eax, dword ptr [eax + PTR_s_verdade_004dc43c]
        _emit 0xeb
        _emit 0x0c
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0xc1
        _emit 0xe1
        _emit 0x04
        mov eax, dword ptr [ecx + PTR_DAT_004dc438]
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x6a
        _emit 0xff
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00466af0
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x0045c200
__declspec(naked) int __cdecl FUN_0045c200(void *param_1)
{
    __asm {
        mov ecx, dword ptr [PTR_DAT_004dc438]
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xc9
        _emit 0x56
        _emit 0x74
        _emit 0x19
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        mov ecx, OFFSET PTR_DAT_004dc438
        _emit 0x39
        _emit 0x51
        _emit 0xfc
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x71
        _emit 0x10
        _emit 0x83
        _emit 0xc1
        _emit 0x10
        _emit 0x40
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0xf0
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0045c22b
__declspec(naked) void gap_0045c22b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0045c230
__declspec(naked) void * __cdecl FUN_0045c230(int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0xc1
        _emit 0xe0
        _emit 0x04
        cmp ecx, dword ptr [eax + DAT_004dc434]
        _emit 0x74
        _emit 0x03
        _emit 0x33
        _emit 0xc0
        _emit 0xc3
        mov eax, dword ptr [eax + PTR_s_verdade_004dc43c]
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0045c24d
__declspec(naked) void gap_0045c24d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0045c250
__declspec(naked) int FUN_0045c250(void *param_1,int param_2,void *param_3)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b9528
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
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x33
        _emit 0xff
        call FUN_00465cf0
        cmp dword ptr [PTR_DAT_004dc438], edi
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x74
        _emit 0x45
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x30
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x2c
        mov esi, OFFSET PTR_DAT_004dc438
        _emit 0x85
        _emit 0xed
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x50
        _emit 0xeb
        _emit 0x03
        _emit 0x8b
        _emit 0x0e
        _emit 0x51
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call FUN_00466a40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        call FUN_00466a90
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x05
        _emit 0x39
        _emit 0x5e
        _emit 0xfc
        _emit 0x74
        _emit 0x33
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x83
        _emit 0xc6
        _emit 0x10
        _emit 0x47
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0xc8
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
        call FUN_00465e40
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
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
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x78
        _emit 0x04
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045c326
__declspec(naked) void gap_0045c326(void)
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

// FUNCTION: PORT1111 0x0045c330
__declspec(naked) void __fastcall FUN_0045c330(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x56
        mov dword ptr [eax], OFFSET PTR_FUN_004c4a9c
        mov ecx, dword ptr [PTR_DAT_004dc438]
        _emit 0x33
        _emit 0xf6
        _emit 0x85
        _emit 0xc9
        _emit 0x57
        _emit 0x74
        _emit 0x1a
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        mov edx, OFFSET PTR_DAT_004dc438
        _emit 0x90
        _emit 0x39
        _emit 0x4a
        _emit 0xfc
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x7a
        _emit 0x10
        _emit 0x83
        _emit 0xc2
        _emit 0x10
        _emit 0x46
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0xf0
        _emit 0x83
        _emit 0xc9
        _emit 0xff
        _emit 0x5f
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x89
        _emit 0x70
        _emit 0x04
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045c373
__declspec(naked) void gap_0045c373(void)
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
