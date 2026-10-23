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
extern const unsigned char s_alert_wav_004bc864[];
extern const unsigned char s_data_ai_004bc870[];
extern const unsigned char s_fx_rdt_004bc878[];
extern unsigned char DAT_004e2686[];
extern unsigned char DAT_004e2687[];
extern unsigned char DAT_004e279c[];
extern unsigned char DAT_004e2800[];
extern unsigned char DAT_004e2a80[];
extern unsigned char DAT_004e2b10[];
extern unsigned char DAT_004ddb0c[12];
extern unsigned char DAT_004dd96c[4];
extern const unsigned char s_Portugal_1111___A_conquista_de_S_004bc924[40];
extern const unsigned char s_SOURE_GPR_004bc918[12];
extern const unsigned char s_data_rdt_004bc90c[12];
extern const unsigned char s_SOFTWARE_CIBERBIT_PORTUGAL1111_004bc8ec[32];
extern unsigned char DAT_004e2c2c[4];
extern unsigned char DAT_004e2c28[4];
extern unsigned char DAT_004dd960[4];
extern unsigned char DAT_004e2aa8[32];
extern unsigned char DAT_004e2b14[12];
extern const unsigned char s_Pt1111_004bc8e4[8];
extern const unsigned char s_Insira_o_CD_e_tente_de_novo_004bc8c8[28];
extern int DAT_004e25f8;
extern const unsigned char s_Error_reading_configuration_file_004bc8a4[36];
extern unsigned char DAT_004e2638[8];
extern const unsigned char s_Instale_o_Microsoft_R__Directx_R_004bc880[36];











// FUNCTION: PORT1111 0x00403380
__declspec(naked) void FUN_00403380(void)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b582b
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
        push OFFSET s_fx_rdt_004bc878
        mov ecx, OFFSET DAT_004e279c
        call FUN_0044d460
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0f
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
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x40
        _emit 0x4c
        _emit 0x53
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x7c
        _emit 0x68
        _emit 0xe0
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
        _emit 0x08
        _emit 0x3b
        _emit 0xc3
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0044d1d0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        mov ecx, dword ptr [DAT_004e2b10]
        mov dword ptr [DAT_004e2800], eax
        _emit 0x8b
        _emit 0x11
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x3c
        mov ecx, dword ptr [DAT_004e2800]
        _emit 0x50
        call FUN_0044c070
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x36
        mov ecx, dword ptr [DAT_004e2800]
        _emit 0x3b
        _emit 0xcb
        _emit 0x56
        mov byte ptr [DAT_004e2687], bl
        mov byte ptr [DAT_004e2686], bl
        _emit 0x8b
        _emit 0xf1
        _emit 0x74
        _emit 0x0e
        call FUN_0044cfd0
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        mov dword ptr [DAT_004e2800], ebx
        _emit 0x5e
        _emit 0xeb
        _emit 0x06
        mov byte ptr [DAT_004e2687], bl
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x39
        _emit 0x58
        _emit 0x48
        _emit 0x75
        _emit 0x06
        mov byte ptr [DAT_004e2686], bl
        call FUN_0044a680
        call FUN_0044a0c0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2b14]
        call pt_a_00403340
        push OFFSET s_data_ai_004bc870
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0xbb
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x1c
        call FUN_00466fb0
        _emit 0x50
        mov ecx, OFFSET DAT_004e2a80
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x02
        call FUN_00466a50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x88
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x6a
        _emit 0x0c
        push OFFSET s_alert_wav_004bc864
        mov ecx, OFFSET DAT_004e279c
        call FUN_0044e9d0
        call FUN_00409110
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5b
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
    }
}


// GAP: PORT1111 0x004034e0
__declspec(naked) void gap_004034e0(void)
{
    __asm {
        _emit 0xc4
        _emit 0x14
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
    }
}

// FUNCTION: PORT1111 0x004034f0
__declspec(naked) int FUN_004034f0(HINSTANCE param_1)
{
    __asm {
        _emit 0x81
        _emit 0xec
        _emit 0xcc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004ddb0c]
        _emit 0x6a
        _emit 0x00
        _emit 0x89
        _emit 0x84
        _emit 0x24
        _emit 0xcc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        mov dword ptr [DAT_004dd96c], 2
        call FUN_00402a40
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x8c
        _emit 0x67
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x81
        _emit 0x7c
        _emit 0x24
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x09
        _emit 0x00
        _emit 0x0f
        _emit 0x82
        _emit 0x59
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x57
        _emit 0x33
        _emit 0xc0
        _emit 0xbe
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb9
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x7c
        _emit 0x24
        _emit 0x24
        _emit 0xf3
        _emit 0xab
        _emit 0x6a
        _emit 0x58
        mov dword ptr [esp + 0x38], OFFSET s_Portugal_1111___A_conquista_de_S_004bc924
        mov dword ptr [esp + 0x40], OFFSET s_SOURE_GPR_004bc918
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x2c
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x34
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x30
        mov dword ptr [esp + 0x44], OFFSET s_data_rdt_004bc90c
        mov dword ptr [esp + 0x3c], OFFSET s_SOFTWARE_CIBERBIT_PORTUGAL1111_004bc8ec
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x78
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x7c
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_00401d60
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        mov dword ptr [DAT_004e2c2c], esi
        _emit 0xbe
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x74
        mov dword ptr [DAT_004e2c28], esi
        mov dword ptr [DAT_004dd960], esi
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_00403240
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x94
        _emit 0x24
        _emit 0xd8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x51
        _emit 0x52
        mov ecx, OFFSET DAT_004e2aa8
        call FUN_0046aa40
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x19
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x81
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        mov dword ptr [DAT_004e2c2c], eax
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x50
        call pt_a_00403360
        _emit 0x8b
        _emit 0xc8
        call FUN_00466e10
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call FUN_00465e40
        mov esi, dword ptr [DAT_004e2b14]
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        call FUN_00465e00
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00467eb0
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x50
        _emit 0x8d
        _emit 0x8c
        _emit 0x24
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        _emit 0x51
        _emit 0x68
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x94
        _emit 0x24
        _emit 0xe4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        call FUN_00465e00
        _emit 0x50
        call dword ptr [GetVolumeInformationA]
        _emit 0x6a
        _emit 0xff
        _emit 0x8d
        _emit 0x84
        _emit 0x24
        _emit 0xd0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call FUN_00466af0
        push OFFSET s_Pt1111_004bc8e4
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call FUN_00466ab0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x40
        _emit 0x6a
        _emit 0x10
        push OFFSET s_Portugal_1111___A_conquista_de_S_004bc924
        push OFFSET s_Insira_o_CD_e_tente_de_novo_004bc8c8
        _emit 0x6a
        _emit 0x00
        call dword ptr [MessageBoxA]
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        call FUN_00465e40
        _emit 0x5f
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x5e
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0xc8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        call pt_a_00497aa6
        _emit 0x81
        _emit 0xc4
        _emit 0xcc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        mov ecx, OFFSET DAT_004e25f8
        call FUN_00437760
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x39
        _emit 0x50
        push OFFSET s_Error_reading_configuration_file_004bc8a4
        call FUN_0046ab50
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        call FUN_00465e40
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0xc8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        call pt_a_00497aa6
        _emit 0x81
        _emit 0xc4
        _emit 0xcc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        push OFFSET DAT_004e2638
        mov ecx, OFFSET DAT_004e25f8
        call FUN_00436730
        _emit 0x6a
        _emit 0x34
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        call FUN_00449c20
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x05
        _emit 0x83
        _emit 0xc0
        _emit 0x10
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        mov ecx, OFFSET DAT_004e2aa8
        call FUN_0046a7b0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x18
        call FUN_00403380
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x8c
        mov ecx, OFFSET DAT_004e2aa8
        call FUN_0046a6e0
        call FUN_004032f0
        mov ecx, OFFSET DAT_004e2aa8
        call FUN_0046a5f0
        _emit 0xe9
        _emit 0x6e
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x6a
        _emit 0x10
        push OFFSET s_Portugal_1111___A_conquista_de_S_004bc924
        push OFFSET s_Instale_o_Microsoft_R__Directx_R_004bc880
        _emit 0x6a
        _emit 0x00
        call dword ptr [MessageBoxA]
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0xc8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        call pt_a_00497aa6
        _emit 0x81
        _emit 0xc4
        _emit 0xcc
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x004037b8
__declspec(naked) void gap_004037b8(void)
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

// FUNCTION: PORT1111 0x004037c0
__declspec(naked) void __fastcall FUN_004037c0(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0x8d
        _emit 0x77
        _emit 0x2c
        _emit 0x74
        _emit 0x0f
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x28
        _emit 0x56
        _emit 0x50
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xe8
    }
}

// GAP: PORT1111 0x004037eb
__declspec(naked) void gap_004037eb(void)
{
    __asm {
        _emit 0x51
        _emit 0x59
        _emit 0x03
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00403800
__declspec(naked) void __fastcall FUN_00403800(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x10
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x2c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8d
        _emit 0x46
        _emit 0x28
        _emit 0x50
        _emit 0x51
        _emit 0x8b
    }
}

// GAP: PORT1111 0x00403824
__declspec(naked) void gap_00403824(void)
{
    __asm {
        _emit 0xce
        call FUN_00439360
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
    }
}
