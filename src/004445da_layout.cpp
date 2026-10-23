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

extern "C" void free_thunk(void *);
extern void * DAT_004e240c;
extern unsigned char DAT_004e2420[4];
extern unsigned char DAT_004e26f0[4];
extern int DAT_004e2404;
extern const unsigned char PTR_FUN_004c373c[4];
extern const unsigned char PTR_FUN_004c3740[4];
extern const unsigned char DAT_004c3760[4];
extern const unsigned char DAT_004c375c[4];
extern const unsigned char DAT_004c3724[4];
extern const unsigned char DAT_004c3720[4];
extern const unsigned char DAT_004c371c[4];
extern const unsigned char DAT_004c3718[4];
extern const unsigned char DAT_004c3714[4];
extern const unsigned char DAT_004c3710[4];
extern const unsigned char s_UNKNOWN_004c367c[8];
extern const unsigned char s__s__s__s_004c3750[12];
extern const unsigned char DAT_004c3744[12];
extern const unsigned char PTR_FUN_004c3764[4];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];













// GAP: PORT1111 0x004445da
__declspec(naked) void gap_004445da(void)
{
    __asm {
        _emit 0x8b
        _emit 0xff
        _emit 0xb1
        _emit 0x44
        _emit 0x44
        _emit 0x00
        _emit 0xb8
        _emit 0x44
        _emit 0x44
        _emit 0x00
        _emit 0xbf
        _emit 0x44
        _emit 0x44
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x44
        _emit 0x00
        _emit 0xcd
        _emit 0x44
        _emit 0x44
        _emit 0x00
        _emit 0xd4
        _emit 0x44
        _emit 0x44
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
    }
}

// FUNCTION: PORT1111 0x00444600
__declspec(naked) unsigned int __fastcall FUN_00444600(void *pthis,void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x81
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x11
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0x92
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x18
        _emit 0x8b
        _emit 0x57
        _emit 0x24
        _emit 0x8b
        _emit 0x19
        _emit 0x8b
        _emit 0x2a
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x37
        _emit 0x8b
        _emit 0x4b
        _emit 0x08
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x33
        _emit 0xc0
        _emit 0x8a
        _emit 0x45
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x52
        call FUN_00444ac0
        mov ecx, dword ptr [DAT_004e2420]
        _emit 0x50
        call FUN_004417d0
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x0c
        _emit 0x8b
        _emit 0x1b
        _emit 0x8b
        _emit 0x6d
        _emit 0x00
        _emit 0x75
        _emit 0xc9
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x34
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x50
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2420]
        call FUN_004427f0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x1e
        _emit 0x8b
        _emit 0x56
        _emit 0x18
        _emit 0x8b
        _emit 0x42
        _emit 0x10
        mov ecx, dword ptr [DAT_004e2420]
        _emit 0x50
        call FUN_00443c60
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x43
        _emit 0x50
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x50
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2420]
        call FUN_004414d0
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x7d
        _emit 0x1e
        _emit 0x8b
        _emit 0x56
        _emit 0x18
        _emit 0x8b
        _emit 0x52
        _emit 0x10
        _emit 0x8b
        _emit 0x8b
        _emit 0x0c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x50
        call FUN_0043d1d0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x13
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x50
        call FUN_00406020
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00444714
__declspec(naked) void gap_00444714(void)
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

// FUNCTION: PORT1111 0x00444720
__declspec(naked) int * __fastcall FUN_00444720(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b81f6
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
        _emit 0x8d
        _emit 0x7e
        _emit 0x08
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        mov dword ptr [esi], OFFSET PTR_FUN_004c3764
        call FUN_0043d220
        _emit 0x33
        _emit 0xdb
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x5f
        _emit 0x08
        _emit 0x8d
        _emit 0x7e
        _emit 0x14
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        call FUN_0043d220
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x5f
        _emit 0x08
        _emit 0x8d
        _emit 0x7e
        _emit 0x20
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x01
        call FUN_0043d220
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x5f
        _emit 0x08
        _emit 0x5f
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
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
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0044479b
__declspec(naked) void gap_0044479b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004447a0
__declspec(naked) void __fastcall FUN_004447a0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8d
        _emit 0x7e
        _emit 0x20
        _emit 0x8b
        _emit 0xcf
        mov dword ptr [esi], OFFSET PTR_FUN_004c3764
        call FUN_00419480
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
    }
}

// GAP: PORT1111 0x004447bd
__declspec(naked) void gap_004447bd(void)
{
    __asm {
        _emit 0xc7
        _emit 0x47
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x7e
        _emit 0x14
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xcf
        call FUN_00419480
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x51
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc6
        _emit 0x08
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x47
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00419480
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x52
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x5f
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0xcc
        _emit 0xcc
    }
}
