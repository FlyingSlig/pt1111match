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

extern unsigned char DAT_004e2c54[4];
extern const unsigned char PTR_FUN_004c6680[4];
extern const unsigned char PTR_FUN_004c6684[44];
extern const unsigned char DAT_004bd2c8[1];











// GAP: PORT1111 0x0047baf2
__declspec(naked) void gap_0047baf2(void)
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

// FUNCTION: PORT1111 0x0047bb00
__declspec(naked) void __fastcall FUN_0047bb00(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8d
        _emit 0x46
        _emit 0x06
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a1d0
        _emit 0x8d
        _emit 0x4e
        _emit 0x08
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a1d0
        _emit 0x8d
        _emit 0x56
        _emit 0x04
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a1d0
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a1b0
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x83
        _emit 0xc1
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a1f0
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x83
        _emit 0xc2
        _emit 0x11
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a1f0
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0047bb58
__declspec(naked) void gap_0047bb58(void)
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

// FUNCTION: PORT1111 0x0047bb60
__declspec(naked) void __fastcall FUN_0047bb60(void *pthis,void *param_1)
{
    __asm {
        mov eax, dword ptr [DAT_004e2c54]
        _emit 0x56
        _emit 0xc1
        _emit 0xe8
        _emit 0x08
        _emit 0x3c
        _emit 0xa0
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xf1
        _emit 0x0f
        _emit 0x85
        _emit 0x8a
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a110
        _emit 0x66
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0x66
        _emit 0x89
        _emit 0x56
        _emit 0x06
        call FUN_0048a110
        _emit 0x66
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x66
        _emit 0x89
        _emit 0x4e
        _emit 0x08
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a110
        _emit 0x66
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x04
        call FUN_0048a110
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x83
        _emit 0xc2
        _emit 0x04
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a110
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a110
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x8a
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x88
        _emit 0x51
        _emit 0x10
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a110
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x8a
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
        _emit 0x88
        _emit 0x51
        _emit 0x11
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8d
        _emit 0x46
        _emit 0x06
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a130
        _emit 0x8d
        _emit 0x4e
        _emit 0x08
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a130
        _emit 0x8d
        _emit 0x56
        _emit 0x04
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a130
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a110
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x83
        _emit 0xc1
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a0f0
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x83
        _emit 0xc2
        _emit 0x11
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0048a0f0
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0047bc52
__declspec(naked) void gap_0047bc52(void)
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

// FUNCTION: PORT1111 0x0047bc60
__declspec(naked) int * __fastcall FUN_0047bc60(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xc3
        mov dword ptr [esi], OFFSET PTR_FUN_004c6680
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x75
        _emit 0x36
        _emit 0x6a
        _emit 0x18
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x20
        _emit 0x66
        _emit 0x89
        _emit 0x18
        _emit 0x66
        _emit 0x89
        _emit 0x58
        _emit 0x02
        _emit 0x89
        _emit 0x58
        _emit 0x04
        _emit 0x66
        _emit 0x89
        _emit 0x58
        _emit 0x08
        _emit 0x66
        _emit 0x89
        _emit 0x58
        _emit 0x0a
        _emit 0x89
        _emit 0x58
        _emit 0x0c
        _emit 0x88
        _emit 0x58
        _emit 0x10
        _emit 0x88
        _emit 0x58
        _emit 0x11
        _emit 0x89
        _emit 0x58
        _emit 0x14
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0xff
        _emit 0x40
        _emit 0x14
        _emit 0x66
        _emit 0x89
        _emit 0x5e
        _emit 0x06
        _emit 0x66
        _emit 0x89
        _emit 0x5e
        _emit 0x08
        _emit 0x66
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047bcc2
__declspec(naked) void gap_0047bcc2(void)
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

// FUNCTION: PORT1111 0x0047bcd0
__declspec(naked) int __fastcall FUN_0047bcd0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x50
        _emit 0x08
        _emit 0x85
        _emit 0xd2
        _emit 0x50
        _emit 0x75
        _emit 0x0d
        call FUN_0047bb00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        call FUN_0047bb60
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047bcf6
__declspec(naked) void gap_0047bcf6(void)
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

// FUNCTION: PORT1111 0x0047bd00
__declspec(naked) void __fastcall FUN_0047bd00(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba39b
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
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x14
        _emit 0x41
        _emit 0x6a
        _emit 0x10
        _emit 0x89
        _emit 0x48
        _emit 0x14
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
        _emit 0x0d
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        call FUN_0047bc60
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x66
        _emit 0xc7
        _emit 0x40
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0xc7
        _emit 0x40
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0xc7
        _emit 0x40
        _emit 0x04
        _emit 0xff
        _emit 0xff
        _emit 0x66
        _emit 0x8b
        _emit 0x56
        _emit 0x06
        _emit 0x66
        _emit 0x89
        _emit 0x50
        _emit 0x06
        _emit 0x66
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x66
        _emit 0x89
        _emit 0x48
        _emit 0x08
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

// GAP: PORT1111 0x0047bd7e
__declspec(naked) void gap_0047bd7e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047bd80
__declspec(naked) void __fastcall FUN_0047bd80(void *pthis,void *param_1,int param_2,int param_3,void *param_4)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x20
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_00453c80
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x58
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x0f
        _emit 0xb6
        _emit 0x48
        _emit 0x11
        _emit 0x0f
        _emit 0xb6
        _emit 0x50
        _emit 0x10
        _emit 0x51
        _emit 0x52
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x51
        _emit 0x8b
        _emit 0x48
        _emit 0x0c
        call FUN_0047e1c0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x3a
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x3c
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x8b
        _emit 0x11
        _emit 0x74
        _emit 0x25
        _emit 0x8b
        _emit 0x78
        _emit 0x04
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x38
        _emit 0x50
        _emit 0x8b
        _emit 0x00
        _emit 0x03
        _emit 0xfb
        _emit 0x57
        _emit 0x03
        _emit 0x44
        _emit 0x24
        _emit 0x3c
        _emit 0x50
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x40
        _emit 0x0c
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x28
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0xe9
        _emit 0x89
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x3c
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x76
        _emit 0x8b
        _emit 0xcf
        _emit 0x8b
        _emit 0x11
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x51
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        call dword ptr [OffsetRect]
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x8b
        _emit 0xc2
        _emit 0x50
        call dword ptr [IntersectRect]
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x38
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x8b
        _emit 0x11
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x03
        _emit 0xc3
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x38
        _emit 0x50
        _emit 0x8b
        _emit 0x07
        _emit 0x03
        _emit 0xc3
        _emit 0x50
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x40
        _emit 0x0c
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x28
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x8b
        _emit 0x11
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x3c
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x3c
        _emit 0x50
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x40
        _emit 0x0c
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x28
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047be94
__declspec(naked) void gap_0047be94(void)
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

// FUNCTION: PORT1111 0x0047bea0
__declspec(naked) void __fastcall FUN_0047bea0(void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x14
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x66
        _emit 0x80
        _emit 0x7e
        _emit 0x11
        _emit 0xff
        _emit 0x74
        _emit 0x25
        _emit 0x66
        _emit 0xc7
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0xc7
        _emit 0x46
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_0047e810
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x08
        call FUN_0047e870
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x0a
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0xc3
        _emit 0x8b
        _emit 0x49
        _emit 0x58
        _emit 0x0f
        _emit 0xb6
        _emit 0x46
        _emit 0x10
        _emit 0x53
        _emit 0x8d
        _emit 0x04
        _emit 0x80
        _emit 0x8b
        _emit 0x5c
        _emit 0x81
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x81
        _emit 0x0c
        _emit 0x8d
        _emit 0x04
        _emit 0x81
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0x2b
        _emit 0xcf
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x66
        _emit 0x89
        _emit 0x06
        _emit 0xc1
        _emit 0xe8
        _emit 0x10
        _emit 0x2b
        _emit 0xd3
        _emit 0x5f
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x02
        _emit 0x66
        _emit 0x89
        _emit 0x4e
        _emit 0x08
        _emit 0x66
        _emit 0x89
        _emit 0x56
        _emit 0x0a
        _emit 0x5b
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047bf18
__declspec(naked) void gap_0047bf18(void)
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

// FUNCTION: PORT1111 0x0047bf20
__declspec(naked) int __fastcall FUN_0047bf20(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call FUN_00475080
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x75
        _emit 0x04
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_0047bea0
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

// FUNCTION: PORT1111 0x0047bf50
__declspec(naked) void __fastcall FUN_0047bf50(void *pthis,unsigned char param_1,int param_2)
{
    __asm {
        _emit 0x8a
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0xb1
        _emit 0xff
        _emit 0x88
        _emit 0x48
        _emit 0x11
        _emit 0x88
        _emit 0x50
        _emit 0x10
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x38
        _emit 0x48
        _emit 0x11
        _emit 0x75
        _emit 0x30
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x29
        _emit 0x8b
        _emit 0x48
        _emit 0x0c
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0047bf20
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x66
        _emit 0x8b
        _emit 0x08
        _emit 0x66
        _emit 0x01
        _emit 0x4e
        _emit 0x06
        _emit 0x66
        _emit 0x8b
        _emit 0x50
        _emit 0x02
        _emit 0x66
        _emit 0x01
        _emit 0x56
        _emit 0x08
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x0047bf9e
__declspec(naked) void gap_0047bf9e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047bfa0
__declspec(naked) int * __fastcall FUN_0047bfa0(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_004884d0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x89
        _emit 0x46
        _emit 0x24
        mov dword ptr [esi], OFFSET PTR_FUN_004c6684
        _emit 0x89
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047bfcc
__declspec(naked) void gap_0047bfcc(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0xd1
        _emit 0x8b
        _emit 0x42
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x03
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0x72
        _emit 0x18
        _emit 0x8b
        _emit 0xce
        _emit 0x2b
        _emit 0xc8
        _emit 0x3b
        _emit 0x4a
        _emit 0x14
        _emit 0x76
        _emit 0x06
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x53
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0xd9
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0xcb
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xa4
        _emit 0x8b
        _emit 0x4a
        _emit 0x18
        _emit 0x5f
        _emit 0x03
        _emit 0xc8
        _emit 0x5b
        _emit 0x89
        _emit 0x4a
        _emit 0x18
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
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
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x3b
        _emit 0x41
        _emit 0x14
        _emit 0x72
        _emit 0x05
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x10
        _emit 0x8b
        _emit 0x51
        _emit 0x10
        _emit 0x03
        _emit 0xd0
        _emit 0x89
        _emit 0x51
        _emit 0x18
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x01
        _emit 0x41
        _emit 0x18
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x08
        _emit 0x00
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

// FUNCTION: PORT1111 0x0047c060
__declspec(naked) int __fastcall FUN_0047c060(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0x5e
        _emit 0x18
        _emit 0x2b
        _emit 0xd8
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x7e
        _emit 0x14
        _emit 0x8d
        _emit 0x0c
        _emit 0x03
        _emit 0x3b
        _emit 0xcf
        _emit 0x0f
        _emit 0x86
        _emit 0x86
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x33
        _emit 0xd2
        _emit 0xf7
        _emit 0xf1
        _emit 0x55
        _emit 0x8b
        _emit 0xe8
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xd2
        _emit 0x0f
        _emit 0x95
        _emit 0xc0
        _emit 0x03
        _emit 0xc5
        _emit 0x0f
        _emit 0xaf
        _emit 0xc1
        _emit 0x03
        _emit 0xf8
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x85
        _emit 0xc0
        _emit 0x5d
        _emit 0x74
        _emit 0x37
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x07
        _emit 0x50
        call dword ptr [GlobalUnlock]
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x6a
        _emit 0x42
        _emit 0x57
        _emit 0x51
        call dword ptr [GlobalReAlloc]
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x74
        _emit 0x25
        _emit 0x50
        call dword ptr [GlobalLock]
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x85
        _emit 0xc9
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x74
        _emit 0x14
        _emit 0x03
        _emit 0xc3
        _emit 0xeb
        _emit 0x22
        _emit 0x57
        _emit 0x6a
        _emit 0x40
        call dword ptr [GlobalAlloc]
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x75
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x50
        call dword ptr [GlobalLock]
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x89
        _emit 0x7e
        _emit 0x14
        _emit 0xc7
        _emit 0x46
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x0047c110
__declspec(naked) void __fastcall FUN_0047c110(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xc7
        _emit 0x75
        _emit 0x18
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x11
        _emit 0x50
        call dword ptr [GlobalUnlock]
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x50
        call dword ptr [GlobalFree]
        _emit 0x89
        _emit 0x7e
        _emit 0x20
        _emit 0x89
        _emit 0x7e
        _emit 0x10
        _emit 0x89
        _emit 0x7e
        _emit 0x14
        _emit 0x89
        _emit 0x7e
        _emit 0x18
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047c144
__declspec(naked) void gap_0047c144(void)
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
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x56
        _emit 0x57
        _emit 0x55
        _emit 0x8b
        _emit 0xd9
        call FUN_0047c060
        _emit 0x8b
        _emit 0x7b
        _emit 0x18
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xcd
        _emit 0x8b
        _emit 0xc1
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0xc8
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xa4
        _emit 0x8b
        _emit 0x43
        _emit 0x18
        _emit 0x03
        _emit 0xc5
        _emit 0x5f
        _emit 0x89
        _emit 0x43
        _emit 0x18
        _emit 0x5e
        _emit 0x8b
        _emit 0xc5
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
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

// FUNCTION: PORT1111 0x0047c190
__declspec(naked) void __fastcall FUN_0047c190(void *pthis,int param_1,int param_2)
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
        _emit 0x18
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0x50
        call dword ptr [GlobalUnlock]
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x50
        call dword ptr [GlobalFree]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xc7
        _emit 0x46
        _emit 0x20
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x89
        _emit 0x4e
        _emit 0x14
        _emit 0xc7
        _emit 0x46
        _emit 0x24
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


// GAP: PORT1111 0x0047c1d5
__declspec(naked) void gap_0047c1d5(void)
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

// FUNCTION: PORT1111 0x0047c1e0
__declspec(naked) void __fastcall FUN_0047c1e0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xc7
        mov dword ptr [esi], OFFSET PTR_FUN_004c6684
        _emit 0x75
        _emit 0x18
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x11
        _emit 0x50
        call dword ptr [GlobalUnlock]
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x50
        call dword ptr [GlobalFree]
        _emit 0x89
        _emit 0x7e
        _emit 0x20
        _emit 0x89
        _emit 0x7e
        _emit 0x10
        _emit 0x89
        _emit 0x7e
        _emit 0x14
        _emit 0x89
        _emit 0x7e
        _emit 0x18
        _emit 0x5f
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        jmp FUN_00488880
    }
}

