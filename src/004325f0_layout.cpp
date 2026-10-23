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
extern int DAT_004bfbb0;
extern void * DAT_004e2410;
extern int DAT_004bfbc8;












// FUNCTION: PORT1111 0x004325f0
__declspec(naked) int __fastcall FUN_004325f0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b764b
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x43
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x56
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x11
        _emit 0x5e
        _emit 0x5b
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
        _emit 0x8b
        _emit 0x86
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x8e
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb9
        _emit 0x0a
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xc1
        _emit 0x7d
        _emit 0x02
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x96
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xc1
        _emit 0x03
        _emit 0xd1
        _emit 0x89
        _emit 0x86
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x96
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2410]
        call FUN_00454e60
        _emit 0x8b
        _emit 0x86
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x55
        _emit 0x57
        _emit 0x6a
        _emit 0x34
        call pt_a_00496fa4
        _emit 0x8b
        _emit 0xf8
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xff
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f760
        mov dword ptr [edi], OFFSET DAT_004bfbb0
        _emit 0xc7
        _emit 0x47
        _emit 0x0c
        _emit 0x19
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xff
        _emit 0x8b
        _emit 0x43
        _emit 0x04
        _emit 0x68
        _emit 0x10
        _emit 0x27
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x47
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x57
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00412ec0
        _emit 0x5f
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0xf6
        _emit 0x03
        _emit 0x00
        _emit 0x00
        call FUN_00445030
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004326ef
__declspec(naked) void gap_004326ef(void)
{
    __asm {
        _emit 0xcc
    }
}
