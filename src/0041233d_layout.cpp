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

extern unsigned char DAT_004e204c[];
extern unsigned char DAT_004e2050[];
extern unsigned char DAT_004e2408[];
extern const unsigned char PTR_FUN_004bebf0[152];
extern const unsigned char PTR_LAB_004bebc8[40];
extern int DAT_004e2404;











// GAP: PORT1111 0x0041233d
__declspec(naked) void gap_0041233d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00412340
__declspec(naked) void __fastcall FUN_00412340(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x50
        _emit 0x8b
        _emit 0x41
        _emit 0x14
        _emit 0x83
        _emit 0xf8
        _emit 0x24
        _emit 0x0f
        _emit 0x84
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xf8
        _emit 0x44
        _emit 0x0f
        _emit 0x84
        _emit 0x1b
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x7c
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x58
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xf8
        _emit 0x7e
        _emit 0x1c
        _emit 0x3b
        _emit 0xb9
        _emit 0x2c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x7f
        _emit 0x12
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x34
        _emit 0x51
        _emit 0x6a
        _emit 0x01
        _emit 0xeb
        _emit 0x14
        _emit 0x3b
        _emit 0xf8
        _emit 0x7d
        _emit 0x28
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x34
        _emit 0x51
        _emit 0x6a
        _emit 0xff
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x0f
        _emit 0xbf
        _emit 0x48
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x50
        _emit 0x4e
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2408]
        _emit 0x52
        call FUN_0043ae30
        _emit 0x8b
        _emit 0x46
        _emit 0x58
        _emit 0x53
        _emit 0x55
        _emit 0x33
        _emit 0xdb
        _emit 0x33
        _emit 0xed
        _emit 0x3b
        _emit 0xf8
        _emit 0x7d
        _emit 0x22
        _emit 0x8b
        _emit 0x4e
        _emit 0x50
        _emit 0x3b
        _emit 0x81
        _emit 0x2c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xbb
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x12
        _emit 0x8b
        _emit 0x16
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        call FUN_004225a0
        _emit 0x3b
        _emit 0x7e
        _emit 0x58
        _emit 0x7e
        _emit 0x28
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        _emit 0x3b
        _emit 0xb8
        _emit 0x2c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x13
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0xff
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        call FUN_004225a0
        _emit 0x3b
        _emit 0x7e
        _emit 0x58
        _emit 0x7e
        _emit 0x05
        _emit 0xbd
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        _emit 0x3b
        _emit 0xb8
        _emit 0x2c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x7f
        _emit 0x03
        _emit 0x89
        _emit 0x7e
        _emit 0x58
        _emit 0x85
        _emit 0xdb
        _emit 0xbf
        _emit 0x4b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x1a
        _emit 0x39
        _emit 0x7e
        _emit 0x58
        _emit 0x7d
        _emit 0x15
        call rand
        _emit 0x3d
        _emit 0xff
        _emit 0x3f
        _emit 0x00
        _emit 0x00
        _emit 0x7e
        _emit 0x09
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        call FUN_004122a0
        _emit 0x85
        _emit 0xed
        _emit 0x5d
        _emit 0x5b
        _emit 0x74
        _emit 0x1a
        _emit 0x39
        _emit 0x7e
        _emit 0x58
        _emit 0x7e
        _emit 0x15
        call rand
        _emit 0x3d
        _emit 0xff
        _emit 0x3f
        _emit 0x00
        _emit 0x00
        _emit 0x7e
        _emit 0x09
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_004122a0
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0x4a
        _emit 0x04
        _emit 0x00
        _emit 0x00
        call FUN_00445030
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0041247a
__declspec(naked) void gap_0041247a(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x41
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x01
        _emit 0xc3
        _emit 0x0f
        _emit 0xb7
        _emit 0x40
        _emit 0x3c
        and eax, dword ptr [DAT_004e2050]
        mov ecx, dword ptr [DAT_004e204c]
        _emit 0xd3
        _emit 0xf8
        _emit 0xfe
        _emit 0xc8
        _emit 0xf6
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x40
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

// FUNCTION: PORT1111 0x004124b0
__declspec(naked) int * __fastcall FUN_004124b0(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6128
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
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        call FUN_00409080
        _emit 0x8d
        _emit 0x7e
        _emit 0x14
        _emit 0x33
        _emit 0xdb
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        call FUN_0041f090
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x46
        _emit 0x50
        _emit 0x89
        _emit 0x4e
        _emit 0x3c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x5e
        _emit 0x04
        _emit 0x89
        _emit 0x5e
        _emit 0x08
        _emit 0x89
        _emit 0x5e
        _emit 0x0c
        _emit 0x89
        _emit 0x5e
        _emit 0x40
        mov dword ptr [esi], OFFSET PTR_FUN_004bebf0
        mov dword ptr [edi], OFFSET PTR_LAB_004bebc8
        _emit 0x8b
        _emit 0x90
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x56
        _emit 0x54
        _emit 0x8b
        _emit 0x80
        _emit 0x2c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x58
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x89
        _emit 0x46
        _emit 0x44
        _emit 0x89
        _emit 0x46
        _emit 0x48
        _emit 0x89
        _emit 0x5e
        _emit 0x4c
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
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
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x0041253e
__declspec(naked) void gap_0041253e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00412540
__declspec(naked) void __fastcall FUN_00412540(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6128
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
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x04
        mov dword ptr [esi], OFFSET PTR_FUN_004bebf0
        mov dword ptr [ecx], OFFSET PTR_LAB_004bebc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0041ebb0
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
        call FUN_00409090
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


// GAP: PORT1111 0x00412598
__declspec(naked) void gap_00412598(void)
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

// FUNCTION: PORT1111 0x004125a0
__declspec(naked) int __fastcall FUN_004125a0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        _emit 0x8a
        _emit 0x48
        _emit 0x64
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x84
        _emit 0xc9
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x75
        _emit 0x06
        _emit 0x83
        _emit 0xc0
        _emit 0x20
        _emit 0x83
        _emit 0xc1
        _emit 0x10
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x50
        call FUN_00429b40
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x14
        _emit 0x3b
        _emit 0x46
        _emit 0x40
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x68
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

// GAP: PORT1111 0x004125e2
__declspec(naked) void gap_004125e2(void)
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

// FUNCTION: PORT1111 0x004125f0
__declspec(naked) void __fastcall FUN_004125f0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        _emit 0xff
        _emit 0x62
        _emit 0x6c
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041260d
__declspec(naked) void gap_0041260d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00412610
__declspec(naked) int __fastcall FUN_00412610(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8b
        _emit 0x7e
        _emit 0x40
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x11
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_00428930
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x56
        call FUN_004288e0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x89
        _emit 0x4e
        _emit 0x40
        call FUN_004281d0
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x56
        call FUN_00428240
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x83
        _emit 0xc6
        _emit 0x14
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x20
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x04
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

// GAP: PORT1111 0x00412662
__declspec(naked) void gap_00412662(void)
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

// FUNCTION: PORT1111 0x00412670
__declspec(naked) void __fastcall FUN_00412670(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        _emit 0xff
        _emit 0x50
        _emit 0x24
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x56
        call FUN_00428930
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x56
        call FUN_004288e0
        _emit 0xc7
        _emit 0x46
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00412697
__declspec(naked) void gap_00412697(void)
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
        _emit 0x8b
        _emit 0x41
        _emit 0x50
        _emit 0x8b
        _emit 0x50
        _emit 0x2c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x10
        _emit 0x8b
        _emit 0x49
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x51
        _emit 0x30
        _emit 0x89
        _emit 0x10
        _emit 0xb0
        _emit 0x01
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004126c0
__declspec(naked) void __fastcall FUN_004126c0(void *pthis,int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x53
        call FUN_00429b40
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x39
        _emit 0x3b
        _emit 0x46
        _emit 0x40
        _emit 0x74
        _emit 0x1f
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x68
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x28
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        _emit 0x5f
        _emit 0x89
        _emit 0x5e
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x4e
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0xc8
        _emit 0x89
        _emit 0x5e
        _emit 0x04
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        call FUN_00426ce0
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x0041271d
__declspec(naked) void gap_0041271d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
