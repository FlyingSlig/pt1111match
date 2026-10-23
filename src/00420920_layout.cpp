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

extern const unsigned char PTR_LAB_004bf6fc[];
extern void * DAT_004e240c;
extern int DAT_004e2404;
extern unsigned char DAT_004e2681[1];
extern unsigned char DAT_004e2678[8];











// GAP: PORT1111 0x00420920
__declspec(naked) void gap_00420920(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x5e
        _emit 0x59
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00420930
__declspec(naked) void __fastcall FUN_00420930(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6c1f
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
        _emit 0x08
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        mov dword ptr [esi], OFFSET PTR_LAB_004bf6fc
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0041f500
        _emit 0x8b
        _emit 0x86
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x08
        _emit 0x8d
        _emit 0x7e
        _emit 0x7c
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x04
        call pt_a_004206c0
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
    }
}


// GAP: PORT1111 0x0042098b
__declspec(naked) void gap_0042098b(void)
{
    __asm {
        _emit 0x33
        _emit 0xdb
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x89
        _emit 0x5f
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x70
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x5e
        _emit 0x70
        _emit 0x89
        _emit 0x5e
        _emit 0x74
        _emit 0x89
        _emit 0x5e
        _emit 0x78
        _emit 0x8b
        _emit 0x46
        _emit 0x60
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x5e
        _emit 0x60
        _emit 0x89
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x5e
        _emit 0x68
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x5e
        _emit 0x50
        _emit 0x89
        _emit 0x5e
        _emit 0x54
        _emit 0x89
        _emit 0x5e
        _emit 0x58
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x5e
        _emit 0x40
        _emit 0x89
        _emit 0x5e
        _emit 0x44
        _emit 0x89
        _emit 0x5e
        _emit 0x48
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00476ee0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x5f
        _emit 0x5e
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
        _emit 0x14
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
