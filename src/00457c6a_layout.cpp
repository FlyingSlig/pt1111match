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

extern const unsigned char PTR_FUN_004c46e0[4];
extern const unsigned char s_vector_T__too_long_004be704[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];











// GAP: PORT1111 0x00457c6a
__declspec(naked) void gap_00457c6a(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00457c70
__declspec(naked) void __fastcall FUN_00457c70(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x3c
        _emit 0xb0
        _emit 0xc1
        _emit 0xe2
        _emit 0x02
        _emit 0x8b
        _emit 0x1c
        _emit 0x02
        _emit 0x89
        _emit 0x1c
        _emit 0xb0
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x03
        _emit 0xc2
        _emit 0x89
        _emit 0x38
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00457c97
__declspec(naked) void gap_00457c97(void)
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

// FUNCTION: PORT1111 0x00457ca0
__declspec(naked) int __fastcall FUN_00457ca0(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x1b
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xd0
        _emit 0x73
        _emit 0x0b
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x8d
        _emit 0x04
        _emit 0x90
        _emit 0x8b
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00457cc7
__declspec(naked) void gap_00457cc7(void)
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

// FUNCTION: PORT1111 0x00457cd0
__declspec(naked) void __fastcall FUN_00457cd0(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x77
        _emit 0x08
        _emit 0x8b
        _emit 0x4f
        _emit 0x0c
        _emit 0x33
        _emit 0xc0
        _emit 0x3b
        _emit 0xf1
        _emit 0x74
        _emit 0x49
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xc2
        _emit 0x74
        _emit 0x0d
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0x40
        _emit 0x3b
        _emit 0xf1
        _emit 0x75
        _emit 0xf4
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x0e
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0xc7
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x0c
        _emit 0x8d
        _emit 0x46
        _emit 0x04
        _emit 0x2b
        _emit 0xc8
        _emit 0xc1
        _emit 0xf9
        _emit 0x02
        _emit 0xc1
        _emit 0xe1
        _emit 0x02
        _emit 0x51
        _emit 0x50
        _emit 0x56
        call memmove
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x83
        _emit 0xc0
        _emit 0xfc
        _emit 0x89
        _emit 0x47
        _emit 0x0c
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00457d2e
__declspec(naked) void gap_00457d2e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00457d30
__declspec(naked) void __fastcall FUN_00457d30(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xdb
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x5e
        _emit 0x0c
        _emit 0x2b
        _emit 0xd8
        _emit 0xc1
        _emit 0xfb
        _emit 0x02
        _emit 0x33
        _emit 0xff
        _emit 0x85
        _emit 0xdb
        _emit 0x76
        _emit 0x1a
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x0c
        _emit 0xb8
        _emit 0x85
        _emit 0xc9
        _emit 0x8d
        _emit 0x04
        _emit 0xb8
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x47
        _emit 0x3b
        _emit 0xfb
        _emit 0x72
        _emit 0xe8
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x5f
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}


// GAP: PORT1111 0x00457d8e
__declspec(naked) void gap_00457d8e(void)
{
    __asm {
        _emit 0x5e
        _emit 0x5b
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00457da0
__declspec(naked) void __fastcall FUN_00457da0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8f7b
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
        mov dword ptr [esi], OFFSET PTR_FUN_004c46e0
        _emit 0x33
        _emit 0xff
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        call FUN_00457d30
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        _emit 0x89
        _emit 0x7e
        _emit 0x10
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
    }
}


// GAP: PORT1111 0x00457df6
__declspec(naked) void gap_00457df6(void)
{
    __asm {
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
    }
}
