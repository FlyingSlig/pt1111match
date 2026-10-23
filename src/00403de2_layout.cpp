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

extern const unsigned char DAT_004bca78[8];
extern const unsigned char DAT_004bca70[8];
extern const unsigned char DAT_004bca68[8];
extern const unsigned char DAT_004bca60[8];
extern const unsigned char DAT_004bca58[8];
extern const unsigned char DAT_004bca50[8];
extern const unsigned char DAT_004bca48[8];
extern const unsigned char DAT_004bca40[8];











// GAP: PORT1111 0x00403de2
__declspec(naked) void gap_00403de2(void)
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

// FUNCTION: PORT1111 0x00403df0
__declspec(naked) void __fastcall FUN_00403df0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0x01
        _emit 0x57
        _emit 0xff
        _emit 0x50
        _emit 0x2c
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x57
        call FUN_0045f090
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x56
        _emit 0x38
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00403e25
__declspec(naked) void gap_00403e25(void)
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
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b58ab
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x75
        _emit 0x7e
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x83
        _emit 0xff
        _emit 0xff
        _emit 0x74
        _emit 0x75
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x57
        _emit 0xc7
        _emit 0x46
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call pt_a_0045f050
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x57
        call FUN_0045f100
        _emit 0x6a
        _emit 0x18
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
        _emit 0x15
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x51
        _emit 0x52
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xc8
        call FUN_0045c3e0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
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
        _emit 0x0c
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00403ef0
__declspec(naked) int __fastcall FUN_00403ef0(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b58cb
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
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x57
        _emit 0xc7
        _emit 0x46
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0047fd20
        _emit 0x6a
        _emit 0x18
        _emit 0x8b
        _emit 0xf8
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x15
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x51
        _emit 0x52
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xc8
        call FUN_0045c3e0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
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
        _emit 0x10
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x00403f77
__declspec(naked) void gap_00403f77(void)
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

// FUNCTION: PORT1111 0x00403f80
__declspec(naked) int FUN_00403f80(int param_1,int param_2,int param_3,int param_4)
{
    __asm {
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xde
        _emit 0xe9
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xde
        _emit 0xe9
        _emit 0xd9
        _emit 0xf3
        fcom qword ptr [DAT_004bca78]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x05
        _emit 0x7a
        _emit 0x17
        fcom qword ptr [DAT_004bca70]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x01
        _emit 0x75
        _emit 0x0a
        _emit 0xdd
        _emit 0xd8
        _emit 0xb8
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        fcom qword ptr [DAT_004bca70]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x05
        _emit 0x7a
        _emit 0x17
        fcom qword ptr [DAT_004bca68]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x01
        _emit 0x75
        _emit 0x0a
        _emit 0xdd
        _emit 0xd8
        _emit 0xb8
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        fcom qword ptr [DAT_004bca68]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x05
        _emit 0x7a
        _emit 0x17
        fcom qword ptr [DAT_004bca60]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x01
        _emit 0x75
        _emit 0x0a
        _emit 0xdd
        _emit 0xd8
        _emit 0xb8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        fcom qword ptr [DAT_004bca60]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x05
        _emit 0x7a
        _emit 0x17
        fcom qword ptr [DAT_004bca58]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x01
        _emit 0x75
        _emit 0x0a
        _emit 0xdd
        _emit 0xd8
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        fcom qword ptr [DAT_004bca58]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x05
        _emit 0x7a
        _emit 0x14
        fcom qword ptr [DAT_004bca50]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x01
        _emit 0x75
        _emit 0x07
        _emit 0xdd
        _emit 0xd8
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        fcom qword ptr [DAT_004bca50]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x05
        _emit 0x7a
        _emit 0x15
        fcomp qword ptr [DAT_004bca48]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x01
        _emit 0x75
        _emit 0x39
        _emit 0xb8
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        fcom qword ptr [DAT_004bca48]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x05
        _emit 0x7b
        _emit 0x22
        fcom qword ptr [DAT_004bca40]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x01
        _emit 0x74
        _emit 0x15
        fcomp qword ptr [DAT_004bca78]
        _emit 0xdf
        _emit 0xe0
        _emit 0xf6
        _emit 0xc4
        _emit 0x01
        _emit 0x75
        _emit 0xb2
        _emit 0xb8
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0xdd
        _emit 0xd8
        _emit 0xb8
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x004040a2
__declspec(naked) void gap_004040a2(void)
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
