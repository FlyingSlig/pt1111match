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
extern int DAT_004c6da8;
extern unsigned char DAT_004e2cac[12];
extern unsigned char DAT_004e2ca8[4];
extern const unsigned char PTR_DeleteObject_004bc084[4];
extern const unsigned char DAT_004bd578[8];
extern unsigned char DAT_004e2ca4[4];
extern const unsigned char DAT_004c6db4[4];
extern const unsigned char DAT_004c3720[4];
extern const unsigned char DAT_004c6dac[8];
extern const unsigned char PTR_DrawTextA_004bc318[4];
extern const unsigned char DAT_004c6dc8[4];
extern const unsigned char s__c__d__d__d__004c6db8[16];
extern unsigned char DAT_004dda40[8];
extern unsigned char DAT_004dda28[24];
extern unsigned char DAT_004dda20[8];
extern unsigned char DAT_004dda18[8];
extern unsigned char DAT_004dda48[40];
extern unsigned char DAT_004e2cb8[16];
extern const unsigned char PTR_FUN_004c6dcc[4];












// GAP: PORT1111 0x0048b4af
__declspec(naked) void gap_0048b4af(void)
{
    __asm {
        _emit 0x90
        _emit 0x21
        _emit 0xb4
        _emit 0x48
        _emit 0x00
        _emit 0x4d
        _emit 0xb4
        _emit 0x48
        _emit 0x00
        _emit 0x7e
        _emit 0xb4
        _emit 0x48
        _emit 0x00
        _emit 0xae
        _emit 0xb4
        _emit 0x48
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x01
        _emit 0x01
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x03
        _emit 0x02
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0048b4e0
__declspec(naked) void FUN_0048b4e0(void * param_1, void * param_2, unsigned int param_3, int param_4, int param_5, int param_6)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x45
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x55
        _emit 0x56
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0xe9
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0x8b
        _emit 0xf2
        _emit 0x8b
        _emit 0xf8
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0xcd
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xa4
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x03
        _emit 0xc7
        _emit 0x03
        _emit 0xd3
        _emit 0x49
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x75
        _emit 0xd7
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048b52e
__declspec(naked) void gap_0048b52e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0048b530
__declspec(naked) void FUN_0048b530(void * param_1, void * param_2, unsigned int param_3, int param_4, int param_5, int param_6)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xd1
        _emit 0xe2
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x7e
        _emit 0x41
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x55
        _emit 0x56
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0xe9
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0x8b
        _emit 0xf2
        _emit 0x8b
        _emit 0xf8
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0xcd
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xa4
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x03
        _emit 0xc7
        _emit 0x03
        _emit 0xd3
        _emit 0x49
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x75
        _emit 0xd7
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048b584
__declspec(naked) void gap_0048b584(void)
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

// FUNCTION: PORT1111 0x0048b590
__declspec(naked) void FUN_0048b590(void * param_1, void * param_2, int param_3, int param_4, int param_5, int param_6)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8d
        _emit 0x04
        _emit 0x40
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x41
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x55
        _emit 0x56
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0xe9
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0x8b
        _emit 0xf2
        _emit 0x8b
        _emit 0xf8
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0xcd
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xa4
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x03
        _emit 0xc7
        _emit 0x03
        _emit 0xd3
        _emit 0x49
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x75
        _emit 0xd7
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048b5e5
__declspec(naked) void gap_0048b5e5(void)
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

// FUNCTION: PORT1111 0x0048b5f0
__declspec(naked) void FUN_0048b5f0(void * param_1, void * param_2, unsigned int param_3, int param_4, int param_5, int param_6)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xc1
        _emit 0xe2
        _emit 0x02
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x7e
        _emit 0x41
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x55
        _emit 0x56
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0xe9
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0x8b
        _emit 0xf2
        _emit 0x8b
        _emit 0xf8
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0xcd
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xa4
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x03
        _emit 0xc7
        _emit 0x03
        _emit 0xd3
        _emit 0x49
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x75
        _emit 0xd7
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048b645
__declspec(naked) void gap_0048b645(void)
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

// FUNCTION: PORT1111 0x0048b650
__declspec(naked) void FUN_0048b650(unsigned int param_1,void *param_2,int param_3,int param_4,int param_5,int param_6,int param_7)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x53
        _emit 0x8b
        _emit 0xc1
        _emit 0x83
        _emit 0xe0
        _emit 0x03
        _emit 0x55
        _emit 0x8a
        _emit 0xda
        _emit 0xd1
        _emit 0xfa
        _emit 0x2b
        _emit 0xc8
        _emit 0x56
        _emit 0x80
        _emit 0xe3
        _emit 0x01
        _emit 0x83
        _emit 0xf8
        _emit 0x02
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x57
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x0f
        _emit 0x85
        _emit 0x86
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x8e
        _emit 0x08
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x30
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x0f
        _emit 0xb6
        _emit 0x06
        _emit 0x0f
        _emit 0xb7
        _emit 0x04
        _emit 0x47
        _emit 0x8b
        _emit 0x19
        _emit 0xc1
        _emit 0xe0
        _emit 0x10
        _emit 0x81
        _emit 0xe3
        _emit 0xff
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x0b
        _emit 0xc3
        _emit 0x89
        _emit 0x01
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xd0
        _emit 0x7e
        _emit 0x1f
        _emit 0x90
        _emit 0x0f
        _emit 0xb6
        _emit 0x1c
        _emit 0x46
        _emit 0x0f
        _emit 0xb6
        _emit 0x6c
        _emit 0x46
        _emit 0xff
        _emit 0x0f
        _emit 0xb7
        _emit 0x1c
        _emit 0x5f
        _emit 0x0f
        _emit 0xb7
        _emit 0x2c
        _emit 0x6f
        _emit 0xc1
        _emit 0xe3
        _emit 0x10
        _emit 0x0b
        _emit 0xdd
        _emit 0x89
        _emit 0x1c
        _emit 0x81
        _emit 0x40
        _emit 0x3b
        _emit 0xc2
        _emit 0x7c
        _emit 0xe2
        _emit 0x0f
        _emit 0xb6
        _emit 0x5c
        _emit 0x46
        _emit 0xff
        _emit 0x8b
        _emit 0x2c
        _emit 0x81
        _emit 0x0f
        _emit 0xb7
        _emit 0x1c
        _emit 0x5f
        _emit 0x81
        _emit 0xe5
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xff
        _emit 0x0b
        _emit 0xdd
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x28
        _emit 0x89
        _emit 0x1c
        _emit 0x81
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x2c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x03
        _emit 0xcd
        _emit 0x03
        _emit 0xf3
        _emit 0x48
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x75
        _emit 0x94
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x59
        _emit 0xc3
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x8e
        _emit 0x82
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x30
        _emit 0x0f
        _emit 0xb6
        _emit 0xf3
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xd2
        _emit 0x7e
        _emit 0x28
        _emit 0xeb
        _emit 0x08
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x0f
        _emit 0xb6
        _emit 0x5c
        _emit 0x46
        _emit 0x01
        _emit 0x0f
        _emit 0xb6
        _emit 0x2c
        _emit 0x46
        _emit 0x0f
        _emit 0xb7
        _emit 0x1c
        _emit 0x5f
        _emit 0x0f
        _emit 0xb7
        _emit 0x2c
        _emit 0x6f
        _emit 0xc1
        _emit 0xe3
        _emit 0x10
        _emit 0x0b
        _emit 0xdd
        _emit 0x89
        _emit 0x1c
        _emit 0x81
        _emit 0x40
        _emit 0x3b
        _emit 0xc2
        _emit 0x7c
        _emit 0xe2
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xed
        _emit 0x7e
        _emit 0x1f
        _emit 0x8d
        _emit 0x14
        _emit 0x46
        _emit 0x8d
        _emit 0x04
        _emit 0x81
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x0f
        _emit 0xb6
        _emit 0x1a
        _emit 0x66
        _emit 0x8b
        _emit 0x1c
        _emit 0x5f
        _emit 0x66
        _emit 0x89
        _emit 0x18
        _emit 0x83
        _emit 0xc0
        _emit 0x02
        _emit 0x42
        _emit 0x4d
        _emit 0x75
        _emit 0xef
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x2c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x03
        _emit 0xcd
        _emit 0x03
        _emit 0xf3
        _emit 0x48
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
    }
}

// GAP: PORT1111 0x0048b78a
__declspec(naked) void gap_0048b78a(void)
{
    __asm {
        _emit 0x75
        _emit 0x94
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x59
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0048b7a0
__declspec(naked) void FUN_0048b7a0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x4c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xf6
        _emit 0x7e
        _emit 0x15
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xb6
        _emit 0x2c
        _emit 0x10
        _emit 0x8b
        _emit 0x2c
        _emit 0xaf
        _emit 0x89
        _emit 0x2c
        _emit 0x81
        _emit 0x40
        _emit 0x3b
        _emit 0xc6
        _emit 0x7c
        _emit 0xf1
        _emit 0x03
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x03
        _emit 0xd3
        _emit 0x48
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x75
        _emit 0xd4
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048b7f5
__declspec(naked) void gap_0048b7f5(void)
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

// FUNCTION: PORT1111 0x0048b800
__declspec(naked) void FUN_0048b800(void *param_1,void *param_2,int param_3,int param_4,int param_5,int param_6)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0xd1
        _emit 0xfe
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xcf
        _emit 0x0f
        _emit 0x8e
        _emit 0x8f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x55
        _emit 0x85
        _emit 0xf6
        _emit 0x7e
        _emit 0x5e
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8b
        _emit 0x02
        _emit 0x8b
        _emit 0xd8
        _emit 0x81
        _emit 0xe3
        _emit 0x00
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0xc1
        _emit 0xe3
        _emit 0x03
        _emit 0x8b
        _emit 0xe8
        _emit 0x81
        _emit 0xe5
        _emit 0xe0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x0b
        _emit 0xdd
        _emit 0xc1
        _emit 0xe3
        _emit 0x02
        _emit 0x83
        _emit 0xe0
        _emit 0x1f
        _emit 0x0b
        _emit 0xd8
        _emit 0xc1
        _emit 0xe3
        _emit 0x03
        _emit 0x89
        _emit 0x19
        _emit 0x8b
        _emit 0x02
        _emit 0x8b
        _emit 0xd8
        _emit 0xc1
        _emit 0xeb
        _emit 0x02
        _emit 0x81
        _emit 0xe3
        _emit 0x00
        _emit 0xc0
        _emit 0x07
        _emit 0x00
        _emit 0x8b
        _emit 0xe8
        _emit 0x81
        _emit 0xe5
        _emit 0x00
        _emit 0x00
        _emit 0xe0
        _emit 0x07
        _emit 0x0b
        _emit 0xdd
        _emit 0xc1
        _emit 0xeb
        _emit 0x03
        _emit 0x25
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0xf8
        _emit 0x0b
        _emit 0xd8
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        _emit 0xc1
        _emit 0xeb
        _emit 0x08
        _emit 0x89
        _emit 0x19
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        _emit 0x83
        _emit 0xc2
        _emit 0x04
        _emit 0x4e
        _emit 0x75
        _emit 0xaa
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x03
        _emit 0xfd
        _emit 0x03
        _emit 0xd3
        _emit 0x48
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x0f
        _emit 0x85
        _emit 0x79
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x5d
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0048b8b4
__declspec(naked) void gap_0048b8b4(void)
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
