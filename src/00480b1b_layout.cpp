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

extern unsigned char DAT_004e2b10[4];
extern unsigned char DAT_004e2b14[12];











// GAP: PORT1111 0x00480b1b
__declspec(naked) void gap_00480b1b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00480b20
__declspec(naked) void __fastcall FUN_00480b20(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x2c
        _emit 0x89
        _emit 0x46
        _emit 0x44
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x2c
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x8b
        _emit 0x49
        _emit 0x34
        _emit 0x74
        _emit 0x06
        _emit 0x0f
        _emit 0xb7
        _emit 0x40
        _emit 0x1c
        _emit 0xeb
        _emit 0x03
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x8b
        _emit 0x56
        _emit 0x48
        _emit 0x52
        _emit 0x50
        _emit 0x8b
        _emit 0x01
        _emit 0x68
        _emit 0xc6
        _emit 0x87
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x50
        _emit 0x50
        call dword ptr [PostMessageA]
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00480b65
__declspec(naked) void gap_00480b65(void)
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

// FUNCTION: PORT1111 0x00480b70
__declspec(naked) void __fastcall FUN_00480b70(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x89
        _emit 0x46
        _emit 0x44
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x2c
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x8b
        _emit 0x49
        _emit 0x34
        _emit 0x74
        _emit 0x06
        _emit 0x0f
        _emit 0xb7
        _emit 0x40
        _emit 0x1c
        _emit 0xeb
        _emit 0x03
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x8b
        _emit 0x56
        _emit 0x48
        _emit 0x52
        _emit 0x50
        _emit 0x8b
        _emit 0x01
        _emit 0x68
        _emit 0xc6
        _emit 0x87
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x50
        _emit 0x50
        call dword ptr [PostMessageA]
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00480bb5
__declspec(naked) void gap_00480bb5(void)
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

// FUNCTION: PORT1111 0x00480bc0
__declspec(naked) void __fastcall FUN_00480bc0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x30
        _emit 0x89
        _emit 0x46
        _emit 0x44
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x2c
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x8b
        _emit 0x49
        _emit 0x34
        _emit 0x74
        _emit 0x06
        _emit 0x0f
        _emit 0xb7
        _emit 0x40
        _emit 0x1c
        _emit 0xeb
        _emit 0x03
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x8b
        _emit 0x56
        _emit 0x48
        _emit 0x52
        _emit 0x50
        _emit 0x8b
        _emit 0x01
        _emit 0x68
        _emit 0xc6
        _emit 0x87
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x50
        _emit 0x50
        call dword ptr [PostMessageA]
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00480c05
__declspec(naked) void gap_00480c05(void)
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

// FUNCTION: PORT1111 0x00480c10
__declspec(naked) int __fastcall FUN_00480c10(void *pthis,unsigned short param_1,unsigned short param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x0f
        _emit 0xb7
        _emit 0x40
        _emit 0x1c
        _emit 0xeb
        _emit 0x03
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x0f
        _emit 0xb7
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0xd0
        _emit 0x75
        _emit 0x44
        _emit 0x0f
        _emit 0xb7
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x3b
        _emit 0x41
        _emit 0x2c
        _emit 0x75
        _emit 0x10
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x90
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x3b
        _emit 0x41
        _emit 0x30
        _emit 0x75
        _emit 0x10
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x92
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x3b
        _emit 0x41
        _emit 0x28
        _emit 0x75
        _emit 0x10
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x90
        _emit 0xac
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x00480c72
__declspec(naked) void gap_00480c72(void)
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

// FUNCTION: PORT1111 0x00480c80
__declspec(naked) bool __fastcall FUN_00480c80(void *pthis,unsigned int param_1,unsigned int param_2,unsigned int param_3,void *param_4)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x05
        jmp FUN_004804c0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xf8
        _emit 0x10
        _emit 0x74
        _emit 0x3b
        _emit 0x3d
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        jmp FUN_004804c0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0xf8
        _emit 0x0d
        _emit 0x74
        _emit 0x1a
        _emit 0x83
        _emit 0xf8
        _emit 0x1b
        _emit 0x74
        _emit 0x05
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x90
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x92
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x00480cd8
__declspec(naked) void gap_00480cd8(void)
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

// FUNCTION: PORT1111 0x00480ce0
__declspec(naked) void __fastcall FUN_00480ce0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1d
        call dword ptr [GetTickCount]
        _emit 0x8b
        _emit 0x56
        _emit 0x3c
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x2b
        _emit 0xc2
        _emit 0x3b
        _emit 0xc1
        _emit 0x76
        _emit 0x0b
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        _emit 0xff
        _emit 0xa0
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00480d09
__declspec(naked) void gap_00480d09(void)
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

// FUNCTION: PORT1111 0x00480d10
__declspec(naked) int __cdecl FUN_00480d10(unsigned short param_1,int param_2)
{
    __asm {
        mov ecx, dword ptr [DAT_004e2b10]
        _emit 0x8b
        _emit 0x11
        _emit 0x83
        _emit 0xec
        _emit 0x20
        _emit 0x56
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x3c
        _emit 0x50
        call dword ptr [GetWindowRect]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x50
        call FUN_00468ef0
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x05
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xc3
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_0047de00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x5c
        _emit 0x8b
        _emit 0x96
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x86
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x51
        call dword ptr [SetRect]
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x2b
        _emit 0xc1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x03
        _emit 0xc2
        _emit 0x99
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0xd1
        _emit 0xf8
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x2b
        _emit 0xc1
        _emit 0x03
        _emit 0xc2
        _emit 0x99
        _emit 0x2b
        _emit 0xc2
        _emit 0xd1
        _emit 0xf8
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0047d0e0
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xc3
    }
}
