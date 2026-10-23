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












// GAP: PORT1111 0x0041394b
__declspec(naked) void gap_0041394b(void)
{
    __asm {
        _emit 0x84
        _emit 0xc0
        _emit 0x8b
        _emit 0xfe
        _emit 0x74
        _emit 0xe1
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
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

// FUNCTION: PORT1111 0x00413960
__declspec(naked) int __cdecl FUN_00413960(void *param_1)
{
    __asm {
        mov eax, dword ptr [DAT_004e0b08]
        _emit 0x56
        mov esi, dword ptr [DAT_004e0b04]
        _emit 0x3b
        _emit 0xf0
        _emit 0x57
        _emit 0x74
        _emit 0x1f
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x0e
        _emit 0x57
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        call FUN_004663a0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x11
        mov eax, dword ptr [DAT_004e0b08]
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0x3b
        _emit 0xf0
        _emit 0x75
        _emit 0xe5
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x06
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0041399a
__declspec(naked) void gap_0041399a(void)
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

// FUNCTION: PORT1111 0x004139a0
__declspec(naked) void __fastcall FUN_004139a0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x51
        _emit 0x14
        _emit 0x8b
        _emit 0x02
        _emit 0x3b
        _emit 0xc2
        _emit 0x74
        _emit 0x4a
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x70
        _emit 0x08
        _emit 0x39
        _emit 0x56
        _emit 0x10
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
        _emit 0x41
        _emit 0x14
        _emit 0x75
        _emit 0xf1
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x41
        _emit 0x40
        _emit 0x3b
        _emit 0xf0
        _emit 0x75
        _emit 0x0f
        _emit 0x33
        _emit 0xd2
        _emit 0x3b
        _emit 0xc2
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x40
        _emit 0x60
        _emit 0x89
        _emit 0x50
        _emit 0x30
        _emit 0x89
        _emit 0x51
        _emit 0x40
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x50
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x12
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004139f6
__declspec(naked) void gap_004139f6(void)
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

// FUNCTION: PORT1111 0x00413a00
__declspec(naked) void __fastcall FUN_00413a00(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b635b
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
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x87
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x31
        _emit 0x3b
        _emit 0xf1
        _emit 0x74
        _emit 0x61
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x34
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_00433810
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x04
        mov ecx, dword ptr [DAT_004e2424]
        _emit 0x85
        _emit 0xc9
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x74
        _emit 0x08
        _emit 0x50
        call FUN_00434760
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x10
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x12
        _emit 0x8b
        _emit 0x87
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x70
        _emit 0x04
        _emit 0x75
        _emit 0xa6
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

// GAP: PORT1111 0x00413a9b
__declspec(naked) void gap_00413a9b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00413aa0
__declspec(naked) void __fastcall FUN_00413aa0(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x8b
        _emit 0x42
        _emit 0x04
        _emit 0x53
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x75
        _emit 0x17
        _emit 0x8b
        _emit 0x37
        _emit 0x39
        _emit 0x70
        _emit 0x0c
        _emit 0x7d
        _emit 0x05
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0xeb
        _emit 0x04
        _emit 0x8b
        _emit 0xd0
        _emit 0x8b
        _emit 0x00
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x74
        _emit 0xeb
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x3b
        _emit 0xd0
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x74
        _emit 0x1a
        _emit 0x8b
        _emit 0x0f
        _emit 0x3b
        _emit 0x4a
        _emit 0x0c
        _emit 0x7c
        _emit 0x13
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x5f
        _emit 0x5e
        _emit 0x89
        _emit 0x10
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x5f
        _emit 0x5e
        _emit 0x89
        _emit 0x10
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00413b08
__declspec(naked) void gap_00413b08(void)
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

// FUNCTION: PORT1111 0x00413b10
__declspec(naked) void __fastcall FUN_00413b10(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x8b
        _emit 0x42
        _emit 0x04
        _emit 0x53
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x75
        _emit 0x17
        _emit 0x8b
        _emit 0x37
        _emit 0x3b
        _emit 0x70
        _emit 0x0c
        _emit 0x7d
        _emit 0x06
        _emit 0x8b
        _emit 0xd0
        _emit 0x8b
        _emit 0x00
        _emit 0xeb
        _emit 0x03
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x74
        _emit 0xeb
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x1d
        _emit 0x8b
        _emit 0x37
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x70
        _emit 0x0c
        _emit 0x7d
        _emit 0x05
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0xeb
        _emit 0x04
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x00
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x74
        _emit 0xeb
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x5f
        _emit 0x5e
        _emit 0x89
        _emit 0x08
        _emit 0x89
        _emit 0x50
        _emit 0x04
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00413b74
__declspec(naked) void gap_00413b74(void)
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
