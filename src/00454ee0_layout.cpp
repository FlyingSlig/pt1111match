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

extern const unsigned char s_StateIcons_png_004c4698[];
extern const unsigned char s_BtIcons_bmp_004c46a8[];
extern unsigned char DAT_004e2814[];
extern unsigned char DAT_004e281c[];
extern unsigned char DAT_004e2a84[];
extern unsigned char DAT_004e2810[4];
extern const unsigned char DAT_004bd2c8[1];
extern unsigned char DAT_004e2b14[12];
extern unsigned char PTR_PTR_004dd9e8[48];
extern void * DAT_004e240c;
extern unsigned char DAT_004e26fc[4];
extern const unsigned char s__s_Custo__d_004c46b4[16];
extern unsigned char DAT_004e26f0[4];
extern unsigned char DAT_004e2444[4];
extern unsigned char DAT_004e2430[8];













// FUNCTION: PORT1111 0x00454ee0
__declspec(naked) int FUN_00454ee0(void)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8d90
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
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x53
        push OFFSET s_BtIcons_bmp_004c46a8
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call FUN_00468080
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x60
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465e00
        _emit 0x50
        mov ecx, OFFSET DAT_004e2810
        call FUN_004776f0
        _emit 0x8b
        _emit 0xd8
        _emit 0xf7
        _emit 0xdb
        _emit 0x1a
        _emit 0xdb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0xfe
        _emit 0xc3
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x67
        mov ecx, dword ptr [DAT_004e2810]
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x1e
        _emit 0x6a
        _emit 0x1a
        call FUN_0047e1a0
        mov ecx, dword ptr [DAT_004e2b14]
        push OFFSET s_StateIcons_png_004c4698
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        call FUN_00468080
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x60
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465e00
        _emit 0x50
        mov ecx, OFFSET DAT_004e2814
        call FUN_004776f0
        _emit 0x8b
        _emit 0xd8
        _emit 0xf7
        _emit 0xdb
        _emit 0x1a
        _emit 0xdb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xfe
        _emit 0xc3
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x84
        _emit 0xdb
        _emit 0x74
        _emit 0x12
        _emit 0x33
        _emit 0xc0
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
        mov ecx, dword ptr [DAT_004e2814]
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x10
        _emit 0x6a
        _emit 0x10
        call FUN_0047e1a0
        mov eax, OFFSET DAT_004e281c
        _emit 0x8b
        _emit 0xff
        _emit 0xc7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc0
        _emit 0x08
        cmp eax, OFFSET DAT_004e2a84
        _emit 0x7c
        _emit 0xf0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
    }
}

// GAP: PORT1111 0x00455005
__declspec(naked) void gap_00455005(void)
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

// FUNCTION: PORT1111 0x00455010
__declspec(naked) int __fastcall FUN_00455010(void *pthis,POINT *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x0f
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x56
        _emit 0x04
        _emit 0x52
        _emit 0x33
        _emit 0xdb
        call dword ptr [PtInRect]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x3f
        _emit 0x8b
        _emit 0x8e
        _emit 0xa0
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x57
        call FUN_0047cf30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x22
        _emit 0x8b
        _emit 0x48
        _emit 0x58
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1b
        _emit 0x8d
        _emit 0x48
        _emit 0x50
        call FUN_00465e00
        _emit 0x8b
        _emit 0x4e
        _emit 0x14
        _emit 0x8b
        _emit 0xd8
        _emit 0x53
        call FUN_004737d0
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x57
        _emit 0x8d
        _emit 0x4e
        _emit 0x18
        call FUN_004526a0
        _emit 0x8b
        _emit 0xd8
        _emit 0x8b
        _emit 0x4e
        _emit 0x14
        _emit 0x53
        call FUN_004737d0
        _emit 0x5f
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x00455080
__declspec(naked) void __fastcall FUN_00455080(void *pthis,int param_1,int param_2,void *param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x0f
        _emit 0x84
        _emit 0x85
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x8c
        _emit 0xde
        _emit 0xa8
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x89
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x8d
        _emit 0x78
        _emit 0xff
        mov eax, dword ptr [DAT_004e2810]
        _emit 0x57
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        call FUN_004723f0
        mov edx, dword ptr [DAT_004e2810]
        _emit 0x8b
        _emit 0x84
        _emit 0xde
        _emit 0xa8
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x88
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x57
        _emit 0x6a
        _emit 0x01
        _emit 0x52
        call FUN_004723f0
        mov ecx, dword ptr [DAT_004e2810]
        _emit 0x8b
        _emit 0x94
        _emit 0xde
        _emit 0xa8
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x57
        _emit 0x6a
        _emit 0x02
        _emit 0x51
        _emit 0x8b
        _emit 0x8a
        _emit 0xb8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004723f0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x14
        _emit 0x6a
        _emit 0xff
        _emit 0x50
        call FUN_00466af0
        _emit 0x8b
        _emit 0x8c
        _emit 0xde
        _emit 0xa8
        _emit 0x08
        _emit 0x00
        _emit 0x00
        call FUN_00452100
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x8c
        _emit 0xfe
        _emit 0xa8
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x89
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0046ff40
        _emit 0x8b
        _emit 0x94
        _emit 0xfe
        _emit 0xa8
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8a
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0046ff40
        _emit 0x8b
        _emit 0x84
        _emit 0xfe
        _emit 0xa8
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x88
        _emit 0xb8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0046ff40
        _emit 0x51
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x14
        _emit 0x6a
        _emit 0xff
        push OFFSET DAT_004bd2c8
        call FUN_00466af0
        _emit 0x8b
        _emit 0x8c
        _emit 0xfe
        _emit 0xa8
        _emit 0x08
        _emit 0x00
        _emit 0x00
        call FUN_00452100
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00455175
__declspec(naked) void gap_00455175(void)
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

// FUNCTION: PORT1111 0x00455180
__declspec(naked) void __fastcall FUN_00455180(int param_1)
{
    __asm {
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x48
        _emit 0x5c
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x50
        _emit 0x8d
        _emit 0x7e
        _emit 0x04
        _emit 0x57
        _emit 0xff
        _emit 0x52
        _emit 0x70
        _emit 0x50
        mov ecx, OFFSET PTR_PTR_004dd9e8
        call FUN_004880f0
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x48
        _emit 0x5c
        _emit 0x57
        _emit 0x83
        _emit 0xc1
        _emit 0x14
        call FUN_0040ff50
        _emit 0x5f
        _emit 0x8d
        _emit 0x4e
        _emit 0x18
        _emit 0x5e
        jmp FUN_00452860
    }
}

// GAP: PORT1111 0x004551bf
__declspec(naked) void gap_004551bf(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004551c0
__declspec(naked) void FUN_004551c0(void)
{
    __asm {
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x81
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x3b
        _emit 0x56
        _emit 0x8b
        _emit 0x57
        _emit 0x08
        _emit 0x52
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x17
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00405f60
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x00
        _emit 0x56
        call FUN_004137d0
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x81
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x78
        _emit 0x04
        _emit 0x75
        _emit 0xc7
        _emit 0x5e
        _emit 0x5f
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00455213
__declspec(naked) void gap_00455213(void)
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
