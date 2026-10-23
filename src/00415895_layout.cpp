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

extern const unsigned char s_map_set_T__too_long_004bd55c[];
extern unsigned char DAT_004db290[];
extern unsigned char DAT_004e0ae0[];
extern unsigned char DAT_004e0ae4[];
extern unsigned char DAT_004e0ae8[];
extern unsigned char DAT_004e2700[];
extern unsigned char DAT_004e2424[4];
extern int DAT_004e0af4;
extern unsigned char DAT_004e0af8[4];
extern unsigned char DAT_004e0afc[4];
extern unsigned char DAT_004e0b08[4];
extern unsigned char DAT_004e0b04[4];
extern unsigned char DAT_004e21c0[4];
extern unsigned char DAT_004e21bc[4];
extern unsigned char DAT_004e21c4[4];
extern void * DAT_004e240c;
extern unsigned char DAT_004e21b8[4];
extern unsigned char DAT_004e2c58[4];
extern unsigned char DAT_004e2444[4];
extern unsigned char DAT_004e26bc[4];
extern void * DAT_004e2410;
extern unsigned char DAT_004e26fc[4];
extern int DAT_004e2404;
extern unsigned char DAT_004e2afc[4];
extern int DAT_004e0adc;
extern unsigned char DAT_004e0ad8[4];
extern unsigned char DAT_004e0870[8];
extern unsigned char DAT_004e2418[4];
extern unsigned char DAT_004e2414[4];
extern const unsigned char DAT_004bef50[36];
extern unsigned char DAT_004e26f0[4];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];












// GAP: PORT1111 0x00415895
__declspec(naked) void gap_00415895(void)
{
    __asm {
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0xe1
        _emit 0x57
        _emit 0x41
        _emit 0x00
        _emit 0x28
        _emit 0x58
        _emit 0x41
        _emit 0x00
        _emit 0x0c
        _emit 0x58
        _emit 0x41
        _emit 0x00
        _emit 0x28
        _emit 0x58
        _emit 0x41
        _emit 0x00
        _emit 0x28
        _emit 0x58
        _emit 0x41
        _emit 0x00
        _emit 0x28
        _emit 0x58
        _emit 0x41
        _emit 0x00
        _emit 0x44
        _emit 0x58
        _emit 0x41
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

// FUNCTION: PORT1111 0x004158c0
__declspec(naked) int __fastcall FUN_004158c0(void *pthis,void *param_1)
{
    __asm {
        mov eax, dword ptr [DAT_004e0adc]
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0042f670
        mov ecx, dword ptr [DAT_004e0ad8]
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_0042f670
        _emit 0x83
        _emit 0x7e
        _emit 0x04
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0x75
        _emit 0x09
        mov edx, dword ptr [DAT_004e0adc]
        _emit 0x52
        _emit 0xeb
        _emit 0x06
        mov eax, dword ptr [DAT_004e0870]
        _emit 0x50
        call FUN_0042f670
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_00414800
        _emit 0x56
        _emit 0x8d
        _emit 0x8f
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        call FUN_00453c30
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

// GAP: PORT1111 0x00415926
__declspec(naked) void gap_00415926(void)
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
