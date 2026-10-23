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

extern void * DAT_004e240c;
extern int DAT_004c4b20;












// FUNCTION: PORT1111 0x0045cbc0
__declspec(naked) void __fastcall FUN_0045cbc0(void *pthis,int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b960b
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
        mov eax, dword ptr [DAT_004e240c]
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x83
        _emit 0x78
        _emit 0x60
        _emit 0x01
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x75
        _emit 0x43
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x6a
        _emit 0x18
        _emit 0x89
        _emit 0x4f
        _emit 0x04
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0a
        _emit 0x57
        _emit 0x8b
        _emit 0xc8
        call FUN_0045c400
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        mov edx, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x4a
        _emit 0x70
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_004456a0
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_0045c4d0
        _emit 0x85
        _emit 0xc0
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x50
        _emit 0x74
        _emit 0x05
        _emit 0x83
        _emit 0xc6
        _emit 0x18
        _emit 0xeb
        _emit 0x03
        _emit 0x83
        _emit 0xc6
        _emit 0x0c
        _emit 0x8b
        _emit 0x7e
        _emit 0x04
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0x57
        call FUN_00413870
        _emit 0x8b
        _emit 0xce
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xd8
        call FUN_00445600
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x8b
        _emit 0x53
        _emit 0x04
        _emit 0x5f
        _emit 0x89
        _emit 0x1a
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
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045cc7c
__declspec(naked) void gap_0045cc7c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0045cc80
__declspec(naked) int __fastcall FUN_0045cc80(void *pthis,int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b962b
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
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x03
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0xff
        _emit 0x50
        _emit 0x1c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        call FUN_00424310
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x8e
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x83
        _emit 0xc3
        _emit 0x0c
        _emit 0x8b
        _emit 0xe8
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x6a
        _emit 0x18
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0045c3d0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        call FUN_0045c430
        _emit 0x8b
        _emit 0x73
        _emit 0x04
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x50
        _emit 0x56
        _emit 0x8b
        _emit 0xcb
        call FUN_00413870
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcb
        _emit 0x8b
        _emit 0xf8
        call FUN_00445600
        _emit 0x4d
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x89
        _emit 0x39
        _emit 0x75
        _emit 0x99
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xc7
        _emit 0x42
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
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
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xc7
        _emit 0x43
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc0
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
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045cd64
__declspec(naked) void gap_0045cd64(void)
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

// FUNCTION: PORT1111 0x0045cd70
__declspec(naked) void __fastcall FUN_0045cd70(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xe9
        _emit 0x57
        _emit 0x8b
        _emit 0x7d
        _emit 0x2c
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x8d
        _emit 0x75
        _emit 0x28
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x51
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_00413870
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0x8b
        _emit 0xd8
        call FUN_00409f80
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x8b
        _emit 0x53
        _emit 0x04
        _emit 0x89
        _emit 0x1a
        _emit 0x8b
        _emit 0x7d
        _emit 0x38
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x8d
        _emit 0x75
        _emit 0x34
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x50
        _emit 0x51
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_00413870
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0x8b
        _emit 0xd8
        call FUN_00409f80
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x8b
        _emit 0x53
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x89
        _emit 0x1a
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045cdd1
__declspec(naked) void gap_0045cdd1(void)
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
        _emit 0xcc
    }
}
