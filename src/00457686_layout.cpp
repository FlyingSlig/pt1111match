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

extern const unsigned char DAT_004c46d0[4];
extern const unsigned char s_then_004c46c8[8];
extern const unsigned char PTR_FUN_004c46c4[4];
extern const unsigned char DAT_004bd2c8[1];
extern const unsigned char s_and_004c46d4[8];
extern int DAT_004c46dc;
extern const unsigned char s_vector_T__too_long_004be704[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];












// GAP: PORT1111 0x00457686
__declspec(naked) void gap_00457686(void)
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

// FUNCTION: PORT1111 0x00457690
__declspec(naked) int * __fastcall FUN_00457690(void *pthis,unsigned char param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        mov dword ptr [esi], OFFSET PTR_FUN_004c46c4
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
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
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x01
        _emit 0x74
        _emit 0x09
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
    }
}

// GAP: PORT1111 0x004576d4
__declspec(naked) void gap_004576d4(void)
{
    __asm {
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004576e0
__declspec(naked) int __fastcall FUN_004576e0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x8b
        _emit 0x51
        _emit 0x0c
        _emit 0x33
        _emit 0xc9
        _emit 0x3b
        _emit 0xc2
        _emit 0x56
        _emit 0x74
        _emit 0x10
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0xce
        _emit 0x74
        _emit 0x0e
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0x41
        _emit 0x3b
        _emit 0xc2
        _emit 0x75
        _emit 0xf4
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00457709
__declspec(naked) void gap_00457709(void)
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

// FUNCTION: PORT1111 0x00457710
__declspec(naked) void * __fastcall FUN_00457710(void *pthis,void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8f19
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
        _emit 0x0c
        _emit 0x55
        _emit 0x56
        _emit 0x33
        _emit 0xf6
        _emit 0x8b
        _emit 0xe9
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x45
        _emit 0x08
        _emit 0x3b
        _emit 0xc6
        _emit 0x57
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x7d
        _emit 0x0c
        _emit 0x2b
        _emit 0xf8
        _emit 0xc1
        _emit 0xff
        _emit 0x02
        _emit 0x3b
        _emit 0xfe
        _emit 0x75
        _emit 0x17
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x28
        _emit 0x6a
        _emit 0xff
        push OFFSET DAT_004bd2c8
        _emit 0x8b
        _emit 0xce
        call FUN_00466af0
        _emit 0xe9
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call FUN_00465cf0
        _emit 0x3b
        _emit 0xfe
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x76
        _emit 0x51
        _emit 0x53
        _emit 0x8d
        _emit 0x5f
        _emit 0xff
        _emit 0x8b
        _emit 0x45
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x8b
        _emit 0x0c
        _emit 0xb0
        call FUN_00459720
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x02
        call FUN_00466a30
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x01
        call FUN_00465e40
        _emit 0x3b
        _emit 0xf3
        mov eax, OFFSET DAT_004bd2c8
        _emit 0x74
        _emit 0x05
        mov eax, OFFSET s_and_004c46d4
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call thunk_FUN_00466040
        _emit 0x46
        _emit 0x3b
        _emit 0xf7
        _emit 0x72
        _emit 0xb4
        _emit 0x5b
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x28
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call ctor_impl_466b20
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x00
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5d
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004577ff
__declspec(naked) void gap_004577ff(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00457800
__declspec(naked) void __fastcall FUN_00457800(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x77
        _emit 0x08
        _emit 0x8b
        _emit 0x5f
        _emit 0x0c
        _emit 0x3b
        _emit 0xf3
        _emit 0x74
        _emit 0x14
        _emit 0x90
        _emit 0x8b
        _emit 0x0e
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0x3b
        _emit 0xf3
        _emit 0x75
        _emit 0xed
        _emit 0x8b
        _emit 0x47
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
        _emit 0xc7
        _emit 0x47
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x47
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x47
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
    }
}

// GAP: PORT1111 0x00457849
__declspec(naked) void gap_00457849(void)
{
    __asm {
        _emit 0x5e
        _emit 0x5b
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00457850
__declspec(naked) int __fastcall FUN_00457850(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0x7e
        _emit 0x0c
        _emit 0x33
        _emit 0xc0
        _emit 0x33
        _emit 0xd2
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x3f
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0xd3
        _emit 0x74
        _emit 0x0e
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        _emit 0x42
        _emit 0x3b
        _emit 0xcf
        _emit 0x75
        _emit 0xf4
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x8d
        _emit 0x41
        _emit 0x04
        _emit 0x2b
        _emit 0xd0
        _emit 0xc1
        _emit 0xfa
        _emit 0x02
        _emit 0xc1
        _emit 0xe2
        _emit 0x02
        _emit 0x52
        _emit 0x50
        _emit 0x51
        call memmove
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x83
        _emit 0xc0
        _emit 0xfc
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004578a6
__declspec(naked) void gap_004578a6(void)
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

// FUNCTION: PORT1111 0x004578b0
__declspec(naked) void __fastcall FUN_004578b0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8f3b
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
        mov dword ptr [esi], OFFSET DAT_004c46dc
        _emit 0x33
        _emit 0xff
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        call FUN_00457800
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

// GAP: PORT1111 0x00457906
__declspec(naked) void gap_00457906(void)
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
