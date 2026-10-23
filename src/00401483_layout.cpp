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

extern const unsigned char PTR_FUN_004c6e14[12];












// FUNCTION: PORT1111 0x00401483
__declspec(naked) void FUN_00401483(void)
{
    __asm {
        _emit 0x8b
        _emit 0x45
        _emit 0x08
        _emit 0x89
        _emit 0x45
        _emit 0xe8
        _emit 0x40
        _emit 0x89
        _emit 0x65
        _emit 0xf0
        _emit 0x50
        _emit 0xc6
        _emit 0x45
        _emit 0xfc
        _emit 0x02
        call pt_a_00496fa4
        _emit 0x89
        _emit 0x45
        _emit 0x08
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        mov eax, OFFSET gap_004014a3
        _emit 0xc3
    }
}
