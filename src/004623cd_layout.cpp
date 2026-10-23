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












// GAP: PORT1111 0x004623cd
__declspec(naked) void gap_004623cd(void)
{
    __asm {
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x54
        _emit 0x17
        _emit 0x46
        _emit 0x00
        _emit 0x4a
        _emit 0x18
        _emit 0x46
        _emit 0x00
        _emit 0xbd
        _emit 0x18
        _emit 0x46
        _emit 0x00
        _emit 0xec
        _emit 0x19
        _emit 0x46
        _emit 0x00
        _emit 0x95
        _emit 0x1a
        _emit 0x46
        _emit 0x00
        _emit 0x7e
        _emit 0x1b
        _emit 0x46
        _emit 0x00
        _emit 0xcd
        _emit 0x1d
        _emit 0x46
        _emit 0x00
        _emit 0x9a
        _emit 0x22
        _emit 0x46
        _emit 0x00
        _emit 0x01
        _emit 0x23
        _emit 0x46
        _emit 0x00
        _emit 0x45
        _emit 0x23
        _emit 0x46
        _emit 0x00
        _emit 0xb8
        _emit 0x17
        _emit 0x46
        _emit 0x00
        _emit 0xd6
        _emit 0x17
        _emit 0x46
        _emit 0x00
        _emit 0x35
        _emit 0x18
        _emit 0x46
        _emit 0x00
        _emit 0xee
        _emit 0x1e
        _emit 0x46
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
    }
}

// FUNCTION: PORT1111 0x00462410
__declspec(naked) int __cdecl FUN_00462410(void *param_1,int param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x6a
        _emit 0x00
        _emit 0x56
        _emit 0x57
        call FUN_004615e0
        _emit 0x8b
        _emit 0x47
        _emit 0x28
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x50
        _emit 0x51
        _emit 0xff
        _emit 0x56
        _emit 0x24
        _emit 0x8b
        _emit 0x57
        _emit 0x24
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x52
        _emit 0x50
        _emit 0xff
        _emit 0x56
        _emit 0x24
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x57
        _emit 0x51
        _emit 0xff
        _emit 0x56
        _emit 0x24
        _emit 0x83
        _emit 0xc4
        _emit 0x24
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00462449
__declspec(naked) void gap_00462449(void)
{
    __asm {
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
    }
}

// FUNCTION: PORT1111 0x00462450
__declspec(naked) unsigned int __cdecl FUN_00462450(unsigned int param_1,void *param_2,unsigned int param_3)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xcf
        _emit 0x81
        _emit 0xe1
        _emit 0xff
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0xc1
        _emit 0xef
        _emit 0x10
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x08
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x85
        _emit 0xdb
        _emit 0x0f
        _emit 0x86
        _emit 0xf5
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x81
        _emit 0xfb
        _emit 0xb0
        _emit 0x15
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc3
        _emit 0x72
        _emit 0x05
        _emit 0xb8
        _emit 0xb0
        _emit 0x15
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0xd8
        _emit 0x83
        _emit 0xf8
        _emit 0x10
        _emit 0x0f
        _emit 0x8c
        _emit 0xa7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xe8
        _emit 0xc1
        _emit 0xed
        _emit 0x04
        _emit 0x8b
        _emit 0xd5
        _emit 0xf7
        _emit 0xda
        _emit 0xc1
        _emit 0xe2
        _emit 0x04
        _emit 0x03
        _emit 0xc2
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x16
        _emit 0x83
        _emit 0xc6
        _emit 0x10
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xf1
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xf2
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xf3
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xf4
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xf5
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xf6
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xf7
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xf8
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xf9
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xfa
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xfb
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xfc
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xfd
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xfe
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0xff
        _emit 0x03
        _emit 0xf9
        _emit 0x03
        _emit 0xca
        _emit 0x03
        _emit 0xf9
        _emit 0x4d
        _emit 0x0f
        _emit 0x85
        _emit 0x67
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x16
        _emit 0x03
        _emit 0xca
        _emit 0x46
        _emit 0x03
        _emit 0xf9
        _emit 0x48
        _emit 0x75
        _emit 0xf4
        _emit 0x8b
        _emit 0xc1
        _emit 0x33
        _emit 0xd2
        _emit 0xb9
        _emit 0xf1
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0xf7
        _emit 0xf1
        _emit 0x8b
        _emit 0xc7
        _emit 0xbf
        _emit 0xf1
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xca
        _emit 0x33
        _emit 0xd2
        _emit 0xf7
        _emit 0xf7
        _emit 0x85
        _emit 0xdb
        _emit 0x8b
        _emit 0xfa
        _emit 0x0f
        _emit 0x87
        _emit 0x0d
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x5d
        _emit 0x8b
        _emit 0xc7
        _emit 0x5b
        _emit 0xc1
        _emit 0xe0
        _emit 0x10
        _emit 0x5f
        _emit 0x0b
        _emit 0xc1
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0046257e
__declspec(naked) void gap_0046257e(void)
{
    __asm {
        _emit 0x90
        _emit 0x90
    }
}

// FUNCTION: PORT1111 0x00462580
__declspec(naked) void __cdecl FUN_00462580(int param_1,size_t param_2,size_t param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x51
        call calloc
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00462593
__declspec(naked) void gap_00462593(void)
{
    __asm {
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call free
        _emit 0x59
        _emit 0xc3
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
    }
}

// FUNCTION: PORT1111 0x004625b0
__declspec(naked) void __cdecl FUN_004625b0(int param_1)
{
    __asm {
        call FUN_00462620
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x8d
        _emit 0x88
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x90
        _emit 0x80
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x88
        _emit 0x10
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x88
        _emit 0x74
        _emit 0x0a
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x88
        _emit 0x28
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc9
        mov dword ptr [eax + 0xb18], OFFSET PTR_DAT_004dc6a8
        _emit 0x89
        _emit 0x90
        _emit 0x1c
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        mov dword ptr [eax + 0xb24], OFFSET PTR_DAT_004dc6c0
        mov dword ptr [eax + 0xb30], OFFSET DAT_004dc6d8
        _emit 0x66
        _emit 0x89
        _emit 0x88
        _emit 0xb0
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x88
        _emit 0xb4
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0xac
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00462630
        _emit 0x59
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0046261c
__declspec(naked) void gap_0046261c(void)
{
    __asm {
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
    }
}
