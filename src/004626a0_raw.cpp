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




// FUNCTION: PORT1111 0x004626a0
__declspec(naked) void __cdecl FUN_004626a0(int param_1,void *param_2,int param_3,int param_4)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x88
        _emit 0xb4
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xf9
        _emit 0x0d
        _emit 0x7e
        _emit 0x62
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf2
        _emit 0xd3
        _emit 0xe6
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x57
        _emit 0x66
        _emit 0x09
        _emit 0xb0
        _emit 0xb0
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x70
        _emit 0x14
        _emit 0x8a
        _emit 0x98
        _emit 0xb0
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x1c
        _emit 0x31
        _emit 0x8b
        _emit 0x70
        _emit 0x14
        _emit 0x8b
        _emit 0x78
        _emit 0x08
        _emit 0x33
        _emit 0xc9
        _emit 0x8a
        _emit 0x88
        _emit 0xb1
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x46
        _emit 0x89
        _emit 0x70
        _emit 0x14
        _emit 0x88
        _emit 0x0c
        _emit 0x37
        _emit 0x8b
        _emit 0x48
        _emit 0x14
        _emit 0x8b
        _emit 0xb0
        _emit 0xb4
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x41
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0x66
        _emit 0xb9
        _emit 0x10
        _emit 0x00
        _emit 0x66
        _emit 0x2b
        _emit 0xce
        _emit 0x5f
        _emit 0x66
        _emit 0xd3
        _emit 0xea
        _emit 0x83
        _emit 0xc6
        _emit 0xf3
        _emit 0x89
        _emit 0xb0
        _emit 0xb4
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x5b
        _emit 0x66
        _emit 0x89
        _emit 0x90
        _emit 0xb0
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x16
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0xd3
        _emit 0xe2
        _emit 0x66
        _emit 0x09
        _emit 0x90
        _emit 0xb0
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc1
        _emit 0x03
        _emit 0x89
        _emit 0x88
        _emit 0xb4
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x6a
        _emit 0x01
        _emit 0x51
        _emit 0x52
        _emit 0x50
        call FUN_004640a0
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
    }
}
