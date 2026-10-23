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
extern "C" void free_thunk(void *);
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





// FUNCTION: PORT1111 0x004394d0
__declspec(naked) int FUN_004394d0(void)
{
    __asm {
        _emit 0x55
        _emit 0x8d
        _emit 0xac
        _emit 0x24
        _emit 0xe8
        _emit 0xfd
        _emit 0xff
        _emit 0xff
        _emit 0x81
        _emit 0xec
        _emit 0xe0
        _emit 0x04
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004ddb0c]
        _emit 0x89
        _emit 0x85
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x8d
        _emit 0x85
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x33
        _emit 0xf6
        _emit 0x89
        _emit 0x45
        _emit 0x6c
        cmp dword ptr [DAT_004e31d0], esi
        _emit 0x8d
        _emit 0x8d
        _emit 0x38
        _emit 0xfd
        _emit 0xff
        _emit 0xff
        _emit 0x57
        _emit 0x89
        _emit 0x75
        _emit 0x60
        _emit 0x89
        _emit 0x4d
        _emit 0x5c
        _emit 0xc7
        _emit 0x45
        _emit 0x68
        _emit 0xc8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x12
        push OFFSET s_Starting_parse_004c0458
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0xac
        _emit 0xf0
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8d
        _emit 0xbd
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x75
        _emit 0x7c
        mov dword ptr [DAT_004e31d8], esi
        mov dword ptr [DAT_004e31d4], 0xfffffffe
        _emit 0x83
        _emit 0xef
        _emit 0x02
        _emit 0x8d
        _emit 0x9d
        _emit 0x38
        _emit 0xfd
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x75
        _emit 0x70
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x66
        _emit 0x8b
        _emit 0x55
        _emit 0x70
        _emit 0x8b
        _emit 0x45
        _emit 0x6c
        _emit 0x8b
        _emit 0x4d
        _emit 0x68
        _emit 0x83
        _emit 0xc7
        _emit 0x02
        _emit 0x66
        _emit 0x89
        _emit 0x17
        _emit 0x8d
        _emit 0x54
        _emit 0x48
        _emit 0xfe
        _emit 0x3b
        _emit 0xfa
        _emit 0x89
        _emit 0x7d
        _emit 0x74
        _emit 0x0f
        _emit 0x82
        _emit 0xd4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x75
        _emit 0x6c
        _emit 0x8b
        _emit 0x45
        _emit 0x5c
        _emit 0x2b
        _emit 0xfe
        _emit 0xd1
        _emit 0xff
        _emit 0x89
        _emit 0x45
        _emit 0x78
        _emit 0x47
        _emit 0x8b
        _emit 0xc1
        _emit 0x3d
        _emit 0x10
        _emit 0x27
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xdf
        _emit 0x0f
        _emit 0x8d
        _emit 0x51
        _emit 0x0a
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0xc0
        _emit 0x3d
        _emit 0x10
        _emit 0x27
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x45
        _emit 0x68
        _emit 0x7e
        _emit 0x07
        _emit 0xc7
        _emit 0x45
        _emit 0x68
        _emit 0x10
        _emit 0x27
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x45
        _emit 0x68
        _emit 0x03
        _emit 0xc0
        _emit 0x83
        _emit 0xc0
        _emit 0x03
        _emit 0x83
        _emit 0xe0
        _emit 0xfc
        call pt_a_00499080
        _emit 0x8d
        _emit 0x3c
        _emit 0x1b
        _emit 0x85
        _emit 0xff
        _emit 0x8b
        _emit 0xcc
        _emit 0x89
        _emit 0x4d
        _emit 0x6c
        _emit 0x8b
        _emit 0xc6
        _emit 0x7e
        _emit 0x0d
        _emit 0x2b
        _emit 0xce
        _emit 0x8b
        _emit 0xf7
        _emit 0x8a
        _emit 0x10
        _emit 0x88
        _emit 0x14
        _emit 0x01
        _emit 0x40
        _emit 0x4e
        _emit 0x75
        _emit 0xf7
        _emit 0x8b
        _emit 0x45
        _emit 0x68
        _emit 0xc1
        _emit 0xe0
        _emit 0x02
        _emit 0x83
        _emit 0xc0
        _emit 0x03
        _emit 0x83
        _emit 0xe0
        _emit 0xfc
        call pt_a_00499080
        _emit 0x8b
        _emit 0x4d
        _emit 0x78
        _emit 0x8d
        _emit 0x04
        _emit 0x9d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xf4
        _emit 0x89
        _emit 0x75
        _emit 0x5c
        _emit 0x7e
        _emit 0x16
        _emit 0x8b
        _emit 0xd6
        _emit 0x2b
        _emit 0xd1
        _emit 0x89
        _emit 0x45
        _emit 0x78
        _emit 0x8a
        _emit 0x19
        _emit 0x88
        _emit 0x1c
        _emit 0x11
        _emit 0x8b
        _emit 0x5d
        _emit 0x78
        _emit 0x41
        _emit 0x4b
        _emit 0x89
        _emit 0x5d
        _emit 0x78
        _emit 0x75
        _emit 0xf1
        _emit 0x8b
        _emit 0x4d
        _emit 0x6c
        _emit 0x8d
        _emit 0x5c
        _emit 0x30
        _emit 0xfc
        mov eax, dword ptr [DAT_004e31d0]
        _emit 0x85
        _emit 0xc0
        _emit 0x8d
        _emit 0x7c
        _emit 0x0f
        _emit 0xfe
        _emit 0x89
        _emit 0x7d
        _emit 0x74
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x55
        _emit 0x68
        _emit 0x52
        push OFFSET s_Stack_size_increased_to__d_004c043c
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x9f
        _emit 0xef
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x8b
        _emit 0x45
        _emit 0x6c
        _emit 0x8b
        _emit 0x4d
        _emit 0x68
        _emit 0x8d
        _emit 0x54
        _emit 0x48
        _emit 0xfe
        _emit 0x3b
        _emit 0xfa
        _emit 0x0f
        _emit 0x83
        _emit 0xe4
        _emit 0x09
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e31d0]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x45
        _emit 0x70
        _emit 0x50
        push OFFSET s_Entering_state__d_004c0428
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x6e
        _emit 0xef
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x8b
        _emit 0x45
        _emit 0x70
        lea eax, [eax*2 + DAT_004d7568]
        _emit 0x89
        _emit 0x45
        _emit 0x78
        _emit 0x0f
        _emit 0xbf
        _emit 0x00
        _emit 0x89
        _emit 0x85
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3d
        _emit 0x00
        _emit 0x80
        _emit 0xff
        _emit 0xff
        mov eax, dword ptr [DAT_004e31d4]
        _emit 0x0f
        _emit 0x84
        _emit 0x24
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xf8
        _emit 0xfe
        _emit 0x75
        _emit 0x25
        mov eax, dword ptr [DAT_004e31d0]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x12
        push OFFSET s_Reading_a_token__004c0414
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x28
        _emit 0xef
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        call FUN_00436130
        mov dword ptr [DAT_004e31d4], eax
        _emit 0x85
        _emit 0xc0
        _emit 0x7f
        _emit 0x2a
        mov ecx, dword ptr [DAT_004e31d0]
        _emit 0x33
        _emit 0xf6
        _emit 0x33
        _emit 0xc0
        _emit 0x85
        _emit 0xc9
        _emit 0x89
        _emit 0x75
        _emit 0x60
        mov dword ptr [DAT_004e31d4], eax
        _emit 0x74
        _emit 0x65
        push OFFSET s_Now_at_end_of_input__004c03fc
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0xf2
        _emit 0xee
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xeb
        _emit 0x4c
        _emit 0x3d
        _emit 0x09
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x77
        _emit 0x09
        movsx esi, byte ptr [eax + DAT_004d7218]
        _emit 0xeb
        _emit 0x05
        _emit 0xbe
        _emit 0x1b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e31d0]
        _emit 0x85
        _emit 0xc9
        _emit 0x89
        _emit 0x75
        _emit 0x60
        _emit 0x74
        _emit 0x2f
        mov ecx, dword ptr [esi*4 + PTR_DAT_004d7428]
        _emit 0x51
        _emit 0x50
        push OFFSET s_Next_token_is__d___s_004c03e4
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0xb3
        _emit 0xee
        _emit 0x05
        _emit 0x00
        push OFFSET DAT_004c03e0
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0xa4
        _emit 0xee
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        mov eax, dword ptr [DAT_004e31d4]
        _emit 0x8b
        _emit 0x8d
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0xce
        _emit 0x0f
        _emit 0x88
        _emit 0x6d
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xf9
        _emit 0x29
        _emit 0x0f
        _emit 0x8f
        _emit 0x64
        _emit 0x01
        _emit 0x00
        _emit 0x00
        movsx edx, word ptr [ecx*2 + DAT_004d7630]
        _emit 0x3b
        _emit 0xd6
        _emit 0x0f
        _emit 0x85
        _emit 0x54
        _emit 0x01
        _emit 0x00
        _emit 0x00
        movsx esi, word ptr [ecx*2 + DAT_004d75d8]
        _emit 0x85
        _emit 0xf6
        _emit 0x0f
        _emit 0x8d
        _emit 0xe0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x81
        _emit 0xfe
        _emit 0x00
        _emit 0x80
        _emit 0xff
        _emit 0xff
        _emit 0x0f
        _emit 0x84
        _emit 0x51
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xf7
        _emit 0xde
        _emit 0x89
        _emit 0xb5
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        movsx eax, word ptr [esi*2 + DAT_004d74c8]
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x45
        _emit 0x78
        _emit 0x7e
        _emit 0x11
        _emit 0x8d
        _emit 0x14
        _emit 0x85
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc3
        _emit 0x2b
        _emit 0xc2
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x89
        _emit 0x4d
        _emit 0x58
        mov eax, dword ptr [DAT_004e31d0]
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        movsx edx, word ptr [esi*2 + DAT_004d73f4]
        _emit 0x52
        _emit 0x56
        push OFFSET s_Reducing_via_rule__d__line__d___004c03bc
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x0b
        _emit 0xee
        _emit 0x05
        _emit 0x00
        movsx eax, word ptr [esi*2 + DAT_004d7324]
        lea ecx, [eax*2 + DAT_004d7358]
        _emit 0x66
        _emit 0x8b
        _emit 0x01
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0x66
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x34
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0xff
        _emit 0x0f
        _emit 0xbf
        _emit 0xc0
        mov ecx, dword ptr [eax*4 + PTR_DAT_004d7428]
        _emit 0x51
        push OFFSET DAT_004c03b8
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0xd3
        _emit 0xed
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc6
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x66
        _emit 0x8b
        _emit 0x06
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x66
        _emit 0x85
        _emit 0xc0
        _emit 0x7f
        _emit 0xd6
        _emit 0x8b
        _emit 0xb5
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        movsx edx, word ptr [esi*2 + DAT_004d7498]
        mov eax, dword ptr [edx*4 + PTR_DAT_004d7428]
        _emit 0x50
        push OFFSET s_____s_004c03b0
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x9e
        _emit 0xed
        _emit 0x05
        _emit 0x00
        _emit 0x8b
        _emit 0x7d
        _emit 0x74
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x8d
        _emit 0x46
        _emit 0xfb
        _emit 0x83
        _emit 0xf8
        _emit 0x12
        _emit 0x0f
        _emit 0x87
        _emit 0xdb
        _emit 0x06
        _emit 0x00
        _emit 0x00
        jmp dword ptr [eax*4 + gap_00439fc2 + 138]
        _emit 0x74
        _emit 0x7b
        _emit 0x83
        _emit 0xfe
        _emit 0x2a
        _emit 0x0f
        _emit 0x84
        _emit 0xd0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e31d0]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x23
        _emit 0x8b
        _emit 0x4d
        _emit 0x60
        mov edx, dword ptr [ecx*4 + PTR_DAT_004d7428]
        _emit 0x52
        _emit 0x50
        push OFFSET s_Shifting_token__d___s___004c0394
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x55
        _emit 0xed
        _emit 0x05
        _emit 0x00
        mov eax, dword ptr [DAT_004e31d4]
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        mov dword ptr [DAT_004e31d4], 0xfffffffe
        mov eax, dword ptr [DAT_004e31cc]
        _emit 0x83
        _emit 0xc3
        _emit 0x04
        _emit 0x89
        _emit 0x03
        _emit 0x8b
        _emit 0x45
        _emit 0x7c
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xa3
        _emit 0xfc
        _emit 0xff
        _emit 0xff
        _emit 0x48
        _emit 0x89
        _emit 0x45
        _emit 0x7c
        _emit 0xe9
        _emit 0x9a
        _emit 0xfc
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x4d
        _emit 0x70
        movsx esi, word ptr [ecx*2 + DAT_004d74f8]
        _emit 0x85
        _emit 0xf6
        _emit 0x89
        _emit 0xb5
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x85
        _emit 0xb7
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x4d
        _emit 0x7c
        _emit 0x33
        _emit 0xf6
        _emit 0x3b
        _emit 0xce
        _emit 0x0f
        _emit 0x85
        _emit 0x86
        _emit 0x02
        _emit 0x00
        _emit 0x00
        inc dword ptr [DAT_004e31d8]
        _emit 0x8b
        _emit 0x55
        _emit 0x78
        _emit 0x0f
        _emit 0xbf
        _emit 0x02
        _emit 0x3d
        _emit 0x00
        _emit 0x80
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x85
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x8e
        _emit 0x28
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xf8
        _emit 0x29
        _emit 0x0f
        _emit 0x8d
        _emit 0x1f
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xc6
        _emit 0x89
        _emit 0x75
        _emit 0x7c
        _emit 0x0f
        _emit 0x8d
        _emit 0xbe
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0xf7
        _emit 0xd9
        _emit 0x83
        _emit 0xf9
        _emit 0x1c
        _emit 0x73
        _emit 0x43
        _emit 0x03
        _emit 0xc1
        lea edx, [eax*2 + DAT_004d7630]
        _emit 0x89
        _emit 0x55
        _emit 0x64
        _emit 0x8b
        _emit 0x45
        _emit 0x64
        _emit 0x0f
        _emit 0xbf
        _emit 0x10
        _emit 0x3b
        _emit 0xd1
        _emit 0x75
        _emit 0x1e
        mov eax, dword ptr [ecx*4 + PTR_DAT_004d7428]
        _emit 0x8d
        _emit 0x78
        _emit 0x01
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8a
        _emit 0x10
        _emit 0x40
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc7
        _emit 0x8d
        _emit 0x74
        _emit 0x06
        _emit 0x0f
        _emit 0xff
        _emit 0x45
        _emit 0x7c
        _emit 0x8b
        _emit 0x55
        _emit 0x64
        _emit 0x41
        _emit 0x83
        _emit 0xc2
        _emit 0x02
        _emit 0x83
        _emit 0xf9
        _emit 0x1c
        _emit 0x89
        _emit 0x55
        _emit 0x64
        _emit 0x72
        _emit 0xc9
        _emit 0x83
        _emit 0xc6
        _emit 0x0f
        _emit 0x56
        call malloc
        _emit 0x8b
        _emit 0xf8
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xff
        _emit 0x89
        _emit 0x7d
        _emit 0x64
        _emit 0x0f
        _emit 0x84
        _emit 0x6b
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [s_parse_error_004c0388]
        _emit 0x89
        _emit 0x08
        mov edx, dword ptr [s_e_error_004c0388_4]
        _emit 0x89
        _emit 0x50
        _emit 0x04
        mov ecx, dword ptr [s_ror_004c0388_8]
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x83
        _emit 0x7d
        _emit 0x7c
        _emit 0x05
        _emit 0x0f
        _emit 0x8d
        _emit 0xef
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x85
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xd2
        _emit 0x3b
        _emit 0xc2
        _emit 0x89
        _emit 0x55
        _emit 0x7c
        _emit 0x0f
        _emit 0x8d
        _emit 0x29
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xd0
        _emit 0xf7
        _emit 0xda
        _emit 0x83
        _emit 0xfa
        _emit 0x1c
        _emit 0x89
        _emit 0x95
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x83
        _emit 0xc9
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0xc2
        lea ecx, [eax*2 + DAT_004d7630]
        _emit 0x89
        _emit 0x4d
        _emit 0x78
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x45
        _emit 0x78
        _emit 0x0f
        _emit 0xbf
        _emit 0x08
        _emit 0x3b
        _emit 0xca
        _emit 0x0f
        _emit 0x85
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x45
        _emit 0x7c
        _emit 0x85
        _emit 0xc0
        mov eax, OFFSET s___expecting___004c0378
        _emit 0x74
        _emit 0x05
        mov eax, OFFSET DAT_004c0370
        _emit 0x8b
        _emit 0xf0
        _emit 0x8a
        _emit 0x08
        _emit 0x40
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf9
        _emit 0x2b
        _emit 0xc6
        _emit 0x4f
        _emit 0xeb
        _emit 0x03
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8a
        _emit 0x4f
        _emit 0x01
        _emit 0x47
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf8
        _emit 0x8b
        _emit 0xc8
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0xc8
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xa4
        mov eax, dword ptr [edx*4 + PTR_DAT_004d7428]
        _emit 0x8b
        _emit 0xc8
        _emit 0x90
        _emit 0x8a
        _emit 0x10
        _emit 0x40
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0xf9
        _emit 0x8b
        _emit 0x7d
        _emit 0x64
        _emit 0x2b
        _emit 0xc1
        _emit 0x8b
        _emit 0xf1
        _emit 0x4f
        _emit 0x90
        _emit 0x8a
        _emit 0x4f
        _emit 0x01
        _emit 0x47
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0xf8
        _emit 0x8b
        _emit 0xc8
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0xc8
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xa4
        _emit 0x8b
        _emit 0x7d
        _emit 0x64
        _emit 0x4f
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8a
        _emit 0x47
        _emit 0x01
        _emit 0x47
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0xf8
        _emit 0x8b
        _emit 0x45
        _emit 0x7c
        mov dx, word ptr [DAT_004c036c]
        _emit 0x66
        _emit 0x89
        _emit 0x17
        _emit 0x8b
        _emit 0x7d
        _emit 0x64
        _emit 0x8b
        _emit 0x95
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x40
        _emit 0x89
        _emit 0x45
        _emit 0x7c
        _emit 0x8b
        _emit 0x4d
        _emit 0x78
        _emit 0x42
        _emit 0x83
        _emit 0xc1
        _emit 0x02
        _emit 0x83
        _emit 0xfa
        _emit 0x1c
        _emit 0x89
        _emit 0x95
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x4d
        _emit 0x78
        _emit 0x0f
        _emit 0x82
        _emit 0x45
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x57
        push OFFSET s____________ERRO________________s_004c02a8
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x42
        _emit 0xeb
        _emit 0x05
        _emit 0x00
        push OFFSET DAT_004e21f0
        push OFFSET s_Last_Valid_Identifier___s_004c0288
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x2e
        _emit 0xeb
        _emit 0x05
        _emit 0x00
        push OFFSET DAT_004e22f0
        push OFFSET s_Last_Valid_Parameter___s_004c026c
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x1a
        _emit 0xeb
        _emit 0x05
        _emit 0x00
        _emit 0x57
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x28
        _emit 0xe9
        _emit 0xd4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc9
        _emit 0xe9
        _emit 0x44
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x95
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xe9
        _emit 0xdf
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        push OFFSET s_parse_error__also_virtual_memory_004c0340
        push OFFSET s____________ERRO________________s_004c02a8
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0xe6
        _emit 0xea
        _emit 0x05
        _emit 0x00
        push OFFSET DAT_004e21f0
        push OFFSET s_Last_Valid_Identifier___s_004c0288
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0xd2
        _emit 0xea
        _emit 0x05
        _emit 0x00
        push OFFSET DAT_004e22f0
        push OFFSET s_Last_Valid_Parameter___s_004c026c
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0xbe
        _emit 0xea
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x24
        _emit 0xe9
        _emit 0x7e
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push OFFSET s_parse_error_004c0388
        push OFFSET s____________ERRO________________s_004c02a8
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0xa2
        _emit 0xea
        _emit 0x05
        _emit 0x00
        push OFFSET DAT_004e21f0
        push OFFSET s_Last_Valid_Identifier___s_004c0288
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x8e
        _emit 0xea
        _emit 0x05
        _emit 0x00
        push OFFSET DAT_004e22f0
        push OFFSET s_Last_Valid_Parameter___s_004c026c
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x7a
        _emit 0xea
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x24
        _emit 0xeb
        _emit 0x3d
        _emit 0x83
        _emit 0xf9
        _emit 0x03
        _emit 0x75
        _emit 0x38
        _emit 0x3b
        _emit 0xc6
        _emit 0x0f
        _emit 0x84
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x00
        cmp dword ptr [DAT_004e31d0], esi
        _emit 0x74
        _emit 0x1e
        _emit 0x8b
        _emit 0x4d
        _emit 0x60
        mov edx, dword ptr [ecx*4 + PTR_DAT_004d7428]
        _emit 0x52
        _emit 0x50
        push OFFSET s_Discarding_token__d___s___004c0324
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x45
        _emit 0xea
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        mov dword ptr [DAT_004e31d4], 0xfffffffe
        _emit 0xc7
        _emit 0x45
        _emit 0x7c
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8b
        _emit 0x45
        _emit 0x70
        movsx eax, word ptr [eax*2 + DAT_004d7568]
        _emit 0x3d
        _emit 0x00
        _emit 0x80
        _emit 0xff
        _emit 0xff
        _emit 0x74
        _emit 0x3d
        _emit 0x40
        _emit 0x78
        _emit 0x3a
        _emit 0x83
        _emit 0xf8
        _emit 0x29
        _emit 0x7f
        _emit 0x35
        cmp word ptr [eax*2 + DAT_004d7630], 1
        _emit 0x75
        _emit 0x2a
        movsx esi, word ptr [eax*2 + DAT_004d75d8]
        _emit 0x85
        _emit 0xf6
        _emit 0x7d
        _emit 0x18
        _emit 0x81
        _emit 0xfe
        _emit 0x00
        _emit 0x80
        _emit 0xff
        _emit 0xff
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x7d
        _emit 0x74
        _emit 0xf7
        _emit 0xde
        _emit 0x89
        _emit 0xb5
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xe9
        _emit 0x93
        _emit 0xfb
        _emit 0xff
        _emit 0xff
        _emit 0x0f
        _emit 0x85
        _emit 0x7a
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4d
        _emit 0x6c
        _emit 0x8b
        _emit 0x45
        _emit 0x74
        _emit 0x3b
        _emit 0xc1
        _emit 0x0f
        _emit 0x84
        _emit 0x2a
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xbf
        _emit 0x50
        _emit 0xfe
        _emit 0x83
        _emit 0xe8
        _emit 0x02
        _emit 0x89
        _emit 0x45
        _emit 0x74
        mov eax, dword ptr [DAT_004e31d0]
        _emit 0x83
        _emit 0xeb
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x55
        _emit 0x70
        _emit 0x74
        _emit 0x8a
        _emit 0x8b
        _emit 0xf1
        push OFFSET s_Error__state_stack_now_004c030c
        push OFFSET DAT_004ddb70
        _emit 0x83
        _emit 0xc6
        _emit 0xfe
        _emit 0xe8
        _emit 0xa3
        _emit 0xe9
        _emit 0x05
        _emit 0x00
        _emit 0x8b
        _emit 0x7d
        _emit 0x74
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x3b
        _emit 0xf7
        _emit 0x74
        _emit 0x1e
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x02
        _emit 0x83
        _emit 0xc6
        _emit 0x02
        _emit 0x50
        push OFFSET DAT_004bf680
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x82
        _emit 0xe9
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x3b
        _emit 0xf7
        _emit 0x75
        _emit 0xe2
        push OFFSET DAT_004bf69c
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x6c
        _emit 0xe9
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xe9
        _emit 0x37
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x83
        _emit 0xfe
        _emit 0x2a
        _emit 0x0f
        _emit 0x84
        _emit 0xb1
        _emit 0x03
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e31d0]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x12
        push OFFSET s_Shifting_error_token__004c02f4
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x43
        _emit 0xe9
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        mov ecx, dword ptr [DAT_004e31cc]
        _emit 0x8b
        _emit 0x7d
        _emit 0x74
        _emit 0x83
        _emit 0xc3
        _emit 0x04
        _emit 0x89
        _emit 0x0b
        _emit 0xe9
        _emit 0xa6
        _emit 0xf8
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x4b
        _emit 0xfc
        _emit 0x68
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        push OFFSET DAT_004e21f0
        call strncpy
        _emit 0x6a
        _emit 0x00
        mov byte ptr [DAT_004e22ef], 0
        _emit 0x8b
        _emit 0x53
        _emit 0xfc
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        call FUN_00438300
        _emit 0x8b
        _emit 0x43
        _emit 0xfc
        _emit 0x50
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x1c
        _emit 0xe9
        _emit 0x44
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4b
        _emit 0xfc
        _emit 0x68
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        push OFFSET DAT_004e21f0
        call strncpy
        mov byte ptr [DAT_004e22ef], 0
        _emit 0x8b
        _emit 0x53
        _emit 0xfc
        _emit 0x8b
        _emit 0x43
        _emit 0xf8
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        _emit 0x50
        call FUN_00438300
        _emit 0x8b
        _emit 0x4b
        _emit 0xf8
        _emit 0x51
        call free
        _emit 0x8b
        _emit 0x53
        _emit 0xfc
        _emit 0x52
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xe9
        _emit 0x01
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x43
        _emit 0xf4
        _emit 0x68
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        push OFFSET DAT_004e21f0
        call strncpy
        mov byte ptr [DAT_004e22ef], 0
        _emit 0x8b
        _emit 0x4b
        _emit 0xfc
        _emit 0x8b
        _emit 0x53
        _emit 0xf4
        _emit 0x51
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        call FUN_00438300
        _emit 0x8b
        _emit 0x43
        _emit 0xf4
        _emit 0x50
        call free
        _emit 0x8b
        _emit 0x4b
        _emit 0xfc
        _emit 0x51
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x20
        _emit 0xe9
        _emit 0xbe
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x53
        _emit 0xf4
        _emit 0x68
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        push OFFSET DAT_004e21f0
        call strncpy
        mov byte ptr [DAT_004e22ef], 0
        _emit 0x8b
        _emit 0x43
        _emit 0xfc
        _emit 0x8b
        _emit 0x4b
        _emit 0xf4
        _emit 0x8b
        _emit 0x53
        _emit 0xf0
        _emit 0x50
        _emit 0x51
        _emit 0x52
        call FUN_00438300
        _emit 0x8b
        _emit 0x43
        _emit 0xf0
        _emit 0x50
        call free
        _emit 0x8b
        _emit 0x4b
        _emit 0xf4
        _emit 0x51
        call free
        _emit 0x8b
        _emit 0x53
        _emit 0xfc
        _emit 0x52
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x24
        _emit 0xe9
        _emit 0x70
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x43
        _emit 0xfc
        _emit 0x68
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        push OFFSET DAT_004e21f0
        call strncpy
        mov byte ptr [DAT_004e22ef], 0
        _emit 0x8b
        _emit 0x0b
        _emit 0x8b
        _emit 0x53
        _emit 0xfc
        _emit 0x51
        _emit 0x52
        call FUN_00438ea0
        _emit 0x8b
        _emit 0x43
        _emit 0xfc
        _emit 0x50
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0xe9
        _emit 0x39
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x0b
        _emit 0x51
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xe9
        _emit 0x29
        _emit 0x01
        _emit 0x00
        _emit 0x00
        call FUN_00438340
        _emit 0xe9
        _emit 0x1f
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x53
        _emit 0xfc
        _emit 0x8b
        _emit 0x43
        _emit 0xf4
        _emit 0x52
        _emit 0x50
        call FUN_004387f0
        _emit 0x8b
        _emit 0x4b
        _emit 0xf4
        _emit 0x68
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        push OFFSET DAT_004e22f0
        call strncpy
        mov byte ptr [DAT_004e23ef], 0
        _emit 0x8b
        _emit 0x53
        _emit 0xf4
        _emit 0x52
        call free
        _emit 0x8b
        _emit 0x43
        _emit 0xfc
        _emit 0x50
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x1c
        _emit 0xe9
        _emit 0xde
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4b
        _emit 0xf4
        _emit 0x68
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        push OFFSET DAT_004e22f0
        call strncpy
        mov byte ptr [DAT_004e23ef], 0
        _emit 0x8b
        _emit 0x53
        _emit 0xfc
        _emit 0x8b
        _emit 0x43
        _emit 0xf4
        _emit 0x52
        _emit 0x50
        call FUN_00438810
        _emit 0x8b
        _emit 0x4b
        _emit 0xf4
        _emit 0x51
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0xe9
        _emit 0xa6
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x53
        _emit 0xf4
        _emit 0x68
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        push OFFSET DAT_004e22f0
        call strncpy
        mov byte ptr [DAT_004e23ef], 0
        _emit 0x8b
        _emit 0x43
        _emit 0xf4
        _emit 0x50
        call FUN_00438830
        _emit 0x8b
        _emit 0x4b
        _emit 0xf4
        _emit 0x51
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0xe9
        _emit 0x72
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x53
        _emit 0xf4
        _emit 0x68
        _emit 0xff
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        push OFFSET DAT_004e22f0
        call strncpy
        mov byte ptr [DAT_004e23ef], 0
        _emit 0x8b
        _emit 0x43
        _emit 0xf4
        _emit 0x50
        call FUN_00438830
        _emit 0x8b
        _emit 0x4b
        _emit 0xf4
        _emit 0x51
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0xeb
        _emit 0x41
        call FUN_004387e0
        _emit 0xeb
        _emit 0x3a
        _emit 0x8b
        _emit 0x13
        _emit 0x52
        call FUN_00438320
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xeb
        _emit 0x2d
        _emit 0x8b
        _emit 0x03
        _emit 0x50
        call FUN_00438320
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xeb
        _emit 0x20
        _emit 0x8b
        _emit 0x0b
        _emit 0x51
        call FUN_00438330
        _emit 0x8b
        _emit 0x13
        _emit 0x52
        _emit 0xeb
        _emit 0x0b
        _emit 0x8b
        _emit 0x03
        _emit 0x50
        call FUN_00438330
        _emit 0x8b
        _emit 0x0b
        _emit 0x51
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0x45
        _emit 0x78
        _emit 0x8b
        _emit 0xd0
        _emit 0xf7
        _emit 0xd8
        _emit 0x8d
        _emit 0x3c
        _emit 0x47
        mov eax, dword ptr [DAT_004e31d0]
        _emit 0xf7
        _emit 0xda
        _emit 0x85
        _emit 0xc0
        _emit 0x8d
        _emit 0x1c
        _emit 0x93
        _emit 0x89
        _emit 0x7d
        _emit 0x74
        _emit 0x74
        _emit 0x55
        _emit 0x8b
        _emit 0x75
        _emit 0x6c
        push OFFSET s_state_stack_now_004c02e4
        push OFFSET DAT_004ddb70
        _emit 0x83
        _emit 0xc6
        _emit 0xfe
        _emit 0xe8
        _emit 0x81
        _emit 0xe6
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x3b
        _emit 0xf7
        _emit 0x74
        _emit 0x1e
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x02
        _emit 0x83
        _emit 0xc6
        _emit 0x02
        _emit 0x50
        push OFFSET DAT_004bf680
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x63
        _emit 0xe6
        _emit 0x05
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x3b
        _emit 0xf7
        _emit 0x75
        _emit 0xe2
        push OFFSET DAT_004bf69c
        push OFFSET DAT_004ddb70
        _emit 0xe8
        _emit 0x4d
        _emit 0xe6
        _emit 0x05
        _emit 0x00
        _emit 0x8b
        _emit 0x7d
        _emit 0x74
        _emit 0x8b
        _emit 0xb5
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x8b
        _emit 0x4d
        _emit 0x58
        _emit 0x83
        _emit 0xc3
        _emit 0x04
        _emit 0x89
        _emit 0x0b
        movsx edx, word ptr [esi*2 + DAT_004d7498]
        _emit 0x66
        _emit 0x8b
        _emit 0x0f
        movsx eax, word ptr [edx*2 + DAT_004d759c]
        _emit 0x0f
        _emit 0xbf
        _emit 0xf1
        _emit 0x03
        _emit 0xc6
        _emit 0x78
        _emit 0x1f
        _emit 0x83
        _emit 0xf8
        _emit 0x29
        _emit 0x7f
        _emit 0x1a
        cmp word ptr [eax*2 + DAT_004d7630], cx
        _emit 0x75
        _emit 0x10
        _emit 0x0f
        _emit 0xbf
        _emit 0x14
        _emit 0x45
        _emit 0xd8
    }
}
