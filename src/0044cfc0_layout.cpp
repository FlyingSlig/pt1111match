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

extern unsigned char DAT_004dc2b4[];
extern const unsigned char s_data_som__004c450c[12];
extern unsigned char DAT_004e2b14[12];
extern const unsigned char DAT_004c4b90[16];
extern const unsigned char PTR_LAB_004c4508[4];
extern unsigned char DAT_004e2804[4];
extern unsigned char DAT_004dc2b0[4];
extern const unsigned char s__s_d_wav_004c4520[12];
extern const unsigned char DAT_004c4518[8];
extern int DAT_004c452c;











// GAP: PORT1111 0x0044cfc0
__declspec(naked) void gap_0044cfc0(void)
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

// FUNCTION: PORT1111 0x0044cfd0
__declspec(naked) void __fastcall FUN_0044cfd0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8a4e
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
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0044c400
        _emit 0x8d
        _emit 0x7e
        _emit 0x74
        _emit 0x8b
        _emit 0xcf
        call FUN_0047fe60
        _emit 0x8b
        _emit 0x46
        _emit 0x60
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        call FUN_0047fff0
        _emit 0x8d
        _emit 0x4e
        _emit 0x10
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        call FUN_0044ba80
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call pt_a_0044cac0
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
    }
}


// GAP: PORT1111 0x0044d055
__declspec(naked) void gap_0044d055(void)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
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
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
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

// FUNCTION: PORT1111 0x0044d080
__declspec(naked) void __fastcall FUN_0044d080(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8a73
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
        push OFFSET s_data_som__004c450c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x50
        call FUN_00468110
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x51
        _emit 0x33
        _emit 0xdb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x24
        call thunk_FUN_00466040
        _emit 0x53
        _emit 0x6a
        _emit 0x01
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        call FUN_00465e00
        _emit 0x50
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x52
        _emit 0x8d
        _emit 0x4e
        _emit 0x10
        call FUN_0044bd90
        _emit 0x3b
        _emit 0xc3
        _emit 0x0f
        _emit 0x8c
        _emit 0xb8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        push OFFSET DAT_004c4b90
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call FUN_00465e00
        _emit 0x50
        call FUN_0044c0f0
        _emit 0x8b
        _emit 0xd0
        _emit 0x69
        _emit 0xd2
        _emit 0x00
        _emit 0x68
        _emit 0x01
        _emit 0x00
        _emit 0xb8
        _emit 0x89
        _emit 0x88
        _emit 0x88
        _emit 0x88
        _emit 0xf7
        _emit 0xe2
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc1
        _emit 0xea
        _emit 0x05
        _emit 0x52
        _emit 0x50
        _emit 0xff
        _emit 0x51
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x2c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x30
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xc8
        _emit 0x74
        _emit 0x13
        _emit 0x8b
        _emit 0x49
        _emit 0x10
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x0c
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        call FUN_0044cf50
        _emit 0xeb
        _emit 0x3d
        _emit 0x57
        _emit 0x6a
        _emit 0x10
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x0d
        _emit 0x89
        _emit 0x58
        _emit 0x04
        _emit 0x89
        _emit 0x58
        _emit 0x08
        _emit 0x89
        _emit 0x58
        _emit 0x0c
        _emit 0x8b
        _emit 0xf8
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xff
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0x88
        _emit 0x5c
        _emit 0x24
        _emit 0x28
        call FUN_0044cf50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_0044ced0
        _emit 0x89
        _emit 0x38
        _emit 0x5f
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
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
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x0044d1c3
__declspec(naked) void gap_0044d1c3(void)
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

// FUNCTION: PORT1111 0x0044d1d0
__declspec(naked) int __fastcall FUN_0044d1d0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8a93
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
        _emit 0x33
        _emit 0xff
        _emit 0x89
        _emit 0x40
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        _emit 0x8d
        _emit 0x4e
        _emit 0x10
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        call FUN_0044ba50
        _emit 0x8d
        _emit 0x4e
        _emit 0x74
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        mov dword ptr [esi + 0x70], OFFSET PTR_LAB_004c4508
        call FUN_0047ff90
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0xbe
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [DAT_004e2804], esi
        _emit 0x89
        _emit 0x7e
        _emit 0x60
        _emit 0x89
        _emit 0x7e
        _emit 0x64
        _emit 0x89
        _emit 0x7e
        _emit 0x68
        _emit 0x89
        _emit 0x7e
        _emit 0x6c
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
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


// GAP: PORT1111 0x0044d262
__declspec(naked) void gap_0044d262(void)
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

// FUNCTION: PORT1111 0x0044d270
__declspec(naked) int __fastcall FUN_0044d270(void *pthis,void *param_1,int param_2)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8aa8
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
        _emit 0x55
        _emit 0x8b
        _emit 0xe9
        _emit 0x57
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x33
        _emit 0xff
        call FUN_00465cf0
        mov eax, dword ptr [DAT_004dc2b0]
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x74
        _emit 0x21
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x20
        mov ecx, OFFSET DAT_004dc2b0
        _emit 0x3b
        _emit 0xc3
        _emit 0x75
        _emit 0x05
        _emit 0x39
        _emit 0x51
        _emit 0x04
        _emit 0x74
        _emit 0x32
        _emit 0x8b
        _emit 0x41
        _emit 0x10
        _emit 0x83
        _emit 0xc1
        _emit 0x10
        _emit 0x47
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0xec
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x5f
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
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
        _emit 0xc1
        _emit 0xe7
        _emit 0x04
        mov ecx, dword ptr [edi + DAT_004dc2b4 + 8]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x44
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xc9
        _emit 0x7e
        _emit 0x6e
        _emit 0x56
        _emit 0x90
        _emit 0x53
        _emit 0x8d
        _emit 0x70
        _emit 0x01
        mov eax, dword ptr [edi + DAT_004dc2b4 + 4]
        _emit 0x56
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        push OFFSET s__s_d_wav_004c4520
        _emit 0x51
        call FUN_00466970
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        call FUN_00465e00
        _emit 0x50
        _emit 0x8b
        _emit 0xcd
        call FUN_0044d080
        mov ecx, dword ptr [edi + DAT_004dc2b4 + 8]
        _emit 0x8b
        _emit 0xc6
        _emit 0x3b
        _emit 0xc1
        _emit 0x7c
        _emit 0xc7
        _emit 0x5e
        _emit 0xeb
        _emit 0x30
        mov edx, dword ptr [edi + DAT_004dc2b4 + 4]
        _emit 0x52
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call FUN_00466a40
        push OFFSET DAT_004c4518
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call thunk_FUN_00466040
        _emit 0x53
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call FUN_00465e00
        _emit 0x50
        _emit 0x8b
        _emit 0xcd
        call FUN_0044d080
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x5f
        _emit 0x5d
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
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

// GAP: PORT1111 0x0044d396
__declspec(naked) void gap_0044d396(void)
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

// FUNCTION: PORT1111 0x0044d3a0
__declspec(naked) void __fastcall FUN_0044d3a0(void *pthis,int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x86
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0x46
        _emit 0x04
        _emit 0x74
        _emit 0x41
        _emit 0x57
        _emit 0x8b
        _emit 0x78
        _emit 0x10
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x38
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x6a
        _emit 0x03
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x86
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0044d270
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x8b
        _emit 0x57
        _emit 0x04
        _emit 0x8d
        _emit 0x04
        _emit 0x8a
        _emit 0x8b
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        call FUN_0044bc90
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_0044c1c0
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0044d412
__declspec(naked) void gap_0044d412(void)
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
