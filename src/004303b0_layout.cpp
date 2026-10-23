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

extern int DAT_004e2404;
extern int DAT_004be6bc;












// FUNCTION: PORT1111 0x004303b0
__declspec(naked) int __fastcall FUN_004303b0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b744b
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
        _emit 0x83
        _emit 0xec
        _emit 0x0c
        _emit 0x8b
        _emit 0x41
        _emit 0x14
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0x56
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x52
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        call FUN_00429b00
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x7b
        _emit 0x8b
        _emit 0xce
        call FUN_00426ec0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x70
        _emit 0x8b
        _emit 0xce
        call FUN_00426ec0
        _emit 0x8b
        _emit 0x48
        _emit 0x3c
        _emit 0xf6
        _emit 0xc5
        _emit 0x40
        _emit 0x74
        _emit 0x61
        _emit 0x8b
        _emit 0xce
        call FUN_00426ec0
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x54
        _emit 0x8b
        _emit 0x46
        _emit 0x7c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x4d
        _emit 0x8b
        _emit 0x46
        _emit 0x60
        _emit 0x8b
        _emit 0x48
        _emit 0x1c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0x56
        _emit 0xff
        _emit 0x50
        _emit 0x10
        _emit 0x6a
        _emit 0x18
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0f
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x0a
        _emit 0x8b
        _emit 0xc8
        call FUN_0045c3e0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x8b
        _emit 0x49
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043047d
__declspec(naked) void gap_0043047d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00430480
__declspec(naked) int * __fastcall FUN_00430480(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0042f7a0
        mov dword ptr [esi], OFFSET DAT_004be6bc
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}
