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

extern unsigned char DAT_004e086c[];
extern unsigned char DAT_004e2c5c[];
extern void * DAT_004e240c;
extern unsigned char DAT_004e2b14[12];











// GAP: PORT1111 0x00411462
__declspec(naked) void gap_00411462(void)
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
        _emit 0x41
        _emit 0x5c
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
    }
}

// FUNCTION: PORT1111 0x00411480
__declspec(naked) void __fastcall FUN_00411480(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b60f6
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
        _emit 0x46
        _emit 0x68
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x1a
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x03
        _emit 0x89
        _emit 0x78
        _emit 0x48
        _emit 0x8b
        _emit 0x4e
        _emit 0x68
        _emit 0x3b
        _emit 0xcf
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
        _emit 0x68
        _emit 0x8b
        _emit 0x4e
        _emit 0x64
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x89
        _emit 0x7e
        _emit 0x64
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        _emit 0x8b
        _emit 0x88
        _emit 0x24
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x39
        _emit 0x55
        _emit 0x7c
        _emit 0x66
        _emit 0x6a
        _emit 0x4c
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xc7
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0041b810
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x3b
        _emit 0xc7
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x46
        _emit 0x68
        _emit 0x74
        _emit 0x36
        _emit 0x8b
        _emit 0x56
        _emit 0x50
        _emit 0x8b
        _emit 0x8a
        _emit 0x24
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x29
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x52
        _emit 0x14
        _emit 0x6a
        _emit 0x02
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0xc1
        _emit 0xe2
        _emit 0x10
        _emit 0x51
        _emit 0x03
        _emit 0xd5
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        call FUN_0041b410
        _emit 0x8b
        _emit 0x4e
        _emit 0x68
        _emit 0x8d
        _emit 0x46
        _emit 0x14
        _emit 0x89
        _emit 0x41
        _emit 0x44
        _emit 0x8b
        _emit 0x4e
        _emit 0x68
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x28
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        _emit 0x8b
        _emit 0x88
        _emit 0x28
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x39
        _emit 0x7c
        _emit 0x6a
        _emit 0x6a
        _emit 0x4c
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xc7
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0041b810
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x3b
        _emit 0xc7
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x46
        _emit 0x64
        _emit 0x74
        _emit 0x36
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x56
        _emit 0x50
        _emit 0x6a
        _emit 0x01
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x51
        _emit 0x8b
        _emit 0x8a
        _emit 0x28
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x52
        _emit 0x14
        _emit 0x8b
        _emit 0x29
        _emit 0xc1
        _emit 0xe2
        _emit 0x10
        _emit 0x03
        _emit 0xd5
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        call FUN_0041b410
        _emit 0x8b
        _emit 0x4e
        _emit 0x64
        _emit 0x8d
        _emit 0x46
        _emit 0x14
        _emit 0x89
        _emit 0x41
        _emit 0x44
        _emit 0x8b
        _emit 0x4e
        _emit 0x64
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x28
        _emit 0x8b
        _emit 0x46
        _emit 0x68
        _emit 0x3b
        _emit 0xc7
        _emit 0x5d
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x76
        _emit 0x64
        _emit 0x3b
        _emit 0xf7
        _emit 0x74
        _emit 0x03
        _emit 0x89
        _emit 0x46
        _emit 0x48
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
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

// GAP: PORT1111 0x004115db
__declspec(naked) void gap_004115db(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004115e0
__declspec(naked) int __fastcall FUN_004115e0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_004125a0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0xce
        call FUN_00411480
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004115fe
__declspec(naked) void gap_004115fe(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00411600
__declspec(naked) void __fastcall FUN_00411600(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x64
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x2c
        _emit 0x8b
        _emit 0x4e
        _emit 0x64
        call FUN_00489080
        _emit 0x8b
        _emit 0x4e
        _emit 0x64
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0xc7
        _emit 0x46
        _emit 0x64
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x68
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x2c
        _emit 0x8b
        _emit 0x4e
        _emit 0x68
        call FUN_00489080
        _emit 0x8b
        _emit 0x4e
        _emit 0x68
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0xc7
        _emit 0x46
        _emit 0x68
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        jmp FUN_004125f0
    }
}

// GAP: PORT1111 0x0041165b
__declspec(naked) void gap_0041165b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00411660
__declspec(naked) void __fastcall FUN_00411660(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x22
        call FUN_0041eca0
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x54
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x11
        _emit 0x5e
        _emit 0xff
        _emit 0x62
        _emit 0x0c
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0041168e
__declspec(naked) void gap_0041168e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        mov eax, dword ptr [DAT_004e086c]
        mov dword ptr [DAT_004e2c5c], eax
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x83
        _emit 0xe9
        _emit 0x14
        jmp pt_a_004116c0
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xd2
        _emit 0x0f
        _emit 0x95
        _emit 0xc0
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
