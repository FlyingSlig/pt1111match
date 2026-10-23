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





// FUNCTION: PORT1111 0x00449310
__declspec(naked) int __fastcall FUN_00449310(void *pthis,void *param_1,void *param_2,int param_3)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8823
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
        _emit 0x0c
        _emit 0x53
        _emit 0x33
        _emit 0xdb
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x04
        _emit 0x0f
        _emit 0xb7
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x56
        _emit 0x83
        _emit 0xc0
        _emit 0xf1
        _emit 0x83
        _emit 0xf8
        _emit 0x09
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x0f
        _emit 0x87
        _emit 0xb2
        _emit 0x02
        _emit 0x00
        _emit 0x00
        movzx eax, byte ptr [eax + gap_0044961a + 22]
        jmp dword ptr [eax*4 + gap_0044961a + 2]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x48
        _emit 0x83
        _emit 0xf8
        _emit 0x03
        _emit 0x77
        _emit 0x29
        jmp dword ptr [eax*4 + gap_0044961a + 34]
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00412fd0
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        call FUN_0047c9b0
        _emit 0xe9
        _emit 0x86
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_00448710
        _emit 0xe9
        _emit 0x7c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x30
        _emit 0x48
        _emit 0x83
        _emit 0xf8
        _emit 0x04
        _emit 0x0f
        _emit 0x87
        _emit 0x4d
        _emit 0x02
        _emit 0x00
        _emit 0x00
        jmp dword ptr [eax*4 + gap_0044961a + 50]
        _emit 0x68
        _emit 0xd0
        _emit 0x0b
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
        _emit 0x3b
        _emit 0xc3
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x20
        _emit 0x74
        _emit 0x20
        mov ecx, dword ptr [DAT_004e26fc]
        mov edx, dword ptr [DAT_004e26f0]
        _emit 0x8b
        _emit 0x14
        _emit 0x8a
        _emit 0x8b
        _emit 0x52
        _emit 0x50
        _emit 0x8b
        _emit 0x76
        _emit 0x24
        _emit 0x52
        _emit 0x56
        _emit 0x8b
        _emit 0xc8
        call FUN_0045a370
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
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
        _emit 0xe9
        _emit 0xff
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00412fd0
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00414e60
        _emit 0xe9
        _emit 0xdd
        _emit 0x01
        _emit 0x00
        _emit 0x00
        cmp dword ptr [DAT_004e2444], ebx
        _emit 0x68
        _emit 0x2c
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x71
        call pt_a_00496fa4
        _emit 0x8b
        _emit 0xf8
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xfb
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x41
        mov ecx, dword ptr [DAT_004e2b14]
        push OFFSET s_DATA_Maps_004c3828
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x34
        _emit 0x50
        call FUN_00468110
        _emit 0x8b
        _emit 0x76
        _emit 0x24
        _emit 0xbb
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x6a
        _emit 0x04
        push OFFSET DAT_004c3824
        _emit 0x8b
        _emit 0xc8
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x02
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        call FUN_00465e00
        _emit 0x50
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_004472e0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x83
        _emit 0xcf
        _emit 0xff
        _emit 0xf6
        _emit 0xc3
        _emit 0x01
        _emit 0x8b
        _emit 0xf0
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x74
        _emit 0x7c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0xeb
        _emit 0x71
        call pt_a_00496fa4
        _emit 0x8b
        _emit 0xf8
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x3b
        _emit 0xfb
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x43
        push OFFSET s_DATA_Maps_004c3828
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2b14]
        call FUN_00468110
        _emit 0x8b
        _emit 0x76
        _emit 0x24
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x04
        _emit 0xbb
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push OFFSET DAT_004c3f78
        _emit 0x8b
        _emit 0xc8
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x05
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        call FUN_00465e00
        _emit 0x50
        _emit 0x6a
        _emit 0x01
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_004472e0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x83
        _emit 0xcf
        _emit 0xff
        _emit 0xf6
        _emit 0xc3
        _emit 0x02
        _emit 0x8b
        _emit 0xf0
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x74
        _emit 0x09
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        call FUN_00465e40
        push OFFSET DAT_004e2478
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        call ctor_impl_466b20
        _emit 0x6a
        _emit 0x5c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x30
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465e70
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x30
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x64
        _emit 0x24
        _emit 0x18
        _emit 0x52
        call ctor_impl_466b20
        _emit 0x8b
        _emit 0xce
        call FUN_00447440
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0xb8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        call FUN_00465e40
        _emit 0xe9
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0x7c
        _emit 0x24
        _emit 0x30
        _emit 0x04
        _emit 0x0f
        _emit 0x85
        _emit 0x89
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0x17
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x92
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3d
        _emit 0xd3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x69
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        mov dword ptr [DAT_004e2438], 2
        call FUN_00447a90
        _emit 0x50
        mov ecx, OFFSET DAT_004e2430
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0041ce90
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0xf8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x3b
        _emit 0xfb
        _emit 0x53
        _emit 0x6a
        _emit 0x03
        _emit 0x74
        _emit 0x13
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        push OFFSET s_Jogo_gravado_com_sucesso_004c4050
        _emit 0x51
        call FUN_00448630
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xeb
        _emit 0x1e
        _emit 0x8b
        _emit 0x56
        _emit 0x24
        push OFFSET s_Erro_a_gravar_jogo__004c403c
        _emit 0x52
        call FUN_00448630
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xeb
        _emit 0x0b
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00412fd0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x5f
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0x18
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}
