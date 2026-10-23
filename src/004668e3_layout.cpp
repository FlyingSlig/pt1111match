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

extern const unsigned char DAT_004c5e54[4];
extern const unsigned char s_____f_004c5e4c[8];
extern unsigned char PTR_DAT_004dd95c[4];












// GAP: PORT1111 0x004668e3
__declspec(naked) void gap_004668e3(void)
{
    __asm {
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0xff
        _emit 0xa7
        _emit 0x66
        _emit 0x46
        _emit 0x00
        _emit 0x97
        _emit 0x66
        _emit 0x46
        _emit 0x00
        _emit 0xa0
        _emit 0x66
        _emit 0x46
        _emit 0x00
        _emit 0xb2
        _emit 0x66
        _emit 0x46
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x00
        _emit 0x03
        _emit 0x00
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x01
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x02
        _emit 0x90
        _emit 0xe3
        _emit 0x67
        _emit 0x46
        _emit 0x00
        _emit 0xab
        _emit 0x67
        _emit 0x46
        _emit 0x00
        _emit 0x09
        _emit 0x68
        _emit 0x46
        _emit 0x00
        _emit 0x68
        _emit 0x68
        _emit 0x46
        _emit 0x00
        _emit 0xb9
        _emit 0x67
        _emit 0x46
        _emit 0x00
        _emit 0x6b
        _emit 0x68
        _emit 0x46
        _emit 0x00
        _emit 0x00
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
        _emit 0x01
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x05
        _emit 0x01
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x03
        _emit 0x01
        _emit 0x04
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x05
        _emit 0x01
        _emit 0x05
        _emit 0x05
        _emit 0x01
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
