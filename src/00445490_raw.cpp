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

extern void * DAT_004e240c;
extern unsigned char DAT_004e2418[4];
extern unsigned char DAT_004e2420[4];
extern const unsigned char PTR_FUN_004c376c[4];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];
extern const unsigned char PTR_Ordinal_19_004bc384[8];





// FUNCTION: PORT1111 0x00445490
__declspec(naked) void __fastcall thunk_FUN_00444d00(void *param_1)
{
    __asm {
        jmp FUN_00444d00
    }
}
