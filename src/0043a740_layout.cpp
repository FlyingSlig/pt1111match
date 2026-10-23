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

extern const unsigned char PTR_FUN_004c04d8[56];
extern const unsigned char PTR_FUN_004c0510[4];












// FUNCTION: PORT1111 0x0043a740
__declspec(naked) int * __fastcall FUN_0043a740(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0043a4d0
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x89
        _emit 0x46
        _emit 0x1c
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x89
        _emit 0x46
        _emit 0x24
        _emit 0x89
        _emit 0x46
        _emit 0x28
        mov dword ptr [esi], OFFSET PTR_FUN_004c04d8
        _emit 0xc7
        _emit 0x46
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043a76d
__declspec(naked) void gap_0043a76d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043a770
__declspec(naked) int __fastcall FUN_0043a770(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xc7
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        _emit 0x74
        _emit 0x0c
        _emit 0x50
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7e
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x3b
        _emit 0xcf
        _emit 0x89
        _emit 0x7e
        _emit 0x20
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x24
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x89
        _emit 0x7e
    }
}

// GAP: PORT1111 0x0043a7b0
__declspec(naked) void gap_0043a7b0(void)
{
    __asm {
        _emit 0x28
        _emit 0x5f
        _emit 0xb0
        _emit 0x01
        _emit 0x5e
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
    }
}

// FUNCTION: PORT1111 0x0043a7c0
__declspec(naked) int __fastcall FUN_0043a7c0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7d56
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
        _emit 0x6a
        _emit 0x28
        _emit 0x8b
        _emit 0xf1
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
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
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0042d3d0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x6a
        _emit 0x2c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x46
        _emit 0x24
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0042cc20
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0xb0
        _emit 0x01
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

// GAP: PORT1111 0x0043a849
__declspec(naked) void gap_0043a849(void)
{
    __asm {
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
        _emit 0x0c
        _emit 0x8b
        _emit 0x49
        _emit 0x20
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043a870
__declspec(naked) void __fastcall FUN_0043a870(void *pthis,unsigned char param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x01
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_0043a480
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x0043a8a0
__declspec(naked) void __fastcall FUN_0043a8a0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call rand
        _emit 0x99
        _emit 0xf7
        _emit 0x7e
        _emit 0x1c
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x3c
        _emit 0x90
        _emit 0x57
        call FUN_004147d0
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0e
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x39
        _emit 0x8b
        _emit 0x11
        _emit 0x5f
        _emit 0x5e
        _emit 0xff
        _emit 0x62
        _emit 0x04
        _emit 0x83
        _emit 0x78
        _emit 0x48
        _emit 0x05
        _emit 0x57
        _emit 0x75
        _emit 0x0d
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x18
        _emit 0x8b
        _emit 0x7e
        _emit 0x28
        _emit 0xeb
        _emit 0x0b
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x8b
        _emit 0x7e
        _emit 0x24
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x3b
        _emit 0xf9
        _emit 0x74
        _emit 0x0c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x7e
        _emit 0x20
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043a903
__declspec(naked) void gap_0043a903(void)
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
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x41
        _emit 0x0c
        _emit 0x89
        _emit 0x41
        _emit 0x1c
        _emit 0x8b
        _emit 0x49
        _emit 0x20
        _emit 0x3b
        _emit 0xc8
        _emit 0x74
        _emit 0x05
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x04
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

// FUNCTION: PORT1111 0x0043a930
__declspec(naked) void __fastcall FUN_0043a930(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7d68
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
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        mov dword ptr [esi], OFFSET PTR_FUN_004c04d8
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xc7
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        _emit 0x74
        _emit 0x0c
        _emit 0x50
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7e
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x3b
        _emit 0xcf
        _emit 0x89
        _emit 0x7e
        _emit 0x20
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x24
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x28
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
        call FUN_0043a350
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
    }
}

// GAP: PORT1111 0x0043a9af
__declspec(naked) void gap_0043a9af(void)
{
    __asm {
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x10
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
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x75
        _emit 0x26
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1f
        _emit 0x8b
        _emit 0x01
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x7c
        _emit 0x07
        _emit 0x8b
        _emit 0xce
        call FUN_0043a8a0
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043aa00
__declspec(naked) void __fastcall FUN_0043aa00(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0xb9
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x4e
        _emit 0x0c
        _emit 0x7e
        _emit 0x17
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x10
        _emit 0x89
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0xce
        call FUN_0043a8a0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x3b
        _emit 0x46
        _emit 0x1c
        _emit 0x7f
        _emit 0x19
        _emit 0x8b
        _emit 0x4e
        _emit 0x14
        _emit 0x83
        _emit 0xc0
        _emit 0x05
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0xc1
        _emit 0xe0
        _emit 0x02
        _emit 0x50
        _emit 0x51
        _emit 0xe8
        _emit 0xc0
        _emit 0xd7
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x56
        _emit 0x1c
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x0c
        _emit 0x90
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x40
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x46
        _emit 0x1c
        call FUN_0043a8a0
        _emit 0x8b
        _emit 0xce
        call FUN_0043a8a0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043aa6d
__declspec(naked) void gap_0043aa6d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
