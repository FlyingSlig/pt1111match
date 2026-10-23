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

extern int DAT_004c4cd0;
extern const unsigned char DAT_004c5110[];
extern const unsigned char DAT_004c5112[];
extern const unsigned char DAT_004c5114[];
extern const unsigned char DAT_004c5116[];
extern const unsigned char DAT_004c5188[];
extern const unsigned char DAT_004c5817[];
extern const unsigned char DAT_004c5918[];
extern const unsigned char DAT_004c5a18[];
extern unsigned char DAT_004dd918[];
extern unsigned char s_1_1_4_004dc520[8];
extern unsigned char s_unknown_compression_method_004dc57c[28];
extern unsigned char s_invalid_window_size_004dc568[20];
extern unsigned char s_incorrect_header_check_004dc550[24];
extern unsigned char s_incorrect_data_check_004dc538[24];
extern unsigned char s_need_dictionary_004dc528[16];
extern unsigned char PTR_s_1_1_4_004dc598[4];
extern unsigned char PTR_s_insufficient_memory_004dc628[4];
extern unsigned char PTR_s_buffer_error_004dc62c[12];
extern unsigned char PTR_s_stream_error_004dc620[8];
extern unsigned char s_invalid_block_type_004dc5fc[36];
extern unsigned char s_invalid_stored_block_lengths_004dc5dc[32];
extern unsigned char s_too_many_length_or_distance_symb_004dc5b8[36];
extern unsigned char s_invalid_bit_length_repeat_004dc59c[28];
extern unsigned char PTR_DAT_004dc6a8[24];
extern unsigned char PTR_DAT_004dc6c0[24];
extern unsigned char DAT_004dc6d8[20];




// FUNCTION: PORT1111 0x0045fcd0
__declspec(naked) int __cdecl FUN_0045fcd0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x33
        _emit 0xd2
        _emit 0x3b
        _emit 0xc2
        _emit 0x74
        _emit 0x32
        _emit 0x8b
        _emit 0x48
        _emit 0x1c
        _emit 0x3b
        _emit 0xca
        _emit 0x74
        _emit 0x2b
        _emit 0x56
        _emit 0x89
        _emit 0x50
        _emit 0x14
        _emit 0x89
        _emit 0x50
        _emit 0x08
        _emit 0x89
        _emit 0x50
        _emit 0x18
        _emit 0x8b
        _emit 0x71
        _emit 0x0c
        _emit 0x52
        _emit 0xf7
        _emit 0xde
        _emit 0x1b
        _emit 0xf6
        _emit 0x50
        _emit 0x83
        _emit 0xe6
        _emit 0x07
        _emit 0x89
        _emit 0x31
        _emit 0x8b
        _emit 0x40
        _emit 0x1c
        _emit 0x8b
        _emit 0x48
        _emit 0x14
        _emit 0x51
        call FUN_004615e0
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
        _emit 0xb8
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xc3
    }
}
