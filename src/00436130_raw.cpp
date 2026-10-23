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





// FUNCTION: PORT1111 0x00436130
__declspec(naked) int FUN_00436130(void)
{
    __asm {
        _emit 0x81
        _emit 0xec
        _emit 0x0c
        _emit 0x04
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004ddb0c]
        _emit 0x53
        _emit 0x55
        _emit 0x89
        _emit 0x84
        _emit 0x24
        _emit 0x10
        _emit 0x04
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004d6ab8]
        _emit 0x85
        _emit 0xc0
        _emit 0x56
        _emit 0x57
        _emit 0x0f
        _emit 0x84
        _emit 0x82
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e21e4]
        _emit 0x85
        _emit 0xc0
        mov dword ptr [DAT_004d6ab8], 0
        _emit 0x75
        _emit 0x0a
        mov dword ptr [DAT_004e21e4], 1
        mov eax, dword ptr [DAT_004e21e8]
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0a
        mov eax, OFFSET PTR_DAT_004ddb30
        mov dword ptr [DAT_004e21e8], eax
        mov ecx, dword ptr [DAT_004e21ec]
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x0a
        mov dword ptr [DAT_004e21ec], OFFSET DAT_004ddb50
        mov ebx, dword ptr [DAT_004e21dc]
        _emit 0x85
        _emit 0xdb
        _emit 0x75
        _emit 0x16
        _emit 0x68
        _emit 0x00
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_00435e20
        _emit 0x8b
        _emit 0xd8
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        mov dword ptr [DAT_004e21dc], ebx
        _emit 0x8b
        _emit 0x6b
        _emit 0x08
        _emit 0x8b
        _emit 0x43
        _emit 0x10
        mov dword ptr [DAT_004e31dc], ebp
        _emit 0x8b
        _emit 0x0b
        mov dword ptr [DAT_004e21e8], ecx
        _emit 0x8a
        _emit 0x55
        _emit 0x00
        mov dword ptr [DAT_004e21d0], eax
        _emit 0xeb
        _emit 0x1b
        mov ebx, dword ptr [DAT_004e21dc]
        mov ebp, dword ptr [DAT_004e21e0]
        mov dl, byte ptr [DAT_004e21c8]
        _emit 0xeb
        _emit 0x07
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov esi, dword ptr [DAT_004e21e4]
        _emit 0x8b
        _emit 0xfd
        _emit 0x88
        _emit 0x55
        _emit 0x00
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x90
        _emit 0x0f
        _emit 0xb6
        _emit 0x17
        mov dl, byte ptr [edx*4 + DAT_004d6b20]
        _emit 0x8d
        _emit 0x04
        _emit 0x36
        cmp word ptr [eax + DAT_004d6ac0], 0
        _emit 0x74
        _emit 0x0c
        mov dword ptr [DAT_004e21d8], esi
        mov dword ptr [DAT_004e21cc], edi
        movsx ebp, word ptr [eax + DAT_004d6f88]
        _emit 0x0f
        _emit 0xb6
        _emit 0xca
        _emit 0x03
        _emit 0xe9
        movsx ebp, word ptr [ebp*2 + DAT_004d7138]
        _emit 0x3b
        _emit 0xee
        _emit 0x74
        _emit 0x33
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        movsx esi, word ptr [eax + DAT_004d6ff0]
        _emit 0x83
        _emit 0xfe
        _emit 0x2d
        _emit 0x7c
        _emit 0x07
        mov dl, byte ptr [ecx*4 + DAT_004d6f20]
        _emit 0x8d
        _emit 0x04
        _emit 0x36
        movsx ebp, word ptr [eax + DAT_004d6f88]
        _emit 0x0f
        _emit 0xb6
        _emit 0xca
        _emit 0x03
        _emit 0xe9
        movsx ebp, word ptr [ebp*2 + DAT_004d7138]
        _emit 0x3b
        _emit 0xee
        _emit 0x75
        _emit 0xd2
        movsx eax, word ptr [esi*2 + DAT_004d6f88]
        _emit 0x0f
        _emit 0xb6
        _emit 0xca
        _emit 0x03
        _emit 0xc1
        movsx esi, word ptr [eax*2 + DAT_004d7058]
        _emit 0x47
        cmp word ptr [esi*2 + DAT_004d6f88], 0x54
        _emit 0x0f
        _emit 0x85
        _emit 0x6d
        _emit 0xff
        _emit 0xff
        _emit 0xff
        movsx eax, word ptr [esi*2 + DAT_004d6ac0]
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x14
        mov edx, dword ptr [DAT_004e21d8]
        mov edi, dword ptr [DAT_004e21cc]
        movsx eax, word ptr [edx*2 + DAT_004d6ac0]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0xd7
        _emit 0x2b
        _emit 0xd1
        mov dword ptr [DAT_004e31dc], ecx
        mov dword ptr [DAT_004e31e0], edx
        _emit 0x8a
        _emit 0x17
        _emit 0xc6
        _emit 0x07
        _emit 0x00
        mov ecx, dword ptr [DAT_004e31dc]
        mov byte ptr [DAT_004e21c8], dl
        _emit 0x8b
        _emit 0xef
        _emit 0x83
        _emit 0xf8
        _emit 0x12
        mov dword ptr [DAT_004e21e0], ebp
        _emit 0x0f
        _emit 0x87
        _emit 0x00
        _emit 0x03
        _emit 0x00
        _emit 0x00
        jmp dword ptr [eax*4 + gap_004365e9 + 11]
        _emit 0x8b
        _emit 0xf7
        _emit 0x2b
        _emit 0xf1
        _emit 0x88
        _emit 0x17
        _emit 0x8b
        _emit 0x43
        _emit 0x24
        _emit 0x4e
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x17
        mov ecx, dword ptr [DAT_004e21e8]
        _emit 0x8b
        _emit 0x43
        _emit 0x10
        mov dword ptr [DAT_004e21d0], eax
        _emit 0x89
        _emit 0x0b
        _emit 0xc7
        _emit 0x43
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x53
        _emit 0x04
        add edx, dword ptr [DAT_004e21d0]
        _emit 0x3b
        _emit 0xea
        _emit 0x0f
        _emit 0x86
        _emit 0x87
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00435f20
        _emit 0x83
        _emit 0xe8
        _emit 0x00
        _emit 0x0f
        _emit 0x84
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x48
        _emit 0x75
        _emit 0x44
        mov eax, dword ptr [DAT_004e21e4]
        mov ecx, dword ptr [DAT_004e31dc]
        mov ebx, dword ptr [DAT_004e21dc]
        _emit 0x48
        _emit 0x99
        _emit 0x2b
        _emit 0xc2
        mov dl, byte ptr [DAT_004e21c8]
        _emit 0xd1
        _emit 0xf8
        mov dword ptr [DAT_004e21d4], 0
        _emit 0x8b
        _emit 0xe9
        _emit 0x83
        _emit 0xc0
        _emit 0x11
        _emit 0xe9
        _emit 0x72
        _emit 0xff
        _emit 0xff
        _emit 0xff
        mov esi, dword ptr [DAT_004e21d8]
        _emit 0x88
        _emit 0x17
        mov edi, dword ptr [DAT_004e21cc]
        _emit 0xe9
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x48
        _emit 0x0f
        _emit 0x85
        _emit 0x53
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        mov ebx, dword ptr [DAT_004e21dc]
        mov eax, dword ptr [DAT_004e21d0]
        _emit 0x8b
        _emit 0x7b
        _emit 0x04
        _emit 0x03
        _emit 0xf8
        mov dword ptr [DAT_004e21e0], edi
        call FUN_00435a50
        _emit 0x8b
        _emit 0xf0
        mov eax, dword ptr [DAT_004e31dc]
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xe9
        _emit 0xe6
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        mov ebp, dword ptr [DAT_004e31dc]
        _emit 0x8d
        _emit 0x3c
        _emit 0x2e
        mov dword ptr [DAT_004e21e0], edi
        call FUN_00435a50
        _emit 0x8b
        _emit 0xf0
        call FUN_00435b10
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x0f
        _emit 0x84
        _emit 0xbf
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        _emit 0x47
        _emit 0x8b
        _emit 0xf0
        _emit 0xe9
        _emit 0x24
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        mov ebx, dword ptr [DAT_004e31dc]
        _emit 0x8d
        _emit 0x3c
        _emit 0x33
        mov dword ptr [DAT_004e21e0], edi
        call FUN_00435a50
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        mov ebx, dword ptr [DAT_004e21dc]
        _emit 0x8b
        _emit 0xf0
        _emit 0xe9
        _emit 0xff
        _emit 0xfd
        _emit 0xff
        _emit 0xff
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        mov dword ptr [DAT_004e21e4], 3
        _emit 0xe9
        _emit 0xd8
        _emit 0xfd
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x8a
        _emit 0x01
        _emit 0x88
        _emit 0x06
        _emit 0x46
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0xe9
        _emit 0xc6
        _emit 0xfd
        _emit 0xff
        _emit 0xff
        _emit 0x0f
        _emit 0xbe
        _emit 0x01
        _emit 0x50
        _emit 0x50
        push OFFSET s_Unexpected_character__c__d_004bff1c
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x8f
        _emit 0x21
        _emit 0x06
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xe9
        _emit 0x8f
        _emit 0xfd
        _emit 0xff
        _emit 0xff
        mov edx, dword ptr [DAT_004e21ec]
        mov eax, dword ptr [DAT_004e31e0]
        _emit 0x52
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        _emit 0x51
        call fwrite
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xe9
        _emit 0x72
        _emit 0xfd
        _emit 0xff
        _emit 0xff
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xb8
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0x08
        _emit 0x04
        _emit 0x00
        _emit 0x00
        call pt_a_00497aa6
        _emit 0x81
        _emit 0xc4
        _emit 0x0c
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x51
        call FUN_00437370
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x25
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        mov dword ptr [DAT_004e31cc], eax
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xb8
        _emit 0x06
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0x08
        _emit 0x04
        _emit 0x00
        _emit 0x00
        call pt_a_00497aa6
        _emit 0x81
        _emit 0xc4
        _emit 0x0c
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        mov eax, dword ptr [DAT_004e31dc]
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x8b
        _emit 0xff
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc2
        _emit 0x40
        _emit 0x50
        call malloc
        mov ecx, dword ptr [DAT_004e31dc]
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        mov dword ptr [DAT_004e31cc], eax
        _emit 0x8b
        _emit 0xd0
        _emit 0x8a
        _emit 0x01
        _emit 0x41
        _emit 0x88
        _emit 0x02
        _emit 0x42
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0xf6
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xb8
        _emit 0x05
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0x08
        _emit 0x04
        _emit 0x00
        _emit 0x00
        call pt_a_00497aa6
        _emit 0x81
        _emit 0xc4
        _emit 0x0c
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x51
        call atof
        fstp dword ptr [DAT_004e31cc]
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xb8
        _emit 0x07
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0x08
        _emit 0x04
        _emit 0x00
        _emit 0x00
        call pt_a_00497aa6
        _emit 0x81
        _emit 0xc4
        _emit 0x0c
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x51
        call atol
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xe9
        _emit 0x56
        _emit 0xff
        _emit 0xff
        _emit 0xff
        push OFFSET DAT_004e31cc
        push OFFSET DAT_004bff18
        _emit 0x51
        call sscanf
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xe9
        _emit 0x43
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x18
        mov dword ptr [DAT_004e21e4], 1
        _emit 0xc6
        _emit 0x01
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
        _emit 0x2b
        _emit 0xc2
        _emit 0x40
        _emit 0x50
        call malloc
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        mov dword ptr [DAT_004e31cc], eax
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0xd0
        _emit 0x8b
        _emit 0xff
        _emit 0x8a
        _emit 0x01
        _emit 0x41
        _emit 0x88
        _emit 0x02
        _emit 0x42
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0xf6
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xb8
        _emit 0x08
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0x08
        _emit 0x04
        _emit 0x00
        _emit 0x00
        call pt_a_00497aa6
        _emit 0x81
        _emit 0xc4
        _emit 0x0c
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x0f
        _emit 0xbe
        _emit 0x01
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0x08
        _emit 0x04
        _emit 0x00
        _emit 0x00
        call pt_a_00497aa6
        _emit 0x81
        _emit 0xc4
        _emit 0x0c
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x8b
        _emit 0x8c
        _emit 0x24
        _emit 0x18
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        call pt_a_00497aa6
        _emit 0x81
        _emit 0xc4
        _emit 0x0c
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xc3
    }
}
