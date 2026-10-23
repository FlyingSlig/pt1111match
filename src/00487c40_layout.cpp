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
extern const unsigned char DAT_004bd2c8[1];
extern const unsigned char PTR_FUN_004c6bc4[4];












// FUNCTION: PORT1111 0x00487c40
__declspec(naked) void __fastcall FUN_00487c40(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x32
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2b
        _emit 0x8b
        _emit 0x56
        _emit 0x2c
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x0e
        call FUN_0047cb40
        _emit 0xc7
        _emit 0x46
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x56
        _emit 0x28
        _emit 0x6a
        _emit 0x01
        _emit 0x52
        _emit 0x51
        _emit 0x8b
        _emit 0x48
        _emit 0x24
        call FUN_0047da00
        _emit 0xc7
        _emit 0x46
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00487c7e
__declspec(naked) void gap_00487c7e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00487c80
__declspec(naked) int __fastcall FUN_00487c80(void *pthis,int param_1,unsigned int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x48
        _emit 0x24
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        call FUN_0047cf90
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x75
        _emit 0x04
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0x10
        _emit 0x8d
        _emit 0x4e
        _emit 0x08
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x52
        _emit 0x30
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x56
        _emit 0x2c
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00487cc5
__declspec(naked) void gap_00487cc5(void)
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

// FUNCTION: PORT1111 0x00487cd0
__declspec(naked) int __fastcall FUN_00487cd0(void *pthis,unsigned short param_1)
{
    __asm {
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x2b
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x24
        _emit 0x8b
        _emit 0x56
        _emit 0x2c
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x07
        call FUN_0047cb40
        _emit 0xeb
        _emit 0x0f
        _emit 0x8b
        _emit 0x56
        _emit 0x28
        _emit 0x6a
        _emit 0x01
        _emit 0x52
        _emit 0x51
        _emit 0x8b
        _emit 0x48
        _emit 0x24
        call FUN_0047da00
        _emit 0xc7
        _emit 0x46
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x50
        call FUN_00468ef0
        _emit 0x8b
        _emit 0xe8
        _emit 0x85
        _emit 0xed
        _emit 0x75
        _emit 0x05
        _emit 0x5e
        _emit 0x5d
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x74
        _emit 0x15
        _emit 0x8b
        _emit 0xcd
        call FUN_0047cb70
        _emit 0x5f
        _emit 0x89
        _emit 0x6e
        _emit 0x24
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5d
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4d
        _emit 0x14
        call FUN_00466ab0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4d
        _emit 0x8b
        _emit 0xcd
        call FUN_0047c3c0
        _emit 0x8b
        _emit 0xf8
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5d
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x5c
        _emit 0x8b
        _emit 0x11
        _emit 0x53
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8d
        _emit 0x5e
        _emit 0x08
        _emit 0x50
        _emit 0x57
        _emit 0xff
        _emit 0x52
        _emit 0x34
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x5c
        _emit 0x53
        _emit 0x83
        _emit 0xc1
        _emit 0x14
        call FUN_0040ff50
        _emit 0x8b
        _emit 0x17
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x12
        _emit 0x5b
        _emit 0x8b
        _emit 0x56
        _emit 0x28
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x48
        _emit 0x24
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        _emit 0x55
        call FUN_0047e030
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xaa
        _emit 0x5f
        _emit 0x89
        _emit 0x6e
        _emit 0x24
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5d
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x00487dc0
__declspec(naked) int * __fastcall FUN_00487dc0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8d
        _emit 0x7e
        _emit 0x18
        _emit 0x8b
        _emit 0xcf
        mov dword ptr [esi], OFFSET PTR_FUN_004c6bc4
        call FUN_0043d220
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
        _emit 0x24
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x89
        _emit 0x46
        _emit 0x2c
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00487ded
__declspec(naked) void gap_00487ded(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00487df0
__declspec(naked) void __fastcall FUN_00487df0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba94b
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
        mov dword ptr [esi], OFFSET PTR_FUN_004c6bc4
        _emit 0x8b
        _emit 0x46
        _emit 0x2c
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
        _emit 0x41
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x3a
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x2f
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x33
        _emit 0xc0
        _emit 0x66
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x50
        call FUN_00468ef0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x6a
        _emit 0x01
        _emit 0x51
        _emit 0x8b
        _emit 0x4a
        _emit 0x24
        _emit 0x50
        call FUN_0047da00
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x1c
        _emit 0x75
        _emit 0xd1
        _emit 0x5f
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x2b
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x24
        _emit 0x8b
        _emit 0x56
        _emit 0x2c
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x07
        call FUN_0047cb40
        _emit 0xeb
        _emit 0x0f
        _emit 0x8b
        _emit 0x56
        _emit 0x28
        _emit 0x6a
        _emit 0x01
        _emit 0x52
        _emit 0x51
        _emit 0x8b
        _emit 0x48
        _emit 0x24
        call FUN_0047da00
        _emit 0xc7
        _emit 0x46
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc6
        _emit 0x18
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

// GAP: PORT1111 0x00487ea8
__declspec(naked) void gap_00487ea8(void)
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
