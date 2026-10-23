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


// GAP: PORT1111 0x0042f69e
__declspec(naked) void gap_0042f69e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}
