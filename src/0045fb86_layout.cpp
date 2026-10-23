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












// GAP: PORT1111 0x0045fb86
__declspec(naked) void gap_0045fb86(void)
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
    }
}

// FUNCTION: PORT1111 0x0045fb90
__declspec(naked) unsigned int __cdecl FUN_0045fb90(unsigned int param_1,void *param_2,unsigned int param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x03
        _emit 0x33
        _emit 0xc0
        _emit 0xc3
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x83
        _emit 0xfe
        _emit 0x08
        _emit 0xf7
        _emit 0xd0
        _emit 0x0f
        _emit 0x82
        _emit 0xee
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8b
        _emit 0xfe
        _emit 0xc1
        _emit 0xef
        _emit 0x03
        _emit 0x8b
        _emit 0xd0
        _emit 0x33
        _emit 0xdb
        _emit 0x8a
        _emit 0x19
        _emit 0x81
        _emit 0xe2
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xd3
        _emit 0x8b
        _emit 0xd8
        _emit 0xc1
        _emit 0xeb
        _emit 0x08
        mov eax, dword ptr [edx*4 + DAT_004c4cd0]
        _emit 0x83
        _emit 0xee
        _emit 0x08
        _emit 0x33
        _emit 0xc3
        _emit 0x41
        _emit 0x8b
        _emit 0xd0
        _emit 0x33
        _emit 0xdb
        _emit 0x8a
        _emit 0x19
        _emit 0x81
        _emit 0xe2
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xd3
        _emit 0x33
        _emit 0xdb
        _emit 0x8a
        _emit 0x59
        _emit 0x01
        mov edx, dword ptr [edx*4 + DAT_004c4cd0]
        _emit 0xc1
        _emit 0xe8
        _emit 0x08
        _emit 0x33
        _emit 0xd0
        _emit 0x41
        _emit 0x8b
        _emit 0xc2
        _emit 0x25
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc3
        _emit 0x33
        _emit 0xdb
        _emit 0x8a
        _emit 0x59
        _emit 0x01
        mov eax, dword ptr [eax*4 + DAT_004c4cd0]
        _emit 0xc1
        _emit 0xea
        _emit 0x08
        _emit 0x33
        _emit 0xc2
        _emit 0x41
        _emit 0x8b
        _emit 0xd0
        _emit 0x81
        _emit 0xe2
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xd3
        _emit 0x33
        _emit 0xdb
        _emit 0x8a
        _emit 0x59
        _emit 0x01
        mov edx, dword ptr [edx*4 + DAT_004c4cd0]
        _emit 0xc1
        _emit 0xe8
        _emit 0x08
        _emit 0x33
        _emit 0xd0
        _emit 0x41
        _emit 0x8b
        _emit 0xc2
        _emit 0x25
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc3
        _emit 0x33
        _emit 0xdb
        _emit 0x8a
        _emit 0x59
        _emit 0x01
        mov eax, dword ptr [eax*4 + DAT_004c4cd0]
        _emit 0xc1
        _emit 0xea
        _emit 0x08
        _emit 0x33
        _emit 0xc2
        _emit 0x41
        _emit 0x8b
        _emit 0xd0
        _emit 0x81
        _emit 0xe2
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xd3
        _emit 0x33
        _emit 0xdb
        _emit 0x8a
        _emit 0x59
        _emit 0x01
        mov edx, dword ptr [edx*4 + DAT_004c4cd0]
        _emit 0xc1
        _emit 0xe8
        _emit 0x08
        _emit 0x33
        _emit 0xd0
        _emit 0x41
        _emit 0x8b
        _emit 0xc2
        _emit 0x25
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc3
        _emit 0x33
        _emit 0xdb
        _emit 0x8a
        _emit 0x59
        _emit 0x01
        mov eax, dword ptr [eax*4 + DAT_004c4cd0]
        _emit 0xc1
        _emit 0xea
        _emit 0x08
        _emit 0x33
        _emit 0xc2
        _emit 0x41
        _emit 0x8b
        _emit 0xd0
        _emit 0x81
        _emit 0xe2
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xd3
        _emit 0xc1
        _emit 0xe8
        _emit 0x08
        mov edx, dword ptr [edx*4 + DAT_004c4cd0]
        _emit 0x33
        _emit 0xc2
        _emit 0x41
        _emit 0x4f
        _emit 0x0f
        _emit 0x85
        _emit 0x19
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x5f
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x1e
        _emit 0x8b
        _emit 0xd0
        _emit 0x33
        _emit 0xdb
        _emit 0x8a
        _emit 0x19
        _emit 0x81
        _emit 0xe2
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xd3
        _emit 0xc1
        _emit 0xe8
        _emit 0x08
        mov edx, dword ptr [edx*4 + DAT_004c4cd0]
        _emit 0x33
        _emit 0xc2
        _emit 0x41
        _emit 0x4e
        _emit 0x75
        _emit 0xe2
        _emit 0x5e
        _emit 0x5b
        _emit 0xf7
        _emit 0xd0
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0045fcc5
__declspec(naked) void gap_0045fcc5(void)
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
    }
}
