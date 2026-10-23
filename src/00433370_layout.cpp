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

extern unsigned char DAT_004e26f0[4];
extern int DAT_004e2404;
extern unsigned char DAT_004e2420[4];
extern void * DAT_004e240c;
extern void * DAT_004e2410;
extern unsigned char DAT_004e26fc[4];
extern unsigned char DAT_004e279c[48];
extern unsigned char DAT_004e2800[4];
extern int DAT_004bfcb8;













// FUNCTION: PORT1111 0x00433370
__declspec(naked) void __fastcall FUN_00433370(int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x57
        _emit 0x50
        call FUN_004147d0
        mov ecx, dword ptr [DAT_004e26f0]
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x1c
        _emit 0x81
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x2c
        _emit 0x8b
        _emit 0x53
        _emit 0x38
        _emit 0x3b
        _emit 0x97
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x73
        _emit 0x21
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0x57
        _emit 0x8b
        _emit 0xcb
        call FUN_00423080
        _emit 0x5f
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
        _emit 0x8b
        _emit 0x4e
        _emit 0x2c
        _emit 0x85
        _emit 0xc9
        _emit 0x0f
        _emit 0x84
        _emit 0x81
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc9
        _emit 0x83
        _emit 0xf8
        _emit 0x01
        _emit 0x0f
        _emit 0x95
        _emit 0xc1
        _emit 0x8b
        _emit 0xc1
        _emit 0x83
        _emit 0x7f
        _emit 0x48
        _emit 0x07
        _emit 0x75
        _emit 0x22
        mov ecx, dword ptr [DAT_004e2420]
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x8b
        _emit 0x49
        _emit 0x08
        _emit 0x52
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x57
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x50
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x52
        call FUN_00443e30
        _emit 0xeb
        _emit 0x41
        _emit 0x8b
        _emit 0x4f
        _emit 0x14
        _emit 0x83
        _emit 0xf9
        _emit 0x2f
        _emit 0x74
        _emit 0x20
        _emit 0x83
        _emit 0xf9
        _emit 0x4f
        _emit 0x74
        _emit 0x1b
        mov edx, dword ptr [DAT_004e2420]
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        _emit 0x57
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0x4a
        _emit 0x04
        _emit 0xeb
        _emit 0x14
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0x57
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0x4b
        _emit 0x2c
        call FUN_00443d20
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x56
        _emit 0x1c
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x8b
        _emit 0x46
        _emit 0x30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2c
        _emit 0x83
        _emit 0xbf
        _emit 0xa8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x06
        _emit 0x75
        _emit 0x23
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x8b
        _emit 0x76
        _emit 0x1c
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x50
        _emit 0x56
        call FUN_00429ac0
        mov ecx, dword ptr [DAT_004e2420]
        _emit 0x6a
        _emit 0x00
        _emit 0x53
        _emit 0x50
        _emit 0x57
        call FUN_004426d0
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043348b
__declspec(naked) void gap_0043348b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
