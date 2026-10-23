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

extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e278c[16];
extern const unsigned char PTR_FUN_004c4604[16];











// GAP: PORT1111 0x00451979
__declspec(naked) void gap_00451979(void)
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

// FUNCTION: PORT1111 0x00451980
__declspec(naked) int __fastcall FUN_00451980(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x83
        _emit 0x3e
        _emit 0x00
        _emit 0x74
        _emit 0x35
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x6a
        _emit 0x02
        call FUN_00465e00
        _emit 0x50
        _emit 0x8b
        _emit 0x06
        _emit 0x50
        call FUN_0044f610
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x1a
        _emit 0x8b
        _emit 0x0e
        _emit 0x51
        call FUN_00450180
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x16
        _emit 0x52
        call FUN_0044fbf0
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
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

// GAP: PORT1111 0x004519cc
__declspec(naked) void gap_004519cc(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004519d0
__declspec(naked) int __fastcall FUN_004519d0(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x83
        _emit 0x3e
        _emit 0x00
        _emit 0x74
        _emit 0x3f
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x6a
        _emit 0x02
        call FUN_00465e00
        _emit 0x50
        _emit 0x8b
        _emit 0x06
        _emit 0x50
        call FUN_0044f610
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x24
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call FUN_00465e00
        _emit 0x8b
        _emit 0x0e
        _emit 0x50
        _emit 0x51
        call FUN_004501a0
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x16
        _emit 0x52
        call FUN_0044fbf0
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x33
        _emit 0xc0
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

// GAP: PORT1111 0x00451a26
__declspec(naked) void gap_00451a26(void)
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

// FUNCTION: PORT1111 0x00451a30
__declspec(naked) unsigned int __fastcall FUN_00451a30(void *pthis,void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x50
        _emit 0x53
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x0b
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x50
        _emit 0x51
        call FUN_0044f510
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x40
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x0f
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x58
        _emit 0x89
        _emit 0x0a
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x50
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x56
        _emit 0x75
        _emit 0x63
        _emit 0x41
        _emit 0x57
        _emit 0x51
        call malloc
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x64
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x41
        _emit 0x8b
        _emit 0xd1
        _emit 0x8b
        _emit 0xf8
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0x89
        _emit 0x3e
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
        _emit 0x06
        _emit 0x85
        _emit 0xc0
        _emit 0x5f
        _emit 0x74
        _emit 0x34
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x13
        _emit 0x51
        _emit 0x50
        _emit 0x52
        call FUN_0044f970
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x3b
        _emit 0xc1
        _emit 0x75
        _emit 0x0a
        _emit 0x5e
        _emit 0x8b
        _emit 0xc1
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x50
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x06
        _emit 0x50
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
    }
}

// GAP: PORT1111 0x00451ad3
__declspec(naked) void gap_00451ad3(void)
{
    __asm {
        _emit 0xc8
        _emit 0xff
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x50
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00451ae0
__declspec(naked) void __fastcall FUN_00451ae0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x17
        _emit 0x50
        call FUN_0044fbf0
        _emit 0x8b
        _emit 0x06
        _emit 0x50
        call FUN_0044fea0
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc7
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00451b02
__declspec(naked) void gap_00451b02(void)
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

// FUNCTION: PORT1111 0x00451b10
__declspec(naked) bool __fastcall FUN_00451b10(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x17
        _emit 0x50
        call FUN_0044fbf0
        _emit 0x8b
        _emit 0x06
        _emit 0x50
        call FUN_0044fea0
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc7
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        call FUN_00465e00
        _emit 0x50
        call FUN_0044fe90
        _emit 0x33
        _emit 0xc9
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x95
        _emit 0xc1
        _emit 0x89
        _emit 0x06
        _emit 0x5e
        _emit 0x8b
        _emit 0xc1
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00451b51
__declspec(naked) void gap_00451b51(void)
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

// FUNCTION: PORT1111 0x00451b60
__declspec(naked) void __cdecl FUN_00451b60(void *param_1,int param_2,int param_3,void *param_4)
{
    __asm {
        _emit 0x51
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x45
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0xcd
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        call FUN_00422370
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x55
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0xcd
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0x92
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x45
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0xcd
        _emit 0xff
        _emit 0x90
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x55
        _emit 0x00
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x6a
        _emit 0x02
        _emit 0x50
        _emit 0x8b
        _emit 0xcd
        _emit 0xff
        _emit 0x92
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x5c
        _emit 0x52
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xe8
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x03
        _emit 0xc7
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x03
        _emit 0xd3
        _emit 0x52
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x00
        _emit 0x03
        _emit 0xd7
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x03
        _emit 0xc3
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x52
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x70
        _emit 0x50
        mov ecx, OFFSET DAT_004e278c
        call FUN_0047b780
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x48
        _emit 0x5c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x45
        _emit 0x04
        _emit 0x52
        _emit 0x8b
        _emit 0x55
        _emit 0x00
        _emit 0x03
        _emit 0xc7
        _emit 0x50
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x03
        _emit 0xd3
        _emit 0x52
        _emit 0x8b
        _emit 0x16
        _emit 0x03
        _emit 0xc7
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x03
        _emit 0xd3
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x50
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x70
        _emit 0x50
        mov ecx, OFFSET DAT_004e278c
        call FUN_0047b780
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x49
        _emit 0x5c
        _emit 0x52
        _emit 0x8b
        _emit 0x16
        _emit 0x03
        _emit 0xc7
        _emit 0x50
        _emit 0x8d
        _emit 0x44
        _emit 0x1a
        _emit 0x01
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x00
        _emit 0x03
        _emit 0xd7
        _emit 0x52
        _emit 0x8d
        _emit 0x54
        _emit 0x03
        _emit 0x01
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x50
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x70
        _emit 0x50
        mov ecx, OFFSET DAT_004e278c
        call FUN_0047b780
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x45
        _emit 0x04
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x5c
        _emit 0x52
        _emit 0x8b
        _emit 0x55
        _emit 0x00
        _emit 0x03
        _emit 0xc7
        _emit 0x50
        _emit 0x8d
        _emit 0x44
        _emit 0x1a
        _emit 0x01
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x50
        _emit 0x8b
        _emit 0x06
        _emit 0x03
        _emit 0xd7
        _emit 0x52
        _emit 0x8d
        _emit 0x54
        _emit 0x18
        _emit 0x01
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x50
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x70
        _emit 0x50
        mov ecx, OFFSET DAT_004e278c
        call FUN_0047b780
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x5c
        _emit 0x52
        _emit 0x8d
        _emit 0x54
        _emit 0x38
        _emit 0x01
        _emit 0x8b
        _emit 0x06
        _emit 0x52
        _emit 0x03
        _emit 0xc3
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x00
        _emit 0x8d
        _emit 0x54
        _emit 0x3a
        _emit 0x01
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x03
        _emit 0xc3
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x52
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x70
        _emit 0x50
        mov ecx, OFFSET DAT_004e278c
        call FUN_0047b780
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x48
        _emit 0x5c
        _emit 0x8b
        _emit 0x45
        _emit 0x04
        _emit 0x52
        _emit 0x8d
        _emit 0x54
        _emit 0x38
        _emit 0x01
        _emit 0x8b
        _emit 0x45
        _emit 0x00
        _emit 0x52
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x03
        _emit 0xc3
        _emit 0x50
        _emit 0x8d
        _emit 0x44
        _emit 0x3a
        _emit 0x01
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x03
        _emit 0xd3
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x28
        _emit 0x50
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x70
        _emit 0x50
        mov ecx, OFFSET DAT_004e278c
        call FUN_0047b780
        _emit 0x5e
        _emit 0x5d
        _emit 0x59
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00451d4c
__declspec(naked) void gap_00451d4c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00451d50
__declspec(naked) void FUN_00451d50(void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x57
        _emit 0x8b
        _emit 0x7e
        _emit 0x08
        _emit 0x50
        call FUN_00403cf0
        _emit 0x57
        _emit 0x8b
        _emit 0xd8
        call FUN_00403d00
        _emit 0x8b
        _emit 0xf8
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x48
        _emit 0x5c
        _emit 0x8b
        _emit 0x11
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xff
        _emit 0x52
        _emit 0x70
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x52
        _emit 0x30
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x24
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x48
        _emit 0x5c
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x70
        _emit 0x8b
        _emit 0xe8
        _emit 0x8b
        _emit 0x45
        _emit 0x00
        _emit 0x8b
        _emit 0xcd
        _emit 0xff
        _emit 0x50
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xcd
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x55
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x14
        _emit 0x8b
        _emit 0xe8
        _emit 0xeb
        _emit 0x0a
        _emit 0x8b
        _emit 0x45
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0x8b
        _emit 0xe8
        _emit 0xf7
        _emit 0xdd
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x6a
        _emit 0x00
        _emit 0x55
        _emit 0x51
        _emit 0x56
        call FUN_00451b60
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x34
        _emit 0x6a
        _emit 0x01
        _emit 0x55
        _emit 0x52
        _emit 0x56
        call FUN_00451b60
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x44
        _emit 0x6a
        _emit 0x02
        _emit 0x55
        _emit 0x50
        _emit 0x56
        call FUN_00451b60
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x54
        _emit 0x6a
        _emit 0x03
        _emit 0x55
        _emit 0x51
        _emit 0x56
        call FUN_00451b60
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x4a
        _emit 0x5c
        _emit 0x8b
        _emit 0x01
        _emit 0x83
        _emit 0xc4
        _emit 0x40
        _emit 0xff
        _emit 0x50
        _emit 0x70
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x52
        _emit 0x34
        _emit 0x8b
        _emit 0x06
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0xc4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x53
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x52
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
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00451e49
__declspec(naked) void gap_00451e49(void)
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
        _emit 0x51
        _emit 0x08
        _emit 0x8d
        _emit 0x41
        _emit 0x60
        _emit 0x50
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x52
        _emit 0x83
        _emit 0xc1
        _emit 0x30
        call FUN_0047e660
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x8d
        _emit 0x41
        _emit 0x60
        _emit 0x50
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x52
        _emit 0x83
        _emit 0xc1
        _emit 0x30
        call FUN_0047e660
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00451e90
__declspec(naked) void __fastcall FUN_00451e90(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8be3
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
        mov dword ptr [esi], OFFSET PTR_FUN_004c4604
        _emit 0x8d
        _emit 0x7e
        _emit 0x30
        _emit 0x8b
        _emit 0xcf
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0047e280
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        call FUN_0047e300
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
        call FUN_004534e0
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


// GAP: PORT1111 0x00451ef2
__declspec(naked) void gap_00451ef2(void)
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

// FUNCTION: PORT1111 0x00451f00
__declspec(naked) int * __fastcall FUN_00451f00(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8bf8
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
        call FUN_004535d0
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x4e
        _emit 0x30
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [esi], OFFSET PTR_FUN_004c4604
        call FUN_0047e2c0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
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


// GAP: PORT1111 0x00451f4c
__declspec(naked) void gap_00451f4c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
