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
extern int DAT_004bf994;
extern unsigned char DAT_004e2c5c[];
extern unsigned char DAT_004e2b14[12];
extern const unsigned char PTR_FUN_004bf9a8[28];
extern int DAT_004e2404;
extern unsigned char DAT_004e2681[1];
extern unsigned char DAT_004e2050[4];
extern unsigned char DAT_004e204c[4];












// GAP: PORT1111 0x0042d397
__declspec(naked) void gap_0042d397(void)
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
        _emit 0xc2
        _emit 0x0c
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
        _emit 0xcc
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x01
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov dword ptr [esi], OFFSET DAT_004bf994
        _emit 0x74
        _emit 0x09
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042d3d0
__declspec(naked) int * __fastcall FUN_0042d3d0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0042d380
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x89
        _emit 0x46
        _emit 0x1c
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x89
        _emit 0x46
        _emit 0x04
        mov dword ptr [esi], OFFSET PTR_FUN_004bf9a8
        _emit 0xc7
        _emit 0x46
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0042d403
__declspec(naked) void gap_0042d403(void)
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
        mov dword ptr [DAT_004e2c5c], 0
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042d420
__declspec(naked) void __fastcall FUN_0042d420(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x57
        _emit 0x33
        _emit 0xdb
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xc3
        _emit 0x0f
        _emit 0x8e
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x8b
        _emit 0x0c
        _emit 0xb8
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x51
        _emit 0x8b
        _emit 0x8a
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00420ee0
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x56
        _emit 0x1c
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x04
        _emit 0xba
        _emit 0x0f
        _emit 0xbf
        _emit 0x50
        _emit 0x34
        _emit 0x52
        _emit 0x6a
        _emit 0x16
        call FUN_004750b0
        _emit 0x8b
        _emit 0xc8
        call FUN_00477b30
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x8b
        _emit 0x0c
        _emit 0xb8
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x51
        _emit 0x8b
        _emit 0x8a
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00420ee0
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x56
        _emit 0x20
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x04
        _emit 0xba
        _emit 0x0f
        _emit 0xbf
        _emit 0x50
        _emit 0x34
        _emit 0x52
        _emit 0x6a
        _emit 0x16
        call FUN_004750b0
        _emit 0x8b
        _emit 0xc8
        call FUN_00477b30
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x47
        _emit 0x3b
        _emit 0xf8
        _emit 0x7c
        _emit 0x80
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x0c
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x5e
        _emit 0x1c
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x0c
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x5e
        _emit 0x20
        _emit 0x5f
        _emit 0x89
        _emit 0x5e
        _emit 0x18
        _emit 0x89
    }
}

// GAP: PORT1111 0x0042d4df
__declspec(naked) void gap_0042d4df(void)
{
    __asm {
        _emit 0x5e
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x5e
        _emit 0x5b
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042d4f0
__declspec(naked) void __fastcall FUN_0042d4f0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7298
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
        mov dword ptr [esi], OFFSET PTR_FUN_004bf9a8
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xff
        _emit 0x6a
        _emit 0x16
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        call FUN_004750b0
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x09
        _emit 0x89
        _emit 0x78
        _emit 0x28
        _emit 0x89
        _emit 0x78
        _emit 0x24
        _emit 0x89
        _emit 0x78
        _emit 0x1c
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x34
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_00420ee0
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x8a
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xbf
        _emit 0x50
        _emit 0x34
        _emit 0x52
        _emit 0x6a
        _emit 0x16
        call FUN_004750b0
        _emit 0x8b
        _emit 0xc8
        call FUN_00477b30
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        call FUN_0042d420
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_0042d390
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
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0042d59e
__declspec(naked) void gap_0042d59e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}
