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












// GAP: PORT1111 0x004607fd
__declspec(naked) void gap_004607fd(void)
{
    __asm {
        _emit 0x90
        _emit 0x90
        _emit 0x90
    }
}

// FUNCTION: PORT1111 0x00460800
__declspec(naked) void __cdecl FUN_00460800(int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x70
        _emit 0x08
        _emit 0x8b
        _emit 0x78
        _emit 0x14
        _emit 0x8b
        _emit 0xd1
        _emit 0xc1
        _emit 0xea
        _emit 0x08
        _emit 0x88
        _emit 0x14
        _emit 0x3e
        _emit 0x8b
        _emit 0x50
        _emit 0x14
        _emit 0x8b
        _emit 0x70
        _emit 0x08
        _emit 0x42
        _emit 0x89
        _emit 0x50
        _emit 0x14
        _emit 0x5f
        _emit 0x88
        _emit 0x0c
        _emit 0x16
        _emit 0x8b
        _emit 0x48
        _emit 0x14
        _emit 0x41
        _emit 0x5e
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0046082f
__declspec(naked) void gap_0046082f(void)
{
    __asm {
        _emit 0x90
    }
}

// FUNCTION: PORT1111 0x00460830
__declspec(naked) void __cdecl FUN_00460830(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0x70
        _emit 0x1c
        _emit 0x8b
        _emit 0x48
        _emit 0x10
        _emit 0x8b
        _emit 0x56
        _emit 0x14
        _emit 0x3b
        _emit 0xd1
        _emit 0x76
        _emit 0x02
        _emit 0x8b
        _emit 0xd1
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x58
        _emit 0x8b
        _emit 0x76
        _emit 0x10
        _emit 0x8b
        _emit 0xca
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        _emit 0x57
        _emit 0x8b
        _emit 0x78
        _emit 0x0c
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0xcb
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xa4
        _emit 0x8b
        _emit 0x78
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x1c
        _emit 0x03
        _emit 0xfa
        _emit 0x89
        _emit 0x78
        _emit 0x0c
        _emit 0x8b
        _emit 0x71
        _emit 0x10
        _emit 0x03
        _emit 0xf2
        _emit 0x89
        _emit 0x71
        _emit 0x10
        _emit 0x8b
        _emit 0x58
        _emit 0x14
        _emit 0x8b
        _emit 0x78
        _emit 0x10
        _emit 0x8b
        _emit 0x48
        _emit 0x1c
        _emit 0x03
        _emit 0xda
        _emit 0x2b
        _emit 0xfa
        _emit 0x89
        _emit 0x58
        _emit 0x14
        _emit 0x89
        _emit 0x78
        _emit 0x10
        _emit 0x8b
        _emit 0x71
        _emit 0x14
        _emit 0x5f
        _emit 0x2b
        _emit 0xf2
        _emit 0x5b
        _emit 0x89
        _emit 0x71
        _emit 0x14
        _emit 0x8b
        _emit 0x40
        _emit 0x1c
        _emit 0x8b
        _emit 0x48
        _emit 0x14
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x06
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004608a2
__declspec(naked) void gap_004608a2(void)
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
        _emit 0x90
    }
}

// FUNCTION: PORT1111 0x004608b0
__declspec(naked) unsigned int __cdecl FUN_004608b0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xf6
        _emit 0x57
        _emit 0x0f
        _emit 0x84
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x89
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x78
        _emit 0x04
        _emit 0x83
        _emit 0xff
        _emit 0x2a
        _emit 0x74
        _emit 0x0d
        _emit 0x83
        _emit 0xff
        _emit 0x71
        _emit 0x74
        _emit 0x08
        _emit 0x81
        _emit 0xff
        _emit 0x9a
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x74
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0b
        _emit 0x50
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x50
        _emit 0xff
        _emit 0x56
        _emit 0x24
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0x41
        _emit 0x3c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0x56
        _emit 0x28
        _emit 0x50
        _emit 0x52
        _emit 0xff
        _emit 0x56
        _emit 0x24
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x8b
        _emit 0x40
        _emit 0x38
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x50
        _emit 0x51
        _emit 0xff
        _emit 0x56
        _emit 0x24
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0x56
        _emit 0x1c
        _emit 0x8b
        _emit 0x42
        _emit 0x30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0b
        _emit 0x50
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x50
        _emit 0xff
        _emit 0x56
        _emit 0x24
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0x56
        _emit 0x28
        _emit 0x51
        _emit 0x52
        _emit 0xff
        _emit 0x56
        _emit 0x24
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x33
        _emit 0xc0
        _emit 0x83
        _emit 0xff
        _emit 0x71
        _emit 0xc7
        _emit 0x46
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x95
        _emit 0xc0
        _emit 0x48
        _emit 0x5f
        _emit 0x24
        _emit 0xfd
        _emit 0x5e
        _emit 0xc3
        _emit 0x5f
        _emit 0xb8
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0046095a
__declspec(naked) void gap_0046095a(void)
{
    __asm {
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
    }
}

// FUNCTION: PORT1111 0x00460960
__declspec(naked) void __cdecl FUN_00460960(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x53
        _emit 0x56
        _emit 0x33
        _emit 0xf6
        _emit 0x8b
        _emit 0x42
        _emit 0x24
        _emit 0x8b
        _emit 0x4a
        _emit 0x44
        _emit 0xd1
        _emit 0xe0
        _emit 0x89
        _emit 0x42
        _emit 0x34
        _emit 0x8b
        _emit 0x42
        _emit 0x3c
        _emit 0x57
        _emit 0x66
        _emit 0x89
        _emit 0x74
        _emit 0x48
        _emit 0xfe
        _emit 0x8b
        _emit 0x4a
        _emit 0x44
        _emit 0x8b
        _emit 0x7a
        _emit 0x3c
        _emit 0x33
        _emit 0xc0
        _emit 0x8d
        _emit 0x4c
        _emit 0x09
        _emit 0xfe
        _emit 0x8b
        _emit 0xd9
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0xf3
        _emit 0xab
        _emit 0x8b
        _emit 0xcb
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xaa
        _emit 0x8b
        _emit 0x42
        _emit 0x7c
        _emit 0x33
        _emit 0xc9
        _emit 0x5f
        _emit 0x8d
        _emit 0x04
        _emit 0x40
        _emit 0xc1
        _emit 0xe0
        _emit 0x02
        mov cx, word ptr [eax + DAT_004c5112]
        _emit 0x89
        _emit 0x4a
        _emit 0x78
        _emit 0x33
        _emit 0xc9
        mov cx, word ptr [eax + DAT_004c5110]
        _emit 0x89
        _emit 0x8a
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc9
        mov cx, word ptr [eax + DAT_004c5114]
        _emit 0x89
        _emit 0x8a
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc9
        mov cx, word ptr [eax + DAT_004c5116]
        _emit 0x89
        _emit 0x72
        _emit 0x64
        _emit 0x89
        _emit 0x72
        _emit 0x54
        _emit 0x89
        _emit 0x72
        _emit 0x6c
        _emit 0xb8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x72
        _emit 0x60
        _emit 0x89
        _emit 0x72
        _emit 0x40
        _emit 0x5e
        _emit 0x89
        _emit 0x4a
        _emit 0x74
        _emit 0x89
        _emit 0x42
        _emit 0x70
        _emit 0x89
        _emit 0x42
        _emit 0x58
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004609f3
__declspec(naked) void gap_004609f3(void)
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
    }
}
