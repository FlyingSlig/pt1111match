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

extern "C" void free_thunk(void *);











// GAP: PORT1111 0x00410042
__declspec(naked) void gap_00410042(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x53
        _emit 0x8a
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0xf6
        _emit 0xc3
        _emit 0x02
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x74
        _emit 0x2b
        _emit 0x8b
        _emit 0x46
        _emit 0xfc
        _emit 0x57
        push OFFSET FUN_0040ff80
        _emit 0x8d
        _emit 0x7e
        _emit 0xfc
        _emit 0x50
        _emit 0x6a
        _emit 0x1c
        _emit 0x56
        _emit 0xe8
        _emit 0xfa
        _emit 0x7b
        _emit 0x08
        _emit 0x00
        _emit 0xf6
        _emit 0xc3
        _emit 0x01
        _emit 0x74
        _emit 0x09
        _emit 0x57
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_0040ff80
        _emit 0xf6
        _emit 0xc3
        _emit 0x01
        _emit 0x74
        _emit 0x09
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x83
        _emit 0xe9
        _emit 0x14
        jmp pt_a_004100c0
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
