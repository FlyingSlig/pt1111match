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

extern unsigned char DAT_004ddb0c[12];
extern const unsigned char PTR_Sleep_004bc11c[4];
extern int DAT_004c6b3c;












// GAP: PORT1111 0x0048643f
__declspec(naked) void gap_0048643f(void)
{
    __asm {
        _emit 0xcc
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        jmp _mbsicmp
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00486460
__declspec(naked) void * __fastcall FUN_00486460(void *pthis,void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba838
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
        _emit 0x28
        mov eax, dword ptr [DAT_004ddb0c]
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0xeb
        _emit 0x77
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x3c
        _emit 0x6a
        _emit 0xff
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x44
        call FUN_00466af0
        _emit 0x6a
        _emit 0x5c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x40
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465e70
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x3c
        call FUN_00465e00
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x90
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x88
        _emit 0x0a
        _emit 0x42
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf6
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x51
        call _mbslwr
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        push OFFSET gap_0048643f + 1
        _emit 0x6a
        _emit 0x22
        _emit 0x4a
        _emit 0x52
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        call bsearch
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x3c
        _emit 0x8b
        _emit 0xf0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x34
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x8b
        _emit 0xc6
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x5e
        call pt_a_00497aa6
        _emit 0x83
        _emit 0xc4
        _emit 0x34
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00486521
__declspec(naked) void gap_00486521(void)
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

// FUNCTION: PORT1111 0x00486530
__declspec(naked) int __fastcall FUN_00486530(void *pthis,void *param_1)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba850
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
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x89
        _emit 0x65
        _emit 0xf0
        _emit 0x74
        _emit 0x41
        _emit 0x8b
        _emit 0x45
        _emit 0x08
        _emit 0x50
        call FUN_00486460
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x34
        _emit 0x8b
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2e
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        _emit 0xc7
        _emit 0x45
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x10
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x4d
        _emit 0xf4
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
