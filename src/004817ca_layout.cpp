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

extern const unsigned char PTR_LAB_004c68f0[];
extern const unsigned char DAT_004bd578[8];
extern const unsigned char PTR_FUN_004c6908[8];












// GAP: PORT1111 0x004817ca
__declspec(naked) void gap_004817ca(void)
{
    __asm {
        _emit 0x8b
        _emit 0xff
        _emit 0x4a
        _emit 0x17
        _emit 0x48
        _emit 0x00
        _emit 0x60
        _emit 0x17
        _emit 0x48
        _emit 0x00
        _emit 0x55
        _emit 0x17
        _emit 0x48
        _emit 0x00
        _emit 0x6b
        _emit 0x17
        _emit 0x48
        _emit 0x00
        _emit 0x2d
        _emit 0x17
        _emit 0x48
        _emit 0x00
        _emit 0x76
        _emit 0x17
        _emit 0x48
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
    }
}

// FUNCTION: PORT1111 0x004817f0
__declspec(naked) void __fastcall FUN_004817f0(void *pthis,int param_1,void *param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x3c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x53
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x4e
        _emit 0x6c
        _emit 0x8b
        _emit 0x56
        _emit 0x70
        _emit 0x57
        _emit 0x29
        _emit 0x08
        _emit 0x29
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0x7e
        _emit 0x2c
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x12
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00481050
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x46
        _emit 0x3c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00481480
        call dword ptr [ReleaseCapture]
        _emit 0x39
        _emit 0x7e
        _emit 0x2c
        _emit 0x5f
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x4e
        _emit 0x68
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x28
        _emit 0xc7
        _emit 0x86
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00481851
__declspec(naked) void gap_00481851(void)
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00481860
__declspec(naked) int __fastcall FUN_00481860(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x3b
        _emit 0x46
        _emit 0x30
        _emit 0x57
        _emit 0x8b
        _emit 0x7e
        _emit 0x2c
        _emit 0x75
        _emit 0x0b
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00481540
        _emit 0xeb
        _emit 0x0e
        _emit 0x3b
        _emit 0x46
        _emit 0x34
        _emit 0x75
        _emit 0x1e
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00481600
        _emit 0x39
        _emit 0x7e
        _emit 0x2c
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0d
        _emit 0x5f
        _emit 0x89
        _emit 0x86
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004818a5
__declspec(naked) void gap_004818a5(void)
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
