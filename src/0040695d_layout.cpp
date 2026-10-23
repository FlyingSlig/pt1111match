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

extern int DAT_004d5340[];
extern unsigned char DAT_004d53cc[];
extern int DAT_004bcc58;
extern int DAT_004bcc2c;













// GAP: PORT1111 0x0040695d
__declspec(naked) void gap_0040695d(void)
{
    __asm {
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x11
        _emit 0x69
        _emit 0x40
        _emit 0x00
        _emit 0x3d
        _emit 0x68
        _emit 0x40
        _emit 0x00
        _emit 0x1f
        _emit 0x69
        _emit 0x40
        _emit 0x00
        _emit 0x50
        _emit 0x69
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x01
        _emit 0x03
        _emit 0x02
        _emit 0x8b
        _emit 0xff
        _emit 0xa0
        _emit 0x68
        _emit 0x40
        _emit 0x00
        _emit 0xb4
        _emit 0x68
        _emit 0x40
        _emit 0x00
        _emit 0xb4
        _emit 0x68
        _emit 0x40
        _emit 0x00
        _emit 0x50
        _emit 0x68
        _emit 0x40
        _emit 0x00
        _emit 0x64
        _emit 0x68
        _emit 0x40
        _emit 0x00
        _emit 0x64
        _emit 0x68
        _emit 0x40
        _emit 0x00
        _emit 0x78
        _emit 0x68
        _emit 0x40
        _emit 0x00
        _emit 0x8c
        _emit 0x68
        _emit 0x40
        _emit 0x00
        _emit 0x8c
        _emit 0x68
        _emit 0x40
        _emit 0x00
        _emit 0xc8
        _emit 0x68
        _emit 0x40
        _emit 0x00
        _emit 0xdc
        _emit 0x68
        _emit 0x40
        _emit 0x00
        _emit 0xdc
        _emit 0x68
        _emit 0x40
        _emit 0x00
        _emit 0xf0
        _emit 0x68
        _emit 0x40
        _emit 0x00
        _emit 0x04
        _emit 0x69
        _emit 0x40
        _emit 0x00
        _emit 0x04
        _emit 0x69
        _emit 0x40
        _emit 0x00
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
