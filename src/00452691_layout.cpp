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
extern unsigned char DAT_004e2b14[12];
extern const unsigned char PTR_GetTickCount_004bc158[4];











// GAP: PORT1111 0x00452691
__declspec(naked) void gap_00452691(void)
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

// FUNCTION: PORT1111 0x004526a0
__declspec(naked) int __fastcall FUN_004526a0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2a
        _emit 0x0f
        _emit 0xb7
        _emit 0x40
        _emit 0x1c
        _emit 0x83
        _emit 0xf8
        _emit 0x04
        _emit 0x75
        _emit 0x21
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x89
        _emit 0x9c
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        call FUN_0047cf30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0b
        _emit 0x8d
        _emit 0x48
        _emit 0x50
        call FUN_00465e00
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


// GAP: PORT1111 0x004526d6
__declspec(naked) void gap_004526d6(void)
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

// FUNCTION: PORT1111 0x004526e0
__declspec(naked) int __fastcall FUN_004526e0(void *pthis,unsigned int param_1,short param_2)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8c6b
        _emit 0x50
        _emit 0x0f
        _emit 0xb7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x83
        _emit 0xe8
        _emit 0x03
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x57
        _emit 0x0f
        _emit 0x84
        _emit 0xa5
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x48
        _emit 0x74
        _emit 0x15
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x0f
        _emit 0xb7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x89
        _emit 0x9c
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_0047d0a0
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0xd4
        _emit 0x8b
        _emit 0x46
        _emit 0x5c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xcd
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x89
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_00453b70
        _emit 0x8b
        _emit 0xf8
        _emit 0x85
        _emit 0xff
        _emit 0x0f
        _emit 0x84
        _emit 0xc7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        call FUN_004056a0
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0xb8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x34
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x76
        _emit 0x5c
        _emit 0x56
        _emit 0x8b
        _emit 0xc8
        call FUN_00452000
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x57
        _emit 0x10
        _emit 0x89
        _emit 0x50
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00412e90
        _emit 0xeb
        _emit 0x73
        _emit 0x0f
        _emit 0xb7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x89
        _emit 0x98
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_0047d0a0
        _emit 0x8b
        _emit 0x40
        _emit 0x5c
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x4d
        _emit 0x8b
        _emit 0xce
        call FUN_004056a0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x42
        _emit 0x6a
        _emit 0x10
        call dword ptr [GetKeyState]
        _emit 0x84
        _emit 0xe4
        _emit 0x79
        _emit 0x14
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x89
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x56
        call FUN_00453a00
        _emit 0xeb
        _emit 0x22
        mov edx, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x8a
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_00453950
        mov eax, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x88
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x56
        call FUN_00453f50
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x00452835
__declspec(naked) void gap_00452835(void)
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
