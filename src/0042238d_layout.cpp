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

extern "C" void free_thunk(void *);
extern unsigned char DAT_004d6428[];
extern int DAT_004e2404;
extern unsigned char DAT_004e2420[4];
extern const unsigned char PTR_FUN_004bf758[4];
extern unsigned char DAT_004e2b14[12];
extern const unsigned char s_SEL_S_NO_png_004bf77c[16];
extern const unsigned char s_SEL_L_NO_png_004bf76c[16];
extern const unsigned char s_SEL_XL_NO_png_004bf75c[16];











// GAP: PORT1111 0x0042238d
__declspec(naked) void gap_0042238d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00422390
__declspec(naked) int __fastcall FUN_00422390(void *pthis,unsigned int param_1,unsigned int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x64
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0xf0
        _emit 0x73
        _emit 0x18
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0x51
        _emit 0x68
        _emit 0x73
        _emit 0x0f
        _emit 0x8b
        _emit 0x49
        _emit 0x60
        _emit 0x0f
        _emit 0xaf
        _emit 0xc2
        _emit 0x03
        _emit 0xc6
        _emit 0x8b
        _emit 0x04
        _emit 0x81
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x004223bd
__declspec(naked) void gap_004223bd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004223c0
__declspec(naked) int __fastcall FUN_004223c0(void *pthis,unsigned int param_1,unsigned int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x52
        _emit 0x50
        call FUN_004296c0
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0x3b
        _emit 0xd0
        _emit 0x73
        _emit 0x18
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0x4e
        _emit 0x68
        _emit 0x73
        _emit 0x0f
        _emit 0x0f
        _emit 0xaf
        _emit 0xc1
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x03
        _emit 0xc2
        _emit 0x8b
        _emit 0x04
        _emit 0x81
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0042240b
__declspec(naked) void gap_0042240b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00422410
__declspec(naked) int __fastcall FUN_00422410(void *pthis,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xc8
        _emit 0x57
        _emit 0x73
        _emit 0x17
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x3b
        _emit 0x56
        _emit 0x68
        _emit 0x73
        _emit 0x0e
        _emit 0x8b
        _emit 0x7e
        _emit 0x60
        _emit 0x0f
        _emit 0xaf
        _emit 0xc2
        _emit 0x03
        _emit 0xc1
        _emit 0x83
        _emit 0x3c
        _emit 0x87
        _emit 0x00
        _emit 0x74
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x55
        _emit 0x8d
        _emit 0x6b
        _emit 0x01
        _emit 0x3b
        _emit 0xcd
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        _emit 0x75
        _emit 0x2f
        _emit 0x8d
        _emit 0x47
        _emit 0xff
        _emit 0x3b
        _emit 0xd0
        _emit 0x75
        _emit 0x28
        _emit 0x8d
        _emit 0x4f
        _emit 0xff
        _emit 0x51
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_00422390
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0f
        _emit 0x57
        _emit 0x8b
        _emit 0xd5
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_00422390
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x5f
        _emit 0x5d
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8d
        _emit 0x43
        _emit 0xff
        _emit 0x3b
        _emit 0xc8
        _emit 0x75
        _emit 0x30
        _emit 0x8d
        _emit 0x6f
        _emit 0x01
        _emit 0x3b
        _emit 0xd5
        _emit 0x75
        _emit 0x05
        _emit 0x8d
        _emit 0x43
        _emit 0xff
        _emit 0xeb
        _emit 0x32
        _emit 0x3b
        _emit 0xc8
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        _emit 0x75
        _emit 0x1c
        _emit 0x8d
        _emit 0x47
        _emit 0xff
        _emit 0x3b
        _emit 0xd0
        _emit 0x75
        _emit 0x15
        _emit 0x8d
        _emit 0x4f
        _emit 0xff
        _emit 0x51
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_00422390
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0xc5
        _emit 0x57
        _emit 0x4b
        _emit 0x53
        _emit 0xeb
        _emit 0xb5
        _emit 0x3b
        _emit 0xcd
        _emit 0x75
        _emit 0x1b
        _emit 0x8d
        _emit 0x6f
        _emit 0x01
        _emit 0x3b
        _emit 0xd5
        _emit 0x75
        _emit 0x14
        _emit 0x8d
        _emit 0x43
        _emit 0x01
        _emit 0x57
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00422390
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0xa5
        _emit 0x55
        _emit 0x53
        _emit 0xeb
        _emit 0x96
        _emit 0x5d
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}


// GAP: PORT1111 0x004224e4
__declspec(naked) void gap_004224e4(void)
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

// FUNCTION: PORT1111 0x004224f0
__declspec(naked) int __fastcall FUN_004224f0(void *pthis,unsigned int param_1,unsigned int param_2,int param_3,int param_4)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x52
        _emit 0x50
        call FUN_004296f0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x23
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x50
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        call FUN_004296f0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x09
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x51
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_00422410
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}


// GAP: PORT1111 0x00422567
__declspec(naked) void gap_00422567(void)
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

// FUNCTION: PORT1111 0x00422570
__declspec(naked) void __fastcall FUN_00422570(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x81
        _emit 0x08
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x49
        _emit 0x34
        _emit 0x68
        _emit 0xf4
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2420]
        call FUN_00442660
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00422591
__declspec(naked) void gap_00422591(void)
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

// FUNCTION: PORT1111 0x004225a0
__declspec(naked) void __fastcall FUN_004225a0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x91
        _emit 0x04
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x03
        _emit 0xd0
        _emit 0x89
        _emit 0x91
        _emit 0x04
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x49
        _emit 0x34
        _emit 0x68
        _emit 0x43
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2420]
        call FUN_00442660
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004225c9
__declspec(naked) void gap_004225c9(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004225d0
__declspec(naked) bool __fastcall FUN_004225d0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x28
        _emit 0x8b
        _emit 0x49
        _emit 0x2c
        _emit 0x50
        call FUN_00444350
        _emit 0x33
        _emit 0xc9
        _emit 0x83
        _emit 0xf8
        _emit 0xce
        _emit 0x0f
        _emit 0x9c
        _emit 0xc1
        _emit 0x8b
        _emit 0xc1
        _emit 0xc3
    }
}


// GAP: PORT1111 0x004225e7
__declspec(naked) void gap_004225e7(void)
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

// FUNCTION: PORT1111 0x004225f0
__declspec(naked) void __fastcall FUN_004225f0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6d3b
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
        mov dword ptr [esi], OFFSET PTR_FUN_004bf758
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00421fa0
        _emit 0x8d
        _emit 0x4e
        _emit 0x30
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


// FUNCTION: PORT1111 0x00422640
__declspec(naked) int __fastcall FUN_00422640(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6d70
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
        _emit 0x34
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call FUN_0047e2c0
        mov ecx, dword ptr [DAT_004e2b14]
        push OFFSET s_SEL_S_NO_png_004bf77c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x4c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00468080
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x60
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x4c
        _emit 0x01
        call FUN_00465e00
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        call FUN_0047e4d0
        _emit 0x8b
        _emit 0xd8
        _emit 0xf7
        _emit 0xdb
        _emit 0x1a
        _emit 0xdb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xfe
        _emit 0xc3
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x44
        _emit 0x00
        call FUN_00465e40
        _emit 0x84
        _emit 0xdb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x0f
        _emit 0x85
        _emit 0x2a
        _emit 0x01
        _emit 0x00
        _emit 0x00
        call FUN_0047e810
        _emit 0xd1
        _emit 0xf8
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x10
        call FUN_0047e870
        _emit 0xd1
        _emit 0xf8
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x1c
        call FUN_0047e740
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0xc7
        _emit 0x40
        _emit 0x0c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0x8b
        _emit 0x46
        _emit 0x58
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x8b
        _emit 0x4a
        _emit 0x04
        _emit 0x0f
        _emit 0xb7
        _emit 0xc0
        _emit 0x89
        _emit 0x41
        _emit 0x18
        push OFFSET s_SEL_L_NO_png_004bf76c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2b14]
        call FUN_00468080
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x4a
        _emit 0x60
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x4c
        _emit 0x02
        call FUN_00465e00
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        call FUN_0047e4d0
        _emit 0x8b
        _emit 0xd8
        _emit 0xf7
        _emit 0xdb
        _emit 0x1a
        _emit 0xdb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xfe
        _emit 0xc3
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x44
        _emit 0x00
        call FUN_00465e40
        _emit 0x84
        _emit 0xdb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x0f
        _emit 0x85
        _emit 0x93
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0047e810
        _emit 0xd1
        _emit 0xf8
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x14
        call FUN_0047e870
        _emit 0xd1
        _emit 0xf8
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x20
        call FUN_0047e740
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0xc7
        _emit 0x40
        _emit 0x0c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0x8b
        _emit 0x46
        _emit 0x58
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0x0f
        _emit 0xb7
        _emit 0xd0
        push OFFSET s_SEL_XL_NO_png_004bf75c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x51
        _emit 0x18
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x50
        call FUN_00468080
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x60
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x4c
        _emit 0x03
        call FUN_00465e00
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        call FUN_0047e4d0
        _emit 0x8b
        _emit 0xd8
        _emit 0xf7
        _emit 0xdb
        _emit 0x1a
        _emit 0xdb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xfe
        _emit 0xc3
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x44
        _emit 0x00
        call FUN_00465e40
        _emit 0x84
        _emit 0xdb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x20
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x44
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_0047e300
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x34
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x40
        _emit 0xc3
        call FUN_0047e810
        _emit 0xd1
        _emit 0xf8
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x18
        call FUN_0047e870
        _emit 0xd1
        _emit 0xf8
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x24
        call FUN_0047e740
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0xc7
        _emit 0x40
        _emit 0x0c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0x8b
        _emit 0x46
        _emit 0x58
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x8b
        _emit 0x4a
        _emit 0x04
        _emit 0x0f
        _emit 0xb7
        _emit 0xc0
        _emit 0x89
        _emit 0x41
        _emit 0x18
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x44
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_0047e300
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x3c
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
        _emit 0x40
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00422877
__declspec(naked) void gap_00422877(void)
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

// FUNCTION: PORT1111 0x00422880
__declspec(naked) void __fastcall FUN_00422880(void *pthis,int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x33
        _emit 0xed
        _emit 0x2b
        _emit 0xc5
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x0f
        _emit 0x84
        _emit 0xe4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x48
        _emit 0x74
        _emit 0x5e
        _emit 0x48
        _emit 0x0f
        _emit 0x85
        _emit 0x58
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x48
        _emit 0x5c
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x2c
        _emit 0x8b
        _emit 0x5e
        _emit 0x24
        _emit 0x8b
        _emit 0x11
        _emit 0x55
        _emit 0x8b
        _emit 0xc7
        _emit 0x2b
        _emit 0xc3
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x2c
        _emit 0x50
        _emit 0x8b
        _emit 0xc3
        _emit 0x2b
        _emit 0x46
        _emit 0x18
        _emit 0x50
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x28
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        call FUN_0047e870
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        call FUN_0047e810
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x6e
        _emit 0x18
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0xe9
        _emit 0xd6
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x4a
        _emit 0x5c
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x2c
        _emit 0x8b
        _emit 0x5e
        _emit 0x20
        _emit 0x8b
        _emit 0x01
        _emit 0x55
        _emit 0x8b
        _emit 0xd7
        _emit 0x2b
        _emit 0xd3
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x2c
        _emit 0x52
        _emit 0x8b
        _emit 0xd3
        _emit 0x2b
        _emit 0x56
        _emit 0x14
        _emit 0x52
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x28
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        call FUN_0047e870
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        call FUN_0047e810
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x2b
        _emit 0x7e
        _emit 0x20
        _emit 0x57
        _emit 0x2b
        _emit 0x5e
        _emit 0x14
        _emit 0x53
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x20
        call dword ptr [OffsetRect]
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x48
        _emit 0x5c
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x83
        _emit 0xc1
        _emit 0x14
        call FUN_0040ff50
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x2c
        _emit 0x8b
        _emit 0x5e
        _emit 0x1c
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x5c
        _emit 0x8b
        _emit 0x11
        _emit 0x55
        _emit 0x8b
        _emit 0xc7
        _emit 0x2b
        _emit 0xc3
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x2c
        _emit 0x50
        _emit 0x8b
        _emit 0xc3
        _emit 0x2b
        _emit 0x46
        _emit 0x10
        _emit 0x50
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x28
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        call FUN_0047e870
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        call FUN_0047e810
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x6e
        _emit 0x10
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x2b
        _emit 0xf9
        _emit 0x57
        _emit 0x2b
        _emit 0xdd
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x53
        _emit 0x52
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x24
        call dword ptr [OffsetRect]
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x5c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x83
        _emit 0xc1
        _emit 0x14
        call FUN_0040ff50
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x00422a03
__declspec(naked) void gap_00422a03(void)
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

// FUNCTION: PORT1111 0x00422a10
__declspec(naked) void __fastcall FUN_00422a10(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x5c
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x74
        _emit 0x10
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x5c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xfd
        _emit 0x0f
        _emit 0xaf
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x8d
        _emit 0x04
        _emit 0x3f
        _emit 0x50
        _emit 0xe8
        _emit 0x07
        _emit 0x46
        _emit 0x07
        _emit 0x00
        _emit 0x8d
        _emit 0x1c
        _emit 0xbd
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x89
        _emit 0x46
        _emit 0x5c
        _emit 0xe8
        _emit 0xf7
        _emit 0x45
        _emit 0x07
        _emit 0x00
        _emit 0x53
        _emit 0x89
        _emit 0x46
        _emit 0x60
        _emit 0xe8
        _emit 0xee
        _emit 0x45
        _emit 0x07
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xff
        _emit 0x76
        _emit 0x19
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8e
        _emit 0xfc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x04
        _emit 0x81
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x40
        _emit 0x3b
        _emit 0xc7
        _emit 0x72
        _emit 0xee
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x8d
        _emit 0x0c
        _emit 0x3f
        _emit 0x8b
        _emit 0x7e
        _emit 0x5c
        _emit 0x89
        _emit 0x56
        _emit 0x68
        _emit 0x8b
        _emit 0xd1
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0x89
        _emit 0x6e
        _emit 0x64
        _emit 0xc7
        _emit 0x86
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0xf3
        _emit 0xab
        _emit 0x8b
        _emit 0xca
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xaa
        _emit 0x8b
        _emit 0x4e
        _emit 0x68
        _emit 0x0f
        _emit 0xaf
        _emit 0x4e
        _emit 0x64
        _emit 0x8b
        _emit 0x7e
        _emit 0x60
        _emit 0xc1
        _emit 0xe1
        _emit 0x02
        _emit 0x8b
        _emit 0xd1
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0xf3
        _emit 0xab
        _emit 0x8b
        _emit 0xca
        _emit 0x83
        _emit 0xe1
    }
}

// GAP: PORT1111 0x00422ac6
__declspec(naked) void gap_00422ac6(void)
{
    __asm {
        _emit 0x03
        _emit 0xf3
        _emit 0xaa
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x00422ad0
__declspec(naked) int __fastcall FUN_00422ad0(void *pthis,void *param_1)
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
        push OFFSET pt_eh_stub_004b6d96
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call FUN_00421fa0
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x8d
        _emit 0x46
        _emit 0x30
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_00424810
        _emit 0x8b
        _emit 0xcf
        call FUN_00424310
        _emit 0x89
        _emit 0x46
        _emit 0x34
        mov ecx, dword ptr [eax*4 + DAT_004d6428]
        _emit 0x89
        _emit 0x4e
        _emit 0x54
        _emit 0x8b
        _emit 0xcf
        call FUN_00424310
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x46
        _emit 0x38
        call FUN_00424310
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00422250
        _emit 0x83
        _emit 0x7f
        _emit 0x08
        _emit 0x12
        _emit 0x7e
        _emit 0x1a
        _emit 0x8b
        _emit 0xcf
        call FUN_00424310
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x86
        _emit 0x10
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_00424310
        _emit 0x89
        _emit 0x86
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00422640
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x13
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
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x8e
        _emit 0x0c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x89
        _emit 0xbe
        _emit 0x0c
        _emit 0x02
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
        _emit 0x18
        _emit 0x3b
        _emit 0xc7
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x74
        _emit 0x0b
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xc8
        call FUN_0043d470
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x2c
        _emit 0x3b
        _emit 0xcf
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x86
        _emit 0x0c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x89
        _emit 0x7e
        _emit 0x2c
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
        _emit 0x3b
        _emit 0xc7
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x1d
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x8b
        _emit 0x91
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x89
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        call FUN_00443cb0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x46
        _emit 0x2c
        call FUN_00443cd0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00422c24
__declspec(naked) void gap_00422c24(void)
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

// FUNCTION: PORT1111 0x00422c30
__declspec(naked) void __fastcall FUN_00422c30(void *pthis,int param_1)
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
        _emit 0x56
        _emit 0x38
        _emit 0x03
        _emit 0xd0
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x56
        _emit 0x38
        _emit 0x7e
        _emit 0x0c
        _emit 0x8b
        _emit 0x8e
        _emit 0x0c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_0043d310
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        mov ecx, dword ptr [DAT_004e2420]
        _emit 0x68
        _emit 0xee
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_00442660
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00422c67
__declspec(naked) void gap_00422c67(void)
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

// FUNCTION: PORT1111 0x00422c70
__declspec(naked) void __fastcall FUN_00422c70(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x89
        _emit 0x46
        _emit 0x38
        _emit 0x7e
        _emit 0x0c
        _emit 0x8b
        _emit 0x8e
        _emit 0x0c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_0043d310
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        mov ecx, dword ptr [DAT_004e2420]
        _emit 0x68
        _emit 0xee
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_00442660
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00422ca2
__declspec(naked) void gap_00422ca2(void)
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

// FUNCTION: PORT1111 0x00422cb0
__declspec(naked) void __fastcall FUN_00422cb0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x85
        _emit 0xc0
        _emit 0x76
        _emit 0x0c
        _emit 0x8b
        _emit 0x8e
        _emit 0x0c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_0043d310
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        mov ecx, dword ptr [DAT_004e2420]
        _emit 0x68
        _emit 0xee
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_00442660
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00422cdc
__declspec(naked) void gap_00422cdc(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
