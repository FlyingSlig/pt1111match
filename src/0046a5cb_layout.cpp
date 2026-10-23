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

extern unsigned char DAT_004dd968[4];
extern const unsigned char PTR_TranslateMessage_004bc32c[4];
extern const unsigned char PTR_DispatchMessageA_004bc328[4];
extern const unsigned char PTR_PeekMessageA_004bc324[4];
extern const unsigned char PTR_GetSystemMetrics_004bc31c[4];
extern unsigned char DAT_004e2c2c[4];
extern unsigned char DAT_004e2c28[4];
extern const unsigned char s_GPEFrameWnd_004c5fe4[12];
extern const unsigned char s_GPEPageWnd_004c5fd8[12];
extern unsigned char DAT_004e2b20[4];
extern const unsigned char PTR_FUN_004c3b98[4];
extern const unsigned char DAT_004bd2c8[1];
extern unsigned char DAT_004e2b14[12];











// GAP: PORT1111 0x0046a5cb
__declspec(naked) void gap_0046a5cb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0046a5d0
__declspec(naked) void __fastcall FUN_0046a5d0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x41
        _emit 0x68
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x89
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x49
        _emit 0x0c
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0046a5ea
__declspec(naked) void gap_0046a5ea(void)
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

// FUNCTION: PORT1111 0x0046a5f0
__declspec(naked) void __fastcall FUN_0046a5f0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8d
        _emit 0x8e
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00488a90
        _emit 0x8b
        _emit 0x4e
        _emit 0x68
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x05
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x8b
        _emit 0x4e
        _emit 0x68
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x89
        _emit 0x7e
        _emit 0x68
        _emit 0x8b
        _emit 0x4e
        _emit 0x6c
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x7e
        _emit 0x6c
        _emit 0x8b
        _emit 0x46
        _emit 0x70
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x07
        _emit 0x50
        call dword ptr [DestroyIcon]
        _emit 0x8b
        _emit 0x4e
        _emit 0x78
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x78
        _emit 0x8d
        _emit 0x8e
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x7e
        _emit 0x7c
        _emit 0x66
        _emit 0x89
        _emit 0xbe
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004865b0
        push OFFSET s_GPEFrameWnd_004c5fe4
        call FUN_00484c40
        push OFFSET s_GPEPageWnd_004c5fd8
        call FUN_00484c40
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        jmp FUN_0048b0a0
    }
}


// FUNCTION: PORT1111 0x0046a680
__declspec(naked) void __fastcall FUN_0046a680(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x68
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4b
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x28
        mov eax, dword ptr [DAT_004dd968]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x3b
        _emit 0x8b
        _emit 0x4e
        _emit 0x68
        _emit 0x8b
        _emit 0x41
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x31
        _emit 0x8b
        _emit 0x40
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2a
        _emit 0x8b
        _emit 0x48
        _emit 0x38
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x23
        _emit 0x8b
        _emit 0x56
        _emit 0x6c
        _emit 0x8b
        _emit 0x8a
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x6c
        _emit 0x8b
        _emit 0x46
        _emit 0x68
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x18
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0046a6d7
__declspec(naked) void gap_0046a6d7(void)
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
    }
}

// FUNCTION: PORT1111 0x0046a6e0
__declspec(naked) WPARAM __fastcall FUN_0046a6e0(int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x1c
        _emit 0x53
        mov ebx, dword ptr [TranslateMessage]
        _emit 0x55
        mov ebp, dword ptr [DispatchMessageA]
        _emit 0x56
        _emit 0x57
        mov edi, dword ptr [PeekMessageA]
        _emit 0x8b
        _emit 0xf1
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x50
        _emit 0xff
        _emit 0xd7
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x17
        _emit 0x83
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x12
        _emit 0x74
        _emit 0x64
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0xff
        _emit 0xd3
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0xff
        _emit 0xd5
        _emit 0xeb
        _emit 0xd6
        _emit 0x8b
        _emit 0x46
        _emit 0x68
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xcf
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x28
        mov eax, dword ptr [DAT_004dd968]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xbf
        _emit 0x8b
        _emit 0x4e
        _emit 0x68
        _emit 0x8b
        _emit 0x41
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xb5
        _emit 0x8b
        _emit 0x40
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xae
        _emit 0x8b
        _emit 0x48
        _emit 0x38
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0xa7
        _emit 0x8b
        _emit 0x56
        _emit 0x6c
        _emit 0x8b
        _emit 0x8a
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x6c
        _emit 0x8b
        _emit 0x46
        _emit 0x68
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x18
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0xeb
        _emit 0x82
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x1c
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0046a78d
__declspec(naked) void gap_0046a78d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
