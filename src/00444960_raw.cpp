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
extern void * DAT_004e240c;





// FUNCTION: PORT1111 0x00444960
__declspec(naked) int FUN_00444960(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xc0
        _emit 0xfd
        _emit 0x83
        _emit 0xf8
        _emit 0x0a
        _emit 0x77
        _emit 0x26
        movzx eax, byte ptr [eax + gap_00444998 + 16]
        jmp dword ptr [eax*4 + gap_00444998]
        _emit 0xb8
        _emit 0xe9
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xb8
        _emit 0xea
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xb8
        _emit 0xeb
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
