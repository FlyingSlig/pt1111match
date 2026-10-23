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













// GAP: PORT1111 0x00439fc2
__declspec(naked) void gap_00439fc2(void)
{
    __asm {
        _emit 0x75
        _emit 0x4d
        _emit 0x00
        _emit 0x89
        _emit 0x55
        _emit 0x70
        _emit 0xe9
        _emit 0x83
        _emit 0xf5
        _emit 0xff
        _emit 0xff
        _emit 0x0f
        _emit 0xbf
        _emit 0x04
        _emit 0x55
        _emit 0x2c
        _emit 0x75
        _emit 0x4d
        _emit 0x00
        _emit 0x89
        _emit 0x45
        _emit 0x70
        _emit 0xe9
        _emit 0x73
        _emit 0xf5
        _emit 0xff
        _emit 0xff
        _emit 0x68
        _emit 0xcc
        _emit 0x02
        _emit 0x4c
        _emit 0x00
        _emit 0x68
        _emit 0xa8
        _emit 0x02
        _emit 0x4c
        _emit 0x00
        _emit 0x68
        _emit 0x70
        _emit 0xdb
        _emit 0x4d
        _emit 0x00
        _emit 0xe8
        _emit 0xdc
        _emit 0xe5
        _emit 0x05
        _emit 0x00
        push OFFSET DAT_004e21f0
        push OFFSET s_Last_Valid_Identifier___s_004c0288
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0xc8
        _emit 0xe5
        _emit 0x05
        _emit 0x00
        push OFFSET DAT_004e22f0
        push OFFSET s_Last_Valid_Parameter___s_004c026c
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0xb4
        _emit 0xe5
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x24
        _emit 0xb8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x09
        _emit 0x33
        _emit 0xc0
        _emit 0xeb
        _emit 0x05
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xa5
        _emit 0x2c
        _emit 0xfd
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x8d
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call pt_a_00497aa6
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x81
        _emit 0xc5
        _emit 0x18
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc3
        _emit 0x8b
        _emit 0xff
        _emit 0xa0
        _emit 0x9c
        _emit 0x43
        _emit 0x00
        _emit 0xd8
        _emit 0x9c
        _emit 0x43
        _emit 0x00
        _emit 0x1b
        _emit 0x9d
        _emit 0x43
        _emit 0x00
        _emit 0x5e
        _emit 0x9d
        _emit 0x43
        _emit 0x00
        _emit 0xac
        _emit 0x9d
        _emit 0x43
        _emit 0x00
        _emit 0xe3
        _emit 0x9d
        _emit 0x43
        _emit 0x00
        _emit 0xf3
        _emit 0x9d
        _emit 0x43
        _emit 0x00
        _emit 0x1c
        _emit 0x9f
        _emit 0x43
        _emit 0x00
        _emit 0x1c
        _emit 0x9f
        _emit 0x43
        _emit 0x00
        _emit 0x1c
        _emit 0x9f
        _emit 0x43
        _emit 0x00
        _emit 0xfd
        _emit 0x9d
        _emit 0x43
        _emit 0x00
        _emit 0x3e
        _emit 0x9e
        _emit 0x43
        _emit 0x00
        _emit 0x76
        _emit 0x9e
        _emit 0x43
        _emit 0x00
        _emit 0xaa
        _emit 0x9e
        _emit 0x43
        _emit 0x00
        _emit 0xdb
        _emit 0x9e
        _emit 0x43
        _emit 0x00
        _emit 0xe2
        _emit 0x9e
        _emit 0x43
        _emit 0x00
        _emit 0xef
        _emit 0x9e
        _emit 0x43
        _emit 0x00
        _emit 0xfc
        _emit 0x9e
        _emit 0x43
        _emit 0x00
        _emit 0x09
        _emit 0x9f
        _emit 0x43
        _emit 0x00
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

// FUNCTION: PORT1111 0x0043a0a0
__declspec(naked) int __cdecl FUN_0043a0a0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x69
        _emit 0xc0
        _emit 0xbe
        _emit 0x28
        _emit 0x00
        _emit 0x00
        _emit 0xc1
        _emit 0xf8
        _emit 0x08
        _emit 0x05
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xb6
        _emit 0xcc
        mov eax, dword ptr [ecx*4 + DAT_004d7a88]
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043a0bd
__declspec(naked) void gap_0043a0bd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0043a0c0
__declspec(naked) int __cdecl FUN_0043a0c0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x69
        _emit 0xc0
        _emit 0xbe
        _emit 0x28
        _emit 0x00
        _emit 0x00
        _emit 0xc1
        _emit 0xf8
        _emit 0x08
        _emit 0x05
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xb6
        _emit 0xcc
        mov eax, dword ptr [ecx*4 + DAT_004d7688]
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0043a0dd
__declspec(naked) void gap_0043a0dd(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
