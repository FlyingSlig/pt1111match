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

extern const unsigned char DAT_004bc4c8[];
extern const unsigned char s_Sound_004bc678[];
extern const unsigned char s_Music_004bc680[];
extern const unsigned char s_Display_004c442c[];
extern const unsigned char DAT_004c465c[];
extern const unsigned char s_RDATA_004c5f4c[];
extern const unsigned char DAT_004c5f54[];
extern const unsigned char DAT_004c5f5c[];
extern const unsigned char DAT_004c5f60[];
extern const unsigned char s_FullScreen_004c5f64[];
extern const unsigned char s_InstSource_004c5f70[];
extern const unsigned char s_InstPath_004c5f7c[];
extern const unsigned char s_LangID_004c5f88[];
extern const unsigned char s_AppName_004c5f90[];
extern unsigned char DAT_004e2c24[];
extern unsigned char DAT_004ddb0c[12];
extern const unsigned char s_CD_INI_004c5f14[8];
extern const unsigned char PTR_GetPrivateProfileStringA_004bc1c8[4];
extern const unsigned char DAT_004bd2c8[1];
extern const unsigned char s_AppGUID_004c5f0c[8];
extern const unsigned char DAT_004c5f04[8];
extern const unsigned char PTR_MessageBoxA_004bc2a0[4];
extern const unsigned char s_Introduza_o_CD_e_tente_de_novo__004c5ee4[32];
extern const unsigned char DAT_004c5f30[4];
extern const unsigned char DAT_004c5f2c[4];
extern const unsigned char DAT_004c5f28[4];
extern const unsigned char DAT_004c5f24[4];
extern const unsigned char DAT_004c5f20[4];
extern const unsigned char DAT_004c5f1c[4];
extern const unsigned char s_I1024__004c5f44[8];
extern const unsigned char s_I800__004c5f3c[8];
extern const unsigned char s_I640__004c5f34[8];
extern unsigned char DAT_004e2c28[4];
extern unsigned char DAT_004e2c2c[4];
extern unsigned char DAT_004e2c44[4];
extern unsigned char DAT_004e2b00[4];
extern unsigned char DAT_004e2c48[4];
extern unsigned char DAT_004e2c4c[4];
extern unsigned char DAT_004e2c50[4];
extern const unsigned char s_Render_not_valid_004c5f98[20];
extern unsigned char DAT_004dd964[4];
extern unsigned char DAT_004e2c98[4];












// FUNCTION: PORT1111 0x00467dc0
__declspec(naked) void __fastcall FUN_00467dc0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x33
        _emit 0xff
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4e
        _emit 0x24
        _emit 0x89
        _emit 0x7e
        _emit 0x1c
        _emit 0x89
        _emit 0x7e
        _emit 0x20
        call FUN_00466a40
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4e
        _emit 0x38
        call FUN_00466a40
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4e
        _emit 0x08
        call FUN_00466a40
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4e
        _emit 0x0c
        call FUN_00466a40
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4e
        _emit 0x3c
        _emit 0xc7
        _emit 0x46
        _emit 0x28
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466a40
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4e
        _emit 0x40
        call FUN_00466a40
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4e
        _emit 0x50
        _emit 0x89
        _emit 0x7e
        _emit 0x44
        _emit 0x89
        _emit 0x46
        _emit 0x48
        _emit 0x89
        _emit 0x46
        _emit 0x4c
        _emit 0x89
        _emit 0x86
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466a40
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4e
        _emit 0x54
        call FUN_00466a40
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4e
        _emit 0x10
        _emit 0x89
        _emit 0x7e
        _emit 0x58
        _emit 0x89
        _emit 0xbe
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x7e
        _emit 0x5c
        call FUN_00466a40
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        call FUN_00466a40
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4e
        _emit 0x74
        _emit 0x89
        _emit 0x7e
        _emit 0x68
        _emit 0x89
        _emit 0x7e
        _emit 0x6c
        _emit 0x89
        _emit 0x7e
        _emit 0x70
        _emit 0x89
        _emit 0x7e
        _emit 0x60
        _emit 0x89
        _emit 0x7e
        _emit 0x64
        call FUN_00466a40
        _emit 0x89
        _emit 0xbe
        _emit 0xe8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0x89
        _emit 0xbe
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00467ea1
__declspec(naked) void gap_00467ea1(void)
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

// FUNCTION: PORT1111 0x00467eb0
__declspec(naked) int __fastcall FUN_00467eb0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b982b
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
        _emit 0xd0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004ddb0c]
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x89
        _emit 0x84
        _emit 0x24
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x84
        _emit 0x24
        _emit 0xec
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        _emit 0x8b
        _emit 0xf1
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call FUN_00466af0
        push OFFSET s_CD_INI_004c5f14
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xc7
        _emit 0x84
        _emit 0x24
        _emit 0xe8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call thunk_FUN_00466040
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call FUN_00465e00
        mov edi, dword ptr [GetPrivateProfileStringA]
        _emit 0x50
        _emit 0x68
        _emit 0xc8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        push OFFSET DAT_004bd2c8
        push OFFSET s_AppGUID_004c5f0c
        push OFFSET DAT_004c5f04
        _emit 0xff
        _emit 0xd7
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x4a
        _emit 0x8d
        _emit 0x5e
        _emit 0x14
        mov esi, dword ptr [MessageBoxA]
        _emit 0x6a
        _emit 0x35
        _emit 0x8b
        _emit 0xcb
        call FUN_00465e00
        _emit 0x50
        push OFFSET s_Introduza_o_CD_e_tente_de_novo__004c5ee4
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0xd6
        _emit 0x83
        _emit 0xf8
        _emit 0x02
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x64
        call FUN_00465e00
        _emit 0x50
        _emit 0x68
        _emit 0xc8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x52
        push OFFSET DAT_004bd2c8
        push OFFSET s_AppGUID_004c5f0c
        push OFFSET DAT_004c5f04
        _emit 0xff
        _emit 0xd7
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xbf
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xc7
        _emit 0x84
        _emit 0x24
        _emit 0xe4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0xd0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        call pt_a_00497aa6
        _emit 0x81
        _emit 0xc4
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xc7
        _emit 0x84
        _emit 0x24
        _emit 0xe4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x33
        _emit 0xc0
        _emit 0xeb
        _emit 0xc6
    }
}

// GAP: PORT1111 0x00467fd4
__declspec(naked) void gap_00467fd4(void)
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
