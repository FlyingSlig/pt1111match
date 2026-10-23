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

extern const unsigned char PTR_FUN_004bfb5c[24];
extern void * DAT_004e240c;
extern unsigned char DAT_004d6a14[8];
extern const unsigned char PTR_FUN_004bfb74[24];
extern const unsigned char PTR_FUN_004bfb8c[36];













// FUNCTION: PORT1111 0x00431850
__declspec(naked) int FUN_00431850(void)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b75cb
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
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0x56
        _emit 0x51
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x10
        _emit 0x5e
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
        _emit 0x4e
        _emit 0x5c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x07
        _emit 0x6a
        _emit 0x00
        call FUN_00426b20
        _emit 0x8b
        _emit 0x46
        _emit 0x60
        _emit 0xc7
        _emit 0x46
        _emit 0x5c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x1c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0x56
        _emit 0xff
        _emit 0x50
        _emit 0x10
        _emit 0x6a
        _emit 0x18
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
        _emit 0x0f
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x07
        _emit 0x8b
        _emit 0xc8
        call FUN_0045c3e0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x8b
        _emit 0x49
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0xc8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
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
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043190d
__declspec(naked) void gap_0043190d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00431910
__declspec(naked) void __fastcall FUN_00431910(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x33
        _emit 0xc9
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0x89
        _emit 0x48
        _emit 0x18
        _emit 0x89
        _emit 0x48
        _emit 0x1c
        _emit 0x89
        _emit 0x48
        _emit 0x20
        _emit 0x89
        _emit 0x48
        _emit 0x24
        _emit 0x89
        _emit 0x48
        _emit 0x28
        _emit 0x89
        _emit 0x48
        _emit 0x2c
        _emit 0x89
        _emit 0x48
        _emit 0x30
        _emit 0xc7
        _emit 0x40
        _emit 0x08
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        mov dword ptr [eax], OFFSET PTR_FUN_004bfb5c
        _emit 0xc7
        _emit 0x40
        _emit 0x0c
        _emit 0x28
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00431947
__declspec(naked) void gap_00431947(void)
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

// FUNCTION: PORT1111 0x00431950
__declspec(naked) int __fastcall FUN_00431950(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b75f3
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
        _emit 0x20
        mov eax, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x50
        _emit 0x08
        _emit 0x53
        _emit 0x55
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x0a
        _emit 0x3b
        _emit 0xca
        _emit 0x56
        _emit 0x57
        _emit 0x0f
        _emit 0x84
        _emit 0x8f
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xbe
        _emit 0x73
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xbf
        _emit 0x4b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8b
        _emit 0x41
        _emit 0x10
        _emit 0x8b
        _emit 0x40
        _emit 0x50
        _emit 0x8b
        _emit 0x58
        _emit 0x14
        _emit 0x3b
        _emit 0xde
        _emit 0x74
        _emit 0x56
        _emit 0x3b
        _emit 0xdf
        _emit 0x74
        _emit 0x52
        _emit 0x8a
        _emit 0x41
        _emit 0x15
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0x42
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x1b
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x01
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x2d
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x01
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x74
        _emit 0xf5
        _emit 0xeb
        _emit 0x1d
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x11
        _emit 0x3b
        _emit 0x48
        _emit 0x08
        _emit 0x75
        _emit 0x0c
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x74
        _emit 0xef
        _emit 0x8b
        _emit 0xc8
        _emit 0x3b
        _emit 0xca
        _emit 0x75
        _emit 0xa2
        _emit 0xe9
        _emit 0x1e
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x49
        _emit 0x10
        _emit 0x33
        _emit 0xed
        _emit 0x3b
        _emit 0xcd
        _emit 0x0f
        _emit 0x84
        _emit 0x11
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x41
        _emit 0x10
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x52
        _emit 0x50
        call FUN_004307f0
        _emit 0x33
        _emit 0xf6
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x33
        _emit 0xd2
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x38
        mov edi, OFFSET DAT_004d6a14
        _emit 0xbb
        _emit 0x0e
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xf5
        _emit 0x74
        _emit 0x21
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0x8b
        _emit 0xc2
        _emit 0x2b
        _emit 0xc6
        _emit 0x2b
        _emit 0xce
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0xc1
        _emit 0xf9
        _emit 0x02
        _emit 0x3b
        _emit 0xc1
        _emit 0x73
        _emit 0x0d
        _emit 0x8b
        _emit 0x07
        _emit 0x89
        _emit 0x02
        _emit 0x83
        _emit 0xc2
        _emit 0x04
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0xeb
        _emit 0x15
        _emit 0x57
        _emit 0x6a
        _emit 0x01
        _emit 0x52
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        call FUN_0041a090
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x24
        _emit 0x83
        _emit 0xc7
        _emit 0x08
        _emit 0x4b
        _emit 0x75
        _emit 0xc0
        _emit 0x3b
        _emit 0xf5
        _emit 0x0f
        _emit 0x84
        _emit 0x95
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xd6
        _emit 0x8b
        _emit 0xda
        _emit 0xc1
        _emit 0xfb
        _emit 0x02
        _emit 0x3b
        _emit 0xdd
        _emit 0x0f
        _emit 0x84
        _emit 0x7d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x41
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x72
        call rand
        _emit 0x33
        _emit 0xd2
        _emit 0xf7
        _emit 0xf3
        _emit 0x6a
        _emit 0x38
        _emit 0x8b
        _emit 0x3c
        _emit 0x96
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x38
        _emit 0x01
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_004332b0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x50
        _emit 0x1c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x48
        _emit 0x20
        _emit 0x33
        _emit 0xc9
        _emit 0xc7
        _emit 0x40
        _emit 0x04
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x78
        _emit 0x14
        _emit 0xc7
        _emit 0x40
        _emit 0x18
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x28
        _emit 0x89
        _emit 0x48
        _emit 0x30
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x3c
        _emit 0x00
        call FUN_00412e90
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x42
        _emit 0x14
        _emit 0x45
        _emit 0x3b
        _emit 0xe8
        _emit 0x7c
        _emit 0x8e
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
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
    }
}

// GAP: PORT1111 0x00431b26
__declspec(naked) void gap_00431b26(void)
{
    __asm {
        _emit 0xc4
        _emit 0x2c
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00431b30
__declspec(naked) int __fastcall FUN_00431b30(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x81
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0d
        _emit 0x8b
        _emit 0x81
        _emit 0xc4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x03
        _emit 0x33
        _emit 0xc0
        _emit 0xc3
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00431b4d
__declspec(naked) void gap_00431b4d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00431b50
__declspec(naked) int * __fastcall FUN_00431b50(void *pthis,int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7608
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
        call FUN_0042f760
        _emit 0x33
        _emit 0xff
        _emit 0x8d
        _emit 0x4e
        _emit 0x34
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        mov dword ptr [esi], OFFSET PTR_FUN_004bfb74
        call FUN_0045d7d0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x86
        _emit 0xd4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        _emit 0x89
        _emit 0xbe
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0xc4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0xb8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0xbc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
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
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00431bd3
__declspec(naked) void gap_00431bd3(void)
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

// FUNCTION: PORT1111 0x00431be0
__declspec(naked) void __fastcall FUN_00431be0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7608
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
        mov dword ptr [esi], OFFSET PTR_FUN_004bfb74
        _emit 0x8d
        _emit 0x4e
        _emit 0x34
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0045d860
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00411fd0
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

// GAP: PORT1111 0x00431c32
__declspec(naked) void gap_00431c32(void)
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

// FUNCTION: PORT1111 0x00431c40
__declspec(naked) int * __fastcall FUN_00431c40(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0042f7a0
        mov dword ptr [esi], OFFSET PTR_FUN_004bfb8c
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x27
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x18
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

// GAP: PORT1111 0x00431c67
__declspec(naked) void gap_00431c67(void)
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
