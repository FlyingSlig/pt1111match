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

extern int DAT_004bd1f0;
extern int DAT_004bd1c8;
extern const unsigned char PTR_FUN_004bd2f8[216];
extern const unsigned char PTR_LAB_004bd2cc[44];
extern const unsigned char DAT_004bd2c8[1];












// FUNCTION: PORT1111 0x00409170
__declspec(naked) int __fastcall FUN_00409170(void *pthis,void *param_1)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x83
        _emit 0xe4
        _emit 0xf8
        _emit 0x83
        _emit 0xec
        _emit 0x1c
        _emit 0x8b
        _emit 0x45
        _emit 0x08
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_00406140
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        _emit 0x8b
        _emit 0x50
        _emit 0x40
        _emit 0x8b
        _emit 0x58
        _emit 0x38
        _emit 0x3b
        _emit 0xda
        _emit 0x8b
        _emit 0x78
        _emit 0x34
        _emit 0x8b
        _emit 0x48
        _emit 0x3c
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x7d
        _emit 0x61
        _emit 0x8b
        _emit 0xff
        _emit 0x3b
        _emit 0xf9
        _emit 0x7d
        _emit 0x56
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0x04
        _emit 0x85
        _emit 0xdb
        _emit 0x74
        _emit 0x38
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x28
        call FUN_004267d0
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x4e
        _emit 0x50
        _emit 0x52
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        call pt_a_00418fb0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x56
        call FUN_004281d0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x40
        _emit 0x47
        _emit 0x3b
        _emit 0xf9
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x7c
        _emit 0xb2
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x43
        _emit 0x3b
        _emit 0xda
        _emit 0x7c
        _emit 0xa1
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0xd4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00409227
__declspec(naked) void gap_00409227(void)
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

// FUNCTION: PORT1111 0x00409230
__declspec(naked) void __fastcall FUN_00409230(int param_1)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x83
        _emit 0xe4
        _emit 0xf8
        _emit 0x83
        _emit 0xec
        _emit 0x18
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x57
        call FUN_00407810
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        _emit 0x8b
        _emit 0x50
        _emit 0x40
        _emit 0x8b
        _emit 0x58
        _emit 0x38
        _emit 0x3b
        _emit 0xda
        _emit 0x8b
        _emit 0x78
        _emit 0x34
        _emit 0x8b
        _emit 0x48
        _emit 0x3c
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x7d
        _emit 0x5d
        _emit 0x8b
        _emit 0xff
        _emit 0x3b
        _emit 0xf9
        _emit 0x7d
        _emit 0x52
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0x04
        _emit 0x85
        _emit 0xdb
        _emit 0x74
        _emit 0x34
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x50
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x28
        call FUN_004267d0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x50
        _emit 0x8b
        _emit 0xe8
        call pt_a_00418fb0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xcd
        call FUN_00428930
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x40
        _emit 0x47
        _emit 0x3b
        _emit 0xf9
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x7c
        _emit 0xb6
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x43
        _emit 0x3b
        _emit 0xda
        _emit 0x7c
        _emit 0xa5
        _emit 0x8b
        _emit 0xce
        call FUN_00406500
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004092da
__declspec(naked) void gap_004092da(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004092e0
__declspec(naked) int * __fastcall FUN_004092e0(void *pthis,int param_1,unsigned int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_004090e0
        mov dword ptr [esi], OFFSET DAT_004bd1f0
        mov dword ptr [esi + 0x14], OFFSET DAT_004bd1c8
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040930c
__declspec(naked) void gap_0040930c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
