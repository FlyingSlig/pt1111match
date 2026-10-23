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
extern int DAT_004bf810;











// GAP: PORT1111 0x004249bb
__declspec(naked) void gap_004249bb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x01
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov dword ptr [esi], OFFSET DAT_004bf810
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
        _emit 0xc2
        _emit 0x04
        _emit 0x00
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
        push OFFSET FUN_0047e300
        _emit 0x8d
        _emit 0x7e
        _emit 0xfc
        _emit 0x50
        _emit 0x6a
        _emit 0x30
        _emit 0x56
        _emit 0xe8
        _emit 0x6a
        _emit 0x32
        _emit 0x07
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
        call FUN_0047e300
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
        _emit 0x6a
        _emit 0x00
        call FUN_0047e2c0
        _emit 0xc3
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
