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

extern const unsigned char PTR_FUN_004bf738[4];
extern unsigned char DAT_004e0b18[4];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];











// GAP: PORT1111 0x004216ca
__declspec(naked) void gap_004216ca(void)
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

// FUNCTION: PORT1111 0x004216d0
__declspec(naked) void __fastcall FUN_004216d0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6c8b
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
        mov dword ptr [esi], OFFSET PTR_FUN_004bf738
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004215b0
        _emit 0x83
        _emit 0xc6
        _emit 0x08
        _emit 0x8b
        _emit 0xce
        call FUN_00419480
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
    }
}


// GAP: PORT1111 0x00421713
__declspec(naked) void gap_00421713(void)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00421730
__declspec(naked) int * __fastcall FUN_00421730(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6c8b
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
        _emit 0x8d
        _emit 0x7e
        _emit 0x08
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        mov dword ptr [esi], OFFSET PTR_FUN_004bf738
        call FUN_004216b0
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x47
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x89
        _emit 0x46
        _emit 0x44
        _emit 0x89
        _emit 0x46
        _emit 0x4c
        _emit 0x89
        _emit 0x46
        _emit 0x50
        _emit 0x89
        _emit 0x46
        _emit 0x54
        _emit 0x89
        _emit 0x46
        _emit 0x58
        _emit 0x89
        _emit 0x46
        _emit 0x5c
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xc7
        _emit 0x46
        _emit 0x48
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x60
        _emit 0x89
        _emit 0x46
        _emit 0x64
        _emit 0x33
        _emit 0xc0
        _emit 0x8d
        _emit 0x4e
        _emit 0x1c
        _emit 0x89
        _emit 0x01
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x0c
        _emit 0x89
        _emit 0x41
        _emit 0x10
        _emit 0x89
        _emit 0x41
        _emit 0x14
        _emit 0x89
        _emit 0x41
        _emit 0x18
        _emit 0x89
        _emit 0x41
        _emit 0x1c
        _emit 0x6a
        _emit 0x1e
        _emit 0x89
        _emit 0x41
        _emit 0x20
        _emit 0x6a
        _emit 0x1e
        _emit 0x6a
        _emit 0x1e
        _emit 0x89
        _emit 0x41
        _emit 0x24
        call FUN_0046c8b0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        mov word ptr [DAT_004e0b18], ax
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
        _emit 0xc3
    }
}

