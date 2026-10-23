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

extern int DAT_004c4680;
extern unsigned char DAT_004e278c[16];
extern unsigned char DAT_004e2418[4];
extern void * DAT_004e2410;
extern void * DAT_004e240c;
extern int DAT_004e2404;
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e26c8[4];
extern unsigned char DAT_004e26cc[4];
extern unsigned char DAT_004e26d0[4];
extern unsigned char DAT_004e26d4[4];
extern volatile int DAT_004e2c34;
extern volatile int DAT_004e2c30;
extern const unsigned char PTR_PtInRect_004bc2e4[4];
extern unsigned char DAT_004e2afc[4];
extern const unsigned char DAT_004bf69c[4];
extern const unsigned char PTR_FUN_004c4690[4];
extern const unsigned char DAT_004bd2c8[1];












// GAP: PORT1111 0x004534e7
__declspec(naked) void gap_004534e7(void)
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

// FUNCTION: PORT1111 0x004534f0
__declspec(naked) int __fastcall FUN_004534f0(void *pthis,int param_1,int param_2,int param_3,int param_4)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x4e
        _emit 0x18
        _emit 0x89
        _emit 0x56
        _emit 0x1c
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x6a
        _emit 0x21
        _emit 0x68
        _emit 0xf7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x21
        call FUN_0046c8b0
        _emit 0x68
        _emit 0xf7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x61
        _emit 0x6a
        _emit 0x21
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x28
        call FUN_0046c8b0
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x2a
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x00453546
__declspec(naked) void gap_00453546(void)
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

// FUNCTION: PORT1111 0x00453550
__declspec(naked) void __fastcall FUN_00453550(void *pthis,int param_1)
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
        _emit 0x18
        _emit 0x7d
        _emit 0x0f
        _emit 0x8b
        _emit 0x01
        _emit 0xc7
        _emit 0x41
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x51
        _emit 0x14
        _emit 0x3b
        _emit 0xc2
        _emit 0x7c
        _emit 0x04
        _emit 0x4a
        _emit 0x89
        _emit 0x51
        _emit 0x18
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045357d
__declspec(naked) void gap_0045357d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00453580
__declspec(naked) void __fastcall FUN_00453580(int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x48
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x7e
        _emit 0x15
        _emit 0xdb
        _emit 0x46
        _emit 0x18
        _emit 0xda
        _emit 0x74
        _emit 0x24
        _emit 0x04
        _emit 0xda
        _emit 0x4e
        _emit 0x1c
        _emit 0xe8
        _emit 0xe9
        _emit 0x47
        _emit 0x04
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x24
        _emit 0x5e
        _emit 0x59
        _emit 0xc3
        _emit 0xc7
        _emit 0x46
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x59
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004535af
__declspec(naked) void gap_004535af(void)
{
    __asm {
        _emit 0xcc
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x52
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0xc2
        _emit 0x04
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
    }
}

// FUNCTION: PORT1111 0x004535d0
__declspec(naked) void __fastcall FUN_004535d0(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x33
        _emit 0xc9
        mov dword ptr [eax], OFFSET DAT_004c4680
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0x89
        _emit 0x48
        _emit 0x18
        _emit 0x89
        _emit 0x48
        _emit 0x1c
        _emit 0x89
        _emit 0x48
        _emit 0x20
        _emit 0x89
        _emit 0x48
        _emit 0x24
        _emit 0xc7
        _emit 0x40
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004535f1
__declspec(naked) void gap_004535f1(void)
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
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x01
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov dword ptr [esi], OFFSET DAT_004c4680
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

// FUNCTION: PORT1111 0x00453620
__declspec(naked) void FUN_00453620(void *pthis,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x8d
        _emit 0x41
        _emit 0x04
        _emit 0x8b
        _emit 0xd8
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x33
        _emit 0x89
        _emit 0x7b
        _emit 0x04
        _emit 0x89
        _emit 0x43
        _emit 0x08
        _emit 0x89
        _emit 0x53
        _emit 0x0c
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x24
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x24
        _emit 0x53
        _emit 0x2b
        _emit 0xd7
        _emit 0x52
        _emit 0x2b
        _emit 0xc6
        _emit 0x50
        call FUN_004534f0
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x18
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045365e
__declspec(naked) void gap_0045365e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00453660
__declspec(naked) void __fastcall FUN_00453660(void *pthis,int param_1,int param_2,void *param_3)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x03
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x8b
        _emit 0x13
        _emit 0x8b
        _emit 0xcb
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xff
        _emit 0x52
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xcb
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x03
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0xeb
        _emit 0x07
        _emit 0x8b
        _emit 0x13
        _emit 0xff
        _emit 0x52
        _emit 0x14
        _emit 0xf7
        _emit 0xd8
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x8e
        _emit 0x8b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x18
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x24
        _emit 0x33
        _emit 0xc9
        _emit 0x66
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x8d
        _emit 0x54
        _emit 0x28
        _emit 0xff
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x57
        _emit 0x52
        _emit 0x57
        _emit 0x55
        _emit 0x50
        _emit 0x51
        _emit 0x53
        mov ecx, OFFSET DAT_004e278c
        call FUN_0047b780
        _emit 0x8b
        _emit 0x56
        _emit 0x14
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x4a
        _emit 0x3b
        _emit 0xc2
        _emit 0x7d
        _emit 0x38
        _emit 0x8b
        _emit 0x46
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x31
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x2b
        _emit 0xc1
        _emit 0x8d
        _emit 0x0c
        _emit 0x29
        _emit 0x74
        _emit 0x24
        _emit 0x33
        _emit 0xd2
        _emit 0x66
        _emit 0x8b
        _emit 0x56
        _emit 0x2a
        _emit 0x8d
        _emit 0x44
        _emit 0x08
        _emit 0xff
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x57
        _emit 0x50
        _emit 0x57
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x38
        _emit 0x51
        _emit 0x52
        _emit 0x53
        mov ecx, OFFSET DAT_004e278c
        call FUN_0047b780
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x40
        _emit 0x47
        _emit 0x3b
        _emit 0xc1
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x7c
        _emit 0x81
        _emit 0x5f
        _emit 0x5d
        _emit 0x8b
        _emit 0x03
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x50
        _emit 0x34
        _emit 0x5e
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00453742
__declspec(naked) void gap_00453742(void)
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

// FUNCTION: PORT1111 0x00453750
__declspec(naked) void __fastcall FUN_00453750(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1e
        mov ecx, dword ptr [DAT_004e2418]
        _emit 0x50
        call FUN_0040af10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0xc8
        call FUN_0040abe0
        _emit 0xc7
        _emit 0x46
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0045377a
__declspec(naked) void gap_0045377a(void)
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

// FUNCTION: PORT1111 0x00453780
__declspec(naked) void __fastcall FUN_00453780(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x1e
        mov ecx, dword ptr [DAT_004e2418]
        _emit 0x50
        call FUN_0040af10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0xc8
        call FUN_0040abe0
        _emit 0xc7
        _emit 0x46
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2410]
        call FUN_00455c40
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_004134a0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004537c9
__declspec(naked) void gap_004537c9(void)
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

// FUNCTION: PORT1111 0x004537d0
__declspec(naked) void FUN_004537d0(int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        call FUN_00403d10
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        call FUN_00429c90
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x29
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        call FUN_00429c90
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x12
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x50
        _emit 0x50
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        call FUN_00429c90
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045382b
__declspec(naked) void gap_0045382b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00453830
__declspec(naked) int __cdecl FUN_00453830(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xf6
        _emit 0x40
        _emit 0x3c
        _emit 0x04
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x80
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x33
        _emit 0xc0
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00453844
__declspec(naked) void gap_00453844(void)
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

// FUNCTION: PORT1111 0x00453850
__declspec(naked) int __cdecl FUN_00453850(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0xce
        call FUN_004056a0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x1c
        _emit 0x8b
        _emit 0x46
        _emit 0x3c
        _emit 0xa8
        _emit 0x08
        _emit 0x75
        _emit 0x15
        _emit 0xa8
        _emit 0x04
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x86
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x07
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x00453880
__declspec(naked) int __fastcall FUN_00453880(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xd0
        _emit 0x7e
        _emit 0x13
        _emit 0x39
        _emit 0x41
        _emit 0x0c
        _emit 0x75
        _emit 0x0e
        _emit 0x8b
        _emit 0x51
        _emit 0x14
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x09
        _emit 0x8b
        _emit 0x51
        _emit 0x18
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004538a2
__declspec(naked) void gap_004538a2(void)
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

// FUNCTION: PORT1111 0x004538b0
__declspec(naked) void __fastcall FUN_004538b0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x81
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xec
        _emit 0x20
        _emit 0x85
        _emit 0xc0
        _emit 0x56
        _emit 0x57
        _emit 0x0f
        _emit 0x84
        _emit 0x81
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x81
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xb1
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xb9
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x89
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        call FUN_00403d80
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        call FUN_00479890
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x48
        _emit 0x5c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x68
        _emit 0xff
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x8b
        _emit 0xd4
        _emit 0x89
        _emit 0x02
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x89
        _emit 0x42
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x34
        _emit 0x89
        _emit 0x42
        _emit 0x08
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x38
        _emit 0x89
        _emit 0x42
        _emit 0x0c
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x70
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        call FUN_0047b660
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0045394a
__declspec(naked) void gap_0045394a(void)
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

// FUNCTION: PORT1111 0x00453950
__declspec(naked) void __fastcall FUN_00453950(int param_1)
{
    __asm {
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x33
        _emit 0xed
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x2c
        _emit 0x53
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xd8
        _emit 0x3b
        _emit 0xdd
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x13
        _emit 0x55
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x92
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x6b
        _emit 0x78
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7e
        _emit 0x04
        _emit 0x75
        _emit 0xd6
        _emit 0x5b
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x89
        _emit 0x09
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x89
        _emit 0x49
        _emit 0x04
        _emit 0x3b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x6e
        _emit 0x08
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0x38
        _emit 0x50
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xf9
        _emit 0x8b
        _emit 0xc7
        _emit 0x75
        _emit 0xec
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x3b
        _emit 0xc5
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x1a
        mov ecx, dword ptr [DAT_004e2418]
        _emit 0x50
        call FUN_0040af10
        _emit 0x3b
        _emit 0xc5
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0xc8
        call FUN_0040abe0
        _emit 0x89
        _emit 0x6e
        _emit 0x10
        mov ecx, dword ptr [DAT_004e2410]
        call FUN_00455c40
        _emit 0x8b
        _emit 0x0d
    }
}

// GAP: PORT1111 0x004539f1
__declspec(naked) void gap_004539f1(void)
{
    __asm {
        _emit 0x0c
        _emit 0x24
        _emit 0x4e
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        jmp FUN_004134a0
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00453a00
__declspec(naked) void __fastcall FUN_00453a00(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x4d
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x57
        _emit 0x10
        _emit 0x39
        _emit 0x50
        _emit 0x08
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
        _emit 0x46
        _emit 0x04
        _emit 0x75
        _emit 0xf4
        _emit 0xeb
        _emit 0x36
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x1f
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x10
        _emit 0x89
        _emit 0x11
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x50
        _emit 0x89
        _emit 0x51
        _emit 0x04
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x07
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x90
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x47
        _emit 0x78
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x07
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x1e
        mov ecx, dword ptr [DAT_004e2418]
        _emit 0x50
        call FUN_0040af10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0xc8
        call FUN_0040abe0
        _emit 0xc7
        _emit 0x46
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2410]
        call FUN_00455c40
        _emit 0x8b
        _emit 0x0d
        _emit 0x0c
        _emit 0x24
        _emit 0x4e
    }
}

// GAP: PORT1111 0x00453aa3
__declspec(naked) void gap_00453aa3(void)
{
    __asm {
        _emit 0x00
        _emit 0xe8
        _emit 0xf7
        _emit 0xf9
        _emit 0xfb
        _emit 0xff
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00453ab0
__declspec(naked) int __fastcall FUN_00453ab0(int param_1)
{
    __asm {
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x05
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5f
        _emit 0xc3
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x2d
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x52
        _emit 0x2c
        _emit 0x83
        _emit 0xf8
        _emit 0x01
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x04
        _emit 0x75
        _emit 0xda
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x5e
        _emit 0x5f
        _emit 0xc3
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x5e
        _emit 0x5f
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00453b07
__declspec(naked) void gap_00453b07(void)
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

// FUNCTION: PORT1111 0x00453b10
__declspec(naked) int __fastcall FUN_00453b10(int param_1)
{
    __asm {
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0xc3
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x2c
        _emit 0xeb
        _emit 0x06
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x92
        _emit 0xac
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0f
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x04
        _emit 0x75
        _emit 0xdc
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
    }
}

// GAP: PORT1111 0x00453b5b
__declspec(naked) void gap_00453b5b(void)
{
    __asm {
        _emit 0xc3
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00453b70
__declspec(naked) int __fastcall FUN_00453b70(int param_1)
{
    __asm {
        call FUN_00453ab0
        _emit 0x83
        _emit 0xf8
        _emit 0xff
        _emit 0x75
        _emit 0x03
        _emit 0x33
        _emit 0xc0
        _emit 0xc3
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00453b8a
__declspec(naked) void gap_00453b8a(void)
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

// FUNCTION: PORT1111 0x00453b90
__declspec(naked) void __fastcall FUN_00453b90(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x43
        _emit 0x04
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x0f
        _emit 0x84
        _emit 0x8a
        _emit 0x00
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
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x40
        _emit 0x8b
        _emit 0xce
        call FUN_004056a0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x40
        _emit 0x8b
        _emit 0x46
        _emit 0x3c
        _emit 0xa8
        _emit 0x08
        _emit 0x75
        _emit 0x44
        _emit 0xa8
        _emit 0x04
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x86
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x41
        _emit 0x8b
        _emit 0xce
        call FUN_004056a0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x15
        _emit 0x8b
        _emit 0x46
        _emit 0x3c
        _emit 0xa8
        _emit 0x08
        _emit 0x75
        _emit 0x0e
        _emit 0xa8
        _emit 0x04
        _emit 0x74
        _emit 0x36
        _emit 0x8b
        _emit 0x86
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2c
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7b
        _emit 0x04
        _emit 0x75
        _emit 0xa4
        _emit 0x5e
        _emit 0x5f
        _emit 0x5b
        _emit 0xc3
        _emit 0x5e
        _emit 0x5f
        _emit 0xc7
        _emit 0x43
        _emit 0x0c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc3
        _emit 0x5e
        _emit 0x5f
        _emit 0xc7
        _emit 0x43
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc3
        _emit 0x5e
        _emit 0x5f
        _emit 0xc7
        _emit 0x43
        _emit 0x0c
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc3
        _emit 0xc7
        _emit 0x43
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x5f
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00453c2e
__declspec(naked) void gap_00453c2e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00453c30
__declspec(naked) void __fastcall FUN_00453c30(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8d
        _emit 0x79
        _emit 0x20
        _emit 0xbd
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x50
        _emit 0x8b
        _emit 0xcb
        call FUN_0042f670
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x51
        _emit 0x8b
        _emit 0xcb
        call FUN_0042f670
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x37
        _emit 0x75
        _emit 0xef
        _emit 0x83
        _emit 0xc7
        _emit 0x1c
        _emit 0x4d
        _emit 0x75
        _emit 0xd6
        _emit 0x8b
        _emit 0x13
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcb
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00453c7a
__declspec(naked) void gap_00453c7a(void)
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

// FUNCTION: PORT1111 0x00453c80
__declspec(naked) int __fastcall FUN_00453c80(void *pthis,void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x14
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        call FUN_0047baa0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x07
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x57
        call FUN_0047ba90
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x8b
        _emit 0x51
        _emit 0x0c
        _emit 0x8b
        _emit 0x4a
        _emit 0x58
        _emit 0x8d
        _emit 0x04
        _emit 0x80
        _emit 0x8b
        _emit 0x74
        _emit 0x81
        _emit 0x08
        _emit 0x8b
        _emit 0x7c
        _emit 0x81
        _emit 0x0c
        _emit 0x8b
        _emit 0x54
        _emit 0x81
        _emit 0x04
        _emit 0x8d
        _emit 0x04
        _emit 0x81
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x89
        _emit 0x08
        _emit 0x89
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x70
        _emit 0x08
        _emit 0x89
        _emit 0x78
        _emit 0x0c
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00453ce2
__declspec(naked) void gap_00453ce2(void)
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

// FUNCTION: PORT1111 0x00453cf0
__declspec(naked) int __fastcall FUN_00453cf0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0043d220
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00453d14
__declspec(naked) void gap_00453d14(void)
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

// FUNCTION: PORT1111 0x00453d20
__declspec(naked) void * __fastcall FUN_00453d20(void *param_1)
{
    __asm {
        _emit 0x56
        push OFFSET FUN_00409650
        push OFFSET FUN_00453cf0
        _emit 0x6a
        _emit 0x0a
        _emit 0x8b
        _emit 0xf1
        _emit 0x6a
        _emit 0x1c
        _emit 0x56
        _emit 0xe8
        _emit 0x95
        _emit 0x3f
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x86
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xb6
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00453d55
__declspec(naked) void gap_00453d55(void)
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

// FUNCTION: PORT1111 0x00453d60
__declspec(naked) void FUN_00453d60(int param_1,unsigned int param_2,int param_3,void *param_4,int param_5,unsigned int param_6)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x83
        _emit 0xec
        _emit 0x20
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x2c
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x34
        _emit 0x0f
        _emit 0xbf
        _emit 0x45
        _emit 0x40
        _emit 0x2b
        _emit 0xc1
        _emit 0x0f
        _emit 0xbf
        _emit 0x4d
        _emit 0x42
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x44
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x34
        _emit 0x2b
        _emit 0xce
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x40
        _emit 0x03
        _emit 0xf8
        _emit 0x03
        _emit 0xd9
        _emit 0x85
        _emit 0xf6
        _emit 0x0f
        _emit 0x84
        _emit 0xcc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_00453c80
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x55
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x08
        _emit 0x0f
        _emit 0xbf
        _emit 0x56
        _emit 0x06
        _emit 0x0f
        _emit 0xbf
        _emit 0x70
        _emit 0x0a
        _emit 0x0f
        _emit 0xbf
        _emit 0x40
        _emit 0x08
        _emit 0x03
        _emit 0xf1
        _emit 0x56
        _emit 0x03
        _emit 0xc2
        _emit 0x50
        _emit 0x51
        _emit 0x52
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x51
        call dword ptr [SetRect]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x2b
        _emit 0xd0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x03
        _emit 0xfa
        _emit 0x2b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x03
        _emit 0xd8
        _emit 0x53
        _emit 0x57
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        call dword ptr [PtInRect]
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x6f
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xc3
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x38
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x4c
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_004520b0
        _emit 0x8b
        _emit 0x75
        _emit 0x24
        _emit 0x85
        _emit 0xf6
        _emit 0x8b
        _emit 0x4d
        _emit 0x28
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x44
        _emit 0x74
        _emit 0x06
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x34
        _emit 0xeb
        _emit 0x0f
        _emit 0x8b
        _emit 0xcd
        call FUN_0047e810
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x44
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x34
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x04
        _emit 0x8b
        _emit 0xc1
        _emit 0xeb
        _emit 0x0b
        _emit 0x8b
        _emit 0xcd
        call FUN_0047e870
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x44
        _emit 0x85
        _emit 0xff
        _emit 0x7c
        _emit 0x3e
        _emit 0x85
        _emit 0xdb
        _emit 0x7c
        _emit 0x3a
        _emit 0x3b
        _emit 0x7c
        _emit 0x24
        _emit 0x34
        _emit 0x7d
        _emit 0x34
        _emit 0x3b
        _emit 0xd8
        _emit 0x7d
        _emit 0x30
        _emit 0x0f
        _emit 0xaf
        _emit 0x74
        _emit 0x24
        _emit 0x48
        _emit 0x0f
        _emit 0xaf
        _emit 0x4c
        _emit 0x24
        _emit 0x38
        _emit 0x03
        _emit 0xfe
        _emit 0x03
        _emit 0xd9
        _emit 0x8b
        _emit 0x4d
        _emit 0x04
        _emit 0x83
        _emit 0x79
        _emit 0x04
        _emit 0x02
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x4d
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0x53
        _emit 0x57
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x48
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x50
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x16
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xc3
        _emit 0x8b
        _emit 0x4d
        _emit 0x04
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x3c
        _emit 0x20
        _emit 0x75
        _emit 0x13
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x3c
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xc9
        _emit 0x5d
        _emit 0x0f
        _emit 0x95
        _emit 0xc0
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xc3
        _emit 0x8b
        _emit 0x4d
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0x53
        _emit 0x57
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x48
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x50
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xc2
        _emit 0x8b
        _emit 0x45
        _emit 0x04
        _emit 0x8b
        _emit 0x70
        _emit 0x1c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x3c
        _emit 0x33
        _emit 0xc9
        _emit 0x3b
        _emit 0xd6
        _emit 0x0f
        _emit 0x95
        _emit 0xc1
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x8b
        _emit 0xc1
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00453ede
__declspec(naked) void gap_00453ede(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00453ee0
__declspec(naked) bool __cdecl FUN_00453ee0(int param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x64
        _emit 0x66
        _emit 0x8b
        _emit 0x41
        _emit 0x2e
        _emit 0x66
        _emit 0x3d
        _emit 0xff
        _emit 0xff
        _emit 0x74
        _emit 0x5a
        _emit 0x8b
        _emit 0x49
        _emit 0x14
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x0f
        _emit 0xbf
        _emit 0xc0
        _emit 0x8b
        _emit 0x0c
        _emit 0x82
        _emit 0x85
        _emit 0xc9
        _emit 0x8d
        _emit 0x04
        _emit 0x82
        _emit 0x74
        _emit 0x47
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_00475080
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xe0
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x56
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x52
        _emit 0x50
        call FUN_00453d60
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0x5e
        _emit 0xc3
        _emit 0x33
        _emit 0xc0
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00453f4f
__declspec(naked) void gap_00453f4f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00453f50
__declspec(naked) int __fastcall FUN_00453f50(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x83
        _emit 0x7f
        _emit 0x08
        _emit 0x1a
        _emit 0x74
        _emit 0x51
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x3f
        _emit 0x8b
        _emit 0x56
        _emit 0x14
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        _emit 0xff
        _emit 0x52
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x32
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        call FUN_0040a020
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcf
        call FUN_00453780
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00453fb2
__declspec(naked) void gap_00453fb2(void)
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

// FUNCTION: PORT1111 0x00453fc0
__declspec(naked) void __fastcall FUN_00453fc0(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x24
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x16
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_00453f50
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00454003
__declspec(naked) void gap_00454003(void)
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

// FUNCTION: PORT1111 0x00454010
__declspec(naked) void __fastcall FUN_00454010(void *pthis,void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0xcd
        call FUN_004056a0
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0x06
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x45
        _emit 0x3c
        _emit 0xa8
        _emit 0x08
        _emit 0x0f
        _emit 0x85
        _emit 0xfb
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xa8
        _emit 0x04
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x85
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0xe9
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e26c8]
        mov ecx, dword ptr [DAT_004e26cc]
        mov edx, dword ptr [DAT_004e26d0]
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        mov eax, dword ptr [DAT_004e26d4]
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        mov eax, dword ptr [DAT_004e2c34]
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        mov ecx, dword ptr [DAT_004e2c30]
        _emit 0x56
        _emit 0xf7
        _emit 0xd8
        _emit 0xf7
        _emit 0xd9
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x20
        call dword ptr [OffsetRect]
        mov edx, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x42
        _emit 0x08
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x20
        _emit 0x0f
        _emit 0x84
        _emit 0x87
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        mov edi, dword ptr [PtInRect]
        _emit 0xeb
        _emit 0x06
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x90
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x8b
        _emit 0x51
        _emit 0x50
        _emit 0x8b
        _emit 0x45
        _emit 0x50
        _emit 0x8b
        _emit 0x52
        _emit 0x14
        _emit 0x3b
        _emit 0x50
        _emit 0x14
        _emit 0x75
        _emit 0x40
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x90
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x34
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0xf6
        _emit 0x40
        _emit 0x3c
        _emit 0x04
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x88
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x21
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0xff
        _emit 0xd7
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0x56
        _emit 0x10
        _emit 0x52
        _emit 0x8b
        _emit 0xcb
        call FUN_00453f50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        call pt_a_00413730
        mov eax, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x24
        _emit 0x3b
        _emit 0x70
        _emit 0x08
        _emit 0x75
        _emit 0x89
        _emit 0x5f
        _emit 0xc7
        _emit 0x43
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
    }
}

// GAP: PORT1111 0x00454132
__declspec(naked) void gap_00454132(void)
{
    __asm {
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x04
        _emit 0x00
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
