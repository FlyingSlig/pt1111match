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

extern const unsigned char s_map_set_T__too_long_004bd55c[];
extern unsigned char DAT_004db290[];
extern unsigned char DAT_004e0ae0[];
extern unsigned char DAT_004e0ae4[];
extern unsigned char DAT_004e0ae8[];
extern unsigned char DAT_004e2700[];
extern unsigned char DAT_004e2424[4];
extern int DAT_004e0af4;
extern unsigned char DAT_004e0af8[4];
extern unsigned char DAT_004e0afc[4];
extern unsigned char DAT_004e0b08[4];
extern unsigned char DAT_004e0b04[4];
extern unsigned char DAT_004e21c0[4];
extern unsigned char DAT_004e21bc[4];
extern unsigned char DAT_004e21c4[4];
extern void * DAT_004e240c;
extern unsigned char DAT_004e21b8[4];
extern unsigned char DAT_004e2c58[4];
extern unsigned char DAT_004e2444[4];
extern unsigned char DAT_004e26bc[4];
extern void * DAT_004e2410;
extern unsigned char DAT_004e26fc[4];
extern int DAT_004e2404;
extern unsigned char DAT_004e2afc[4];
extern int DAT_004e0adc;
extern unsigned char DAT_004e0ad8[4];
extern unsigned char DAT_004e0870[8];
extern unsigned char DAT_004e2418[4];
extern unsigned char DAT_004e2414[4];
extern const unsigned char DAT_004bef50[36];
extern unsigned char DAT_004e26f0[4];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];












// GAP: PORT1111 0x004145df
__declspec(naked) void gap_004145df(void)
{
    __asm {
        _emit 0x90
        _emit 0x6e
        _emit 0x3c
        _emit 0x41
        _emit 0x00
        _emit 0xf1
        _emit 0x3b
        _emit 0x41
        _emit 0x00
        _emit 0xdc
        _emit 0x3d
        _emit 0x41
        _emit 0x00
        _emit 0xe8
        _emit 0x3c
        _emit 0x41
        _emit 0x00
        _emit 0x64
        _emit 0x3d
        _emit 0x41
        _emit 0x00
        _emit 0x56
        _emit 0x3e
        _emit 0x41
        _emit 0x00
        _emit 0x4e
        _emit 0x3f
        _emit 0x41
        _emit 0x00
        _emit 0x46
        _emit 0x40
        _emit 0x41
        _emit 0x00
        _emit 0x0d
        _emit 0x41
        _emit 0x41
        _emit 0x00
        _emit 0x93
        _emit 0x40
        _emit 0x41
        _emit 0x00
        _emit 0xd2
        _emit 0x3e
        _emit 0x41
        _emit 0x00
        _emit 0xca
        _emit 0x3f
        _emit 0x41
        _emit 0x00
        _emit 0x89
        _emit 0x41
        _emit 0x41
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x02
        _emit 0x03
        _emit 0x02
        _emit 0x03
        _emit 0x02
        _emit 0x02
        _emit 0x04
        _emit 0x00
        _emit 0x02
        _emit 0x02
        _emit 0x04
        _emit 0x05
        _emit 0x02
        _emit 0x02
        _emit 0x06
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x07
        _emit 0x08
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x09
        _emit 0x0c
        _emit 0x0c
        _emit 0x00
        _emit 0x01
        _emit 0x03
        _emit 0x04
        _emit 0x02
        _emit 0x02
        _emit 0x03
        _emit 0x03
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x04
        _emit 0x00
        _emit 0x02
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x07
        _emit 0x0c
        _emit 0x0c
        _emit 0x09
        _emit 0x08
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x0c
        _emit 0x02
        _emit 0x0a
        _emit 0x0b
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x9d
        _emit 0x41
        _emit 0x41
        _emit 0x00
        _emit 0xd6
        _emit 0x41
        _emit 0x41
        _emit 0x00
        _emit 0xd7
        _emit 0x42
        _emit 0x41
        _emit 0x00
        _emit 0xca
        _emit 0x45
        _emit 0x41
        _emit 0x00
        _emit 0x4f
        _emit 0x43
        _emit 0x41
        _emit 0x00
        _emit 0x3f
        _emit 0x44
        _emit 0x41
        _emit 0x00
        _emit 0xc7
        _emit 0x43
        _emit 0x41
        _emit 0x00
        _emit 0xca
        _emit 0x45
        _emit 0x41
        _emit 0x00
        _emit 0x9d
        _emit 0x41
        _emit 0x41
        _emit 0x00
        _emit 0xb7
        _emit 0x44
        _emit 0x41
        _emit 0x00
        _emit 0x31
        _emit 0x45
        _emit 0x41
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x004146a0
__declspec(naked) int __fastcall FUN_004146a0(int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x8d
        _emit 0x4e
        _emit 0x1c
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x3b
        _emit 0xc1
        _emit 0x5e
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004146cf
__declspec(naked) void gap_004146cf(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004146d0
__declspec(naked) void FUN_004146d0(void)
{
    __asm {
        mov edx, dword ptr [DAT_004e0af8]
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0x32
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xf2
        _emit 0x74
        _emit 0x58
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x10
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0x89
        _emit 0x5e
        _emit 0x10
        mov edx, dword ptr [DAT_004e0af8]
        _emit 0x38
        _emit 0x5e
        _emit 0x15
        _emit 0x75
        _emit 0x38
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x38
        _emit 0x58
        _emit 0x15
        _emit 0x75
        _emit 0x17
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x06
        _emit 0x38
        _emit 0x58
        _emit 0x15
        _emit 0x75
        _emit 0x27
        _emit 0x8d
        _emit 0x49
        _emit 0x00
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
        _emit 0xf2
        _emit 0x75
        _emit 0xa8
        _emit 0x8b
        _emit 0x4a
        _emit 0x04
        _emit 0x51
        mov ecx, OFFSET DAT_004e0af4
        call pt_a_00413830
        mov eax, dword ptr [DAT_004e0af8]
        _emit 0x89
        _emit 0x40
        _emit 0x04
        mov eax, dword ptr [DAT_004e0af8]
        mov dword ptr [DAT_004e0afc], ebx
        _emit 0x89
        _emit 0x00
        mov eax, dword ptr [DAT_004e0af8]
        _emit 0x89
        _emit 0x40
        _emit 0x08
        mov edx, dword ptr [DAT_004e0b08]
        mov ecx, dword ptr [DAT_004e0b04]
        _emit 0x90
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x4e
        _emit 0x8b
        _emit 0xc2
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x43
        _emit 0x8b
        _emit 0x42
        _emit 0xfc
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x22
        _emit 0x8b
        _emit 0xc8
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x52
        _emit 0x14
        mov edx, dword ptr [DAT_004e0b08]
        _emit 0x89
        _emit 0x5a
        _emit 0xfc
        mov edx, dword ptr [DAT_004e0b08]
        mov ecx, dword ptr [DAT_004e0b04]
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0xc2
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0xb9
        _emit 0x83
        _emit 0xea
        _emit 0x04
        mov dword ptr [DAT_004e0b08], edx
        _emit 0xeb
        _emit 0xae
        _emit 0x5e
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004147c5
__declspec(naked) void gap_004147c5(void)
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

// FUNCTION: PORT1111 0x004147d0
__declspec(naked) int __cdecl FUN_004147d0(int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x52
        mov ecx, OFFSET DAT_004e0af4
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x00
        cmp eax, dword ptr [DAT_004e0af8]
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x59
        _emit 0xc3
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0x59
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x00414800
__declspec(naked) int __fastcall FUN_00414800(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x4b
        _emit 0x0c
        _emit 0x8b
        _emit 0x43
        _emit 0x18
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x03
        _emit 0xc1
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x17
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8b
        _emit 0x43
        _emit 0x14
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x1e
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x57
        call FUN_004129f0
        _emit 0x8b
        _emit 0x07
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x73
        _emit 0x14
        _emit 0x75
        _emit 0xe7
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x5d
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x57
        call FUN_004129f0
        _emit 0x8b
        _emit 0x17
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8a
        _emit 0x46
        _emit 0x15
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0x3f
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
        _emit 0x2a
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
        _emit 0x1d
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0x11
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
        _emit 0x3b
        _emit 0x73
        _emit 0x08
        _emit 0x75
        _emit 0xa3
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
    }
}

// GAP: PORT1111 0x004148b4
__declspec(naked) void gap_004148b4(void)
{
    __asm {
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
    }
}
