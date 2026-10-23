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

extern void * DAT_004e240c;
extern const unsigned char PTR_FUN_004be5e8[76];
extern unsigned char DAT_004e2b14[12];












// FUNCTION: PORT1111 0x0040e640
__declspec(naked) bool __fastcall FUN_0040e640(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x86
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x7c
        _emit 0x1a
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x10
        _emit 0xc7
        _emit 0x86
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x50
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x33
        _emit 0xc9
        _emit 0x3b
        _emit 0xd0
        _emit 0x0f
        _emit 0x95
        _emit 0xc1
        _emit 0x5e
        _emit 0x8b
        _emit 0xc1
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040e681
__declspec(naked) void gap_0040e681(void)
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

// FUNCTION: PORT1111 0x0040e690
__declspec(naked) int __fastcall FUN_0040e690(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x86
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x3b
        _emit 0x8b
        _emit 0x86
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x31
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x17
        _emit 0x8a
        _emit 0x48
        _emit 0x3c
        _emit 0x84
        _emit 0xc9
        _emit 0x79
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        call FUN_00409e60
        _emit 0x85
        _emit 0xc0
        _emit 0x7f
        _emit 0x12
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x5e
        _emit 0xc3
        _emit 0xc7
        _emit 0x86
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040e6dd
__declspec(naked) void gap_0040e6dd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040e6e0
__declspec(naked) void __fastcall FUN_0040e6e0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x86
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x22
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x12
        _emit 0x8a
        _emit 0x48
        _emit 0x3c
        _emit 0x84
        _emit 0xc9
        _emit 0x79
        _emit 0x0b
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        call FUN_0040a110
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040e711
__declspec(naked) void gap_0040e711(void)
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

// FUNCTION: PORT1111 0x0040e720
__declspec(naked) int __fastcall FUN_0040e720(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_00404900
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x02
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x57
        _emit 0x33
        _emit 0xff
        call FUN_0045f070
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x36
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x57
        call FUN_0045f080
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x19
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x57
        call FUN_0045f080
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x50
        call FUN_00475080
        _emit 0x81
        _emit 0x48
        _emit 0x28
        _emit 0x00
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x47
        call FUN_0045f070
        _emit 0x3b
        _emit 0xf8
        _emit 0x7c
        _emit 0xcd
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040e77b
__declspec(naked) void gap_0040e77b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_004078c0
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x81
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8a
        _emit 0x41
        _emit 0x2c
        _emit 0x7e
        _emit 0x12
        _emit 0xa8
        _emit 0x04
        _emit 0x74
        _emit 0x20
        _emit 0x5e
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        jmp FUN_004789b0
        _emit 0xa8
        _emit 0x04
        _emit 0x75
        _emit 0x0e
        _emit 0x5e
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        jmp FUN_004789b0
        _emit 0x5e
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
    }
}

// FUNCTION: PORT1111 0x0040e7d0
__declspec(naked) int * __fastcall FUN_0040e7d0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5f08
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
        call FUN_00403db0
        _emit 0x8d
        _emit 0x4e
        _emit 0x3c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [esi], OFFSET PTR_FUN_004be5e8
        call FUN_0047b1c0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x46
        _emit 0x5c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040e821
__declspec(naked) void gap_0040e821(void)
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

// FUNCTION: PORT1111 0x0040e830
__declspec(naked) void __fastcall FUN_0040e830(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5f08
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
        mov dword ptr [esi], OFFSET PTR_FUN_004be5e8
        _emit 0x8d
        _emit 0x4e
        _emit 0x3c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00419670
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
        call FUN_00404570
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

// GAP: PORT1111 0x0040e882
__declspec(naked) void gap_0040e882(void)
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

// FUNCTION: PORT1111 0x0040e890
__declspec(naked) void __fastcall FUN_0040e890(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_00404880
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x5c
        _emit 0x74
        _emit 0x09
        call FUN_00478920
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        call FUN_00478a10
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040e8b5
__declspec(naked) void gap_0040e8b5(void)
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

// FUNCTION: PORT1111 0x0040e8c0
__declspec(naked) void __fastcall FUN_0040e8c0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x5c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x13
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00417390
        _emit 0xc7
        _emit 0x46
        _emit 0x5c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        jmp FUN_00404500
    }
}

// GAP: PORT1111 0x0040e8e5
__declspec(naked) void gap_0040e8e5(void)
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
