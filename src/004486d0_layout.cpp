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

extern const unsigned char s_Perdeu_todas_as_unidades_004c406c[];
extern const unsigned char PTR_FUN_004c4148[];
extern unsigned char DAT_004e0b1c[];
extern unsigned char DAT_004e20c4[];
extern unsigned char DAT_004e27ec[];
extern unsigned char DAT_004e2b20[];
extern unsigned char DAT_004e27e8[4];
extern unsigned char DAT_004e2b10[4];
extern int DAT_004e2404;
extern unsigned char DAT_004e2b14[12];
extern const unsigned char PTR_InflateRect_004bc2bc[4];
extern const unsigned char PTR_PtInRect_004bc2e4[4];
extern const unsigned char PTR_SetRect_004bc2e8[4];
extern unsigned char DAT_004e26d8[16];
extern void * DAT_004e2410;
extern void * DAT_004e240c;
extern unsigned char DAT_004e26cc[4];
extern unsigned char DAT_004e26d4[4];
extern unsigned char DAT_004e26c8[4];
extern unsigned char DAT_004e26d0[4];
extern unsigned char DAT_004e2c58[4];
extern unsigned char DAT_004e2afc[4];
extern unsigned char DAT_004e2c2c[4];
extern unsigned char DAT_004e0af0[4];
extern unsigned char DAT_004e2420[4];
extern unsigned char DAT_004e2414[4];
extern unsigned char DAT_004e241c[4];
extern const unsigned char DAT_004bd2c8[1];
extern unsigned char DAT_004e2418[4];
extern unsigned char DAT_004e2684[1];
extern const unsigned char s_data_maps__004bf5f4[12];
extern unsigned char DAT_004e2448[48];
extern unsigned char DAT_004e2430[8];
extern const unsigned char DAT_004c4028[20];
extern unsigned char DAT_004dc298[4];
extern unsigned char DAT_004e0868[4];
extern unsigned char DAT_004e26fc[4];
extern unsigned char DAT_004e26e8[8];
extern unsigned char DAT_004e26f0[4];
extern unsigned char DAT_004e2700[8];
extern unsigned char DAT_004e2687[17];
extern unsigned char DAT_004e2800[4];
extern unsigned char DAT_004e2444[4];
extern const unsigned char s_DATA_Maps_004c3828[12];
extern const unsigned char DAT_004c3824[4];
extern const unsigned char DAT_004c3f78[4];
extern unsigned char DAT_004e2478[36];
extern unsigned char DAT_004e2438[4];
extern const unsigned char s_Jogo_gravado_com_sucesso_004c4050[28];
extern const unsigned char s_Erro_a_gravar_jogo__004c403c[20];
extern const unsigned char PTR_FUN_004c4088[192];
extern const unsigned char PTR_FUN_004c4258[40];
extern const unsigned char PTR_LAB_004c4208[80];
extern unsigned char DAT_004e279c[48];













// FUNCTION: PORT1111 0x004486d0
__declspec(naked) void __cdecl FUN_004486d0(WPARAM param_1)
{
    __asm {
        mov eax, dword ptr [DAT_004e27e8]
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x28
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        mov ecx, dword ptr [DAT_004e2b10]
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        mov dword ptr [DAT_004e27e8], 1
        _emit 0x8b
        _emit 0x11
        _emit 0x68
        _emit 0x0b
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x3c
        _emit 0x50
        call dword ptr [PostMessageA]
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00448702
__declspec(naked) void gap_00448702(void)
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

// FUNCTION: PORT1111 0x00448710
__declspec(naked) void FUN_00448710(void)
{
    __asm {
        mov eax, dword ptr [DAT_004e27e8]
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x25
        mov ecx, dword ptr [DAT_004e2b10]
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        mov dword ptr [DAT_004e27e8], 1
        _emit 0x8b
        _emit 0x01
        _emit 0x68
        _emit 0x0c
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x3c
        _emit 0x50
        call dword ptr [PostMessageA]
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0044873f
__declspec(naked) void gap_0044873f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00448740
__declspec(naked) void FUN_00448740(void)
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
        _emit 0x48
        _emit 0x5c
        _emit 0x83
        _emit 0xc1
        _emit 0x14
        jmp FUN_00474580
    }
}

// GAP: PORT1111 0x0044876b
__declspec(naked) void gap_0044876b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00448770
__declspec(naked) void __fastcall FUN_00448770(void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x30
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x8b
        _emit 0x48
        _emit 0x38
        _emit 0x85
        _emit 0xc9
        _emit 0x0f
        _emit 0x84
        _emit 0xa6
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x51
        call dword ptr [GetCursorPos]
        _emit 0x8b
        _emit 0x06
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x4c
        _emit 0x50
        call dword ptr [GetClientRect]
        mov edi, dword ptr [InflateRect]
        _emit 0x6a
        _emit 0xfb
        _emit 0x6a
        _emit 0xfb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x51
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0x06
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x4c
        _emit 0x50
        call dword ptr [ClientToScreen]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x50
        call dword ptr [OffsetRect]
        _emit 0x6a
        _emit 0xfb
        _emit 0x6a
        _emit 0xfb
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x51
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        mov esi, dword ptr [PtInRect]
        _emit 0x52
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x51
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0x13
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        mov edi, dword ptr [SetRect]
        _emit 0x52
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x38
        _emit 0x51
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x51
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x17
        _emit 0x6a
        _emit 0x20
        _emit 0x6a
        _emit 0x20
        call FUN_0043a320
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        call FUN_00448740
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x30
        _emit 0xc3
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x52
        _emit 0x68
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x38
        _emit 0x51
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x51
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x17
        _emit 0x6a
        _emit 0x20
        _emit 0x6a
        _emit 0xe0
        call FUN_0043a320
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        call FUN_00448740
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x30
        _emit 0xc3
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x68
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x38
        _emit 0x51
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x51
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x17
        _emit 0x6a
        _emit 0xe0
        _emit 0x6a
        _emit 0xe0
        call FUN_0043a320
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        call FUN_00448740
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x30
        _emit 0xc3
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x68
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x38
        _emit 0x51
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x51
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x17
        _emit 0x6a
        _emit 0xe0
        _emit 0x6a
        _emit 0x20
        call FUN_0043a320
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        call FUN_00448740
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x30
        _emit 0xc3
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x52
        _emit 0x50
        _emit 0x51
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x38
        _emit 0x52
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x30
        _emit 0x52
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x17
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x20
        call FUN_0043a320
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        call FUN_00448740
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x30
        _emit 0xc3
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x50
        _emit 0x68
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x38
        _emit 0x50
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x50
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x17
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0xe0
        call FUN_0043a320
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        call FUN_00448740
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x30
        _emit 0xc3
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x52
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x38
        _emit 0x51
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0x51
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x04
        _emit 0x6a
        _emit 0x20
        _emit 0xeb
        _emit 0x32
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x68
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x38
        _emit 0x52
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x30
        _emit 0x52
        _emit 0xff
        _emit 0xd6
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x11
        _emit 0x6a
        _emit 0xe0
        _emit 0x6a
        _emit 0x00
        call FUN_0043a320
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        call FUN_00448740
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x30
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00448a2f
__declspec(naked) void gap_00448a2f(void)
{
    __asm {
        _emit 0xcc
        mov al, byte ptr [DAT_004e2687]
        _emit 0x84
        _emit 0xc0
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x74
        _emit 0x1c
        mov ecx, dword ptr [DAT_004e2800]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x12
        _emit 0x6a
        _emit 0x01
        call FUN_0044c390
        mov ecx, dword ptr [DAT_004e2800]
        call FUN_0044bfb0
        mov eax, dword ptr [DAT_004e27ec]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x73
        mov dword ptr [DAT_004e27ec], 0
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        call FUN_004485b0
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0x5e
        _emit 0xc3
        _emit 0xcc
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x57
        mov edi, dword ptr [PtInRect]
        _emit 0x8b
        _emit 0xe9
        _emit 0x8b
        _emit 0x0e
        _emit 0x50
        _emit 0x51
        push OFFSET DAT_004e26d8
        _emit 0xff
        _emit 0xd7
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x78
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x02
        _emit 0xc7
        _emit 0x45
        _emit 0x38
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x85
        _emit 0xad
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x56
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x81
        _emit 0xc1
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004211c0
        mov eax, dword ptr [DAT_004e26d4]
        mov edi, dword ptr [DAT_004e26cc]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        mov ebx, dword ptr [DAT_004e26c8]
        _emit 0x2b
        _emit 0xc7
        _emit 0x99
        _emit 0x2b
        _emit 0xc2
        _emit 0xd1
        _emit 0xf8
        _emit 0x03
        _emit 0xc1
        _emit 0x50
        mov eax, dword ptr [DAT_004e26d0]
        _emit 0x2b
        _emit 0xc3
        _emit 0x99
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0xd1
        _emit 0xf8
        _emit 0x03
        _emit 0xc2
        _emit 0x50
        call FUN_0043a280
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        call FUN_00413300
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x0e
        _emit 0x50
        _emit 0x51
        push OFFSET DAT_004e26c8
        _emit 0xff
        _emit 0xd7
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x35
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x2d
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        mov ecx, dword ptr [DAT_004e2410]
        _emit 0x57
        _emit 0x6a
        _emit 0x00
        _emit 0x56
        _emit 0x53
        call FUN_004798f0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x11
        _emit 0x57
        _emit 0x53
        _emit 0x89
        _emit 0x45
        _emit 0x38
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x56
        call FUN_00413380
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00448b70
__declspec(naked) void FUN_00448b70(unsigned int param_1,POINT *param_2)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0xf6
        _emit 0xc3
        _emit 0x01
        _emit 0x75
        _emit 0x76
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x0e
        _emit 0x50
        _emit 0x51
        push OFFSET DAT_004e26d8
        call dword ptr [PtInRect]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x26
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x56
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        _emit 0x81
        _emit 0xc1
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00421200
        _emit 0x8b
        _emit 0x08
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0xeb
        _emit 0x0d
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        mov ecx, dword ptr [DAT_004e2410]
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x53
        call FUN_00467160
        _emit 0x85
        _emit 0xc0
        _emit 0x5e
        _emit 0x75
        _emit 0x12
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        _emit 0x53
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        call FUN_00416770
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00448bfa
__declspec(naked) void gap_00448bfa(void)
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

// FUNCTION: PORT1111 0x00448c00
__declspec(naked) void __fastcall FUN_00448c00(void *pthis,unsigned int param_1,POINT *param_2)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e2410]
        _emit 0x85
        _emit 0xc9
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x74
        _emit 0x0a
        _emit 0x57
        call FUN_00455010
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x21
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x83
        _emit 0xe8
        _emit 0x00
        _emit 0x74
        _emit 0x08
        _emit 0x48
        _emit 0x74
        _emit 0x1e
        _emit 0x83
        _emit 0xe8
        _emit 0x02
        _emit 0x75
        _emit 0x11
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x57
        call FUN_00413400
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        _emit 0x74
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x57
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x81
        _emit 0xc1
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004211c0
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x70
        _emit 0x04
        mov edx, dword ptr [DAT_004e26cc]
        mov eax, dword ptr [DAT_004e26d4]
        _emit 0x2b
        _emit 0xc2
        _emit 0x99
        _emit 0x2b
        _emit 0xc2
        mov edx, dword ptr [DAT_004e26c8]
        _emit 0xd1
        _emit 0xf8
        _emit 0x03
        _emit 0xc6
        _emit 0x50
        mov eax, dword ptr [DAT_004e26d0]
        _emit 0x2b
        _emit 0xc2
        _emit 0x99
        _emit 0x2b
        _emit 0xc2
        _emit 0xd1
        _emit 0xf8
        _emit 0x03
        _emit 0xc1
        _emit 0x50
        call FUN_0043a280
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        call FUN_00413300
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x00448cb0
__declspec(naked) void __fastcall FUN_00448cb0(void *pthis,unsigned int param_1,POINT *param_2,int param_3)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0xf6
        _emit 0xc3
        _emit 0x01
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x75
        _emit 0x6f
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x0e
        _emit 0x50
        _emit 0x51
        push OFFSET DAT_004e26d8
        call dword ptr [PtInRect]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x26
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x56
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x52
        _emit 0x81
        _emit 0xc1
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00421200
        _emit 0x8b
        _emit 0x08
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0xeb
        _emit 0x0d
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x85
        _emit 0xc0
        _emit 0x5e
        _emit 0x75
        _emit 0x11
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x53
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        call FUN_00412e40
        _emit 0xc7
        _emit 0x47
        _emit 0x38
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00448d37
__declspec(naked) void gap_00448d37(void)
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

// FUNCTION: PORT1111 0x00448d40
__declspec(naked) void FUN_00448d40(int param_1,POINT *param_2)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x0e
        _emit 0x50
        _emit 0x51
        push OFFSET DAT_004e26d8
        call dword ptr [PtInRect]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x26
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x56
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x81
        _emit 0xc1
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00421200
        _emit 0x8b
        _emit 0x08
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0xeb
        _emit 0x0d
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x18
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call FUN_004110a0
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00448dad
__declspec(naked) void gap_00448dad(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00448db0
__declspec(naked) void __fastcall FUN_00448db0(void *pthis,unsigned int param_1,int param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0xfe
        _emit 0x1b
        _emit 0x57
        _emit 0x75
        _emit 0x15
        _emit 0x8b
        _emit 0x49
        _emit 0x24
        _emit 0x0f
        _emit 0xb7
        _emit 0x41
        _emit 0x1c
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x6a
        _emit 0x36
        call FUN_0047ca30
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        mov ecx, dword ptr [DAT_004e2410]
        _emit 0x57
        _emit 0x56
        call FUN_00467160
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0d
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x57
        _emit 0x56
        call FUN_00417900
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00448df7
__declspec(naked) void gap_00448df7(void)
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

// FUNCTION: PORT1111 0x00448e00
__declspec(naked) void __fastcall FUN_00448e00(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_004802a0
        mov eax, dword ptr [DAT_004e2c58]
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x17
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        call FUN_00413500
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        jmp FUN_00448770
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00448e2a
__declspec(naked) void gap_00448e2a(void)
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

// FUNCTION: PORT1111 0x00448e30
__declspec(naked) void __fastcall FUN_00448e30(void *pthis,int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x77
        _emit 0x8b
        _emit 0x46
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x70
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x48
        _emit 0x74
        _emit 0x5e
        _emit 0x83
        _emit 0xe8
        _emit 0x09
        _emit 0x75
        _emit 0x64
        call FUN_00412e70
        mov ecx, dword ptr [DAT_004e2410]
        call FUN_00455180
        mov eax, dword ptr [DAT_004e2afc]
        _emit 0x83
        _emit 0x78
        _emit 0x04
        _emit 0x64
        _emit 0x72
        _emit 0x49
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x51
        call dword ptr [GetCursorPos]
        mov eax, dword ptr [DAT_004e2c2c]
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x13
        _emit 0x8b
        _emit 0x06
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x4c
        _emit 0x50
        call dword ptr [ScreenToClient]
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x51
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00415760
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2410]
        call FUN_00454e70
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00448ebe
__declspec(naked) void gap_00448ebe(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00448ec0
__declspec(naked) int __fastcall FUN_00448ec0(void *pthis,int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b87ad
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
        _emit 0x56
        _emit 0x33
        _emit 0xdb
        _emit 0x8b
        _emit 0xf1
        mov dword ptr [DAT_004e27e8], ebx
        _emit 0x57
        _emit 0x89
        _emit 0x5e
        _emit 0x28
        mov dword ptr [DAT_004e0af0], ebx
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x53
        call FUN_0047caa0
        mov eax, dword ptr [DAT_004e2afc]
        _emit 0xbd
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x68
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        call FUN_0047c5f0
        _emit 0x6a
        _emit 0x3c
        _emit 0x89
        _emit 0x98
        _emit 0x04
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x98
        _emit 0x08
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x98
        _emit 0x0c
        _emit 0x08
        _emit 0x00
        _emit 0x00
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xc3
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x20
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_004429c0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x83
        _emit 0xcf
        _emit 0xff
        _emit 0x68
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        mov dword ptr [DAT_004e2420], eax
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xc3
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x20
        _emit 0x74
        _emit 0x0e
        push OFFSET DAT_004e26c8
        _emit 0x8b
        _emit 0xc8
        call FUN_0042bca0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0xc8
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        mov dword ptr [DAT_004e2404], eax
        call thunk_FUN_004293f0
        _emit 0x68
        _emit 0x34
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xc3
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_00417530
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        mov dword ptr [DAT_004e240c], eax
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0xff
        _emit 0x52
        _emit 0x4c
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_004130f0
        _emit 0x68
        _emit 0x34
        _emit 0x09
        _emit 0x00
        _emit 0x00
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xc3
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_00454d40
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        mov dword ptr [DAT_004e2410], eax
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        call FUN_00455c60
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x88
        _emit 0x01
        _emit 0x00
        _emit 0x00
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
        _emit 0xc3
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x56
        _emit 0x24
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        call FUN_00454a30
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0xc8
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        mov dword ptr [DAT_004e2414], eax
        call FUN_00454ab0
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x47
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x0c
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xc3
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0043e910
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x6a
        _emit 0x10
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        mov dword ptr [DAT_004e241c], eax
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xc3
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0040b900
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x57
        push OFFSET DAT_004bd2c8
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        mov dword ptr [DAT_004e2418], eax
        call FUN_00466af0
        cmp byte ptr [DAT_004e2684], bl
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x3b
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        call pt_a_00403340
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x08
        call FUN_00466a50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x07
        call FUN_00465e40
        push OFFSET s_data_maps__004bf5f4
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call thunk_FUN_00466040
        mov ecx, OFFSET DAT_004e2448
        call FUN_00465ec0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x3c
        mov ecx, OFFSET DAT_004e2430
        call FUN_0041c940
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x2e
        _emit 0x53
        push OFFSET DAT_004c4028
        call FUN_0046ab50
        mov ecx, dword ptr [DAT_004e2afc]
        _emit 0x89
        _emit 0x59
        _emit 0x08
        mov ecx, dword ptr [DAT_004e2afc]
        _emit 0x8b
        _emit 0x11
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x34
        _emit 0xe9
        _emit 0x81
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004dc298]
        _emit 0x3b
        _emit 0xc7
        mov dword ptr [DAT_004e0868], ebp
        _emit 0x74
        _emit 0x03
        _emit 0x50
        _emit 0xeb
        _emit 0x09
        _emit 0x33
        _emit 0xc9
        mov cl, byte ptr [DAT_004e26fc]
        _emit 0x51
        mov ecx, OFFSET DAT_004e26e8
        call FUN_00423c70
        mov ecx, dword ptr [DAT_004e240c]
        mov dword ptr [DAT_004e0868], ebx
        call FUN_00415c30
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x24
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        call FUN_00465e40
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
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
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2420]
        call FUN_00442860
        mov edx, dword ptr [DAT_004e26fc]
        mov eax, dword ptr [DAT_004e26f0]
        _emit 0x8b
        _emit 0x04
        _emit 0x90
        _emit 0x8b
        _emit 0x88
        _emit 0x10
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x80
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x51
        call FUN_0043a280
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x29
        mov ecx, dword ptr [DAT_004e26fc]
        mov edx, dword ptr [DAT_004e26f0]
        _emit 0x8b
        _emit 0x0c
        _emit 0x8a
        call FUN_00422cb0
        mov eax, dword ptr [DAT_004e26f0]
        mov ecx, dword ptr [DAT_004e2700]
        _emit 0x8b
        _emit 0x0c
        _emit 0x88
        call FUN_00422cb0
        _emit 0xeb
        _emit 0x38
        mov edx, dword ptr [DAT_004e26fc]
        mov eax, dword ptr [DAT_004e26f0]
        _emit 0x8b
        _emit 0x0c
        _emit 0x90
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x2c
        _emit 0x52
        call FUN_00422c70
        mov eax, dword ptr [DAT_004e26f0]
        mov ecx, dword ptr [DAT_004e2700]
        _emit 0x8b
        _emit 0x14
        _emit 0x88
        _emit 0x8b
        _emit 0x0c
        _emit 0x88
        _emit 0x8b
        _emit 0x52
        _emit 0x38
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x03
        _emit 0xd0
        _emit 0x52
        call FUN_00422c70
        cmp byte ptr [DAT_004e2687], bl
        _emit 0x74
        _emit 0x4d
        mov ecx, dword ptr [DAT_004e2800]
        _emit 0x3b
        _emit 0xcb
        _emit 0x74
        _emit 0x43
        call FUN_0044c400
        mov ecx, dword ptr [DAT_004e26fc]
        mov edx, dword ptr [DAT_004e26f0]
        _emit 0x8b
        _emit 0x04
        _emit 0x8a
        _emit 0x8b
        _emit 0x40
        _emit 0x50
        mov ecx, dword ptr [DAT_004e2800]
        _emit 0x50
        _emit 0x55
        call FUN_0044d270
        mov ecx, dword ptr [DAT_004e26f0]
        mov eax, dword ptr [DAT_004e26fc]
        _emit 0x8b
        _emit 0x04
        _emit 0x81
        _emit 0x8b
        _emit 0x40
        _emit 0x50
        mov ecx, dword ptr [DAT_004e2800]
        _emit 0x50
        _emit 0x6a
        _emit 0x02
        call FUN_0044d270
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x55
        call FUN_0047caa0
        mov edx, dword ptr [DAT_004e2afc]
        _emit 0x89
        _emit 0x5a
        _emit 0x08
        mov ecx, dword ptr [DAT_004e2afc]
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00415160
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00413300
        _emit 0x89
        _emit 0x6e
        _emit 0x2c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x5f
        _emit 0x5e
        _emit 0x8b
        _emit 0xc5
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
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x004492f3
__declspec(naked) void gap_004492f3(void)
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
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        call FUN_00448ec0
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
