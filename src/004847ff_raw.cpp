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

extern const unsigned char s_list_T__too_long_004bce98[];
extern const unsigned char PTR_FUN_004c69e0[4];
extern unsigned char DAT_004e2b24[4];
extern const unsigned char s_Fatal_Error_004c69e4[12];
extern unsigned char DAT_004e2aa8[32];
extern unsigned char DAT_004e2ae8[4];
extern unsigned char DAT_004e2b14[12];
extern const unsigned char PTR_FUN_004c6a40[32];





// FUNCTION: PORT1111 0x004847ff
__declspec(naked) void FUN_004847ff(void)
{
    __asm {
        _emit 0x6a
        _emit 0x00
        push OFFSET s_Fatal_Error_004c69e4
        call FUN_0046ab50
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        mov eax, OFFSET gap_00484814
        _emit 0xc3
    }
}
