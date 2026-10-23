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

extern unsigned char DAT_004e2424[4];
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e2c58[4];
extern unsigned char DAT_004e2408[4];
extern unsigned char DAT_004e2418[4];
extern int DAT_004e2404;












// FUNCTION: PORT1111 0x004130e0
__declspec(naked) void __fastcall thunk_FUN_004120f0(void *param_1)
{
    __asm {
        jmp FUN_004120f0
    }
}

// GAP: PORT1111 0x004130e5
__declspec(naked) void gap_004130e5(void)
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

// FUNCTION: PORT1111 0x004130f0
__declspec(naked) int __fastcall FUN_004130f0(void *pthis,int param_1)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b616b
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x33
        _emit 0xff
        _emit 0x68
        _emit 0xf4
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x7e
        _emit 0x74
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x3b
        _emit 0xc7
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_00434340
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        mov dword ptr [DAT_004e2424], eax
        call FUN_00433a80
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x13
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
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x19
        call FUN_004750e0
        _emit 0x89
        _emit 0x46
        _emit 0x34
        _emit 0x83
        _emit 0x48
        _emit 0x28
        _emit 0x04
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        call FUN_004787e0
        _emit 0x8b
        _emit 0x4e
        _emit 0x58
        _emit 0x41
        _emit 0x8b
        _emit 0xc1
        _emit 0x83
        _emit 0xf8
        _emit 0x01
        _emit 0x89
        _emit 0x7e
        _emit 0x50
        _emit 0x89
        _emit 0x7e
        _emit 0x54
        _emit 0x89
        _emit 0x4e
        _emit 0x58
        _emit 0x7f
        _emit 0x15
        mov ecx, dword ptr [DAT_004e2424]
        mov dword ptr [DAT_004e2c58], 1
        call FUN_004339d0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004131cc
__declspec(naked) void gap_004131cc(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004131d0
__declspec(naked) void __fastcall thunk_FUN_00407050(void *param_1)
{
    __asm {
        jmp FUN_00407050
    }
}

// GAP: PORT1111 0x004131d5
__declspec(naked) void gap_004131d5(void)
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

// FUNCTION: PORT1111 0x004131e0
__declspec(naked) void __fastcall FUN_004131e0(void *pthis,void *param_1,int param_2)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b616b
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x57
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xf7
        _emit 0x8b
        _emit 0xe9
        _emit 0x0f
        _emit 0x84
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x7e
        _emit 0x7c
        _emit 0x0f
        _emit 0x85
        _emit 0xd3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00412b60
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0xc4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        _emit 0x6a
        _emit 0xff
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x46
        _emit 0x7c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00405ad0
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x0f
        _emit 0xbf
        _emit 0x48
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x50
        _emit 0x4e
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2408]
        _emit 0x52
        _emit 0x56
        call FUN_0043c180
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x20
        _emit 0x83
        _emit 0xf8
        _emit 0xff
        _emit 0x74
        _emit 0x28
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x20
        mov ecx, dword ptr [DAT_004e2418]
        _emit 0x50
        call FUN_0040af10
        _emit 0x8b
        _emit 0xc8
        call FUN_0040a970
        _emit 0xc7
        _emit 0x85
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x6a
        _emit 0x34
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x3b
        _emit 0xc7
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_004317a0
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x75
        _emit 0x0a
        _emit 0x57
        _emit 0x8b
        _emit 0xcd
        call FUN_00412e90
        _emit 0xeb
        _emit 0x0f
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x8b
        _emit 0x07
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x10
        _emit 0x8b
        _emit 0x8d
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x56
        call FUN_00453a00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5d
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x004132f8
__declspec(naked) void gap_004132f8(void)
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

// FUNCTION: PORT1111 0x00413300
__declspec(naked) void FUN_00413300(void)
{
    __asm {
        mov ecx, dword ptr [DAT_004e2404]
        call FUN_0042bde0
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x24
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x14
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x48
        _emit 0x5c
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x54
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x1c
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x48
        _emit 0x5c
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x4c
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x48
        _emit 0x5c
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x58
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x48
        _emit 0x5c
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x62
        _emit 0x64
    }
}

// GAP: PORT1111 0x00413373
__declspec(naked) void gap_00413373(void)
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

// FUNCTION: PORT1111 0x00413380
__declspec(naked) void __fastcall FUN_00413380(void *pthis,void *param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x08
        _emit 0x89
        _emit 0x4e
        _emit 0x38
        _emit 0x8b
        _emit 0x4e
        _emit 0x74
        _emit 0x85
        _emit 0xc9
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x56
        _emit 0x3c
        _emit 0x75
        _emit 0x1a
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x52
        _emit 0x50
        _emit 0x8d
        _emit 0x8e
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        call FUN_004544c0
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x8b
        _emit 0x78
        _emit 0x04
        _emit 0x8b
        _emit 0x00
        _emit 0x57
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x85
        _emit 0xd2
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0x74
        _emit 0x05
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0xeb
        _emit 0x03
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x8b
        _emit 0x4e
        _emit 0x74
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x5f
        _emit 0x75
        _emit 0x12
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x52
        _emit 0x30
        _emit 0xc7
        _emit 0x46
        _emit 0x74
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x004133f3
__declspec(naked) void gap_004133f3(void)
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

// FUNCTION: PORT1111 0x00413400
__declspec(naked) void __fastcall FUN_00413400(void *pthis,void *param_1,unsigned int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x74
        _emit 0x85
        _emit 0xc9
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x23
        _emit 0x8b
        _emit 0x57
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0x8b
        _emit 0x17
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0x07
        _emit 0x89
        _emit 0x46
        _emit 0x38
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x5f
        _emit 0x89
        _emit 0x4e
        _emit 0x3c
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0xf6
        _emit 0xc3
        _emit 0x01
        _emit 0x74
        _emit 0x05
        _emit 0xf6
        _emit 0xc3
        _emit 0x08
        _emit 0x75
        _emit 0x05
        _emit 0xf6
        _emit 0xc3
        _emit 0x10
        _emit 0x74
        _emit 0x2a
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0x4e
        _emit 0x38
        _emit 0x8b
        _emit 0x6f
        _emit 0x04
        _emit 0x8b
        _emit 0xc2
        _emit 0x2b
        _emit 0xc1
        _emit 0x8b
        _emit 0xcd
        _emit 0x2b
        _emit 0x4e
        _emit 0x3c
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x04
        _emit 0x85
        _emit 0xed
        _emit 0x74
        _emit 0x29
        _emit 0x51
        _emit 0x50
        call FUN_0043a320
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0xce
        call FUN_00413300
        _emit 0x53
        _emit 0x57
        _emit 0x8d
        _emit 0x8e
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        call FUN_004545d0
        _emit 0x8b
        _emit 0x07
        _emit 0x89
        _emit 0x46
        _emit 0x38
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x89
        _emit 0x4e
        _emit 0x3c
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}
