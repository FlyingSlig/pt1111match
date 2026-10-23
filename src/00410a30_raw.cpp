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

extern const unsigned char PTR_FUN_004be8e0[4];
extern void * DAT_004e240c;
extern unsigned char DAT_004e279c[48];
extern const unsigned char PTR_FUN_004be8e4[44];





// FUNCTION: PORT1111 0x00410a30
__declspec(naked) void __fastcall thunk_FUN_00411f50(void *param_1)
{
    __asm {
        jmp FUN_00411f50
    }
}
