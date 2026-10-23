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

extern int DAT_004e0af4;
extern unsigned char DAT_004e2424[];
extern unsigned char DAT_004e0b04[4];
extern unsigned char DAT_004e0b08[4];
extern unsigned char DAT_004e0b0c[4];
extern unsigned char DAT_004e0b00[4];
extern unsigned char DAT_004e26fc[4];
extern const unsigned char PTR_GetAsyncKeyState_004bc2dc[4];
extern unsigned char DAT_004e086c[4];
extern unsigned char DAT_004e2414[4];
extern unsigned char DAT_004e26f0[4];
extern const unsigned char s_Nenhuma_regra__004bef78[16];
extern const unsigned char PTR_FUN_004bef74[4];












// GAP: PORT1111 0x00417b40
__declspec(naked) void gap_00417b40(void)
{
    __asm {
        _emit 0x55
        _emit 0x79
        _emit 0x41
        _emit 0x00
        _emit 0x8b
        _emit 0x79
        _emit 0x41
        _emit 0x00
        _emit 0x7f
        _emit 0x79
        _emit 0x41
        _emit 0x00
        _emit 0xf7
        _emit 0x79
        _emit 0x41
        _emit 0x00
        _emit 0x03
        _emit 0x7a
        _emit 0x41
        _emit 0x00
        _emit 0x00
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x01
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x02
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x03
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00417b90
__declspec(naked) void __fastcall FUN_00417b90(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xc3
        _emit 0x57
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x40
        _emit 0x60
        _emit 0x89
        _emit 0x58
        _emit 0x30
        _emit 0x89
        _emit 0x5e
        _emit 0x40
        mov ecx, dword ptr [DAT_004e2424]
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0xf9
        call FUN_004340f0
        _emit 0x57
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        mov dword ptr [DAT_004e2424], ebx
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x0d
        call FUN_00478a10
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        call FUN_004788b0
        _emit 0x8b
        _emit 0xce
        call FUN_00414af0
        _emit 0x8b
        _emit 0x4e
        _emit 0x74
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x74
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x89
        _emit 0x5e
        _emit 0x74
        _emit 0x8b
        _emit 0xbe
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xfb
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0xcf
        call pt_a_00417710
        _emit 0x57
        call pt_a_004978fd
        _emit 0x83
    }
}

// GAP: PORT1111 0x00417c17
__declspec(naked) void gap_00417c17(void)
{
    __asm {
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x9e
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        _emit 0x5b
        jmp FUN_00414d90
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00417c30
__declspec(naked) void __fastcall FUN_00417c30(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6525
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
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        mov dword ptr [esi], OFFSET PTR_FUN_004bef74
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00417b90
        _emit 0x8b
        _emit 0x46
        _emit 0x5c
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x07
        _emit 0x50
        call dword ptr [timeKillEvent]
        push OFFSET FUN_00409650
        _emit 0x6a
        _emit 0x0a
        _emit 0x8d
        _emit 0x86
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x1c
        _emit 0x50
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x04
        _emit 0xe8
        _emit 0xde
        _emit 0xff
        _emit 0x07
        _emit 0x00
        _emit 0x8d
        _emit 0x4e
        _emit 0x78
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x03
        call FUN_0045d860
        _emit 0x8b
        _emit 0x46
        _emit 0x2c
        _emit 0x8b
        _emit 0x08
        _emit 0x8d
        _emit 0x7e
        _emit 0x28
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x02
        call pt_a_00416b50
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
    }
}

// GAP: PORT1111 0x00417cbf
__declspec(naked) void gap_00417cbf(void)
{
    __asm {
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x89
        _emit 0x5f
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x8b
        _emit 0x08
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8d
        _emit 0x7e
        _emit 0x1c
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x01
        call pt_a_00416a90
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x89
        _emit 0x5f
        _emit 0x08
        _emit 0x8d
        _emit 0x7e
        _emit 0x10
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xcf
        call FUN_00419480
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x08
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call pt_a_004169d0
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x50
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
        _emit 0x89
        _emit 0x5e
        _emit 0x08
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
    }
}
