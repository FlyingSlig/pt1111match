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

extern void * DAT_004e240c;











// GAP: PORT1111 0x00404fa2
__declspec(naked) void gap_00404fa2(void)
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
        _emit 0x8b
        _emit 0x49
        _emit 0x60
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x2c
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

// FUNCTION: PORT1111 0x00404fc0
__declspec(naked) void __fastcall FUN_00404fc0(void *pthis,RECT *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8b
        _emit 0xcd
        call FUN_00479890
        _emit 0x55
        call dword ptr [IsRectEmpty]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x4d
        _emit 0x08
        _emit 0x8b
        _emit 0x45
        _emit 0x0c
        _emit 0x41
        _emit 0x40
        _emit 0x89
        _emit 0x4d
        _emit 0x08
        _emit 0x89
        _emit 0x45
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        _emit 0x8b
        _emit 0x48
        _emit 0x74
        _emit 0x8b
        _emit 0x50
        _emit 0x70
        _emit 0x8b
        _emit 0x7e
        _emit 0x08
        _emit 0x8b
        _emit 0x5e
        _emit 0x04
        _emit 0x8b
        _emit 0x70
        _emit 0x6c
        _emit 0x8b
        _emit 0x40
        _emit 0x68
        _emit 0x03
        _emit 0xcf
        _emit 0x03
        _emit 0xd3
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x55
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x51
        _emit 0x8b
        _emit 0xd1
        _emit 0x03
        _emit 0xf7
        _emit 0x03
        _emit 0xc3
        _emit 0x52
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x20
        call dword ptr [IntersectRect]
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00405033
__declspec(naked) void gap_00405033(void)
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
    }
}

// FUNCTION: PORT1111 0x00405040
__declspec(naked) void __fastcall FUN_00405040(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x56
        call FUN_004173c0
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x10
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0xc7
        _emit 0x86
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0xc7
        _emit 0x46
        _emit 0x60
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        jmp FUN_00489080
    }
}

// GAP: PORT1111 0x00405092
__declspec(naked) void gap_00405092(void)
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x70
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
