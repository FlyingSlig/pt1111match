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

extern int DAT_004c6918;




// FUNCTION: PORT1111 0x00483e36
__declspec(naked) void FUN_00483e36(void)
{
    __asm {
        mov eax, OFFSET gap_00483e3c
        _emit 0xc3
    }
}
