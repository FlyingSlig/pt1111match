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





// FUNCTION: PORT1111 0x00436f70
__declspec(naked) void __fastcall FUN_00436f70(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b79fb
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
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        mov dword ptr [esi], OFFSET PTR_FUN_004bff3c
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x83
        _emit 0xf8
        _emit 0x06
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x87
        _emit 0xd6
        _emit 0x00
        _emit 0x00
        _emit 0x00
        jmp dword ptr [eax*4 + gap_00437078 + 40]
        _emit 0x8b
        _emit 0x7e
        _emit 0x0c
        _emit 0x85
        _emit 0xff
        _emit 0x0f
        _emit 0x84
        _emit 0xc4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        call FUN_00465e40
        _emit 0x57
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xe9
        _emit 0xaf
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x7e
        _emit 0x0c
        _emit 0x85
        _emit 0xff
        _emit 0x0f
        _emit 0x84
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        call FUN_00419480
        _emit 0xeb
        _emit 0x73
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0xc1
        _emit 0x39
        _emit 0x08
        _emit 0x74
        _emit 0x59
        _emit 0x90
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x78
        _emit 0x08
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x10
        _emit 0x8b
        _emit 0xcf
        call FUN_00465e40
        _emit 0x57
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0x7e
        _emit 0x0c
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
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
        _emit 0x47
        _emit 0x08
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x47
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0xc1
        _emit 0x39
        _emit 0x08
        _emit 0x75
        _emit 0xa8
        _emit 0x8b
        _emit 0x7e
        _emit 0x0c
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x2f
        _emit 0x8b
        _emit 0xcf
        call FUN_00419480
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x50
        call pt_a_004978fd
        _emit 0x57
        _emit 0xc7
        _emit 0x47
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xeb
        _emit 0x0d
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
    }
}
