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

extern "C" void free_thunk(void *);
extern unsigned char DAT_004d7218[];
extern unsigned char DAT_004d7324[];
extern unsigned char DAT_004d7358[];
extern unsigned char DAT_004d73f4[];
extern unsigned char PTR_DAT_004d7428[];
extern unsigned char DAT_004d7498[];
extern unsigned char DAT_004d74c8[];
extern unsigned char DAT_004d74f8[];
extern unsigned char DAT_004d7568[];
extern unsigned char DAT_004d759c[];
extern unsigned char DAT_004d75d8[];
extern unsigned char DAT_004d7630[];
extern unsigned char DAT_004d7688[];
extern unsigned char DAT_004d7a88[];
extern const unsigned char DAT_004c014c[4];
extern const unsigned char s_false_004c0144[8];
extern const unsigned char DAT_004c0140[4];
extern const unsigned char DAT_004c0138[8];
extern int DAT_004e25f8;
extern unsigned char DAT_004ddb0c[12];
extern unsigned char DAT_004e31d0[4];
extern const unsigned char s_Starting_parse_004c0458[16];
extern unsigned char DAT_004ddb70[48];
extern unsigned char DAT_004e31d8[4];
extern unsigned char DAT_004e31d4[4];
extern const unsigned char s_Stack_size_increased_to__d_004c043c[28];
extern const unsigned char s_Entering_state__d_004c0428[20];
extern const unsigned char s_Reading_a_token__004c0414[20];
extern const unsigned char s_Now_at_end_of_input__004c03fc[24];
extern const unsigned char s_Next_token_is__d___s_004c03e4[24];
extern const unsigned char DAT_004c03e0[4];
extern const unsigned char s_Reducing_via_rule__d__line__d___004c03bc[36];
extern const unsigned char DAT_004c03b8[4];
extern const unsigned char s_____s_004c03b0[8];
extern const unsigned char s_Shifting_token__d___s___004c0394[28];
extern unsigned char DAT_004e31cc[4];
extern const unsigned char s_parse_error_004c0388[4];
extern const unsigned char s_e_error_004c0388_4[4];
extern const unsigned char s_ror_004c0388_8[4];
extern const unsigned char s___expecting___004c0378[16];
extern const unsigned char DAT_004c0370[1];
extern const unsigned char DAT_004c036c[4];
extern const unsigned char s____________ERRO________________s_004c02a8[36];
extern unsigned char DAT_004e21f0[255];
extern const unsigned char s_Last_Valid_Identifier___s_004c0288[32];
extern unsigned char DAT_004e22f0[255];
extern const unsigned char s_Last_Valid_Parameter___s_004c026c[28];
extern const unsigned char s_parse_error__also_virtual_memory_004c0340[44];
extern const unsigned char s_Discarding_token__d___s___004c0324[28];
extern const unsigned char s_Error__state_stack_now_004c030c[24];
extern const unsigned char DAT_004bf680[4];
extern const unsigned char DAT_004bf69c[4];
extern const unsigned char s_Shifting_error_token__004c02f4[24];
extern unsigned char DAT_004e22ef[1];
extern unsigned char DAT_004e23ef[1];
extern const unsigned char s_state_stack_now_004c02e4[16];













// FUNCTION: PORT1111 0x00438f90
__declspec(naked) int __fastcall FUN_00438f90(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0x57
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x16
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x5f
        _emit 0xb0
        _emit 0x01
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x32
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00438fbf
__declspec(naked) void gap_00438fbf(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00438fc0
__declspec(naked) void __fastcall FUN_00438fc0(int param_1)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7ce8
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x83
        _emit 0xc1
        _emit 0x04
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466a50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x8b
        _emit 0x0c
        _emit 0x24
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043900b
__declspec(naked) void gap_0043900b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00439010
__declspec(naked) int __fastcall FUN_00439010(void *pthis,int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x43
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x07
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x10
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x0f
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x73
        _emit 0x04
        _emit 0x75
        _emit 0xea
        _emit 0x5f
        _emit 0x5e
        _emit 0xb0
        _emit 0x01
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x17
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x10
        _emit 0x5f
        _emit 0x5e
        _emit 0x32
        _emit 0xc0
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00439053
__declspec(naked) void gap_00439053(void)
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

// FUNCTION: PORT1111 0x00439060
__declspec(naked) unsigned int FUN_00439060(unsigned int param_1,void *param_2,void *param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0x78
        _emit 0x08
        _emit 0x03
        _emit 0x75
        _emit 0x27
        _emit 0x8b
        _emit 0x40
        _emit 0x0c
        _emit 0x83
        _emit 0x78
        _emit 0x08
        _emit 0x02
        _emit 0x75
        _emit 0x1e
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x0a
        _emit 0x8b
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x0a
        _emit 0xb0
        _emit 0x01
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        _emit 0x32
        _emit 0xc0
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x00439096
__declspec(naked) void gap_00439096(void)
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

// FUNCTION: PORT1111 0x004390a0
__declspec(naked) unsigned int FUN_004390a0(unsigned int param_1,void *param_2,void *param_3,void *param_4)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x50
        _emit 0x08
        _emit 0xb9
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xd1
        _emit 0x75
        _emit 0x31
        _emit 0x8b
        _emit 0x40
        _emit 0x0c
        _emit 0x39
        _emit 0x48
        _emit 0x08
        _emit 0x75
        _emit 0x29
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x0a
        _emit 0x8b
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x0a
        _emit 0x8b
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x0a
        _emit 0xb0
        _emit 0x01
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x32
        _emit 0xc0
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x004390e6
__declspec(naked) void gap_004390e6(void)
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

// FUNCTION: PORT1111 0x004390f0
__declspec(naked) unsigned int FUN_004390f0(unsigned int param_1,void *param_2,void *param_3,void *param_4,void *param_5)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0x78
        _emit 0x08
        _emit 0x03
        _emit 0x75
        _emit 0x3d
        _emit 0x8b
        _emit 0x40
        _emit 0x0c
        _emit 0x83
        _emit 0x78
        _emit 0x08
        _emit 0x04
        _emit 0x75
        _emit 0x34
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x0a
        _emit 0x8b
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x0a
        _emit 0x8b
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x0a
        _emit 0x8b
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x0a
        _emit 0xb0
        _emit 0x01
        _emit 0xc2
        _emit 0x14
        _emit 0x00
        _emit 0x32
        _emit 0xc0
        _emit 0xc2
        _emit 0x14
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043913c
__declspec(naked) void gap_0043913c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00439140
__declspec(naked) unsigned int FUN_00439140(int param_1,int param_2,int param_3,void *param_4)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x83
        _emit 0xff
        _emit 0x01
        _emit 0x7f
        _emit 0x0c
        _emit 0x83
        _emit 0xfe
        _emit 0x01
        _emit 0x7f
        _emit 0x07
        _emit 0x5f
        _emit 0x32
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x10
        _emit 0x83
        _emit 0x7d
        _emit 0x08
        _emit 0x03
        _emit 0x0f
        _emit 0x85
        _emit 0x9d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x45
        _emit 0x0c
        _emit 0x39
        _emit 0x78
        _emit 0x08
        _emit 0x0f
        _emit 0x85
        _emit 0x91
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x03
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0f
        _emit 0x50
        call free_thunk
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        _emit 0x0f
        _emit 0xaf
        _emit 0xce
        _emit 0xc1
        _emit 0xe1
        _emit 0x02
        _emit 0x51
        _emit 0xe8
        _emit 0xaa
        _emit 0xde
        _emit 0x05
        _emit 0x00
        _emit 0x89
        _emit 0x03
        _emit 0x8b
        _emit 0x55
        _emit 0x0c
        _emit 0x8b
        _emit 0x42
        _emit 0x04
        _emit 0x8b
        _emit 0x10
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xd0
        _emit 0x74
        _emit 0x4f
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x85
        _emit 0xf6
        _emit 0x8b
        _emit 0x4a
        _emit 0x08
        _emit 0x8b
        _emit 0x12
        _emit 0x7e
        _emit 0x2d
        _emit 0xc1
        _emit 0xe7
        _emit 0x02
        _emit 0xf6
        _emit 0xc1
        _emit 0x01
        _emit 0x8b
        _emit 0x2b
        _emit 0x74
        _emit 0x09
        _emit 0xc7
        _emit 0x04
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x07
        _emit 0xc7
        _emit 0x04
        _emit 0x28
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xd1
        _emit 0xf9
        _emit 0x03
        _emit 0xc7
        _emit 0x4e
        _emit 0x75
        _emit 0xe2
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0x4d
        _emit 0x0c
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0x3b
        _emit 0x51
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x75
        _emit 0xb7
        _emit 0x5b
        _emit 0x5d
        _emit 0x5f
        _emit 0xb0
        _emit 0x01
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
    }
}

// GAP: PORT1111 0x00439206
__declspec(naked) void gap_00439206(void)
{
    __asm {
        _emit 0x00
        _emit 0x5d
        _emit 0x5f
        _emit 0x32
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00439210
__declspec(naked) int FUN_00439210(int param_1,void *param_2)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x83
        _emit 0xf8
        _emit 0x03
        _emit 0x75
        _emit 0x22
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x83
        _emit 0x79
        _emit 0x08
        _emit 0x01
        _emit 0x75
        _emit 0x19
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0x8b
        _emit 0x11
        _emit 0x8b
        _emit 0x4a
        _emit 0x08
        _emit 0x83
        _emit 0xf9
        _emit 0x01
        _emit 0x0f
        _emit 0x84
        _emit 0xc1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x0f
        _emit 0x84
        _emit 0xc6
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x5e
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        push OFFSET DAT_004c014c
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x40
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        push OFFSET s_false_004c0144
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x2f
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        push OFFSET DAT_004c0140
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x11
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        push OFFSET DAT_004c0138
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1a
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0xc6
        _emit 0x02
        _emit 0x01
        _emit 0xb0
        _emit 0x01
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0xc6
        _emit 0x00
        _emit 0x00
        _emit 0xb0
        _emit 0x01
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x83
        _emit 0x7e
        _emit 0x08
        _emit 0x06
        _emit 0x75
        _emit 0x6b
        _emit 0x8b
        _emit 0x76
        _emit 0x0c
        _emit 0x83
        _emit 0x7e
        _emit 0x08
        _emit 0x01
        _emit 0x75
        _emit 0x62
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x11
        _emit 0x8b
        _emit 0x72
        _emit 0x08
        push OFFSET DAT_004c014c
        _emit 0x8b
        _emit 0xce
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x3d
        push OFFSET s_false_004c0144
        _emit 0x8b
        _emit 0xce
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x2d
        push OFFSET DAT_004c0140
        _emit 0x8b
        _emit 0xce
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x10
        push OFFSET DAT_004c0138
        _emit 0x8b
        _emit 0xce
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1a
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0xc6
        _emit 0x00
        _emit 0x01
        _emit 0xb0
        _emit 0x01
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xc6
        _emit 0x01
        _emit 0x00
        _emit 0xb0
        _emit 0x01
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x32
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00439318
__declspec(naked) void gap_00439318(void)
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

// FUNCTION: PORT1111 0x00439320
__declspec(naked) unsigned int FUN_00439320(unsigned int param_1,void *param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x83
        _emit 0xf9
        _emit 0x02
        _emit 0x75
        _emit 0x0e
        _emit 0x8b
        _emit 0x40
        _emit 0x0c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x01
        _emit 0xb0
        _emit 0x01
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x83
        _emit 0xf9
        _emit 0x03
        _emit 0x75
        _emit 0x1c
        _emit 0x8b
        _emit 0x40
        _emit 0x0c
        _emit 0x83
        _emit 0x78
        _emit 0x08
        _emit 0x01
        _emit 0x75
        _emit 0x13
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x02
        _emit 0xdb
        _emit 0x40
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xb0
        _emit 0x01
        _emit 0xd9
        _emit 0x19
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x32
        _emit 0xc0
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x00439360
__declspec(naked) int __stdcall FUN_00439360(int param_1, void *param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0x78
        _emit 0x08
        _emit 0x03
        _emit 0x75
        _emit 0x1c
        _emit 0x8b
        _emit 0x40
        _emit 0x0c
        _emit 0x83
        _emit 0x78
        _emit 0x08
        _emit 0x01
        _emit 0x75
        _emit 0x13
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x89
        _emit 0x10
        _emit 0xb0
        _emit 0x01
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x32
        _emit 0xc0
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0043938b
__declspec(naked) void gap_0043938b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00439390
__declspec(naked) int FUN_00439390(int param_1,void *param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x12
        _emit 0x8b
        _emit 0x40
        _emit 0x0c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call FUN_00466a50
        _emit 0xb0
        _emit 0x01
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x83
        _emit 0xf9
        _emit 0x06
        _emit 0x75
        _emit 0x20
        _emit 0x8b
        _emit 0x40
        _emit 0x0c
        _emit 0x83
        _emit 0x78
        _emit 0x08
        _emit 0x01
        _emit 0x75
        _emit 0x17
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x11
        _emit 0x8b
        _emit 0x42
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call FUN_00466a50
        _emit 0xb0
        _emit 0x01
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x32
        _emit 0xc0
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x004393d7
__declspec(naked) void gap_004393d7(void)
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
    }
}

// FUNCTION: PORT1111 0x004393e0
__declspec(naked) int FUN_004393e0(int param_1,void *param_2)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7ce8
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x83
        _emit 0x7e
        _emit 0x08
        _emit 0x03
        _emit 0x75
        _emit 0x2b
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x83
        _emit 0x78
        _emit 0x08
        _emit 0x01
        _emit 0x75
        _emit 0x22
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x01
        _emit 0xb0
        _emit 0x01
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call FUN_00465cf0
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x06
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x52
        _emit 0xeb
        _emit 0x17
        _emit 0x83
        _emit 0xf8
        _emit 0x06
        _emit 0x75
        _emit 0x58
        _emit 0x8b
        _emit 0x76
        _emit 0x0c
        _emit 0x83
        _emit 0x7e
        _emit 0x08
        _emit 0x01
        _emit 0x75
        _emit 0x4f
        _emit 0x8b
        _emit 0x76
        _emit 0x04
        _emit 0x8b
        _emit 0x36
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        call FUN_00466a50
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x52
        mov ecx, OFFSET DAT_004e25f8
        call FUN_00437290
        _emit 0x84
        _emit 0xc0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x74
        _emit 0x25
        call FUN_00465e40
        _emit 0xb0
        _emit 0x01
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x32
        _emit 0xc0
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x004394cb
__declspec(naked) void gap_004394cb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
