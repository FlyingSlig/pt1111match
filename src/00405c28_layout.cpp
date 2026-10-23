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

extern unsigned char DAT_004e279c[48];
extern void * DAT_004e240c;











// GAP: PORT1111 0x00405c28
__declspec(naked) void gap_00405c28(void)
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
        _emit 0x8b
        _emit 0x51
        _emit 0x7c
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xd2
        _emit 0x0f
        _emit 0x94
        _emit 0xc0
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00405c40
__declspec(naked) int __fastcall FUN_00405c40(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x3a
        _emit 0x8b
        _emit 0x49
        _emit 0x40
        _emit 0x8b
        _emit 0x50
        _emit 0x40
        _emit 0x0f
        _emit 0xbf
        _emit 0x41
        _emit 0x4e
        _emit 0x0f
        _emit 0xbf
        _emit 0x49
        _emit 0x4c
        _emit 0x56
        _emit 0x0f
        _emit 0xbf
        _emit 0x72
        _emit 0x4e
        _emit 0x0f
        _emit 0xbf
        _emit 0x52
        _emit 0x4c
        _emit 0x2b
        _emit 0xc6
        _emit 0x2b
        _emit 0xca
        _emit 0x85
        _emit 0xc0
        _emit 0x5e
        _emit 0x7d
        _emit 0x02
        _emit 0xf7
        _emit 0xd8
        _emit 0x85
        _emit 0xc9
        _emit 0x7d
        _emit 0x02
        _emit 0xf7
        _emit 0xd9
        _emit 0x83
        _emit 0xf8
        _emit 0x02
        _emit 0x7d
        _emit 0x0d
        _emit 0x83
        _emit 0xf9
        _emit 0x02
        _emit 0x7d
        _emit 0x08
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00405c87
__declspec(naked) void gap_00405c87(void)
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
    }
}

// FUNCTION: PORT1111 0x00405c90
__declspec(naked) void __fastcall FUN_00405c90(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0x86
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x74
        _emit 0x2a
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4d
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0x7e
        _emit 0x50
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0x57
        _emit 0x8b
        _emit 0xc8
        call FUN_00423080
        _emit 0x5f
        _emit 0xc7
        _emit 0x86
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x23
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0x7e
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0xc8
        call FUN_00423080
        _emit 0xc7
        _emit 0x86
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00405cf8
__declspec(naked) void gap_00405cf8(void)
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
    }
}

// FUNCTION: PORT1111 0x00405d00
__declspec(naked) void __fastcall FUN_00405d00(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xdb
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x86
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x74
        _emit 0x27
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4a
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0x7e
        _emit 0x50
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x57
        _emit 0x8b
        _emit 0xc8
        call FUN_00423080
        _emit 0xc7
        _emit 0x86
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x27
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x23
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0x7e
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0xc8
        call FUN_00423080
        _emit 0xc7
        _emit 0x86
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        _emit 0x83
        _emit 0x78
        _emit 0x48
        _emit 0x04
        _emit 0x75
        _emit 0x36
        _emit 0x85
        _emit 0xdb
        _emit 0x74
        _emit 0x32
        _emit 0x8b
        _emit 0xce
        call FUN_00412330
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x27
        _emit 0x8b
        _emit 0x86
        _emit 0xac
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x1d
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0xff
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x86
        _emit 0xac
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        call FUN_004225a0
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00405da6
__declspec(naked) void gap_00405da6(void)
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
    }
}

// FUNCTION: PORT1111 0x00405db0
__declspec(naked) void __fastcall FUN_00405db0(void *pthis,int param_1,unsigned int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x50
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x51
        _emit 0x52
        call FUN_00453ee0
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x00405dd3
__declspec(naked) void gap_00405dd3(void)
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

// FUNCTION: PORT1111 0x00405de0
__declspec(naked) void __fastcall FUN_00405de0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x10
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x33
        _emit 0xd2
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x95
        _emit 0xc2
        _emit 0x52
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x52
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x8b
        _emit 0x49
        _emit 0x50
        _emit 0x52
        _emit 0x8b
        _emit 0x94
        _emit 0x81
        _emit 0x34
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x52
        mov ecx, OFFSET DAT_004e279c
        call FUN_0044d700
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// FUNCTION: PORT1111 0x00405e10
__declspec(naked) int __fastcall FUN_00405e10(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x81
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x75
        _emit 0x08
        _emit 0x39
        _emit 0x81
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x2a
        _emit 0x8b
        _emit 0x91
        _emit 0xe4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x28
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x18
        _emit 0x8b
        _emit 0x48
        _emit 0x50
        _emit 0x8b
        _emit 0x41
        _emit 0x14
        _emit 0x83
        _emit 0xf8
        _emit 0x35
        _emit 0x74
        _emit 0x05
        _emit 0x83
        _emit 0xf8
        _emit 0x50
        _emit 0x75
        _emit 0x08
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00405e5f
__declspec(naked) void gap_00405e5f(void)
{
    __asm {
        _emit 0xcc
    }
}
