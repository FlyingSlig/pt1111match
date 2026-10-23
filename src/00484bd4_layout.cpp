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

extern const unsigned char PTR_FUN_004c6a40[32];
extern unsigned char DAT_004e2c24[4];
extern unsigned char DAT_004e2c84[4];
extern unsigned char DAT_004e2c88[16];











// GAP: PORT1111 0x00484bd4
__declspec(naked) void gap_00484bd4(void)
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

// FUNCTION: PORT1111 0x00484be0
__declspec(naked) BOOL __fastcall FUN_00484be0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0xbf
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x17
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x09
        _emit 0x50
        call dword ptr [DestroyWindow]
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x20
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00484c0c
__declspec(naked) void gap_00484c0c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00484c10
__declspec(naked) void __fastcall FUN_00484c10(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        mov dword ptr [esi], OFFSET PTR_FUN_004c6a40
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x07
        _emit 0x50
        call dword ptr [DestroyWindow]
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        _emit 0xff
        _emit 0x60
        _emit 0x20
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00484c38
__declspec(naked) void gap_00484c38(void)
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

// FUNCTION: PORT1111 0x00484c40
__declspec(naked) void __cdecl FUN_00484c40(LPCSTR param_1)
{
    __asm {
        mov eax, dword ptr [DAT_004e2c24]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x51
        call dword ptr [UnregisterClassA]
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00484c52
__declspec(naked) void gap_00484c52(void)
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
        mov eax, dword ptr [DAT_004e2c24]
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x30
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0x56
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x57
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x30
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x30
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x51
        _emit 0x52
        _emit 0x50
        call dword ptr [CreateWindowExA]
        _emit 0x50
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        call dword ptr [IsWindow]
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x5f
        _emit 0xf7
        _emit 0xd8
        _emit 0x5e
        _emit 0xc2
        _emit 0x28
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x50
        call dword ptr [SetFocus]
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00484cd0
__declspec(naked) int * __fastcall FUN_00484cd0(void *pthis,unsigned char param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        mov dword ptr [esi], OFFSET PTR_FUN_004c6a40
        _emit 0x74
        _emit 0x15
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x07
        _emit 0x50
        call dword ptr [DestroyWindow]
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x20
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x08
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
    }
}


// GAP: PORT1111 0x00484d08
__declspec(naked) void gap_00484d08(void)
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x20
        _emit 0x56
        _emit 0x8b
        _emit 0x30
        _emit 0x57
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0x39
        _emit 0x53
        _emit 0x8b
        _emit 0x58
        _emit 0x0c
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x2b
        _emit 0xda
        _emit 0x53
        _emit 0x2b
        _emit 0xc6
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x30
        _emit 0x56
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x30
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x52
        _emit 0x50
        _emit 0xff
        _emit 0x57
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x1c
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
        _emit 0xcc
    }
}
