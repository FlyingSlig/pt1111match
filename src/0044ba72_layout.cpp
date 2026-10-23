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

extern const unsigned char PTR_FUN_004c44b8[8];
extern const unsigned char PTR_CoCreateInstance_004bc38c[4];
extern const unsigned char DAT_004c4b70[16];
extern const unsigned char DAT_004c4ba0[16];
extern const unsigned char DAT_004c4b60[16];
extern const unsigned char DAT_004c4bc0[16];
extern const unsigned char DAT_004c4bd0[16];
extern const unsigned char DAT_004c5e2c[4];
extern unsigned char DAT_004ddb0c[12];
extern const unsigned char DAT_004c4b50[16];
extern const unsigned char DAT_004c4bb0[16];
extern const unsigned char DAT_004c4b80[16];











// GAP: PORT1111 0x0044ba72
__declspec(naked) void gap_0044ba72(void)
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

// FUNCTION: PORT1111 0x0044ba80
__declspec(naked) void __fastcall FUN_0044ba80(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x08
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x10
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2e
        _emit 0x8b
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x14
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x10
        _emit 0x50
        _emit 0xff
        _emit 0x92
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x08
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0x3e
        _emit 0x00
        _emit 0x5e
        _emit 0x74
        _emit 0x06
        jmp dword ptr [CoUninitialize]
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0044baed
__declspec(naked) void gap_0044baed(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0044baf0
__declspec(naked) int * __fastcall FUN_0044baf0(int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x04
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x59
        _emit 0xc3
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x8b
        _emit 0x08
        _emit 0x8d
        _emit 0x14
        _emit 0x24
        _emit 0x52
        _emit 0x50
        _emit 0xff
        _emit 0x91
        _emit 0xcc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x04
        _emit 0x24
        _emit 0x59
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0044bb18
__declspec(naked) void gap_0044bb18(void)
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
    }
}

// FUNCTION: PORT1111 0x0044bb20
__declspec(naked) void __fastcall FUN_0044bb20(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x30
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0044bb2e
__declspec(naked) void gap_0044bb2e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0044bb30
__declspec(naked) void __fastcall FUN_0044bb30(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x14
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0044bb46
__declspec(naked) void gap_0044bb46(void)
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

// FUNCTION: PORT1111 0x0044bb50
__declspec(naked) int * __fastcall FUN_0044bb50(void *pthis,int param_1,int param_2,void *param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x89
        _emit 0x4e
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8d
        _emit 0x7e
        _emit 0x10
        _emit 0x51
        mov dword ptr [esi], OFFSET PTR_FUN_004c44b8
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0xc7
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x10
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x6c
        _emit 0x85
        _emit 0xc0
        _emit 0x7c
        _emit 0x22
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x10
        _emit 0x57
        _emit 0x6a
        _emit 0x01
        _emit 0x51
        _emit 0x50
        _emit 0xff
        _emit 0x92
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x10
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x0044bbbf
__declspec(naked) void gap_0044bbbf(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0044bbc0
__declspec(naked) void __fastcall FUN_0044bbc0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xcf
        mov dword ptr [esi], OFFSET PTR_FUN_004c44b8
        _emit 0x74
        _emit 0x50
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x10
        _emit 0x51
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x34
        _emit 0x39
        _emit 0x7e
        _emit 0x14
        _emit 0x74
        _emit 0x1d
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x3b
        _emit 0xcf
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0x10
        _emit 0x51
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x78
        _emit 0xeb
        _emit 0x0a
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x8b
        _emit 0x08
        _emit 0x52
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x78
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x10
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0x10
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0044bc29
__declspec(naked) void gap_0044bc29(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x04
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x4b
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x44
        _emit 0x8b
        _emit 0x41
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x09
        _emit 0xb8
        _emit 0x05
        _emit 0x40
        _emit 0x00
        _emit 0x80
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x09
        _emit 0x8b
        _emit 0x41
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x02
        _emit 0x8b
        _emit 0xd0
        _emit 0x8b
        _emit 0x49
        _emit 0x0c
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x56
        _emit 0x51
        _emit 0xff
        _emit 0x90
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xb8
        _emit 0xf0
        _emit 0x01
        _emit 0x04
        _emit 0x80
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0044bc90
__declspec(naked) int __fastcall FUN_0044bc90(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x15
        _emit 0x8b
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x14
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xb8
        _emit 0xf0
        _emit 0x01
        _emit 0x04
        _emit 0x80
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0044bcbb
__declspec(naked) void gap_0044bcbb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0044bcc0
__declspec(naked) void FUN_0044bcc0(void *pthis,int param_1,int param_2,int param_3,int param_4)
{
    __asm {
        _emit 0x55
        mov ebp, dword ptr [CoCreateInstance]
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8d
        _emit 0x4f
        _emit 0x04
        _emit 0x51
        push OFFSET DAT_004c4b70
        _emit 0x6a
        _emit 0x03
        _emit 0xf7
        _emit 0xde
        _emit 0x6a
        _emit 0x00
        _emit 0x1b
        _emit 0xf6
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        push OFFSET DAT_004c4ba0
        _emit 0x23
        _emit 0xf0
        _emit 0xff
        _emit 0xd5
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x8c
        _emit 0x8f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x8d
        _emit 0x5f
        _emit 0x08
        _emit 0x53
        push OFFSET DAT_004c4b60
        _emit 0x6a
        _emit 0x03
        _emit 0x6a
        _emit 0x00
        push OFFSET DAT_004c4bc0
        _emit 0xff
        _emit 0xd5
        _emit 0x85
        _emit 0xc0
        _emit 0x7c
        _emit 0x75
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x1b
        _emit 0x8b
        _emit 0x13
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x3f
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x51
        _emit 0x50
        _emit 0x56
        _emit 0x6a
        _emit 0x00
        _emit 0x53
        _emit 0xff
        _emit 0x92
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x7d
        _emit 0x0e
        _emit 0x3d
        _emit 0x78
        _emit 0x00
        _emit 0x78
        _emit 0x88
        _emit 0x75
        _emit 0x49
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        call FUN_0044baf0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x35
        _emit 0x8b
        _emit 0x08
        _emit 0x8d
        _emit 0x77
        _emit 0x0c
        _emit 0x56
        push OFFSET DAT_004c4bd0
        _emit 0x6a
        _emit 0x00
        push OFFSET DAT_004c5e2c
        _emit 0x6a
        _emit 0x00
        _emit 0x68
        _emit 0x00
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x7c
        _emit 0x12
        _emit 0x8b
        _emit 0x0e
        _emit 0x8d
        _emit 0x47
        _emit 0x10
        _emit 0x50
        _emit 0xc7
        _emit 0x00
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x11
        _emit 0x51
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}


// GAP: PORT1111 0x0044bd8a
__declspec(naked) void gap_0044bd8a(void)
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

// FUNCTION: PORT1111 0x0044bd90
__declspec(naked) int __fastcall FUN_0044bd90(void *pthis,int param_1,LPCSTR param_2)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b89de
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
        _emit 0x81
        _emit 0xec
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004ddb0c]
        _emit 0x56
        _emit 0x89
        _emit 0x84
        _emit 0x24
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x84
        _emit 0x24
        _emit 0x2c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xf1
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0044bf60
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x10
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x51
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        push OFFSET DAT_004c4b50
        push OFFSET DAT_004c4bb0
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x38
        _emit 0x85
        _emit 0xc0
        _emit 0x7d
        _emit 0x10
        _emit 0x3d
        _emit 0x82
        _emit 0x11
        _emit 0x78
        _emit 0x88
        _emit 0x0f
        _emit 0x85
        _emit 0xc1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xe9
        _emit 0xbc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x18
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
        _emit 0x84
        _emit 0x24
        _emit 0x20
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x52
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x51
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        call FUN_0044bb50
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xb4
        _emit 0x24
        _emit 0x28
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x84
        _emit 0x24
        _emit 0x20
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x06
        _emit 0x75
        _emit 0x07
        _emit 0xb8
        _emit 0x0e
        _emit 0x00
        _emit 0x07
        _emit 0x80
        _emit 0xeb
        _emit 0x68
        _emit 0x8b
        _emit 0x84
        _emit 0x24
        _emit 0x34
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1b
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET DAT_004c4b80
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x4c
        _emit 0x85
        _emit 0xc0
        _emit 0x7c
        _emit 0x42
        _emit 0x8b
        _emit 0x84
        _emit 0x24
        _emit 0x30
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x35
        _emit 0x8b
        _emit 0x36
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x07
        _emit 0xb8
        _emit 0xf0
        _emit 0x01
        _emit 0x04
        _emit 0x80
        _emit 0xeb
        _emit 0x27
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0x10
        _emit 0x51
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x74
        _emit 0xeb
        _emit 0x0a
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x8b
        _emit 0x08
        _emit 0x52
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x74
        _emit 0x85
        _emit 0xc0
        _emit 0x7c
        _emit 0x09
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0x18
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        call pt_a_00497aa6
        _emit 0x81
        _emit 0xc4
        _emit 0x20
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x0044beed
__declspec(naked) void gap_0044beed(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
