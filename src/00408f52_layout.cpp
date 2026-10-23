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

extern unsigned char DAT_004e204c[];
extern unsigned char DAT_004e2050[];
extern int DAT_004bcfd0;
extern int DAT_004bcfa8;











// GAP: PORT1111 0x00408f52
__declspec(naked) void gap_00408f52(void)
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
    }
}

// FUNCTION: PORT1111 0x00408f60
__declspec(naked) int __fastcall FUN_00408f60(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_00404f70
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x02
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0xed
        _emit 0x03
        _emit 0x00
        _emit 0x00
        call FUN_00445030
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00408f85
__declspec(naked) void gap_00408f85(void)
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x81
        _emit 0xec
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x89
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xed
        _emit 0x03
        _emit 0x00
        _emit 0x00
        jmp FUN_00445030
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x83
        _emit 0xe9
        _emit 0x14
        jmp pt_a_00408f20
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
        _emit 0x2c
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

// FUNCTION: PORT1111 0x00408ff0
__declspec(naked) int * __fastcall FUN_00408ff0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_00408ae0
        mov dword ptr [esi], OFFSET DAT_004bcfd0
        mov dword ptr [esi + 0x14], OFFSET DAT_004bcfa8
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00409012
__declspec(naked) void gap_00409012(void)
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
        _emit 0xb8
        _emit 0x05
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
    }
}
