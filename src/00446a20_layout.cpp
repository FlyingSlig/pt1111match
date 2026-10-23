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

extern char * sub;
extern int DAT_004e25f8;
extern const unsigned char PTR_FUN_004c3b98[];
extern const unsigned char s_GenerateWorldObjSharedData___004c3b9c[];
extern const unsigned char s_SoureRLA_d_gbf_004c3bbc[];
extern const unsigned char s_progressbar_png_004c3bcc[];
extern unsigned char DAT_004dd964[];
extern unsigned char DAT_004e2687[];
extern unsigned char DAT_004e27dc[];
extern unsigned char DAT_004e27e0[];
extern unsigned char DAT_004e2800[];
extern unsigned char DAT_004e2afc[];
extern unsigned char DAT_004e2b14[];
extern unsigned char DAT_004e2b20[];
extern const unsigned char PTR_FUN_004c3be0[168];
extern const unsigned char s_Overlay_Callback_Object_004c3cb0[24];
extern const unsigned char PTR_LAB_004c3ca0[16];
extern const unsigned char PTR_LAB_004c3c88[24];
extern unsigned char DAT_004e27e4[4];














// FUNCTION: PORT1111 0x00446a20
__declspec(naked) void __fastcall FUN_00446a20(int param_1)
{
    __asm {
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x08
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        jmp FUN_004655b0
        _emit 0x33
        _emit 0xc9
        jmp FUN_004655b0
    }
}

// GAP: PORT1111 0x00446a33
__declspec(naked) void gap_00446a33(void)
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

// FUNCTION: PORT1111 0x00446a40
__declspec(naked) int * __fastcall FUN_00446a40(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b844e
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
        _emit 0x56
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x06
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xf1
        _emit 0x6a
        _emit 0x00
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x14
        call FUN_00480220
        _emit 0x8d
        _emit 0x4e
        _emit 0x40
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [esi], OFFSET PTR_FUN_004c3be0
        call FUN_00480e60
        _emit 0x6a
        _emit 0x14
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x01
        _emit 0xc7
        _emit 0x46
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x02
        _emit 0x74
        _emit 0x29
        push OFFSET DAT_004e27e4
        _emit 0x56
        _emit 0x8b
        _emit 0xc8
        call FUN_00446970
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x18
        _emit 0x83
        _emit 0xc0
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x3c
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
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
        _emit 0xc3
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x3c
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
        _emit 0x14
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00446ae5
__declspec(naked) void gap_00446ae5(void)
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
