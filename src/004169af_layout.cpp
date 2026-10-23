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



// GAP: PORT1111 0x004169af
__declspec(naked) void gap_004169af(void)
{
    __asm {
        _emit 0x90
        _emit 0xf4
        _emit 0x67
        _emit 0x41
        _emit 0x00
        _emit 0x41
        _emit 0x68
        _emit 0x41
        _emit 0x00
        _emit 0x94
        _emit 0x68
        _emit 0x41
        _emit 0x00
        _emit 0xdb
        _emit 0x68
        _emit 0x41
        _emit 0x00
        _emit 0xfe
        _emit 0x68
        _emit 0x41
        _emit 0x00
        _emit 0x21
        _emit 0x69
        _emit 0x41
        _emit 0x00
        _emit 0x44
        _emit 0x69
        _emit 0x41
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
