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

extern unsigned char DAT_004db298[];
extern unsigned char PTR_s_UNDER_ATTACK_004db2a0[];
extern const unsigned char PTR_FUN_004c3700[4];
extern int DAT_004c3738;











// GAP: PORT1111 0x0043e620
__declspec(naked) void gap_0043e620(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x5e
        _emit 0x59
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043e630
__declspec(naked) void * __fastcall FUN_0043e630(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7ef8
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
        call FUN_004748f0
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0xc6
        _emit 0x40
        _emit 0x15
        _emit 0x01
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x08
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [PTR_s_UNDER_ATTACK_004db2a0]
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
        _emit 0x24
        _emit 0x57
        mov edi, OFFSET DAT_004db298
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_0043e580
        _emit 0x89
        _emit 0x38
        _emit 0x83
        _emit 0x7f
        _emit 0x04
        _emit 0xff
        _emit 0x74
        _emit 0x03
        _emit 0xff
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x83
        _emit 0xc7
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0xe3
        _emit 0x5f
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


// GAP: PORT1111 0x0043e6b8
__declspec(naked) void gap_0043e6b8(void)
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

// FUNCTION: PORT1111 0x0043e6c0
__declspec(naked) void __fastcall FUN_0043e6c0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7f26
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
        _emit 0x08
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        mov dword ptr [edi], OFFSET PTR_FUN_004c3700
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0043d8a0
        _emit 0x8b
        _emit 0x47
        _emit 0x14
        _emit 0x8b
        _emit 0x08
        _emit 0x8d
        _emit 0x77
        _emit 0x10
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x33
        _emit 0xdb
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0x88
        _emit 0x5c
        _emit 0x24
        _emit 0x28
        call pt_a_00416c10
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x51
        call pt_a_004978fd
    }
}

// GAP: PORT1111 0x0043e719
__declspec(naked) void gap_0043e719(void)
{
    __asm {
        _emit 0x89
        _emit 0x5e
        _emit 0x04
        _emit 0x89
        _emit 0x5e
        _emit 0x08
        _emit 0x8d
        _emit 0x77
        _emit 0x04
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        call FUN_00419480
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x52
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x5e
        _emit 0x04
        _emit 0x5f
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
        _emit 0x14
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043e750
__declspec(naked) void __fastcall FUN_0043e750(void *pthis,int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8d
        _emit 0x7e
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0x56
        _emit 0x14
        _emit 0x75
        _emit 0x0e
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0042c280
        _emit 0x89
        _emit 0x18
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0043e794
__declspec(naked) void gap_0043e794(void)
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

// FUNCTION: PORT1111 0x0043e7a0
__declspec(naked) int * __fastcall FUN_0043e7a0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7f46
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
        _emit 0x10
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8d
        _emit 0x77
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        mov dword ptr [edi], OFFSET PTR_FUN_004c3700
        call FUN_0043d220
        _emit 0x33
        _emit 0xdb
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x5e
        _emit 0x08
        _emit 0x8d
        _emit 0x77
        _emit 0x10
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x24
        call FUN_004748f0
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0xb1
        _emit 0x01
        _emit 0x88
        _emit 0x48
        _emit 0x15
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x08
        _emit 0x89
        _emit 0x5e
        _emit 0x08
        _emit 0x88
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xbb
        _emit 0x10
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0x57
        _emit 0x14
        _emit 0x75
        _emit 0x0e
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0042c280
        _emit 0x89
        _emit 0x18
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0xbb
        _emit 0x11
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0x47
        _emit 0x14
        _emit 0x75
        _emit 0x0e
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_0042c280
        _emit 0x89
        _emit 0x18
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xbb
        _emit 0x12
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0x4f
        _emit 0x14
        _emit 0x75
        _emit 0x0e
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_0042c280
        _emit 0x89
        _emit 0x18
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xbb
        _emit 0x13
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0x57
        _emit 0x14
        _emit 0x75
        _emit 0x0e
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0042c280
        _emit 0x89
        _emit 0x18
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
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
        _emit 0x1c
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0043e8ef
__declspec(naked) void gap_0043e8ef(void)
{
    __asm {
        _emit 0xcc
    }
}
