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













// GAP: PORT1111 0x0044961a
__declspec(naked) void gap_0044961a(void)
{
    __asm {
        _emit 0x8b
        _emit 0xff
        _emit 0x6d
        _emit 0x95
        _emit 0x44
        _emit 0x00
        _emit 0x9b
        _emit 0x93
        _emit 0x44
        _emit 0x00
        _emit 0x52
        _emit 0x93
        _emit 0x44
        _emit 0x00
        _emit 0x01
        _emit 0x96
        _emit 0x44
        _emit 0x00
        _emit 0xf6
        _emit 0x95
        _emit 0x44
        _emit 0x00
        _emit 0x00
        _emit 0x04
        _emit 0x01
        _emit 0x04
        _emit 0x02
        _emit 0x04
        _emit 0x01
        _emit 0x04
        _emit 0x03
        _emit 0x02
        _emit 0x8b
        _emit 0xff
        _emit 0x63
        _emit 0x93
        _emit 0x44
        _emit 0x00
        _emit 0x7b
        _emit 0x93
        _emit 0x44
        _emit 0x00
        _emit 0xf6
        _emit 0x95
        _emit 0x44
        _emit 0x00
        _emit 0x63
        _emit 0x93
        _emit 0x44
        _emit 0x00
        _emit 0xb0
        _emit 0x93
        _emit 0x44
        _emit 0x00
        _emit 0xf6
        _emit 0x95
        _emit 0x44
        _emit 0x00
        _emit 0x6e
        _emit 0x93
        _emit 0x44
        _emit 0x00
        _emit 0x24
        _emit 0x94
        _emit 0x44
        _emit 0x00
        _emit 0x02
        _emit 0x94
        _emit 0x44
        _emit 0x00
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b885c
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x18
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        _emit 0x50
        _emit 0x53
        _emit 0x57
        _emit 0x55
        _emit 0x8b
        _emit 0xf1
        call FUN_004804c0
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0x09
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x85
        _emit 0xc9
        _emit 0x0f
        _emit 0x84
        _emit 0x6f
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc5
        _emit 0x2d
        _emit 0x0a
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x84
        _emit 0x4d
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x48
        _emit 0x0f
        _emit 0x84
        _emit 0x01
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x48
        _emit 0x0f
        _emit 0x85
        _emit 0x54
        _emit 0x03
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2b20]
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x12
        _emit 0x8b
        _emit 0xce
        call FUN_00480290
        mov ecx, dword ptr [DAT_004e26f0]
        mov eax, dword ptr [DAT_004e26fc]
        _emit 0x8b
        _emit 0x04
        _emit 0x81
        _emit 0x8b
        _emit 0x78
        _emit 0x38
        mov ecx, OFFSET DAT_004e2430
        call FUN_0041e030
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x2c
        mov ecx, dword ptr [DAT_004e2b20]
        _emit 0x8b
        _emit 0x11
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
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x68
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x16
        mov ecx, dword ptr [DAT_004e2b10]
        _emit 0x8b
        _emit 0x51
        _emit 0x18
        _emit 0x8b
        _emit 0x52
        _emit 0x24
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        call FUN_00446f40
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        mov dword ptr [DAT_004e20c4], eax
        call FUN_00446f70
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x4a
        _emit 0x5c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x5c
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x4c
        _emit 0x8b
        _emit 0xce
        call FUN_004483d0
        _emit 0x57
        _emit 0x57
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00448ec0
        _emit 0x8b
        _emit 0xce
        call FUN_004483a0
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x57
        call FUN_00414c30
        mov ecx, dword ptr [DAT_004e2b20]
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x8b
        _emit 0xce
        call FUN_00480290
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00412fa0
        mov ecx, dword ptr [DAT_004e26fc]
        mov edx, dword ptr [DAT_004e26f0]
        _emit 0x8b
        _emit 0x04
        _emit 0x8a
        _emit 0x8b
        _emit 0x58
        _emit 0x38
        _emit 0xbd
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        mov dword ptr [DAT_004e0b1c], ebp
        call FUN_00409710
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x37
        mov ecx, dword ptr [DAT_004e240c]
        mov dword ptr [DAT_004e0b1c], eax
        mov dword ptr [DAT_004e27e8], eax
        call FUN_00412fd0
        mov ecx, dword ptr [DAT_004e2b20]
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0xc5
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x68
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [DAT_004e0b1c], 0
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x16
        mov ecx, dword ptr [DAT_004e2b10]
        _emit 0x8b
        _emit 0x51
        _emit 0x18
        _emit 0x8b
        _emit 0x52
        _emit 0x24
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        call FUN_00446f40
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        mov dword ptr [DAT_004e20c4], eax
        call FUN_00446f70
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x4a
        _emit 0x5c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x5c
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x4c
        _emit 0x51
        _emit 0x81
        _emit 0xc7
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x30
        _emit 0x57
        call ctor_impl_466b20
        mov ecx, OFFSET DAT_004e2430
        call FUN_0041e320
        _emit 0x8b
        _emit 0xce
        call FUN_004483d0
        _emit 0x53
        _emit 0x53
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_00448ec0
        _emit 0x8b
        _emit 0xce
        call FUN_004483a0
        _emit 0x8b
        _emit 0xc5
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0xc3
        _emit 0x83
        _emit 0xe8
        _emit 0x00
        _emit 0xbd
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x84
        _emit 0x95
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x48
        _emit 0x0f
        _emit 0x85
        _emit 0xe7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0xd2
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e2444]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x50
        mov eax, dword ptr [DAT_004e26fc]
        mov ecx, dword ptr [DAT_004e26f0]
        _emit 0x8b
        _emit 0x14
        _emit 0x81
        _emit 0x39
        _emit 0x7a
        _emit 0x50
        _emit 0x0f
        _emit 0x85
        _emit 0xbc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x6e
        _emit 0x28
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00414e60
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x55
        _emit 0x6a
        _emit 0x02
        push OFFSET s_Perdeu_todas_as_unidades_004c406c
        _emit 0x50
        call FUN_00448630
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0x8b
        _emit 0xc5
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        call FUN_00412fa0
        _emit 0x6a
        _emit 0x4c
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x33
        _emit 0x8b
        _emit 0x76
        _emit 0x24
        _emit 0x57
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xc8
        call FUN_00445db0
        _emit 0xeb
        _emit 0x26
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x48
        call FUN_00412fa0
        _emit 0x6a
        _emit 0x4c
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0xc9
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x92
        _emit 0xb8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc5
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        call FUN_00412fa0
        call FUN_00448710
        _emit 0x8b
        _emit 0xc5
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x00449a30
__declspec(naked) int __cdecl FUN_00449a30(int param_1,unsigned int param_2,int param_3)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x18
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x28
        _emit 0x8d
        _emit 0x86
        _emit 0x90
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x0f
        _emit 0xb7
        _emit 0xc8
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x8e
        _emit 0x8c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xc1
        _emit 0xe8
        _emit 0x10
        _emit 0x52
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        call FUN_0047c5a0
        _emit 0x50
        call dword ptr [ScreenToClient]
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
        _emit 0x14
        _emit 0x52
        call dword ptr [PtInRect]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x34
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x8e
        _emit 0xa8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xc1
        _emit 0xe8
        _emit 0x10
        _emit 0x66
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x11
        _emit 0x6a
        _emit 0x26
        call FUN_004818b0
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0xc3
        _emit 0x6a
        _emit 0x28
        call FUN_004818b0
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0xc3
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00449ad6
__declspec(naked) void gap_00449ad6(void)
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

// FUNCTION: PORT1111 0x00449ae0
__declspec(naked) void FUN_00449ae0(void *pthis,int param_1,void *param_2,int param_3,int param_4)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8878
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
        _emit 0x1c
        _emit 0x56
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        _emit 0x6a
        _emit 0xff
        _emit 0x68
        _emit 0xd3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x13
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x24
        call FUN_00480aa0
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x52
        _emit 0x6a
        _emit 0x01
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [esi], OFFSET PTR_FUN_004c4088
        call FUN_0047d650
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x4c
        _emit 0x8b
        _emit 0xc6
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
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x00449b55
__declspec(naked) void gap_00449b55(void)
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
