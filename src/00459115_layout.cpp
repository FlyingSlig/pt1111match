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

extern const unsigned char DAT_004bd2c8[];
extern const unsigned char DAT_004c3704[];
extern const unsigned char DAT_004c3708[];
extern const unsigned char DAT_004c3710[];
extern const unsigned char DAT_004c3714[];
extern const unsigned char DAT_004c3718[];
extern const unsigned char DAT_004c371c[];
extern const unsigned char DAT_004c3720[];
extern const unsigned char DAT_004c3724[];
extern const unsigned char DAT_004c3728[];
extern const unsigned char s___RULES__004c372c[];
extern const unsigned char PTR_FUN_004c46ec[];
extern const unsigned char PTR_FUN_004c46f4[];
extern const unsigned char DAT_004c4774[];
extern const unsigned char DAT_004c4778[];
extern const unsigned char s__RULES_004c477c[];
extern const unsigned char s_Active_004c4790[];
extern unsigned char DAT_004e2b14[12];
extern const unsigned char s_Data_Setup_Config_pcf_004bff8c[24];
extern const unsigned char DAT_004c4798[4];
extern const unsigned char s__s_d_aia_004c4784[12];
extern unsigned char DAT_004e2430[8];
extern const unsigned char s_soure1234_004bff80[12];
extern const unsigned char s__s_d_pia_004c479c[12];
extern const unsigned char PTR_FUN_004c46fc[44];
extern unsigned char DAT_004e2a80[4];
extern const unsigned char DAT_004bc4c8[4];
extern const unsigned char s____s_004c47c4[8];
extern const unsigned char s__RULES___d__004c47b4[16];
extern const unsigned char DAT_004bc850[4];
extern const unsigned char s___RULES__004c47a8[12];
extern unsigned char DAT_004e27cc[4];
extern const unsigned char PTR_LAB_004c47cc[8];













// GAP: PORT1111 0x00459115
__declspec(naked) void gap_00459115(void)
{
    __asm {
        _emit 0xc4
        _emit 0x20
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00459120
__declspec(naked) int FUN_00459120(void *param_1,int param_2)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b9182
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
        _emit 0x50
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        call FUN_004884d0
        mov dword ptr [esp + 0x24], OFFSET PTR_FUN_004c46fc
        _emit 0x33
        _emit 0xdb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x9c
        _emit 0x24
        _emit 0x68
        _emit 0x03
        _emit 0x00
        _emit 0x00
        call FUN_00465cf0
        push OFFSET DAT_004e2a80
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xc6
        _emit 0x84
        _emit 0x24
        _emit 0x6c
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x01
        call ctor_impl_466b20
        push OFFSET DAT_004bc4c8
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xc6
        _emit 0x84
        _emit 0x24
        _emit 0x6c
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x02
        call thunk_FUN_00466040
        _emit 0x8b
        _emit 0x84
        _emit 0x24
        _emit 0x70
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call thunk_FUN_00466040
        _emit 0x6a
        _emit 0x01
        _emit 0x53
        _emit 0x68
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        call FUN_00465e00
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x34
        call FUN_00488560
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x52
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xbc
        _emit 0x24
        _emit 0x74
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x3b
        _emit 0xc1
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x34
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x74
        _emit 0x36
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x70
        _emit 0x10
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x50
        call FUN_004147d0
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0xdc
        _emit 0x40
        _emit 0x89
        _emit 0x74
        _emit 0xdc
        _emit 0x44
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x43
        call pt_a_00413730
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x3b
        _emit 0xc1
        _emit 0x75
        _emit 0xd4
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x34
        push OFFSET gap_00458d35 + 27
        _emit 0x6a
        _emit 0x08
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x48
        _emit 0x53
        _emit 0x51
        call qsort
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0x33
        _emit 0xed
        _emit 0x85
        _emit 0xdb
        _emit 0x0f
        _emit 0x8e
        _emit 0x8f
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x8b
        _emit 0x7c
        _emit 0xec
        _emit 0x40
        _emit 0x8b
        _emit 0x74
        _emit 0xec
        _emit 0x44
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        call FUN_00465cf0
        _emit 0x8b
        _emit 0x57
        _emit 0x08
        _emit 0x52
        push OFFSET s____s_004c47c4
        _emit 0x50
        _emit 0xc6
        _emit 0x84
        _emit 0x24
        _emit 0x74
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x03
        call FUN_00466970
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x24
        _emit 0x50
        call ctor_impl_466b20
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        call FUN_00488950
        _emit 0x85
        _emit 0xc0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x0f
        _emit 0x94
        _emit 0xc3
        _emit 0xc6
        _emit 0x84
        _emit 0x24
        _emit 0x68
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x02
        call FUN_00465e40
        _emit 0x84
        _emit 0xdb
        _emit 0x0f
        _emit 0x85
        _emit 0x86
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x38
        call FUN_00465cf0
        _emit 0x8b
        _emit 0x4e
        _emit 0x14
        _emit 0x51
        push OFFSET s__RULES___d__004c47b4
        _emit 0x50
        _emit 0xc6
        _emit 0x84
        _emit 0x24
        _emit 0x74
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x04
        call FUN_00466970
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x24
        _emit 0x50
        call ctor_impl_466b20
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        call FUN_00488950
        _emit 0x85
        _emit 0xc0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x38
        _emit 0x0f
        _emit 0x94
        _emit 0xc3
        _emit 0xc6
        _emit 0x84
        _emit 0x24
        _emit 0x68
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x02
        call FUN_00465e40
        _emit 0x84
        _emit 0xdb
        _emit 0x0f
        _emit 0x85
        _emit 0x30
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00457c20
        _emit 0x33
        _emit 0xff
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x76
        _emit 0x60
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_00457ca0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x3c
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        call FUN_004575b0
        _emit 0x51
        _emit 0x8b
        _emit 0xd4
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x20
        push OFFSET DAT_004bc850
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        _emit 0xc6
        _emit 0x84
        _emit 0x24
        _emit 0x74
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x05
        call FUN_00466fb0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        call FUN_00488950
        _emit 0x85
        _emit 0xc0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x3c
        _emit 0x0f
        _emit 0x94
        _emit 0xc3
        _emit 0xc6
        _emit 0x84
        _emit 0x24
        _emit 0x68
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x02
        call FUN_00465e40
        _emit 0x84
        _emit 0xdb
        _emit 0x0f
        _emit 0x85
        _emit 0xc8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x47
        _emit 0x3b
        _emit 0xf8
        _emit 0x72
        _emit 0xa0
        _emit 0x51
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x20
        _emit 0x6a
        _emit 0xff
        push OFFSET s___RULES__004c47a8
        call FUN_00466af0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        call FUN_00488950
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x20
        _emit 0x6a
        _emit 0xff
        push OFFSET DAT_004bc850
        call FUN_00466af0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        call FUN_00488950
        _emit 0x51
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x20
        _emit 0x6a
        _emit 0xff
        push OFFSET DAT_004bc850
        call FUN_00466af0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        call FUN_00488950
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x34
        _emit 0x45
        _emit 0x3b
        _emit 0xe8
        _emit 0x0f
        _emit 0x8c
        _emit 0x72
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xc6
        _emit 0x84
        _emit 0x24
        _emit 0x68
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x01
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xc6
        _emit 0x84
        _emit 0x24
        _emit 0x68
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0xc7
        _emit 0x84
        _emit 0x24
        _emit 0x68
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00488880
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0x60
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x81
        _emit 0xc4
        _emit 0x5c
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xc6
        _emit 0x84
        _emit 0x24
        _emit 0x68
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x01
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xc6
        _emit 0x84
        _emit 0x24
        _emit 0x68
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0xc7
        _emit 0x84
        _emit 0x24
        _emit 0x68
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00488880
        _emit 0x33
        _emit 0xc0
        _emit 0xeb
        _emit 0xab
    }
}

// GAP: PORT1111 0x0045944e
__declspec(naked) void gap_0045944e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00459450
__declspec(naked) void * FUN_00459450(void *param_1,int param_2)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x51
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, OFFSET DAT_004e27cc
        _emit 0x74
        _emit 0x0a
        call FUN_0043d870
        _emit 0x8b
        _emit 0x40
        _emit 0x0c
        _emit 0xeb
        _emit 0x08
        call FUN_0043d870
        _emit 0x8b
        _emit 0x40
        _emit 0x08
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

// GAP: PORT1111 0x00459492
__declspec(naked) void gap_00459492(void)
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
        mov dword ptr [eax], OFFSET PTR_FUN_004c46ec
        _emit 0xc7
        _emit 0x40
        _emit 0x04
        _emit 0x8d
        _emit 0x00
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

// FUNCTION: PORT1111 0x004594e0
__declspec(naked) int __fastcall FUN_004594e0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x57
        call FUN_00465e00
        _emit 0x50
        mov ecx, OFFSET DAT_004e27cc
        call FUN_0043dcb0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4e
        _emit 0x8b
        _emit 0x53
        _emit 0x08
        _emit 0x8b
        _emit 0xba
        _emit 0x90
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xf6
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc9
        _emit 0xeb
        _emit 0x0b
        _emit 0x8b
        _emit 0x8a
        _emit 0x94
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xcf
        _emit 0xc1
        _emit 0xf9
        _emit 0x02
        _emit 0x3b
        _emit 0xf1
        _emit 0x77
        _emit 0x25
        _emit 0x8b
        _emit 0x8a
        _emit 0x90
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x28
        _emit 0x8d
        _emit 0x0c
        _emit 0xb1
        _emit 0x8b
        _emit 0x09
        _emit 0x3b
        _emit 0xcd
        _emit 0x74
        _emit 0x03
        _emit 0x46
        _emit 0xeb
        _emit 0xd5
        _emit 0x8b
        _emit 0x10
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x89
        _emit 0x53
        _emit 0x04
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00459555
__declspec(naked) void gap_00459555(void)
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
