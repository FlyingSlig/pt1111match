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
extern int DAT_004e25f8;
extern unsigned char DAT_004e2408[];
extern unsigned char DAT_004e2a88[];
extern int DAT_004e20bc;
extern int DAT_004e2158;
extern unsigned char DAT_004e20c8[140];
extern unsigned char DAT_004e20c4[4];
extern unsigned char DAT_004e215c[4];
extern unsigned char DAT_004e2174[4];
extern unsigned char DAT_004e2178[4];
extern const unsigned char PTR_FUN_004bf904[4];
extern unsigned char DAT_004e217c[4];
extern unsigned char DAT_004e2168[4];
extern unsigned char DAT_004e216c[4];
extern unsigned char DAT_004e2180[4];
extern unsigned char DAT_004e2682[1];
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e20c0[4];
extern const unsigned char s_GridTileAlpha_bmp_004bf92c[20];
extern const unsigned char s_simpleTileAlpha_bmp_004bf918[20];
extern unsigned char DAT_004e203c[4];
extern unsigned char DAT_004e0b20[8];
extern unsigned char DAT_004e1f30[8];
extern unsigned char DAT_004e2670[4];
extern const unsigned char s_EdificiosMortos_004bf908[16];
extern unsigned char DAT_004e20b8[4];
extern void * DAT_004e240c;
extern unsigned char DAT_004e26f0[4];
extern unsigned char DAT_004e26fc[4];
extern volatile int DAT_004e2c34;
extern volatile int DAT_004e2c30;
extern unsigned char DAT_004e26e8[8];
extern unsigned char DAT_004e2418[4];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];











// GAP: PORT1111 0x0042a62a
__declspec(naked) void gap_0042a62a(void)
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

// FUNCTION: PORT1111 0x0042a630
__declspec(naked) void __fastcall FUN_0042a630(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x33
        _emit 0xdb
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x89
        _emit 0x9e
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x9e
        _emit 0x08
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e2a88]
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x0f
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        mov dword ptr [DAT_004e2a88], ebx
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x05
        call FUN_00414af0
        _emit 0x8b
        _emit 0xce
        call FUN_0042a5c0
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x14
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x59
        _emit 0x54
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
        _emit 0x46
        _emit 0x08
        _emit 0x75
        _emit 0xf3
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x39
        _emit 0x00
        _emit 0x74
        _emit 0x4d
        _emit 0x57
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x8b
        _emit 0x42
        _emit 0x04
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x3b
        _emit 0xcb
        _emit 0x8b
        _emit 0x7e
        _emit 0x0c
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x3b
        _emit 0x7e
        _emit 0x0c
        _emit 0x75
        _emit 0x29
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x41
        _emit 0x04
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
        _emit 0x0c
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x39
        _emit 0x00
        _emit 0x75
        _emit 0xb5
        _emit 0x5f
        _emit 0x89
        _emit 0x9e
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x9e
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x5e
        _emit 0x10
        mov ecx, dword ptr [DAT_004e2408]
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        mov dword ptr [DAT_004e2408], ebx
        _emit 0x8b
        _emit 0x8e
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x31
        _emit 0x8b
        _emit 0x51
        _emit 0xfc
        _emit 0x3b
        _emit 0xd3
        _emit 0x8d
        _emit 0x41
        _emit 0xfc
        _emit 0x74
        _emit 0x18
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x03
        _emit 0xff
        _emit 0x12
        _emit 0x89
        _emit 0x9e
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        mov ecx, OFFSET DAT_004e20c8
        _emit 0x5b
        _emit 0xe9
        _emit 0xfe
        _emit 0xe7
        _emit 0xff
    }
}


// GAP: PORT1111 0x0042a731
__declspec(naked) void gap_0042a731(void)
{
    __asm {
        _emit 0xff
        _emit 0x50
        _emit 0xe8
        _emit 0xd1
        _emit 0xd4
        _emit 0x06
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x9e
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        mov ecx, OFFSET DAT_004e20c8
        _emit 0x5b
        jmp FUN_00428f30
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042a750
__declspec(naked) void FUN_0042a750(void *pthis,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,int param_6)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x55
        _emit 0x56
        _emit 0x33
        _emit 0xd2
        _emit 0x3b
        _emit 0xda
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x7d
        _emit 0x06
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0xda
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        _emit 0x3b
        _emit 0xea
        _emit 0x7d
        _emit 0x06
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0xea
        _emit 0x8b
        _emit 0x8e
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xd9
        _emit 0x72
        _emit 0x09
        _emit 0x8d
        _emit 0x41
        _emit 0xff
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0xd8
        _emit 0x8b
        _emit 0x86
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xe8
        _emit 0x72
        _emit 0x09
        _emit 0x8d
        _emit 0x78
        _emit 0xff
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0xef
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x3b
        _emit 0xf9
        _emit 0x72
        _emit 0x07
        _emit 0x49
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0xf9
        _emit 0x39
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x72
        _emit 0x05
        _emit 0x48
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x83
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        _emit 0xff
        _emit 0x75
        _emit 0x0a
        mov ecx, dword ptr [DAT_004e20bc]
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x3b
        _emit 0xdf
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x0f
        _emit 0x8f
        _emit 0x9a
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x6c
        _emit 0x24
        _emit 0x24
        _emit 0x0f
        _emit 0x8f
        _emit 0x7d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8b
        _emit 0xbe
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x0f
        _emit 0xaf
        _emit 0xfd
        _emit 0x8b
        _emit 0x8e
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0xfb
        _emit 0x6b
        _emit 0xff
        _emit 0x6c
        _emit 0x03
        _emit 0xcf
        call FUN_00426730
        _emit 0x8b
        _emit 0xd8
        _emit 0x8b
        _emit 0xcb
        call FUN_00425da0
        _emit 0x8b
        _emit 0x43
        _emit 0x28
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x18
        _emit 0x8b
        _emit 0x96
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e2158]
        _emit 0x8b
        _emit 0x1c
        _emit 0x90
        _emit 0x8d
        _emit 0x04
        _emit 0x90
        _emit 0x8b
        _emit 0xcb
        call FUN_00425da0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x55
        _emit 0x51
        _emit 0x8b
        _emit 0xcb
        call FUN_00425900
        _emit 0x8b
        _emit 0x8e
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        _emit 0x03
        _emit 0xcf
        call FUN_00427630
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x45
        _emit 0x3b
        _emit 0xe8
        _emit 0x7e
        _emit 0x93
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x40
        _emit 0x3b
        _emit 0xc7
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x0f
        _emit 0x8e
        _emit 0x68
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x33
        _emit 0xd2
        _emit 0x3b
        _emit 0xdf
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x7f
        _emit 0x54
        _emit 0x3b
        _emit 0x6c
        _emit 0x24
        _emit 0x24
        _emit 0x7f
        _emit 0x49
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0xbf
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xc7
        _emit 0x7e
        _emit 0x25
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x2c
        _emit 0x6a
        _emit 0x01
        _emit 0x52
        _emit 0x57
        _emit 0x55
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_00429f40
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x04
        _emit 0xff
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x47
        _emit 0x3b
        _emit 0xf8
        _emit 0x7c
        _emit 0xde
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x45
        _emit 0x3b
        _emit 0xe8
        _emit 0x7e
        _emit 0xc5
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x43
        _emit 0x3b
        _emit 0xdf
        _emit 0x7e
        _emit 0xac
        mov ecx, OFFSET DAT_004e20c8
        call FUN_00428f30
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        mov ecx, OFFSET DAT_004e20c8
        call FUN_00428f00
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x47
        _emit 0x3b
        _emit 0xdf
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x0f
        _emit 0x8d
        _emit 0xe6
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x41
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x3b
        _emit 0x6c
        _emit 0x24
        _emit 0x18
        _emit 0x0f
        _emit 0x8d
        _emit 0xc5
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0xbf
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xc7
        _emit 0x7e
        _emit 0x1d
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x2c
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        _emit 0x57
        _emit 0x55
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        call FUN_00429f40
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x47
        _emit 0x3b
        _emit 0xf8
        _emit 0x7c
        _emit 0xe6
        mov ecx, dword ptr [DAT_004e20c4]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        call FUN_00447190
        _emit 0x8b
        _emit 0xbe
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x86
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xaf
        _emit 0xfd
        _emit 0x03
        _emit 0xfb
        _emit 0x6b
        _emit 0xff
        _emit 0x6c
        _emit 0x8d
        _emit 0x0c
        _emit 0x38
        _emit 0x8a
        _emit 0x41
        _emit 0x34
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0x13
        _emit 0x8b
        _emit 0x49
        _emit 0x30
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x50
        mov ecx, OFFSET DAT_004e20c8
        call FUN_00429050
        _emit 0xeb
        _emit 0x25
        call FUN_00426730
        _emit 0x8b
        _emit 0x48
        _emit 0x28
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x10
        _emit 0x8b
        _emit 0x96
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e2158]
        _emit 0x8d
        _emit 0x04
        _emit 0x90
        _emit 0x8b
        _emit 0x00
        _emit 0x55
        _emit 0x53
        _emit 0x8b
        _emit 0xc8
        call FUN_00425970
        _emit 0x8b
        _emit 0x8e
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x39
        _emit 0x38
        _emit 0x8b
        _emit 0x8e
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x03
        _emit 0xcf
        call FUN_00427630
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x45
        _emit 0x3b
        _emit 0xe8
        _emit 0x0f
        _emit 0x8c
        _emit 0x49
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x43
        _emit 0x3b
        _emit 0xdf
        _emit 0x0f
        _emit 0x8c
        _emit 0x28
        _emit 0xff
        _emit 0xff
        _emit 0xff
        mov esi, dword ptr [DAT_004e2158]
        cmp esi, dword ptr [DAT_004e215c]
        _emit 0x74
        _emit 0x13
        _emit 0x8b
        _emit 0x0e
        call FUN_004258c0
        mov eax, dword ptr [DAT_004e215c]
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0x3b
        _emit 0xf0
        _emit 0x75
        _emit 0xed
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x59
    }
}

// GAP: PORT1111 0x0042a9fe
__declspec(naked) void gap_0042a9fe(void)
{
    __asm {
        _emit 0xc2
        _emit 0x18
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
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042aa10
__declspec(naked) int FUN_0042aa10(void)
{
    __asm {
        mov edx, dword ptr [DAT_004e216c]
        _emit 0x56
        mov esi, dword ptr [DAT_004e2168]
        _emit 0x3b
        _emit 0xf2
        _emit 0x74
        _emit 0x36
        _emit 0x8b
        _emit 0x4a
        _emit 0xfc
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x13
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x14
        mov esi, dword ptr [DAT_004e2168]
        mov edx, dword ptr [DAT_004e216c]
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0xc2
        _emit 0x2b
        _emit 0xc6
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x09
        _emit 0x83
        _emit 0xea
        _emit 0x04
        mov dword ptr [DAT_004e216c], edx
        _emit 0x3b
        _emit 0xf2
        _emit 0x75
        _emit 0xca
        mov esi, dword ptr [DAT_004e2158]
        mov edx, dword ptr [DAT_004e215c]
        _emit 0x3b
        _emit 0xf2
        _emit 0x74
        _emit 0x36
        _emit 0x8b
        _emit 0x4a
        _emit 0xfc
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x13
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x52
        _emit 0x14
        mov esi, dword ptr [DAT_004e2158]
        mov edx, dword ptr [DAT_004e215c]
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0xc2
        _emit 0x2b
        _emit 0xc6
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x09
        _emit 0x83
        _emit 0xea
        _emit 0x04
        mov dword ptr [DAT_004e215c], edx
        _emit 0x3b
        _emit 0xf2
        _emit 0x75
        _emit 0xca
        mov ecx, OFFSET DAT_004e25f8
        call FUN_00436780
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0042aaae
__declspec(naked) void gap_0042aaae(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042aab0
__declspec(naked) int __cdecl FUN_0042aab0(int param_1)
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
        mov ecx, OFFSET DAT_004e2174
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        call FUN_00413aa0
        _emit 0x8b
        _emit 0x04
        _emit 0x24
        cmp eax, dword ptr [DAT_004e2178]
        _emit 0x74
        _emit 0x05
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0x59
        _emit 0xc3
        _emit 0x33
        _emit 0xc0
        _emit 0x59
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0042aae1
__declspec(naked) void gap_0042aae1(void)
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

// FUNCTION: PORT1111 0x0042aaf0
__declspec(naked) void __fastcall FUN_0042aaf0(int param_1)
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
        call FUN_0047d4a0
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x0042ab00
__declspec(naked) void __fastcall FUN_0042ab00(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x4a
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x85
        _emit 0xc0
        _emit 0x76
        _emit 0x3e
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x37
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2b
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x8b
        _emit 0x48
        _emit 0xfc
        _emit 0x83
        _emit 0xe8
        _emit 0x04
        call FUN_00427690
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0xd8
        _emit 0x8b
        _emit 0x56
        _emit 0x64
        _emit 0x8b
        _emit 0xc2
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xca
        _emit 0x83
        _emit 0xc2
        _emit 0xfc
        _emit 0x89
        _emit 0x56
        _emit 0x64
        _emit 0xeb
        _emit 0xc2
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0042ab56
__declspec(naked) void gap_0042ab56(void)
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

// FUNCTION: PORT1111 0x0042ab60
__declspec(naked) int __fastcall FUN_0042ab60(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0043d220
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0042ab76
__declspec(naked) void gap_0042ab76(void)
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

// FUNCTION: PORT1111 0x0042ab80
__declspec(naked) void __fastcall FUN_0042ab80(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7150
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
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        mov dword ptr [esi], OFFSET PTR_FUN_004bf904
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0042a630
        _emit 0x8d
        _emit 0x8e
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x04
        call FUN_004216d0
        _emit 0x8b
        _emit 0x46
        _emit 0x70
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x5e
        _emit 0x70
        _emit 0x89
        _emit 0x5e
        _emit 0x74
        _emit 0x89
        _emit 0x5e
        _emit 0x78
        _emit 0x8b
        _emit 0x46
        _emit 0x60
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        push OFFSET FUN_00409650
        _emit 0x6a
        _emit 0x05
        _emit 0x6a
        _emit 0x0c
        _emit 0x8d
        _emit 0x46
        _emit 0x20
        _emit 0x50
        _emit 0x89
        _emit 0x5e
        _emit 0x60
        _emit 0x89
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x5e
        _emit 0x68
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x01
        _emit 0xe8
        _emit 0x5f
        _emit 0xd0
        _emit 0x06
        _emit 0x00
        _emit 0x8d
        _emit 0x7e
        _emit 0x14
        _emit 0x8b
        _emit 0xcf
        call FUN_00419480
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
    }
}


// GAP: PORT1111 0x0042ac1a
__declspec(naked) void gap_0042ac1a(void)
{
    __asm {
        _emit 0x51
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc6
        _emit 0x04
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        call FUN_00419480
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x52
        call pt_a_004978fd
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

// FUNCTION: PORT1111 0x0042ac60
__declspec(naked) void FUN_0042ac60(void)
{
    __asm {
        mov edx, dword ptr [DAT_004e2178]
        _emit 0x56
        _emit 0x8b
        _emit 0x32
        _emit 0x3b
        _emit 0xf2
        _emit 0x74
        _emit 0x61
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x14
        mov edx, dword ptr [DAT_004e2178]
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
        _emit 0xf2
        _emit 0x75
        _emit 0xa2
        _emit 0x8b
        _emit 0x4a
        _emit 0x04
        _emit 0x51
        mov ecx, OFFSET DAT_004e2174
        call pt_a_00429e60
        mov eax, dword ptr [DAT_004e2178]
        _emit 0x89
        _emit 0x40
        _emit 0x04
        mov eax, dword ptr [DAT_004e2178]
        mov dword ptr [DAT_004e217c], 0
        _emit 0x89
        _emit 0x00
        mov eax, dword ptr [DAT_004e2178]
        _emit 0x89
        _emit 0x40
        _emit 0x08
        mov esi, dword ptr [DAT_004e2168]
        mov edx, dword ptr [DAT_004e216c]
        _emit 0x3b
        _emit 0xf2
        _emit 0x74
        _emit 0x39
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4a
        _emit 0xfc
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x13
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x52
        _emit 0x14
        mov esi, dword ptr [DAT_004e2168]
        mov edx, dword ptr [DAT_004e216c]
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0xc2
        _emit 0x2b
        _emit 0xc6
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x09
        _emit 0x83
        _emit 0xea
        _emit 0x04
        mov dword ptr [DAT_004e216c], edx
        _emit 0x3b
        _emit 0xf2
        _emit 0x75
        _emit 0xca
        mov esi, dword ptr [DAT_004e2158]
        mov edx, dword ptr [DAT_004e215c]
        _emit 0x3b
        _emit 0xf2
        _emit 0x74
        _emit 0x36
        _emit 0x8b
        _emit 0x4a
        _emit 0xfc
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x13
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x14
        mov esi, dword ptr [DAT_004e2158]
        mov edx, dword ptr [DAT_004e215c]
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0xc2
        _emit 0x2b
        _emit 0xc6
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x09
        _emit 0x83
        _emit 0xea
        _emit 0x04
        mov dword ptr [DAT_004e215c], edx
        _emit 0x3b
        _emit 0xf2
        _emit 0x75
        _emit 0xca
        mov ecx, OFFSET DAT_004e2180
        call FUN_0047e280
        call FUN_00426a00
        mov ecx, OFFSET DAT_004e20c8
        _emit 0x5e
        jmp FUN_00429150
    }
}


// GAP: PORT1111 0x0042ada6
__declspec(naked) void gap_0042ada6(void)
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

// FUNCTION: PORT1111 0x0042adb0
__declspec(naked) int FUN_0042adb0(void)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7170
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
        mov al, byte ptr [DAT_004e2682]
        _emit 0x84
        _emit 0xc0
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x56
        mov dword ptr [DAT_004e20c0], 0x1ff
        _emit 0x74
        _emit 0x19
        push OFFSET s_GridTileAlpha_bmp_004bf92c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call FUN_004680b0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x17
        push OFFSET s_simpleTileAlpha_bmp_004bf918
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        call FUN_004680b0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x64
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        call FUN_00465e00
        mov ecx, OFFSET DAT_004e2180
        _emit 0x50
        call FUN_0047e4d0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0xf0
        call FUN_00465e40
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x12
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
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
        mov esi, OFFSET DAT_004e2180
        mov dword ptr [DAT_004e203c], esi
        call FUN_00428050
        mov dword ptr [DAT_004e0b20], esi
        mov dword ptr [DAT_004e1f30], esi
        call FUN_0042aa10
        mov ecx, dword ptr [DAT_004e2158]
        _emit 0x85
        _emit 0xc9
        mov eax, dword ptr [DAT_004e215c]
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xd2
        _emit 0xeb
        _emit 0x07
        _emit 0x8b
        _emit 0xd0
        _emit 0x2b
        _emit 0xd1
        _emit 0xc1
        _emit 0xfa
        _emit 0x02
        mov esi, dword ptr [DAT_004e2670]
        _emit 0x85
        _emit 0xf6
        mov dword ptr [DAT_004e20bc], edx
        _emit 0x7c
        _emit 0x0a
        _emit 0x3b
        _emit 0xf2
        _emit 0x7d
        _emit 0x06
        mov dword ptr [DAT_004e20bc], esi
        _emit 0x33
        _emit 0xf6
        _emit 0x8b
        _emit 0xff
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x31
        _emit 0x2b
        _emit 0xc1
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf0
        _emit 0x73
        _emit 0x28
        _emit 0x8b
        _emit 0x0c
        _emit 0xb1
        push OFFSET s_EdificiosMortos_004bf908
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        call thunk_FUN_00466240
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0e
        mov eax, dword ptr [DAT_004e215c]
        mov ecx, dword ptr [DAT_004e2158]
        _emit 0x46
        _emit 0xeb
        _emit 0xd1
        mov dword ptr [DAT_004e20b8], esi
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
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


// GAP: PORT1111 0x0042aefa
__declspec(naked) void gap_0042aefa(void)
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

// FUNCTION: PORT1111 0x0042af00
__declspec(naked) void __fastcall FUN_0042af00(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        mov dword ptr [DAT_004e20bc], eax
        _emit 0x8b
        _emit 0x81
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x91
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x48
        _emit 0x50
        _emit 0x4a
        _emit 0x52
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        call FUN_0042a750
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0042af28
__declspec(naked) void gap_0042af28(void)
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

// FUNCTION: PORT1111 0x0042af30
__declspec(naked) int __fastcall FUN_0042af30(void *pthis,void *param_1)
{
    __asm {
        _emit 0x51
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00412fa0
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x4d
        _emit 0x61
        _emit 0x70
        _emit 0x00
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x90
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x2b
        _emit 0xc2
        _emit 0x50
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0042f440
        _emit 0x6a
        _emit 0x19
        _emit 0x8b
        _emit 0xce
        call FUN_0042f670
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_0042f670
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_0042a450
        _emit 0x8b
        _emit 0x87
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0042f670
        _emit 0x8b
        _emit 0x8f
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_0042f670
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x83
        _emit 0x7e
        _emit 0x04
        _emit 0x02
        _emit 0x7c
        _emit 0x26
        mov ecx, dword ptr [DAT_004e26f0]
        mov eax, dword ptr [DAT_004e26fc]
        _emit 0x8b
        _emit 0x04
        _emit 0x81
        mov ecx, dword ptr [DAT_004e2c34]
        mov edx, dword ptr [DAT_004e2c30]
        _emit 0x89
        _emit 0x90
        _emit 0x10
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x88
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x55
        _emit 0x56
        mov ecx, OFFSET DAT_004e26e8
        call FUN_00423c20
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8b
        _emit 0x87
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xed
        _emit 0x85
        _emit 0xc0
        _emit 0x76
        _emit 0x40
        _emit 0x8b
        _emit 0x87
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xdb
        _emit 0x85
        _emit 0xc0
        _emit 0x76
        _emit 0x29
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x8f
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x87
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xaf
        _emit 0xcb
        _emit 0x03
        _emit 0xcd
        _emit 0x6b
        _emit 0xc9
        _emit 0x6c
        _emit 0x56
        _emit 0x03
        _emit 0xc8
        call FUN_00426e50
        _emit 0x8b
        _emit 0x87
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x43
        _emit 0x3b
        _emit 0xd8
        _emit 0x72
        _emit 0xd9
        _emit 0x8b
        _emit 0x8f
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x45
        _emit 0x3b
        _emit 0xe9
        _emit 0x72
        _emit 0xc6
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x8b
        _emit 0x18
        _emit 0x33
        _emit 0xed
        _emit 0x3b
        _emit 0xd8
        _emit 0x74
        _emit 0x17
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4b
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x01
        _emit 0x45
        _emit 0x8b
        _emit 0x1b
        _emit 0x3b
        _emit 0x5f
        _emit 0x18
        _emit 0x75
        _emit 0xec
        _emit 0x55
        _emit 0x8b
        _emit 0xce
        call FUN_0042f670
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x8b
        _emit 0x18
        _emit 0x3b
        _emit 0xd8
        _emit 0x74
        _emit 0x30
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x6b
        _emit 0x08
        _emit 0x8b
        _emit 0x45
        _emit 0x00
        _emit 0x8b
        _emit 0xcd
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x18
        _emit 0x56
        _emit 0x8b
        _emit 0xcd
        call FUN_0041b610
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        call FUN_0042f4c0
        _emit 0x8b
        _emit 0x1b
        _emit 0x3b
        _emit 0x5f
        _emit 0x18
        _emit 0x75
        _emit 0xd2
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x56
        call FUN_004158c0
        _emit 0x83
        _emit 0x7e
        _emit 0x04
        _emit 0x03
        _emit 0x5d
        _emit 0x5b
        _emit 0x75
        _emit 0x0c
        mov ecx, dword ptr [DAT_004e2418]
        _emit 0x56
        call FUN_0040af40
        _emit 0x8b
        _emit 0x06
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00412fd0
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0042b0ed
__declspec(naked) void gap_0042b0ed(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042b0f0
__declspec(naked) int __fastcall FUN_0042b0f0(void *pthis,unsigned int param_1,unsigned int param_2,void *param_3,char param_4)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xed
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x0f
        _emit 0x8c
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xae
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x83
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x85
        _emit 0xdb
        _emit 0x0f
        _emit 0x8c
        _emit 0xe4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x9e
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x83
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x57
        _emit 0x50
        call FUN_004147d0
        _emit 0x8b
        _emit 0xf8
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x36
        _emit 0x0f
        _emit 0xbe
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        mov edx, dword ptr [DAT_004e26f0]
        _emit 0x8d
        _emit 0x04
        _emit 0x8a
        _emit 0x8b
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x83
        _emit 0x7f
        _emit 0x48
        _emit 0x05
        _emit 0x8b
        _emit 0xce
        _emit 0x75
        _emit 0x24
        _emit 0x53
        _emit 0x55
        call FUN_00429ac0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x50
        _emit 0x51
        _emit 0x57
        call FUN_0040d8a0
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x14
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5b
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x57
        _emit 0x53
        _emit 0x55
        call FUN_00429c70
        _emit 0xeb
        _emit 0xe8
        _emit 0x8b
        _emit 0x96
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x86
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xaf
        _emit 0xd3
        _emit 0x03
        _emit 0xd5
        _emit 0x6b
        _emit 0xd2
        _emit 0x6c
        _emit 0x0f
        _emit 0xbf
        _emit 0x5c
        _emit 0x10
        _emit 0x04
        _emit 0x0f
        _emit 0xbf
        _emit 0x6c
        _emit 0x10
        _emit 0x06
        _emit 0x03
        _emit 0xc2
        _emit 0x8a
        _emit 0x47
        _emit 0x64
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x83
        _emit 0xc3
        _emit 0x20
        _emit 0x83
        _emit 0xc5
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x51
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00413b80
        _emit 0x8b
        _emit 0xf0
        _emit 0xf6
        _emit 0x46
        _emit 0x3c
        _emit 0x02
        _emit 0x74
        _emit 0x0f
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x00
        _emit 0x55
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00412880
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x4c
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x5e
        _emit 0x5d
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5b
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x0042b206
__declspec(naked) void gap_0042b206(void)
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

// FUNCTION: PORT1111 0x0042b210
__declspec(naked) void __fastcall FUN_0042b210(void *pthis,unsigned int param_1,unsigned int param_2,void *param_3,char param_4)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x52
        call FUN_0042b0f0
        _emit 0xc2
        _emit 0x14
        _emit 0x00
    }
}


// GAP: PORT1111 0x0042b22c
__declspec(naked) void gap_0042b22c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
