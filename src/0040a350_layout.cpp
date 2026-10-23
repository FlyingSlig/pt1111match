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

extern int DAT_004e0adc;
extern unsigned char DAT_004e2674[];
extern unsigned char DAT_004e2698[];
extern void * DAT_004e240c;
extern unsigned char DAT_004e2b14[12];
extern int DAT_004bd540;













// FUNCTION: PORT1111 0x0040a350
__declspec(naked) void FUN_0040a350(void *pthis,int param_1,int param_2,int param_3,int param_4)
{
    __asm {
        mov eax, dword ptr [DAT_004e2b14]
        mov edx, dword ptr [DAT_004e2674]
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        call FUN_004750b0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2c
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_00476aa0
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x1c
        _emit 0x74
        _emit 0x13
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        call FUN_00475080
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x75
        _emit 0x06
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x83
        _emit 0x48
        _emit 0x28
        _emit 0x04
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x83
        _emit 0x48
        _emit 0x28
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x68
        _emit 0x96
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00478250
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        call FUN_004787e0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x03
        _emit 0xca
        _emit 0x89
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x50
        _emit 0x08
        _emit 0x03
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x56
        _emit 0x08
        mov ecx, dword ptr [DAT_004e2698]
        _emit 0x89
        _emit 0x4e
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x40
        _emit 0x56
        call FUN_00428240
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x52
        _emit 0x50
        call FUN_00478700
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        call FUN_00478920
        mov ecx, dword ptr [DAT_004e0adc]
        _emit 0x89
        _emit 0x4e
        _emit 0x10
        inc dword ptr [DAT_004e0adc]
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x56
        call FUN_004176c0
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040a42b
__declspec(naked) void gap_0040a42b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040a430
__declspec(naked) int __fastcall FUN_0040a430(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x56
        call FUN_00417430
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x48
        _emit 0x40
        _emit 0x56
        call FUN_004288e0
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x51
        _emit 0x8b
        _emit 0x8a
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004765a0
        _emit 0xc7
        _emit 0x46
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040a475
__declspec(naked) void gap_0040a475(void)
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
