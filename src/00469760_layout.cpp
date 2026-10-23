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

extern const unsigned char PTR_FUN_004c5fac[16];
extern unsigned char DAT_004e2b04[12];
extern const unsigned char s_I1024__004c5f44[8];
extern const unsigned char s_I800__004c5f3c[8];
extern const unsigned char s_I640__004c5f34[8];
extern unsigned char DAT_004e2af8[4];
extern unsigned char DAT_004e2ac8[20];
extern unsigned char DAT_004e2adc[12];
extern unsigned char DAT_004e2c24[4];
extern unsigned char DAT_004e2af0[8];
extern unsigned char DAT_004e2aec[4];
extern unsigned char DAT_004e2b28[1];
extern unsigned char DAT_004e2b28_1[3];
extern const unsigned char DAT_004bd2c8[1];











// GAP: PORT1111 0x00469760
__declspec(naked) void gap_00469760(void)
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

// FUNCTION: PORT1111 0x00469770
__declspec(naked) void __fastcall FUN_00469770(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b99e8
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
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        mov dword ptr [esi], OFFSET PTR_FUN_004c5fac
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x0e
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00468f30
        _emit 0x8d
        _emit 0x8e
        _emit 0xec
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x0d
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x78
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x0c
        call FUN_00488ad0
        _emit 0x8d
        _emit 0x4e
        _emit 0x74
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x0b
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x54
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x0a
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x50
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x09
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x40
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x08
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x3c
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x07
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x38
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x06
        call FUN_00465e40
        _emit 0x8b
        _emit 0x46
        _emit 0x30
        _emit 0x8b
        _emit 0x08
        _emit 0x8d
        _emit 0x7e
        _emit 0x2c
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x05
        call pt_a_00469290
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
    }
}

// GAP: PORT1111 0x00469832
__declspec(naked) void gap_00469832(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8d
        _emit 0x4e
        _emit 0x24
        _emit 0xc7
        _emit 0x47
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x47
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x04
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x18
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x03
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x02
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x10
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x01
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x0c
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x5f
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
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
        _emit 0x14
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004698b0
__declspec(naked) int * FUN_004698b0(void)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b9b3b
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
        _emit 0x6a
        _emit 0x3c
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x04
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0xc8
        call FUN_004745a0
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
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x33
        _emit 0xc0
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

// GAP: PORT1111 0x00469906
__declspec(naked) void gap_00469906(void)
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

// FUNCTION: PORT1111 0x00469910
__declspec(naked) unsigned short * __fastcall FUN_00469910(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x8b
        _emit 0x42
        _emit 0x04
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x53
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x75
        _emit 0x21
        _emit 0x57
        _emit 0x66
        _emit 0x8b
        _emit 0x3e
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0x39
        _emit 0x78
        _emit 0x0c
        _emit 0x73
        _emit 0x05
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0xeb
        _emit 0x04
        _emit 0x8b
        _emit 0xd0
        _emit 0x8b
        _emit 0x00
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x74
        _emit 0xea
        _emit 0x5f
        _emit 0x3b
        _emit 0x51
        _emit 0x04
        _emit 0x74
        _emit 0x09
        _emit 0x66
        _emit 0x8b
        _emit 0x06
        _emit 0x66
        _emit 0x3b
        _emit 0x42
        _emit 0x0c
        _emit 0x73
        _emit 0x2d
        _emit 0x66
        _emit 0x8b
        _emit 0x06
        _emit 0x66
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x52
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x52
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004695c0
        _emit 0x8b
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc0
        _emit 0x10
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5e
        _emit 0x8d
        _emit 0x42
        _emit 0x10
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0046998d
__declspec(naked) void gap_0046998d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00469990
__declspec(naked) int * __fastcall FUN_00469990(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b9aa8
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
        _emit 0x57
        _emit 0x8d
        _emit 0x4e
        _emit 0x08
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        mov dword ptr [esi], OFFSET PTR_FUN_004c5fac
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x4e
        _emit 0x0c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x4e
        _emit 0x10
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x02
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x4e
        _emit 0x18
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x03
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x4e
        _emit 0x24
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x04
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x7e
        _emit 0x2c
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x05
        call FUN_004748f0
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0xc6
        _emit 0x40
        _emit 0x15
        _emit 0x01
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x08
        _emit 0xc7
        _emit 0x47
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4e
        _emit 0x38
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x06
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x4e
        _emit 0x3c
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x07
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x4e
        _emit 0x40
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x08
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x4e
        _emit 0x50
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x09
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x4e
        _emit 0x54
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x0a
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x4e
        _emit 0x74
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x0b
        call FUN_00465cf0
        _emit 0x8d
        _emit 0x4e
        _emit 0x78
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x0c
        call FUN_004889d0
        _emit 0x8d
        _emit 0xbe
        _emit 0xec
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x0d
        call FUN_00465cf0
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x0e
        call FUN_00465e00
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_00466a40
        _emit 0x8b
        _emit 0xce
        call FUN_00467dc0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xc7
        _emit 0x86
        _emit 0xf4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
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
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00469ad3
__declspec(naked) void gap_00469ad3(void)
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
    }
}
