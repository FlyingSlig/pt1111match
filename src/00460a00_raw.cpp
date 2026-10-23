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




// FUNCTION: PORT1111 0x00460a00
__declspec(naked) unsigned int __cdecl FUN_00460a00(void *param_1,int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0xbb
        _emit 0xff
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x83
        _emit 0xc0
        _emit 0xfb
        _emit 0x3b
        _emit 0xc3
        _emit 0x73
        _emit 0x02
        _emit 0x8b
        _emit 0xd8
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x46
        _emit 0x6c
        _emit 0x83
        _emit 0xf8
        _emit 0x01
        _emit 0x77
        _emit 0x20
        _emit 0x56
        call FUN_00460b60
        _emit 0x8b
        _emit 0x46
        _emit 0x6c
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x10
        _emit 0x85
        _emit 0xed
        _emit 0x0f
        _emit 0x84
        _emit 0x15
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xab
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x64
        _emit 0xc7
        _emit 0x46
        _emit 0x6c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0xc8
        _emit 0x89
        _emit 0x4e
        _emit 0x64
        _emit 0x8b
        _emit 0x4e
        _emit 0x54
        _emit 0x8b
        _emit 0x56
        _emit 0x64
        _emit 0x8d
        _emit 0x04
        _emit 0x19
        _emit 0x74
        _emit 0x04
        _emit 0x3b
        _emit 0xd0
        _emit 0x72
        _emit 0x3f
        _emit 0x2b
        _emit 0xd0
        _emit 0x89
        _emit 0x46
        _emit 0x64
        _emit 0x85
        _emit 0xc9
        _emit 0x89
        _emit 0x56
        _emit 0x6c
        _emit 0x7c
        _emit 0x07
        _emit 0x8b
        _emit 0x56
        _emit 0x30
        _emit 0x03
        _emit 0xd1
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xd2
        _emit 0x2b
        _emit 0xc1
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x52
        _emit 0x56
        call FUN_004629a0
        _emit 0x8b
        _emit 0x0e
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x51
        _emit 0x89
        _emit 0x46
        _emit 0x54
        call FUN_00460830
        _emit 0x8b
        _emit 0x16
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0x8b
        _emit 0x42
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x54
        _emit 0x8b
        _emit 0x56
        _emit 0x64
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x2b
        _emit 0xd1
        _emit 0x2d
        _emit 0x06
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xd0
        _emit 0x0f
        _emit 0x82
        _emit 0x63
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x85
        _emit 0xc9
        _emit 0x7c
        _emit 0x07
        _emit 0x8b
        _emit 0x46
        _emit 0x30
        _emit 0x03
        _emit 0xc1
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        _emit 0x50
        _emit 0x56
        call FUN_004629a0
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0x4e
        _emit 0x64
        _emit 0x52
        _emit 0x89
        _emit 0x4e
        _emit 0x54
        call FUN_00460830
        _emit 0x8b
        _emit 0x06
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0x8b
        _emit 0x48
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x67
        _emit 0xe9
        _emit 0x2d
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x4e
        _emit 0x54
        _emit 0x85
        _emit 0xc9
        _emit 0x7c
        _emit 0x07
        _emit 0x8b
        _emit 0x46
        _emit 0x30
        _emit 0x03
        _emit 0xc1
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x33
        _emit 0xd2
        _emit 0x83
        _emit 0xfd
        _emit 0x04
        _emit 0x0f
        _emit 0x94
        _emit 0xc2
        _emit 0x52
        _emit 0x8b
        _emit 0x56
        _emit 0x64
        _emit 0x2b
        _emit 0xd1
        _emit 0x52
        _emit 0x50
        _emit 0x56
        call FUN_004629a0
        _emit 0x8b
        _emit 0x0e
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x51
        _emit 0x89
        _emit 0x46
        _emit 0x54
        call FUN_00460830
        _emit 0x8b
        _emit 0x16
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0x8b
        _emit 0x42
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x10
        _emit 0x33
        _emit 0xc0
        _emit 0x83
        _emit 0xfd
        _emit 0x04
        _emit 0x0f
        _emit 0x95
        _emit 0xc0
        _emit 0x48
        _emit 0x5e
        _emit 0x5d
        _emit 0x83
        _emit 0xe0
        _emit 0x02
        _emit 0x5b
        _emit 0xc3
        _emit 0x8b
        _emit 0xc5
        _emit 0x5e
        _emit 0x83
        _emit 0xe8
        _emit 0x04
        _emit 0x5d
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x5b
        _emit 0x24
        _emit 0xfe
        _emit 0x83
        _emit 0xc0
        _emit 0x03
        _emit 0xc3
        _emit 0x5e
        _emit 0x5d
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
        _emit 0xc3
    }
}
