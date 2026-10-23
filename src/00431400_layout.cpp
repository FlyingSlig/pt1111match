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

extern const unsigned char PTR_FUN_004bfb2c[24];
extern int DAT_004be698;
extern void * DAT_004e240c;
extern void * DAT_004e2410;












// FUNCTION: PORT1111 0x00431400
__declspec(naked) int __fastcall FUN_00431400(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x51
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00415230
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00431428
__declspec(naked) void gap_00431428(void)
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
        _emit 0x41
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_004139a0
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
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

// FUNCTION: PORT1111 0x00431450
__declspec(naked) void __fastcall FUN_00431450(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x33
        _emit 0xc9
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0x89
        _emit 0x48
        _emit 0x18
        _emit 0x89
        _emit 0x48
        _emit 0x1c
        _emit 0x89
        _emit 0x48
        _emit 0x20
        _emit 0x89
        _emit 0x48
        _emit 0x24
        _emit 0x89
        _emit 0x48
        _emit 0x28
        _emit 0x89
        _emit 0x48
        _emit 0x2c
        _emit 0x89
        _emit 0x48
        _emit 0x30
        _emit 0xc7
        _emit 0x40
        _emit 0x08
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        mov dword ptr [eax], OFFSET PTR_FUN_004bfb2c
        _emit 0xc7
        _emit 0x40
        _emit 0x0c
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00431487
__declspec(naked) void gap_00431487(void)
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

// FUNCTION: PORT1111 0x00431490
__declspec(naked) int * __fastcall FUN_00431490(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0042f7a0
        mov dword ptr [esi], OFFSET DAT_004be698
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}
