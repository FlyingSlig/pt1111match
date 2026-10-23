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

extern const unsigned char s_list_T__too_long_004bce98[];
extern const unsigned char s_deque_T__too_long_004bfd24[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];
extern const unsigned char PTR_DeleteCriticalSection_004bc128[4];
extern const unsigned char PTR_FUN_004bfcdc[12];
extern const unsigned char PTR_LAB_004bfcd0[12];












// FUNCTION: PORT1111 0x00433fd0
__declspec(naked) void __fastcall FUN_00433fd0(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7848
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x83
        _emit 0xec
        _emit 0x44
        _emit 0x56
        _emit 0xbe
        _emit 0x55
        _emit 0x55
        _emit 0x55
        _emit 0x15
        _emit 0x2b
        _emit 0xf0
        _emit 0x3b
        _emit 0xf2
        _emit 0x5e
        _emit 0x73
        _emit 0x51
        _emit 0x6a
        _emit 0x10
        push OFFSET s_list_T__too_long_004bce98
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x0f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        call pt_a_004016b0
        _emit 0x8d
        _emit 0x04
        _emit 0x24
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x50
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call pt_a_004017e0
        push OFFSET DAT_004cc884
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x51
        mov dword ptr [esp + 0x24], OFFSET pt_d_004c6e20
        call _CxxThrowException
        _emit 0x03
        _emit 0xc2
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x44
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x50
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00434063
__declspec(naked) void gap_00434063(void)
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

// FUNCTION: PORT1111 0x00434070
__declspec(naked) void FUN_00434070(void)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7848
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
        _emit 0x44
        _emit 0x6a
        _emit 0x11
        push OFFSET s_deque_T__too_long_004bfd24
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x0f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        call pt_a_004016b0
        _emit 0x8d
        _emit 0x04
        _emit 0x24
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x50
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call pt_a_004017e0
        push OFFSET DAT_004cc884
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x51
        mov dword ptr [esp + 0x24], OFFSET pt_d_004c6e20
        call _CxxThrowException
    }
}

// GAP: PORT1111 0x004340d9
__declspec(naked) void gap_004340d9(void)
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
