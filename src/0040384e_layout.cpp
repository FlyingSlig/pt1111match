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

extern int DAT_004e25f8;
extern unsigned char DAT_004d5274[];
extern unsigned char DAT_004d5270[4];
extern const unsigned char PTR_FUN_004bc96c[24];











// GAP: PORT1111 0x0040384e
__declspec(naked) void gap_0040384e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00403850
__declspec(naked) int __fastcall FUN_00403850(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x7e
        _emit 0x1c
        _emit 0x57
        _emit 0x8d
        _emit 0x5e
        _emit 0x18
        _emit 0x53
        _emit 0x8d
        _emit 0x6e
        _emit 0x14
        _emit 0x8d
        _emit 0x46
        _emit 0x10
        _emit 0x55
        _emit 0x50
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x50
        call FUN_004390f0
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0x4f
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x52
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00439060
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x41
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xc1
        _emit 0x99
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0xd1
        _emit 0xf8
        _emit 0xf7
        _emit 0xd8
        _emit 0x89
        _emit 0x02
        _emit 0x8b
        _emit 0xc6
        _emit 0x99
        _emit 0x2b
        _emit 0xc2
        _emit 0xd1
        _emit 0xf8
        _emit 0xf7
        _emit 0xd8
        _emit 0x89
        _emit 0x45
        _emit 0x00
        _emit 0x8b
        _emit 0xc1
        _emit 0x99
        _emit 0x2b
        _emit 0xc2
        _emit 0xd1
        _emit 0xf8
        _emit 0x89
        _emit 0x03
        _emit 0x8b
        _emit 0xc6
        _emit 0x99
        _emit 0x2b
        _emit 0xc2
        _emit 0xd1
        _emit 0xf8
        _emit 0x89
        _emit 0x07
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xb0
        _emit 0x01
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x32
        _emit 0xc0
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x004038e2
__declspec(naked) void gap_004038e2(void)
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
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8d
        _emit 0x41
        _emit 0x08
        _emit 0x50
        _emit 0x52
        call FUN_00439360
        _emit 0x84
        _emit 0xc0
        _emit 0x0f
        _emit 0x95
        _emit 0xc0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
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
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5848
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x7e
        _emit 0x0c
        _emit 0x57
        _emit 0x53
        call FUN_00439360
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0x47
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x50
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00439390
        _emit 0x84
        _emit 0xc0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x74
        _emit 0x37
        _emit 0x57
        _emit 0x51
        mov ecx, OFFSET DAT_004e25f8
        call FUN_00437290
        _emit 0x84
        _emit 0xc0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x74
        _emit 0x23
        call FUN_00465e40
        _emit 0xb0
        _emit 0x01
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
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
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
        _emit 0x5e
        _emit 0x32
        _emit 0xc0
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004039c0
__declspec(naked) unsigned int FUN_004039c0(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xe9
        _emit 0x33
        _emit 0xff
        mov esi, OFFSET DAT_004d5270
        _emit 0x83
        _emit 0x3e
        _emit 0x00
        _emit 0x74
        _emit 0x32
        _emit 0x8b
        _emit 0x46
        _emit 0xf8
        _emit 0x50
        _emit 0x8d
        _emit 0x4b
        _emit 0x04
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x06
        _emit 0x47
        _emit 0x83
        _emit 0xc6
        _emit 0x18
        _emit 0xeb
        _emit 0xe5
        _emit 0x8d
        _emit 0x04
        _emit 0x7f
        _emit 0xc1
        _emit 0xe0
        _emit 0x03
        mov ecx, dword ptr [eax + DAT_004d5274]
        _emit 0x53
        _emit 0x03
        _emit 0xcd
        _emit 0xff
        _emit 0x90
        _emit 0x70
        _emit 0x52
        _emit 0x4d
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x32
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00403a11
__declspec(naked) void gap_00403a11(void)
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
