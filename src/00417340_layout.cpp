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

extern unsigned char DAT_004e21bc[4];
extern const unsigned char PTR_FUN_004bef74[4];
extern int DAT_004e0adc;
extern unsigned char DAT_004e0ad8[4];
extern unsigned char DAT_004e0ae0[4];
extern unsigned char DAT_004e0ae4[4];
extern unsigned char DAT_004e0ae8[4];
extern unsigned char DAT_004e0aec[4];











// GAP: PORT1111 0x00417340
__declspec(naked) void gap_00417340(void)
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

// FUNCTION: PORT1111 0x00417350
__declspec(naked) void __fastcall FUN_00417350(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x79
        _emit 0x14
        _emit 0x8d
        _emit 0x71
        _emit 0x10
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x51
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_00413870
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0x8b
        _emit 0xd8
        call FUN_004161f0
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x8b
        _emit 0x53
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0x89
        _emit 0x1a
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00417383
__declspec(naked) void gap_00417383(void)
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

// FUNCTION: PORT1111 0x00417390
__declspec(naked) void __fastcall FUN_00417390(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x50
        _emit 0x0c
        _emit 0x0f
        _emit 0xb7
        _emit 0x52
        _emit 0x04
        _emit 0x0f
        _emit 0xb7
        _emit 0x40
        _emit 0x34
        _emit 0xc1
        _emit 0xe2
        _emit 0x10
        _emit 0x0b
        _emit 0xd0
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x52
        _emit 0x83
        _emit 0xc1
        _emit 0x28
        call FUN_004170f0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x004173b8
__declspec(naked) void gap_004173b8(void)
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

// FUNCTION: PORT1111 0x004173c0
__declspec(naked) void __fastcall FUN_004173c0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x8e
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x57
        call FUN_00453a00
        _emit 0x8b
        _emit 0x47
        _emit 0x10
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x8d
        _emit 0x4e
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        call FUN_00417030
        _emit 0x8b
        _emit 0x57
        _emit 0x10
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        mov ecx, OFFSET DAT_004e21bc
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        call FUN_00413b10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x51
        mov ecx, OFFSET DAT_004e21bc
        call pt_a_004169d0
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00417427
__declspec(naked) void gap_00417427(void)
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

// FUNCTION: PORT1111 0x00417430
__declspec(naked) void __fastcall FUN_00417430(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x50
        _emit 0x10
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x83
        _emit 0xc1
        _emit 0x1c
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x08
        call FUN_00417090
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0041744b
__declspec(naked) void gap_0041744b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00417450
__declspec(naked) int __fastcall FUN_00417450(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_004748f0
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0xc6
        _emit 0x40
        _emit 0x15
        _emit 0x01
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x08
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041747b
__declspec(naked) void gap_0041747b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00417480
__declspec(naked) int * __fastcall FUN_00417480(void *pthis,void *param_1)
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
        _emit 0x57
        _emit 0x75
        _emit 0x1e
        _emit 0x8b
        _emit 0x3e
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x78
        _emit 0x0c
        _emit 0x7d
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
        _emit 0xeb
        _emit 0x3b
        _emit 0x51
        _emit 0x04
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x06
        _emit 0x3b
        _emit 0x42
        _emit 0x0c
        _emit 0x7d
        _emit 0x2c
        _emit 0x8b
        _emit 0x06
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x52
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x52
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00417150
        _emit 0x8b
        _emit 0x00
        _emit 0x5f
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
        _emit 0x5f
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


// GAP: PORT1111 0x004174f9
__declspec(naked) void gap_004174f9(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xe8
        _emit 0xb9
        _emit 0xf7
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x51
        call pt_a_004978fd
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

// FUNCTION: PORT1111 0x00417530
__declspec(naked) int * __fastcall FUN_00417530(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6487
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
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x6e
        _emit 0x04
        _emit 0x57
        _emit 0x8b
        _emit 0xcd
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x10
        mov dword ptr [esi], OFFSET PTR_FUN_004bef74
        call FUN_004748f0
        _emit 0x89
        _emit 0x45
        _emit 0x04
        _emit 0xbb
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x58
        _emit 0x15
        _emit 0x8b
        _emit 0x45
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x45
        _emit 0x04
        _emit 0x89
        _emit 0x00
        _emit 0x8b
        _emit 0x45
        _emit 0x04
        _emit 0x33
        _emit 0xff
        _emit 0x89
        _emit 0x40
        _emit 0x08
        _emit 0x89
        _emit 0x7d
        _emit 0x08
        _emit 0x8d
        _emit 0x6e
        _emit 0x10
        _emit 0x8b
        _emit 0xcd
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        call FUN_0043d220
        _emit 0x89
        _emit 0x45
        _emit 0x04
        _emit 0x89
        _emit 0x7d
        _emit 0x08
        _emit 0x8d
        _emit 0x6e
        _emit 0x1c
        _emit 0x8b
        _emit 0xcd
        _emit 0x88
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        call FUN_004748f0
        _emit 0x89
        _emit 0x45
        _emit 0x04
        _emit 0x88
        _emit 0x58
        _emit 0x15
        _emit 0x8b
        _emit 0x45
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x45
        _emit 0x04
        _emit 0x89
        _emit 0x00
        _emit 0x8b
        _emit 0x45
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x08
        _emit 0x89
        _emit 0x7d
        _emit 0x08
        _emit 0x8d
        _emit 0x6e
        _emit 0x28
        _emit 0x8b
        _emit 0xcd
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x02
        call FUN_004748f0
        _emit 0x89
        _emit 0x45
        _emit 0x04
        _emit 0x88
        _emit 0x58
        _emit 0x15
        _emit 0x8b
        _emit 0x45
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x45
        _emit 0x04
        _emit 0x89
        _emit 0x00
        _emit 0x8b
        _emit 0x45
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x08
        _emit 0x89
        _emit 0x7d
        _emit 0x08
        _emit 0x8d
        _emit 0x4e
        _emit 0x78
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x03
        call FUN_0045d7d0
        _emit 0x8d
        _emit 0x8e
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x04
        call FUN_00453d20
        mov dword ptr [DAT_004e0adc], ebx
        mov dword ptr [DAT_004e0ad8], ebx
        _emit 0xc7
        _emit 0x86
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x7e
        _emit 0x34
        _emit 0x89
        _emit 0xbe
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x7e
        _emit 0x60
        _emit 0x89
        _emit 0x7e
        _emit 0x38
        _emit 0x89
        _emit 0x7e
        _emit 0x3c
        _emit 0x89
        _emit 0x7e
        _emit 0x40
        _emit 0x89
        _emit 0x7e
        _emit 0x44
        _emit 0x89
        _emit 0x7e
        _emit 0x48
        _emit 0x89
        _emit 0x7e
        _emit 0x58
        mov dword ptr [DAT_004e0ae0], edi
        mov dword ptr [DAT_004e0ae4], edi
        mov dword ptr [DAT_004e0ae8], edi
        mov dword ptr [DAT_004e0aec], edi
        _emit 0x89
        _emit 0x7e
        _emit 0x5c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5d
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
        _emit 0x10
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00417667
__declspec(naked) void gap_00417667(void)
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
