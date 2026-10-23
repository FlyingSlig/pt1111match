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

extern const unsigned char s_out_of_dynamic_memory_in_yy_scan_004bfdbc[];
extern const unsigned char s_fatal_flex_scanner_internal_erro_004bfee4[];
extern unsigned char DAT_004d6ac0[];
extern unsigned char DAT_004d6b20[];
extern unsigned char DAT_004d6f20[];
extern unsigned char DAT_004d6f88[];
extern unsigned char DAT_004d6ff0[];
extern unsigned char DAT_004d7058[];
extern unsigned char DAT_004d7138[];
extern unsigned char DAT_004d713a[];
extern unsigned char DAT_004e21e4[4];
extern unsigned char DAT_004e31dc[4];
extern unsigned char DAT_004e21e0[4];
extern unsigned char DAT_004e21d8[4];
extern unsigned char DAT_004e21cc[4];
extern unsigned char DAT_004e21dc[4];
extern unsigned char DAT_004e21d0[4];
extern unsigned char DAT_004e21e8[4];
extern unsigned char DAT_004e21c8[4];
extern const unsigned char DAT_004bfdb8[4];
extern unsigned char DAT_004ddb70[48];
extern unsigned char DAT_004e21d4[4];
extern const unsigned char s_out_of_dynamic_memory_in_yy_scan_004bfe08[44];
extern const unsigned char s_bad_buffer_in_yy_scan_bytes___004bfde8[32];
extern const unsigned char s_out_of_dynamic_memory_in_yy_crea_004bfe34[44];
extern const unsigned char s_fatal_flex_scanner_internal_erro_004bfeac[56];
extern const unsigned char s_input_in_flex_scanner_failed_004bfe8c[32];
extern const unsigned char s_fatal_error___scanner_input_buff_004bfe60[44];
extern unsigned char DAT_004ddb0c[12];
extern unsigned char DAT_004d6ab8[8];
extern unsigned char PTR_DAT_004ddb30[16];
extern unsigned char DAT_004e21ec[4];
extern unsigned char DAT_004ddb50[16];
extern unsigned char DAT_004e31e0[4];
extern const unsigned char s_Unexpected_character__c__d_004bff1c[28];
extern unsigned char DAT_004e31cc[4];
extern const unsigned char DAT_004bff18[4];
extern const unsigned char PTR_FUN_004bff38[4];
extern const unsigned char s_global_004bf05c[8];
extern const unsigned char DAT_004bff58[8];
extern const unsigned char s_alpha_004bff50[8];
extern const unsigned char s_BackgroundImage_004bff40[16];
extern unsigned char DAT_004e2b14[12];
extern const unsigned char s_Data_Setup_Config_pcf_004bff8c[24];
extern const unsigned char s_data_setup_parser_out_txt_004bff64[28];
extern const unsigned char DAT_004bff60[4];
extern const unsigned char s_soure1234_004bff80[12];
extern const unsigned char DAT_004bffa4[4];
extern const unsigned char PTR_FUN_004bff3c[4];













// FUNCTION: PORT1111 0x004359a0
__declspec(naked) int FUN_004359a0(unsigned int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x0c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x52
        _emit 0x50
        call FUN_004390f0
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x78
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        call FUN_004750b0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x5e
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        call FUN_00475080
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4f
        _emit 0x8b
        _emit 0x48
        _emit 0x14
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x45
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x2b
        _emit 0xc2
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x39
        _emit 0x8b
        _emit 0xca
        _emit 0x8b
        _emit 0x11
        _emit 0x8b
        _emit 0x42
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
        _emit 0x19
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x66
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x66
        _emit 0x89
        _emit 0x50
        _emit 0x40
        _emit 0x66
        _emit 0x89
        _emit 0x48
        _emit 0x42
        _emit 0xb0
        _emit 0x01
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x32
        _emit 0xc0
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00435a45
__declspec(naked) void gap_00435a45(void)
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

// FUNCTION: PORT1111 0x00435a50
__declspec(naked) void FUN_00435a50(void)
{
    __asm {
        mov eax, dword ptr [DAT_004e21e4]
        _emit 0x56
        mov esi, dword ptr [DAT_004e31dc]
        _emit 0x57
        mov edi, dword ptr [DAT_004e21e0]
        _emit 0x3b
        _emit 0xf7
        _emit 0x0f
        _emit 0x83
        _emit 0x97
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x55
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8a
        _emit 0x0e
        _emit 0x84
        _emit 0xc9
        _emit 0x74
        _emit 0x0c
        _emit 0x0f
        _emit 0xb6
        _emit 0xc9
        mov bl, byte ptr [ecx*4 + DAT_004d6b20]
        _emit 0xeb
        _emit 0x02
        _emit 0xb3
        _emit 0x01
        _emit 0x8d
        _emit 0x0c
        _emit 0x00
        cmp word ptr [ecx + DAT_004d6ac0], 0
        _emit 0x74
        _emit 0x0b
        mov dword ptr [DAT_004e21d8], eax
        mov dword ptr [DAT_004e21cc], esi
        movsx ebp, word ptr [ecx + DAT_004d6f88]
        _emit 0x0f
        _emit 0xb6
        _emit 0xd3
        _emit 0x03
        _emit 0xea
        movsx ebp, word ptr [ebp*2 + DAT_004d7138]
        _emit 0x3b
        _emit 0xe8
        _emit 0x74
        _emit 0x2e
        movsx eax, word ptr [ecx + DAT_004d6ff0]
        _emit 0x83
        _emit 0xf8
        _emit 0x2d
        _emit 0x7c
        _emit 0x07
        mov bl, byte ptr [edx*4 + DAT_004d6f20]
        _emit 0x8d
        _emit 0x0c
        _emit 0x00
        movsx ebp, word ptr [ecx + DAT_004d6f88]
        _emit 0x0f
        _emit 0xb6
        _emit 0xd3
        _emit 0x03
        _emit 0xea
        movsx ebp, word ptr [ebp*2 + DAT_004d7138]
        _emit 0x3b
        _emit 0xe8
        _emit 0x75
        _emit 0xd2
        movsx edx, word ptr [eax*2 + DAT_004d6f88]
        _emit 0x0f
        _emit 0xb6
        _emit 0xc3
        _emit 0x03
        _emit 0xd0
        movsx eax, word ptr [edx*2 + DAT_004d7058]
        _emit 0x46
        _emit 0x3b
        _emit 0xf7
        _emit 0x0f
        _emit 0x82
        _emit 0x70
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x5d
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00435b05
__declspec(naked) void gap_00435b05(void)
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

// FUNCTION: PORT1111 0x00435b10
__declspec(naked) unsigned int FUN_00435b10(void)
{
    __asm {
        _emit 0x8d
        _emit 0x0c
        _emit 0x00
        cmp word ptr [ecx + DAT_004d6ac0], 0
        _emit 0x56
        _emit 0xb2
        _emit 0x01
        _emit 0x74
        _emit 0x11
        mov esi, dword ptr [DAT_004e21e0]
        mov dword ptr [DAT_004e21d8], eax
        mov dword ptr [DAT_004e21cc], esi
        movsx esi, word ptr [ecx + DAT_004d6f88]
        movsx esi, word ptr [esi*2 + DAT_004d713a]
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x3e
        _emit 0x57
        _emit 0xeb
        _emit 0x09
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xff
        movsx eax, word ptr [ecx + DAT_004d6ff0]
        _emit 0x83
        _emit 0xf8
        _emit 0x2d
        _emit 0x7c
        _emit 0x0a
        _emit 0x0f
        _emit 0xb6
        _emit 0xca
        mov dl, byte ptr [ecx*4 + DAT_004d6f20]
        _emit 0x8d
        _emit 0x0c
        _emit 0x00
        movsx esi, word ptr [ecx + DAT_004d6f88]
        _emit 0x0f
        _emit 0xb6
        _emit 0xfa
        _emit 0x03
        _emit 0xf7
        movsx esi, word ptr [esi*2 + DAT_004d7138]
        _emit 0x3b
        _emit 0xf0
        _emit 0x75
        _emit 0xcf
        _emit 0x5f
        movsx eax, word ptr [eax*2 + DAT_004d6f88]
        _emit 0x0f
        _emit 0xb6
        _emit 0xca
        _emit 0x03
        _emit 0xc1
        movsx eax, word ptr [eax*2 + DAT_004d7058]
        _emit 0x33
        _emit 0xd2
        _emit 0x83
        _emit 0xf8
    }
}

// GAP: PORT1111 0x00435b9b
__declspec(naked) void gap_00435b9b(void)
{
    __asm {
        _emit 0x2c
        _emit 0x0f
        _emit 0x94
        _emit 0xc2
        _emit 0x5e
        _emit 0x4a
        _emit 0x23
        _emit 0xc2
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
    }
}

// FUNCTION: PORT1111 0x00435bb0
__declspec(naked) void __cdecl FUN_00435bb0(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x33
        _emit 0xc9
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x4d
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x88
        _emit 0x0a
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x88
        _emit 0x4a
        _emit 0x01
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x24
        mov ecx, dword ptr [DAT_004e21dc]
        _emit 0x3b
        _emit 0xc1
        _emit 0x89
        _emit 0x50
        _emit 0x08
        _emit 0xc7
        _emit 0x40
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x25
        _emit 0x8b
        _emit 0x41
        _emit 0x10
        mov dword ptr [DAT_004e21d0], eax
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        mov dword ptr [DAT_004e31dc], eax
        _emit 0x8b
        _emit 0x09
        mov dword ptr [DAT_004e21e8], ecx
        _emit 0x8a
        _emit 0x10
        mov dword ptr [DAT_004e21e0], eax
        mov byte ptr [DAT_004e21c8], dl
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00435c08
__declspec(naked) void gap_00435c08(void)
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

// FUNCTION: PORT1111 0x00435c10
__declspec(naked) void FUN_00435c10(void)
{
    __asm {
        _emit 0x50
        push OFFSET DAT_004bfdb8
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0xad
        _emit 0x29
        _emit 0x06
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x6a
        _emit 0x02
        call exit
    }
}

// GAP: PORT1111 0x00435c2a
__declspec(naked) void gap_00435c2a(void)
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

// FUNCTION: PORT1111 0x00435c30
__declspec(naked) void __cdecl FUN_00435c30(void *param_1)
{
    __asm {
        mov ecx, dword ptr [DAT_004e21dc]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x3b
        _emit 0xc8
        _emit 0x74
        _emit 0x56
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1c
        mov dl, byte ptr [DAT_004e21c8]
        _emit 0x56
        mov esi, dword ptr [DAT_004e21e0]
        _emit 0x88
        _emit 0x16
        mov edx, dword ptr [DAT_004e21d0]
        _emit 0x89
        _emit 0x71
        _emit 0x08
        _emit 0x89
        _emit 0x51
        _emit 0x10
        _emit 0x5e
        _emit 0x8b
        _emit 0x48
        _emit 0x10
        mov dword ptr [DAT_004e21d0], ecx
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        mov dword ptr [DAT_004e31dc], ecx
        _emit 0x8b
        _emit 0x10
        mov dword ptr [DAT_004e21dc], eax
        mov dword ptr [DAT_004e21e8], edx
        _emit 0x8a
        _emit 0x01
        mov dword ptr [DAT_004e21e0], ecx
        mov byte ptr [DAT_004e21c8], al
        mov dword ptr [DAT_004e21d4], 1
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00435c95
__declspec(naked) void gap_00435c95(void)
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

// FUNCTION: PORT1111 0x00435ca0
__declspec(naked) void __cdecl FUN_00435ca0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x2e
        cmp esi, dword ptr [DAT_004e21dc]
        _emit 0x75
        _emit 0x0a
        mov dword ptr [DAT_004e21dc], 0
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x50
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x56
        _emit 0xe8
        _emit 0x4a
        _emit 0x22
        _emit 0x06
    }
}

// GAP: PORT1111 0x00435cd3
__declspec(naked) void gap_00435cd3(void)
{
    __asm {
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x5e
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00435ce0
__declspec(naked) void __cdecl FUN_00435ce0(void *param_1,int param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x56
        call FUN_00435bb0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x06
        _emit 0xc7
        _emit 0x46
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x1d
        _emit 0x50
        _emit 0xe8
        _emit 0x61
        _emit 0xd3
        _emit 0x07
        _emit 0x00
        _emit 0x50
        _emit 0xe8
        _emit 0x83
        _emit 0xb9
        _emit 0x06
        _emit 0x00
        _emit 0x33
        _emit 0xc9
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x9f
        _emit 0xc1
        _emit 0x8b
        _emit 0xc1
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x5e
        _emit 0xc3
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00435d23
__declspec(naked) void gap_00435d23(void)
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

// FUNCTION: PORT1111 0x00435d30
__declspec(naked) int * __cdecl FUN_00435d30(int param_1,unsigned int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x83
        _emit 0xfd
        _emit 0x02
        _emit 0x57
        _emit 0x72
        _emit 0x63
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x8a
        _emit 0x44
        _emit 0x2f
        _emit 0xfe
        _emit 0x33
        _emit 0xdb
        _emit 0x3a
        _emit 0xc3
        _emit 0x75
        _emit 0x55
        _emit 0x38
        _emit 0x5c
        _emit 0x2f
        _emit 0xff
        _emit 0x75
        _emit 0x4f
        _emit 0x56
        _emit 0x6a
        _emit 0x28
        call malloc
        _emit 0x8b
        _emit 0xf0
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xf3
        _emit 0x75
        _emit 0x0a
        mov eax, OFFSET s_out_of_dynamic_memory_in_yy_scan_004bfdbc
        jmp FUN_00435c10
        _emit 0x8d
        _emit 0x45
        _emit 0xfe
        _emit 0x56
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        _emit 0x89
        _emit 0x5e
        _emit 0x14
        _emit 0x89
        _emit 0x1e
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x89
        _emit 0x5e
        _emit 0x18
        _emit 0xc7
        _emit 0x46
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x5e
        _emit 0x20
        _emit 0x89
        _emit 0x5e
        _emit 0x24
        call FUN_00435c30
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5f
        _emit 0x5d
        _emit 0x5b
        _emit 0xc3
        _emit 0x5f
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00435da5
__declspec(naked) void gap_00435da5(void)
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

// FUNCTION: PORT1111 0x00435db0
__declspec(naked) void __cdecl FUN_00435db0(int param_1,int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x8d
        _emit 0x5e
        _emit 0x02
        _emit 0x53
        call malloc
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0a
        mov eax, OFFSET s_out_of_dynamic_memory_in_yy_scan_004bfe08
        jmp FUN_00435c10
        _emit 0x85
        _emit 0xf6
        _emit 0x7e
        _emit 0x17
        _emit 0x55
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xc8
        _emit 0x2b
        _emit 0xf8
        _emit 0x8b
        _emit 0xee
        _emit 0x8a
        _emit 0x14
        _emit 0x0f
        _emit 0x88
        _emit 0x11
        _emit 0x41
        _emit 0x4d
        _emit 0x75
        _emit 0xf7
        _emit 0x5f
        _emit 0x5d
        _emit 0x53
        _emit 0x50
        _emit 0xc6
        _emit 0x44
        _emit 0x30
        _emit 0x01
        _emit 0x00
        _emit 0xc6
        _emit 0x04
        _emit 0x30
        _emit 0x00
        call FUN_00435d30
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0a
        mov eax, OFFSET s_bad_buffer_in_yy_scan_bytes___004bfde8
        jmp FUN_00435c10
        _emit 0x5e
        _emit 0xc7
        _emit 0x40
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00435e16
__declspec(naked) void gap_00435e16(void)
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

// FUNCTION: PORT1111 0x00435e20
__declspec(naked) int * __cdecl FUN_00435e20(int param_1,int param_2)
{
    __asm {
        _emit 0x56
        _emit 0x6a
        _emit 0x28
        call malloc
        _emit 0x8b
        _emit 0xf0
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x0a
        mov eax, OFFSET s_out_of_dynamic_memory_in_yy_crea_004bfe34
        jmp FUN_00435c10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x83
        _emit 0xc0
        _emit 0x02
        _emit 0x50
        call malloc
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x75
        _emit 0x0a
        mov eax, OFFSET s_out_of_dynamic_memory_in_yy_crea_004bfe34
        jmp FUN_00435c10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x56
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00435ce0
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00435e78
__declspec(naked) void gap_00435e78(void)
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

// FUNCTION: PORT1111 0x00435e80
__declspec(naked) void __cdecl FUN_00435e80(int param_1)
{
    __asm {
        _emit 0x56
        mov esi, dword ptr [DAT_004e21dc]
        _emit 0x85
        _emit 0xf6
        _emit 0x57
        _emit 0x75
        _emit 0x1b
        mov eax, dword ptr [DAT_004e21e8]
        _emit 0x68
        _emit 0x00
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_00435e20
        _emit 0x8b
        _emit 0xf0
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        mov dword ptr [DAT_004e21dc], esi
        _emit 0x56
        _emit 0x8b
        _emit 0xfe
        call FUN_00435bb0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x06
        _emit 0xc7
        _emit 0x46
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x20
        _emit 0x50
        _emit 0xe8
        _emit 0x9d
        _emit 0xd1
        _emit 0x07
        _emit 0x00
        _emit 0x50
        _emit 0xe8
        _emit 0xbf
        _emit 0xb7
        _emit 0x06
        _emit 0x00
        mov esi, dword ptr [DAT_004e21dc]
        _emit 0x33
        _emit 0xc9
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x9f
        _emit 0xc1
        _emit 0x8b
        _emit 0xc1
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x47
        _emit 0x18
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x56
        _emit 0x10
        mov dword ptr [DAT_004e31dc], eax
        _emit 0x8b
        _emit 0x0e
        mov dword ptr [DAT_004e21d0], edx
        mov dword ptr [DAT_004e21e8], ecx
        _emit 0x8a
        _emit 0x10
        _emit 0x5f
        mov dword ptr [DAT_004e21e0], eax
        mov byte ptr [DAT_004e21c8], dl
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00435f11
__declspec(naked) void gap_00435f11(void)
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

// FUNCTION: PORT1111 0x00435f20
__declspec(naked) int FUN_00435f20(void)
{
    __asm {
        mov ecx, dword ptr [DAT_004e21dc]
        mov eax, dword ptr [DAT_004e21d0]
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x04
        _emit 0x8d
        _emit 0x54
        _emit 0x06
        _emit 0x01
        mov eax, dword ptr [DAT_004e21e0]
        _emit 0x3b
        _emit 0xc2
        _emit 0x57
        mov edi, dword ptr [DAT_004e31dc]
        _emit 0x76
        _emit 0x0a
        mov eax, OFFSET s_fatal_flex_scanner_internal_erro_004bfeac
        jmp FUN_00435c10
        _emit 0x8b
        _emit 0x51
        _emit 0x20
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x10
        _emit 0x2b
        _emit 0xc7
        _emit 0x33
        _emit 0xc9
        _emit 0x83
        _emit 0xf8
        _emit 0x01
        _emit 0x0f
        _emit 0x95
        _emit 0xc1
        _emit 0x5f
        _emit 0x5e
        _emit 0x41
        _emit 0x8b
        _emit 0xc1
        _emit 0xc3
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0xe8
        _emit 0x2b
        _emit 0xef
        _emit 0x4d
        _emit 0x85
        _emit 0xed
        _emit 0x7e
        _emit 0x0b
        _emit 0x8b
        _emit 0xd5
        _emit 0x8a
        _emit 0x1f
        _emit 0x88
        _emit 0x1e
        _emit 0x46
        _emit 0x47
        _emit 0x4a
        _emit 0x75
        _emit 0xf7
        _emit 0x83
        _emit 0x79
        _emit 0x24
        _emit 0x02
        _emit 0x75
        _emit 0x0f
        _emit 0x33
        _emit 0xc0
        mov dword ptr [DAT_004e21d0], eax
        _emit 0x89
        _emit 0x41
        _emit 0x10
        _emit 0xe9
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x71
        _emit 0x0c
        _emit 0x2b
        _emit 0xf5
        _emit 0x4e
        _emit 0x85
        _emit 0xf6
        _emit 0x7f
        _emit 0x67
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x8d
        _emit 0x71
        _emit 0x04
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0xd8
        _emit 0x8b
        _emit 0x41
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2d
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x8d
        _emit 0x3c
        _emit 0x00
        _emit 0x85
        _emit 0xff
        _emit 0x7f
        _emit 0x07
        _emit 0x8b
        _emit 0xf8
        _emit 0xc1
        _emit 0xef
        _emit 0x03
        _emit 0x03
        _emit 0xf8
        _emit 0x89
        _emit 0x79
        _emit 0x0c
        _emit 0x8b
        _emit 0xcf
        _emit 0x83
        _emit 0xc1
        _emit 0x02
        _emit 0x51
        _emit 0x52
        _emit 0xe8
        _emit 0x30
        _emit 0x22
        _emit 0x06
        _emit 0x00
        mov ecx, dword ptr [DAT_004e21dc]
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x89
        _emit 0x06
        _emit 0xeb
        _emit 0x06
        _emit 0xc7
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x36
        _emit 0x85
        _emit 0xf6
        _emit 0x0f
        _emit 0x84
        _emit 0x86
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x04
        _emit 0x1e
        _emit 0x8b
        _emit 0x71
        _emit 0x0c
        _emit 0x2b
        _emit 0xf5
        _emit 0x4e
        _emit 0x85
        _emit 0xf6
        mov dword ptr [DAT_004e21e0], eax
        _emit 0x7e
        _emit 0xa0
        _emit 0x81
        _emit 0xfe
        _emit 0x00
        _emit 0x20
        _emit 0x00
        _emit 0x00
        _emit 0x7e
        _emit 0x05
        _emit 0xbe
        _emit 0x00
        _emit 0x20
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x41
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x73
        _emit 0x33
        _emit 0xff
        _emit 0x85
        _emit 0xf6
        _emit 0x7e
        _emit 0x64
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov edx, dword ptr [DAT_004e21e8]
        _emit 0x52
        _emit 0xe8
        _emit 0x95
        _emit 0x28
        _emit 0x06
        _emit 0x00
        mov ecx, dword ptr [DAT_004e21dc]
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x83
        _emit 0xf8
        _emit 0xff
        _emit 0x74
        _emit 0x12
        _emit 0x83
        _emit 0xf8
        _emit 0x0a
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x03
        _emit 0xd7
        _emit 0x47
        _emit 0x3b
        _emit 0xfe
        _emit 0x88
        _emit 0x04
        _emit 0x2a
        _emit 0x7c
        _emit 0xd4
        _emit 0x83
        _emit 0xf8
        _emit 0x0a
        _emit 0x75
        _emit 0x09
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x03
        _emit 0xd7
        _emit 0x88
        _emit 0x04
        _emit 0x2a
        _emit 0x47
        _emit 0x83
        _emit 0xf8
        _emit 0xff
        _emit 0x75
        _emit 0x1f
        mov eax, dword ptr [DAT_004e21e8]
        _emit 0xf6
        _emit 0x40
        _emit 0x0c
        _emit 0x20
        _emit 0x74
        _emit 0x14
        mov eax, OFFSET s_input_in_flex_scanner_failed_004bfe8c
        jmp FUN_00435c10
        mov eax, OFFSET s_fatal_error___scanner_input_buff_004bfe60
        jmp FUN_00435c10
        _emit 0x8b
        _emit 0xc7
        mov dword ptr [DAT_004e21d0], eax
        _emit 0xeb
        _emit 0x3d
        mov edx, dword ptr [DAT_004e21e8]
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x52
        _emit 0x56
        _emit 0x03
        _emit 0xc5
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        call fread
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        mov dword ptr [DAT_004e21d0], eax
        _emit 0x75
        _emit 0x16
        mov ecx, dword ptr [DAT_004e21e8]
        _emit 0xf6
        _emit 0x41
        _emit 0x0c
        _emit 0x20
        _emit 0x74
        _emit 0x0a
        mov eax, OFFSET s_input_in_flex_scanner_failed_004bfe8c
        jmp FUN_00435c10
        mov ecx, dword ptr [DAT_004e21dc]
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x41
        _emit 0x10
        _emit 0x75
        _emit 0x2f
        _emit 0x85
        _emit 0xed
        _emit 0x75
        _emit 0x21
        mov edx, dword ptr [DAT_004e21e8]
        _emit 0x52
        _emit 0xbe
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00435e80
        mov ecx, dword ptr [DAT_004e21dc]
        mov eax, dword ptr [DAT_004e21d0]
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xeb
        _emit 0x0c
        _emit 0xbe
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x71
        _emit 0x24
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xf6
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x03
        _emit 0xc5
        _emit 0xc6
        _emit 0x04
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x5d
        _emit 0xc6
        _emit 0x44
        _emit 0x10
        _emit 0x01
        _emit 0x00
        mov dword ptr [DAT_004e21d0], eax
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x5b
        mov dword ptr [DAT_004e31dc], eax
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00436121
__declspec(naked) void gap_00436121(void)
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
