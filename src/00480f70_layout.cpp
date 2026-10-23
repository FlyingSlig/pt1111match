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

extern const unsigned char PTR_LAB_004c68f0[24];












// FUNCTION: PORT1111 0x00480f70
__declspec(naked) void __fastcall FUN_00480f70(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x33
        _emit 0xc9
        _emit 0xba
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [eax], OFFSET PTR_LAB_004c68f0
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x0c
        _emit 0x89
        _emit 0x48
        _emit 0x2c
        _emit 0x89
        _emit 0x88
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x7c
        _emit 0x89
        _emit 0x48
        _emit 0x78
        _emit 0x89
        _emit 0x50
        _emit 0x74
        _emit 0x89
        _emit 0x50
        _emit 0x14
        _emit 0x89
        _emit 0x50
        _emit 0x18
        _emit 0x89
        _emit 0x50
        _emit 0x40
        _emit 0x89
        _emit 0x48
        _emit 0x3c
        _emit 0xc7
        _emit 0x40
        _emit 0x30
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xc7
        _emit 0x40
        _emit 0x34
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xc7
        _emit 0x40
        _emit 0x38
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x48
        _emit 0x68
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x89
        _emit 0x50
        _emit 0x44
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00480fc5
__declspec(naked) void gap_00480fc5(void)
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
    }
}

// FUNCTION: PORT1111 0x00480fd0
__declspec(naked) void __fastcall FUN_00480fd0(void *param_1)
{
    __asm {
        _emit 0x33
        _emit 0xc0
        _emit 0xba
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [ecx], OFFSET PTR_LAB_004c68f0
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x0c
        _emit 0x89
        _emit 0x41
        _emit 0x2c
        _emit 0x89
        _emit 0x81
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x41
        _emit 0x7c
        _emit 0x89
        _emit 0x41
        _emit 0x78
        _emit 0x89
        _emit 0x51
        _emit 0x74
        _emit 0x89
        _emit 0x51
        _emit 0x14
        _emit 0x89
        _emit 0x51
        _emit 0x18
        _emit 0x89
        _emit 0x51
        _emit 0x40
        _emit 0x89
        _emit 0x41
        _emit 0x3c
        _emit 0xc7
        _emit 0x41
        _emit 0x30
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xc7
        _emit 0x41
        _emit 0x34
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xc7
        _emit 0x41
        _emit 0x38
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x41
        _emit 0x68
        _emit 0x89
        _emit 0x41
        _emit 0x10
        _emit 0x89
        _emit 0x51
        _emit 0x44
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00481023
__declspec(naked) void gap_00481023(void)
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

// FUNCTION: PORT1111 0x00481030
__declspec(naked) void __fastcall FUN_00481030(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x68
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x40
        _emit 0x20
        _emit 0x3b
        _emit 0xd0
        _emit 0x7e
        _emit 0x06
        _emit 0x89
        _emit 0x41
        _emit 0x14
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x89
        _emit 0x51
        _emit 0x14
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048104e
__declspec(naked) void gap_0048104e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00481050
__declspec(naked) int __fastcall FUN_00481050(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x59
        _emit 0x78
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xfb
        _emit 0x7e
        _emit 0x04
        _emit 0x8b
        _emit 0xfb
        _emit 0xeb
        _emit 0x09
        _emit 0x8b
        _emit 0x41
        _emit 0x7c
        _emit 0x3b
        _emit 0xf8
        _emit 0x7d
        _emit 0x02
        _emit 0x8b
        _emit 0xf8
        _emit 0x3b
        _emit 0xfb
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x41
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x07
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x41
        _emit 0x40
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1d
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x14
        _emit 0x8b
        _emit 0x49
        _emit 0x7c
        _emit 0x8b
        _emit 0xc6
        _emit 0x99
        _emit 0x2b
        _emit 0xc2
        _emit 0xd1
        _emit 0xf8
        _emit 0x2b
        _emit 0xc1
        _emit 0x03
        _emit 0xc7
        _emit 0x99
        _emit 0xf7
        _emit 0xfe
        _emit 0x0f
        _emit 0xaf
        _emit 0xc6
        _emit 0x03
        _emit 0xc1
        _emit 0x5e
        _emit 0xeb
        _emit 0x02
        _emit 0x8b
        _emit 0xc7
        _emit 0x3b
        _emit 0xc3
        _emit 0x7e
        _emit 0x02
        _emit 0x8b
        _emit 0xc3
        _emit 0x5f
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004810b4
__declspec(naked) void gap_004810b4(void)
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
    }
}
