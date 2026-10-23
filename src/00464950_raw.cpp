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

extern const unsigned char DAT_004c51d4[];
extern const unsigned char DAT_004c5248[];
extern const unsigned char DAT_004c530c[];
extern const unsigned char DAT_004c5817[];
extern const unsigned char DAT_004c5918[];
extern const unsigned char DAT_004c5a18[];
extern const unsigned char DAT_004c5b18[];
extern const unsigned char DAT_004c5b8c[];
extern const unsigned char DAT_004c5e3c[];
extern unsigned char DAT_004dd918[];
extern const unsigned char DAT_004c5720_2[126];
extern const unsigned char DAT_004c5720[2];
extern const unsigned char DAT_004c57a0[119];
extern const unsigned char DAT_004c5320[1024];
extern unsigned char s_invalid_literal_length_code_004dc704[28];
extern unsigned char s_invalid_distance_code_004dc6ec[24];
extern unsigned char s_oversubscribed_dynamic_bit_lengt_004dd84c[40];
extern unsigned char s_incomplete_dynamic_bit_lengths_t_004dd828[36];
extern const unsigned char DAT_004c5cb0[124];
extern const unsigned char DAT_004c5c34[124];
extern const unsigned char DAT_004c5da4[136];
extern const unsigned char DAT_004c5d2c[120];
extern unsigned char s_oversubscribed_distance_tree_004dd8f8[32];
extern unsigned char s_incomplete_distance_tree_004dd8dc[28];
extern unsigned char s_empty_distance_tree_with_lengths_004dd8b8[36];
extern unsigned char s_oversubscribed_literal_length_tr_004dd894[36];
extern unsigned char s_incomplete_literal_length_tree_004dd874[32];
extern unsigned char DAT_004dc720[4];
extern unsigned char DAT_004dc724[4];
extern unsigned char DAT_004dc728[4096];
extern unsigned char DAT_004dd728[256];
extern unsigned char DAT_004e2a94[20];
extern unsigned char DAT_004e2a90[4];
extern const unsigned char s_map_set_T__too_long_004bd55c[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];
extern const unsigned char PTR_LAB_004bc3ec[16];
extern const unsigned char PTR_DestroyCursor_004bc314[4];
extern const unsigned char PTR_FUN_004bc3dc[16];
extern unsigned char PTR_DAT_004dd95c[4];




// FUNCTION: PORT1111 0x00464950
__declspec(naked) int __cdecl FUN_00464950(void *param_1,void *param_2,void *param_3,int param_4,int param_5)
{
    __asm {
        _emit 0x51
        _emit 0x53
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x6a
        _emit 0x04
        _emit 0x6a
        _emit 0x13
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x28
        _emit 0x50
        _emit 0xff
        _emit 0x57
        _emit 0x20
        _emit 0x8b
        _emit 0xd8
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x85
        _emit 0xdb
        _emit 0x75
        _emit 0x09
        _emit 0x5f
        _emit 0xb8
        _emit 0xfc
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x5b
        _emit 0x59
        _emit 0xc3
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x18
        _emit 0x56
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x53
        _emit 0x51
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x52
        _emit 0x55
        _emit 0x50
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x13
        _emit 0x6a
        _emit 0x13
        _emit 0x51
        call FUN_00464a00
        _emit 0x8b
        _emit 0xf0
        _emit 0x83
        _emit 0xc4
        _emit 0x28
        _emit 0x83
        _emit 0xfe
        _emit 0xfd
        _emit 0x75
        _emit 0x1a
        _emit 0x8b
        _emit 0x57
        _emit 0x28
        _emit 0x53
        _emit 0x52
        mov dword ptr [edi + 0x18], OFFSET s_oversubscribed_dynamic_bit_lengt_004dd84c
        _emit 0xff
        _emit 0x57
        _emit 0x24
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5d
        _emit 0x5f
        _emit 0x5b
        _emit 0x59
        _emit 0xc3
        _emit 0x83
        _emit 0xfe
        _emit 0xfb
        _emit 0x74
        _emit 0x06
        _emit 0x83
        _emit 0x7d
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x0c
        mov dword ptr [edi + 0x18], OFFSET s_incomplete_dynamic_bit_lengths_t_004dd828
        _emit 0xbe
        _emit 0xfd
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x57
        _emit 0x28
        _emit 0x53
        _emit 0x52
        _emit 0xff
        _emit 0x57
        _emit 0x24
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0x5d
        _emit 0x5f
        _emit 0x5b
        _emit 0x59
        _emit 0xc3
    }
}
