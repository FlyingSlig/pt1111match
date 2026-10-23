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












// GAP: PORT1111 0x00468061
__declspec(naked) void gap_00468061(void)
{
    __asm {
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0xef
        _emit 0x7f
        _emit 0x46
        _emit 0x00
        _emit 0x02
        _emit 0x80
        _emit 0x46
        _emit 0x00
        _emit 0x15
        _emit 0x80
        _emit 0x46
        _emit 0x00
        _emit 0x28
        _emit 0x80
        _emit 0x46
        _emit 0x00
        _emit 0x3b
        _emit 0x80
        _emit 0x46
        _emit 0x00
        _emit 0x4e
        _emit 0x80
        _emit 0x46
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00468080
__declspec(naked) int * __fastcall FUN_00468080(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x56
        _emit 0x83
        _emit 0xc1
        _emit 0x0c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466fb0
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x004680a3
__declspec(naked) void gap_004680a3(void)
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

// FUNCTION: PORT1111 0x004680b0
__declspec(naked) int * __fastcall FUN_004680b0(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x56
        _emit 0x83
        _emit 0xc1
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466fb0
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x004680d3
__declspec(naked) void gap_004680d3(void)
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

// FUNCTION: PORT1111 0x004680e0
__declspec(naked) int * __fastcall FUN_004680e0(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x56
        _emit 0x83
        _emit 0xc1
        _emit 0x74
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466fb0
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00468103
__declspec(naked) void gap_00468103(void)
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

// FUNCTION: PORT1111 0x00468110
__declspec(naked) int * __fastcall FUN_00468110(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x56
        _emit 0x83
        _emit 0xc1
        _emit 0x54
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466fb0
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00468133
__declspec(naked) void gap_00468133(void)
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

// FUNCTION: PORT1111 0x00468140
__declspec(naked) bool __fastcall FUN_00468140(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0xc8
        _emit 0x89
        _emit 0x86
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00476f40
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0xf7
        _emit 0xd8
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0046815d
__declspec(naked) void gap_0046815d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00468160
__declspec(naked) int __fastcall FUN_00468160(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xf1
        push OFFSET DAT_004bd2c8
        _emit 0x8b
        _emit 0xcf
        call FUN_00466ab0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x20
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_00465e00
        _emit 0x8b
        _emit 0x8e
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_004771d0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x05
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
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

// GAP: PORT1111 0x004681a2
__declspec(naked) void gap_004681a2(void)
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

// FUNCTION: PORT1111 0x004681b0
__declspec(naked) void __fastcall FUN_004681b0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x8e
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x16
        call FUN_00476e50
        _emit 0x8b
        _emit 0x8e
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x5c
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x89
        _emit 0xbe
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x7e
        _emit 0x5c
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004681ef
__declspec(naked) void gap_004681ef(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004681f0
__declspec(naked) void FUN_004681f0(LPCSTR param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        call FUN_0046ab50
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00468202
__declspec(naked) void gap_00468202(void)
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

// FUNCTION: PORT1111 0x00468210
__declspec(naked) int * __fastcall FUN_00468210(void *pthis,void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b9861
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
        _emit 0x56
        _emit 0x33
        _emit 0xdb
        _emit 0x57
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x81
        _emit 0xf4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xc3
        _emit 0xbe
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x74
        _emit 0x62
        _emit 0x48
        _emit 0x74
        _emit 0x3a
        _emit 0x48
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call ctor_impl_466b20
        _emit 0xeb
        _emit 0x6d
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x2c
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x14
        _emit 0x52
        call ctor_impl_466b20
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        push OFFSET s_I1024__004c5f44
        _emit 0x57
        call FUN_00467020
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xeb
        _emit 0x48
        _emit 0x51
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x14
        _emit 0x50
        call ctor_impl_466b20
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        push OFFSET s_I800__004c5f3c
        _emit 0x57
        call FUN_00467020
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xeb
        _emit 0x23
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x2c
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x14
        _emit 0x52
        call ctor_impl_466b20
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        push OFFSET s_I640__004c5f34
        _emit 0x57
        call FUN_00467020
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x88
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xc7
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
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}
