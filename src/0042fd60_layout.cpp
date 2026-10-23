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
extern int DAT_004bfa58;
extern int DAT_004be64c;












// FUNCTION: PORT1111 0x0042fd60
__declspec(naked) int __fastcall FUN_0042fd60(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x03
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00405f40
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x86
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x30
        _emit 0x3b
        _emit 0x4f
        _emit 0x14
        _emit 0x75
        _emit 0x0e
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x00
        _emit 0x56
        call FUN_004137d0
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0042fdad
__declspec(naked) void gap_0042fdad(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042fdb0
__declspec(naked) int * __fastcall FUN_0042fdb0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0042f7a0
        mov dword ptr [esi], OFFSET DAT_004bfa58
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}
