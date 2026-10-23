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

extern const unsigned char PTR_FUN_004be8bc[];
extern unsigned char DAT_004e204c[];
extern unsigned char DAT_004e2050[];
extern volatile int DAT_004e2c30;
extern volatile int DAT_004e2c34;











// GAP: PORT1111 0x00410916
__declspec(naked) void gap_00410916(void)
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
        _emit 0x8b
        _emit 0x41
        _emit 0x1c
        _emit 0x8b
        _emit 0x40
        _emit 0x08
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
    }
}

// FUNCTION: PORT1111 0x00410930
__declspec(naked) int * __fastcall FUN_00410930(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_00411bc0
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x89
        _emit 0x46
        _emit 0x30
        _emit 0x89
        _emit 0x46
        _emit 0x34
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x89
        _emit 0x46
        _emit 0x38
        _emit 0x89
        _emit 0x46
        _emit 0x2c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x3c
        mov dword ptr [esi], OFFSET PTR_FUN_004be8bc
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0041095f
__declspec(naked) void gap_0041095f(void)
{
    __asm {
        _emit 0xcc
        jmp FUN_00411d60
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

// FUNCTION: PORT1111 0x00410970
__declspec(naked) void __fastcall FUN_00410970(void *pthis,void *param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0x48
        _emit 0x44
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0x48
        _emit 0x48
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x3d
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x8b
        _emit 0x51
        _emit 0x44
        mov eax, dword ptr [DAT_004e2c30]
        _emit 0x03
        _emit 0xc2
        _emit 0x8b
        _emit 0x51
        _emit 0x48
        mov ecx, dword ptr [DAT_004e2c34]
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x66
        _emit 0x8b
        _emit 0x56
        _emit 0x28
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x50
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x70
        _emit 0x50
        _emit 0x8d
        _emit 0x4e
        _emit 0x18
        call FUN_0047ba20
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x004109c5
__declspec(naked) void gap_004109c5(void)
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
        jmp FUN_00411cd0
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
        _emit 0x41
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0x0f
        _emit 0xb7
        _emit 0x40
        _emit 0x3c
        and eax, dword ptr [DAT_004e2050]
        mov ecx, dword ptr [DAT_004e204c]
        _emit 0xd3
        _emit 0xf8
        _emit 0x3c
        _emit 0x01
        _emit 0x75
        _emit 0x06
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x33
        _emit 0xc0
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
    }
}
