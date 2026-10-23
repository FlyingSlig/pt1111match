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
extern unsigned char DAT_004e2418[];
extern unsigned char DAT_004e2408[4];












// FUNCTION: PORT1111 0x004122a0
__declspec(naked) void __fastcall FUN_004122a0(void *pthis,int param_1)
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
        _emit 0x86
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x78
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x89
        _emit 0x86
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x48
        _emit 0x8b
        _emit 0x86
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x3b
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x20
        _emit 0x83
        _emit 0xf8
        _emit 0xff
        _emit 0x74
        _emit 0x1e
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x20
        mov ecx, dword ptr [DAT_004e2418]
        _emit 0x50
        call FUN_0040af10
        _emit 0x8b
        _emit 0xc8
        call FUN_0040a970
        mov eax, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x88
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x56
        call FUN_00453a00
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00444b20
        _emit 0x6a
        _emit 0xff
        _emit 0x6a
        _emit 0xff
        _emit 0x8b
        _emit 0xce
        call FUN_00405ad0
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x00
        _emit 0x56
        call FUN_004137d0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0041232b
__declspec(naked) void gap_0041232b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
