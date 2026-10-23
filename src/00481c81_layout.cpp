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

extern const unsigned char s_Arial_004c62ac[];
extern const unsigned char PTR_FUN_004c6908[8];
extern const unsigned char PTR_FUN_004c6910[8];
extern int DAT_004c6918;
extern const unsigned char DAT_004bd2c8[1];











// GAP: PORT1111 0x00481c81
__declspec(naked) void gap_00481c81(void)
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

// FUNCTION: PORT1111 0x00481c90
__declspec(naked) int __fastcall FUN_00481c90(void *pthis,void *param_1,unsigned int param_2)
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
        push OFFSET pt_eh_stub_004ba65b
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x50
        _emit 0x89
        _emit 0x4e
        _emit 0x04
        call FUN_0047cf90
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x12
        _emit 0x5e
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x1c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x10
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x52
        _emit 0x30
        _emit 0x68
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_004701f0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x6a
        _emit 0x01
        _emit 0x52
        call FUN_0047e100
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0xc7
        _emit 0x80
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0xc7
        _emit 0x81
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x6a
        _emit 0x0a
        _emit 0x81
        _emit 0xc2
        _emit 0xac
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push OFFSET s_Arial_004c62ac
        _emit 0x52
        call FUN_0048a340
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc6
        _emit 0x80
        _emit 0xc6
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x03
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
        _emit 0x1c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00481d92
__declspec(naked) void gap_00481d92(void)
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

// FUNCTION: PORT1111 0x00481da0
__declspec(naked) void __fastcall FUN_00481da0(void *pthis,int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x57
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0xf7
        _emit 0xd8
        _emit 0x50
        _emit 0xf7
        _emit 0xd9
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        call dword ptr [InflateRect]
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x8b
        _emit 0xd4
        _emit 0x89
        _emit 0x3a
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x7a
        _emit 0x04
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x7a
        _emit 0x08
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x7a
        _emit 0x0c
        _emit 0xff
        _emit 0x50
        _emit 0x3c
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x5f
        _emit 0xc7
        _emit 0x80
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00481e0a
__declspec(naked) void gap_00481e0a(void)
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

// FUNCTION: PORT1111 0x00481e10
__declspec(naked) void __fastcall FUN_00481e10(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x01
        _emit 0xc3
        _emit 0x8d
        _emit 0x88
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        jmp FUN_00465e00
    }
}

// GAP: PORT1111 0x00481e23
__declspec(naked) void gap_00481e23(void)
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

// FUNCTION: PORT1111 0x00481e30
__declspec(naked) void __fastcall FUN_00481e30(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x49
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        jmp FUN_004737d0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00481e3f
__declspec(naked) void gap_00481e3f(void)
{
    __asm {
        _emit 0xcc
        _emit 0x83
        _emit 0xec
        _emit 0x20
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x8d
        _emit 0xb9
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00470510
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x11
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x30
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x2b
        _emit 0xca
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x2b
        _emit 0xd0
        _emit 0x3b
        _emit 0xca
        _emit 0x7f
        _emit 0x14
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_00467000
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        call FUN_00473200
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00481ea0
__declspec(naked) void __fastcall FUN_00481ea0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x77
        _emit 0x08
        _emit 0x81
        _emit 0xc6
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00465d00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x23
        _emit 0x8b
        _emit 0xce
        call FUN_00465d00
        _emit 0x48
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00465d00
        _emit 0x48
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00466bc0
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        jmp FUN_00473200
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00481ede
__declspec(naked) void gap_00481ede(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x2d
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x74
        _emit 0x5f
        _emit 0x83
        _emit 0xe8
        _emit 0x02
        _emit 0x75
        _emit 0x5a
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x83
        _emit 0xfe
        _emit 0x08
        _emit 0x74
        _emit 0x3f
        _emit 0x83
        _emit 0xfe
        _emit 0x1b
        _emit 0x74
        _emit 0x1f
        _emit 0x56
        _emit 0xe8
        _emit 0x31
        _emit 0x74
        _emit 0x01
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x34
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        _emit 0xe8
        _emit 0x29
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1b
        push OFFSET DAT_004bd2c8
        call FUN_004737d0
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        call FUN_00481ea0
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0xc2
        _emit 0x10
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

// FUNCTION: PORT1111 0x00481f60
__declspec(naked) void __fastcall FUN_00481f60(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        mov dword ptr [esi], OFFSET PTR_FUN_004c6908
        _emit 0x74
        _emit 0x1d
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x50
        call FUN_0047d9d0
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00481f8f
__declspec(naked) void gap_00481f8f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00481f90
__declspec(naked) int * __fastcall FUN_00481f90(void *pthis,unsigned char param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        mov dword ptr [esi], OFFSET PTR_FUN_004c6908
        _emit 0x74
        _emit 0x1d
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x50
        call FUN_0047d9d0
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x01
        _emit 0x74
        _emit 0x09
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
    }
}


// GAP: PORT1111 0x00481fd0
__declspec(naked) void gap_00481fd0(void)
{
    __asm {
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00481fe0
__declspec(naked) void __fastcall FUN_00481fe0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba691
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
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x04
        mov dword ptr [esi], OFFSET PTR_FUN_004c6910
        _emit 0x8d
        _emit 0x4e
        _emit 0x20
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x1c
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x01
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x0c
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4e
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
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

// GAP: PORT1111 0x0048204d
__declspec(naked) void gap_0048204d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00482050
__declspec(naked) int __fastcall FUN_00482050(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x18
        _emit 0x8b
        _emit 0x80
        _emit 0xa4
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xe8
        _emit 0x00
        _emit 0x74
        _emit 0x53
        _emit 0x48
        _emit 0x56
        _emit 0x74
        _emit 0x2b
        _emit 0x48
        _emit 0x74
        _emit 0x06
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x83
        _emit 0xc1
        _emit 0x08
        call FUN_00465e00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0xc1
        _emit 0x08
        _emit 0x8b
        _emit 0xf0
        call FUN_00465e00
        _emit 0x50
        _emit 0x56
        call dword ptr [lstrcmpiA]
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x83
        _emit 0xc1
        _emit 0x08
        call FUN_00465e00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0xc1
        _emit 0x08
        _emit 0x8b
        _emit 0xf0
        call FUN_00465e00
        _emit 0x50
        _emit 0x56
        call _mbsicmp
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x5e
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

// GAP: PORT1111 0x004820b6
__declspec(naked) void gap_004820b6(void)
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

// FUNCTION: PORT1111 0x004820c0
__declspec(naked) void __fastcall FUN_004820c0(int param_1)
{
    __asm {
        _emit 0x33
        _emit 0xc0
        _emit 0xba
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x81
        _emit 0xb0
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x51
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x89
        _emit 0x51
        _emit 0x0c
        _emit 0x89
        _emit 0x41
        _emit 0x10
        _emit 0x89
        _emit 0x41
        _emit 0x14
        _emit 0x89
        _emit 0x41
        _emit 0x18
        _emit 0x89
        _emit 0x41
        _emit 0x1c
        _emit 0x89
        _emit 0x41
        _emit 0x20
        _emit 0x89
        _emit 0x41
        _emit 0x24
        _emit 0x66
        _emit 0x89
        _emit 0x41
        _emit 0x28
        _emit 0x89
        _emit 0x41
        _emit 0x2c
        _emit 0xc7
        _emit 0x81
        _emit 0x88
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x81
        _emit 0x8c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x81
        _emit 0xa0
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x81
        _emit 0xa4
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x91
        _emit 0xb4
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x81
        _emit 0xa8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x81
        _emit 0xac
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x81
        _emit 0xb8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00482124
__declspec(naked) void gap_00482124(void)
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
    }
}

// FUNCTION: PORT1111 0x00482130
__declspec(naked) int __fastcall FUN_00482130(void *param_1)
{
    __asm {
        mov dword ptr [ecx], OFFSET DAT_004c6918
        call FUN_004820c0
        _emit 0x8b
        _emit 0xc1
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048213e
__declspec(naked) void gap_0048213e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00482140
__declspec(naked) int __fastcall FUN_00482140(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xff
        _emit 0x8b
        _emit 0xf1
        _emit 0x7c
        _emit 0x2b
        _emit 0x8b
        _emit 0x8e
        _emit 0xa8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_004810c0
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x8b
        _emit 0x76
        _emit 0x24
        _emit 0x03
        _emit 0xc8
        _emit 0x3b
        _emit 0xce
        _emit 0x7e
        _emit 0x02
        _emit 0x8b
        _emit 0xce
        _emit 0x3b
        _emit 0xf8
        _emit 0x7c
        _emit 0x0e
        _emit 0x3b
        _emit 0xf9
        _emit 0x7f
        _emit 0x0a
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0048217e
__declspec(naked) void gap_0048217e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00482180
__declspec(naked) int __fastcall FUN_00482180(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x51
        _emit 0x20
        _emit 0x56
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xd2
        _emit 0x57
        _emit 0x7e
        _emit 0x19
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x83
        _emit 0xc1
        _emit 0x30
        _emit 0x8b
        _emit 0x39
        _emit 0x0f
        _emit 0xb7
        _emit 0x7f
        _emit 0x2c
        _emit 0x3b
        _emit 0xf7
        _emit 0x74
        _emit 0x0f
        _emit 0x40
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        _emit 0x3b
        _emit 0xc2
        _emit 0x7c
        _emit 0xee
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x004821b5
__declspec(naked) void gap_004821b5(void)
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
