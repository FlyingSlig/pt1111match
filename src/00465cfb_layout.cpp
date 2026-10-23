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


// GAP: PORT1111 0x00465cfb
__declspec(naked) void gap_00465cfb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00465d00
__declspec(naked) int __fastcall FUN_00465d00(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x01
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc2
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00465d0f
__declspec(naked) void gap_00465d0f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00465d10
__declspec(naked) void __fastcall FUN_00465d10(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x10
        _emit 0x8d
        _emit 0x4a
        _emit 0x01
        _emit 0x53
        _emit 0x8a
        _emit 0x1a
        _emit 0x42
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xd1
        _emit 0x5b
        _emit 0x74
        _emit 0x15
        _emit 0x56
        _emit 0x8d
        _emit 0x72
        _emit 0xff
        _emit 0x8b
        _emit 0x08
        _emit 0x8d
        _emit 0x14
        _emit 0x31
        _emit 0x80
        _emit 0x3a
        _emit 0x20
        _emit 0x75
        _emit 0x06
        _emit 0xc6
        _emit 0x02
        _emit 0x00
        _emit 0x4e
        _emit 0xeb
        _emit 0xf0
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00465d3a
__declspec(naked) void gap_00465d3a(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00465d40
__declspec(naked) void __fastcall FUN_00465d40(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xd1
        _emit 0x8d
        _emit 0x72
        _emit 0x01
        _emit 0x53
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8a
        _emit 0x1a
        _emit 0x42
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xd6
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xf2
        _emit 0x5b
        _emit 0x73
        _emit 0x04
        _emit 0xc6
        _emit 0x04
        _emit 0x31
        _emit 0x00
        _emit 0x5e
    }
}

// GAP: PORT1111 0x00465d67
__declspec(naked) void gap_00465d67(void)
{
    __asm {
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00465d70
__declspec(naked) int __fastcall FUN_00465d70(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xf6
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x75
        _emit 0x07
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x07
        _emit 0x53
        _emit 0x33
        _emit 0xdb
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc2
        _emit 0x6a
        _emit 0x04
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x06
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x0f
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x8b
        _emit 0xd8
        _emit 0x8b
        _emit 0xc3
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
    }
}

// GAP: PORT1111 0x00465dc5
__declspec(naked) void gap_00465dc5(void)
{
    __asm {
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
    }
}

// FUNCTION: PORT1111 0x00465dd0
__declspec(naked) int __fastcall FUN_00465dd0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x05
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0x30
        _emit 0x8b
        _emit 0xc6
        _emit 0x57
        _emit 0x8d
        _emit 0x78
        _emit 0x01
        _emit 0x8a
        _emit 0x10
        _emit 0x40
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0xf9
        _emit 0x8b
        _emit 0x11
        _emit 0x2b
        _emit 0xc7
        _emit 0x50
        _emit 0x56
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00465dfd
__declspec(naked) void gap_00465dfd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
