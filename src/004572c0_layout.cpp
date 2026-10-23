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

extern const unsigned char PTR_FUN_004c46c4[4];











// GAP: PORT1111 0x004572c0
__declspec(naked) void gap_004572c0(void)
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

// FUNCTION: PORT1111 0x004572d0
__declspec(naked) void __fastcall FUN_004572d0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8e7b
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
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x8b
        _emit 0x30
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xf0
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x74
        _emit 0x4e
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x38
        _emit 0x5e
        _emit 0x15
        _emit 0x75
        _emit 0x35
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x38
        _emit 0x58
        _emit 0x15
        _emit 0x75
        _emit 0x14
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x06
        _emit 0x38
        _emit 0x58
        _emit 0x15
        _emit 0x75
        _emit 0x24
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x06
        _emit 0x38
        _emit 0x58
        _emit 0x15
        _emit 0x74
        _emit 0xf7
        _emit 0xeb
        _emit 0x19
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x38
        _emit 0x58
        _emit 0x15
        _emit 0x75
        _emit 0x0f
        _emit 0x3b
        _emit 0x70
        _emit 0x08
        _emit 0x75
        _emit 0x0a
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x38
        _emit 0x58
        _emit 0x15
        _emit 0x74
        _emit 0xf1
        _emit 0x8b
        _emit 0xf0
        _emit 0x3b
        _emit 0x77
        _emit 0x08
        _emit 0x75
        _emit 0xb4
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x8d
        _emit 0x77
        _emit 0x04
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call pt_a_00456630
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
        _emit 0x5e
        _emit 0x08
        _emit 0x89
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call pt_a_00456cf0
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x51
        call pt_a_004978fd
    }
}

// GAP: PORT1111 0x00457395
__declspec(naked) void gap_00457395(void)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
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
        _emit 0x10
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x004573b0
__declspec(naked) void __fastcall FUN_004573b0(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        call FUN_00457220
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x08
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x004573c6
__declspec(naked) void gap_004573c6(void)
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

// FUNCTION: PORT1111 0x004573d0
__declspec(naked) int * __fastcall FUN_004573d0(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8d
        _emit 0x77
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        call FUN_004748f0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
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
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x89
        _emit 0x47
        _emit 0x10
        _emit 0x89
        _emit 0x47
        _emit 0x14
        _emit 0x89
        _emit 0x0f
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045740e
__declspec(naked) void gap_0045740e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00457410
__declspec(naked) void __fastcall FUN_00457410(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8e9b
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
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xe9
        call FUN_00412e80
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x30
        call FUN_00412e80
        _emit 0x3b
        _emit 0x70
        _emit 0x04
        _emit 0x0f
        _emit 0x84
        _emit 0xd0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0x88
        _emit 0x6c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x4d
        _emit 0x00
        _emit 0x75
        _emit 0x68
        _emit 0x8b
        _emit 0x88
        _emit 0x90
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x5e
        _emit 0x8b
        _emit 0x80
        _emit 0x94
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4f
        _emit 0x6a
        _emit 0x18
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
        _emit 0x12
        _emit 0x8b
        _emit 0x56
        _emit 0x10
        _emit 0x8b
        _emit 0x4a
        _emit 0x14
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        call FUN_00458070
        _emit 0x8b
        _emit 0xf8
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xff
        _emit 0x8b
        _emit 0x56
        _emit 0x10
        _emit 0x8b
        _emit 0x42
        _emit 0x14
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x8d
        _emit 0x4d
        _emit 0x04
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        call FUN_00457220
        _emit 0x89
        _emit 0x38
        _emit 0x8a
        _emit 0x46
        _emit 0x15
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0x43
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0x18
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x06
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0x2e
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x06
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x74
        _emit 0xf5
        _emit 0xeb
        _emit 0x21
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0x15
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x3b
        _emit 0x70
        _emit 0x08
        _emit 0x75
        _emit 0x0c
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x74
        _emit 0xef
        _emit 0x8b
        _emit 0xf0
        call FUN_00412e80
        _emit 0x3b
        _emit 0x70
        _emit 0x04
        _emit 0x0f
        _emit 0x85
        _emit 0x32
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x5f
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
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
        _emit 0x10
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00457523
__declspec(naked) void gap_00457523(void)
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
