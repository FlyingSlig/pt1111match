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

extern const unsigned char s_cursor_d_bmp_004bc3b0[];
extern unsigned char DAT_004e2b14[12];













// GAP: PORT1111 0x0040130f
__declspec(naked) void gap_0040130f(void)
{
    __asm {
        _emit 0x90
        _emit 0x7d
        _emit 0x12
        _emit 0x40
        _emit 0x00
        _emit 0x9f
        _emit 0x12
        _emit 0x40
        _emit 0x00
        _emit 0xcc
        _emit 0x12
        _emit 0x40
        _emit 0x00
        _emit 0xee
        _emit 0x12
        _emit 0x40
        _emit 0x00
        _emit 0xaa
        _emit 0x12
        _emit 0x40
        _emit 0x00
        _emit 0x07
        _emit 0x13
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x02
        _emit 0x03
        _emit 0x05
        _emit 0x04
    }
}
