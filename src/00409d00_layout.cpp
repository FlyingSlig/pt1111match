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
extern int DAT_004bd448;
extern int DAT_004bd41c;
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];












// FUNCTION: PORT1111 0x00409d00
__declspec(naked) void __fastcall FUN_00409d00(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5bb6
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
        _emit 0x55
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x83
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x33
        _emit 0xed
        _emit 0x3b
        _emit 0xf8
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x0c
        _emit 0x0f
        _emit 0x84
        _emit 0x11
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x3b
        _emit 0xf5
        _emit 0x75
        _emit 0x31
        _emit 0x3b
        _emit 0xbb
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x37
        _emit 0x74
        _emit 0x23
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x30
        _emit 0x8b
        _emit 0x0f
        _emit 0x8b
        _emit 0x57
        _emit 0x04
        _emit 0x57
        _emit 0x89
        _emit 0x51
        _emit 0x04
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x83
        _emit 0x30
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x83
        _emit 0x30
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xfe
        _emit 0xeb
        _emit 0x61
        _emit 0x6a
        _emit 0x18
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xc5
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x20
        _emit 0x74
        _emit 0x0d
        _emit 0x55
        _emit 0x55
        _emit 0x6a
        _emit 0x0c
        _emit 0x8b
        _emit 0xc8
        call FUN_0045c3e0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x8b
        _emit 0x49
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x8b
        _emit 0x8e
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x41
        _emit 0x8b
        _emit 0xc1
        _emit 0x83
        _emit 0xf8
        _emit 0x02
        _emit 0x89
        _emit 0x8e
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0a
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x08
        _emit 0x55
        _emit 0x8b
        _emit 0xce
        call FUN_00405d00
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0xbb
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x85
        _emit 0x4d
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x39
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x5e
        _emit 0x74
        _emit 0x56
        _emit 0x6a
        _emit 0x34
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0xc5
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_00430e10
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4b
        _emit 0x10
        _emit 0x68
        _emit 0x98
        _emit 0x3a
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00412ec0
        _emit 0x5f
        _emit 0x5d
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
        _emit 0xc3
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0xab
        _emit 0x20
        _emit 0x01
    }
}

// GAP: PORT1111 0x00409e4c
__declspec(naked) void gap_00409e4c(void)
{
    __asm {
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5d
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00409e60
__declspec(naked) int __fastcall FUN_00409e60(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x87
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x61
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x31
        _emit 0x3b
        _emit 0xb7
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x1e
        _emit 0x74
        _emit 0x23
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x89
        _emit 0x19
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x56
        _emit 0x89
        _emit 0x42
        _emit 0x04
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x87
        _emit 0x30
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x87
        _emit 0x30
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xf3
        _emit 0xeb
        _emit 0x15
        _emit 0x83
        _emit 0xb8
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x75
        _emit 0x0a
        _emit 0x8b
        _emit 0x88
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x7e
        _emit 0x11
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0xb7
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
    }
}

// GAP: PORT1111 0x00409ed0
__declspec(naked) void gap_00409ed0(void)
{
    __asm {
        _emit 0x75
        _emit 0x9f
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5b
        _emit 0xc3
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x00409ee0
__declspec(naked) int * __fastcall FUN_00409ee0(void *pthis,int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5bc8
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x68
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xf1
        _emit 0x50
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x14
        call FUN_00408ae0
        _emit 0x33
        _emit 0xdb
        _emit 0x8d
        _emit 0xbe
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        mov dword ptr [esi], OFFSET DAT_004bd448
        mov dword ptr [esi + 0x14], OFFSET DAT_004bd41c
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
        _emit 0x89
        _emit 0x9e
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x9e
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x5f
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
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00409f56
__declspec(naked) void gap_00409f56(void)
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
