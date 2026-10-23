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

extern const unsigned char s_list_T__too_long_004bce98[];
extern void * DAT_004e240c;
extern const unsigned char DAT_004c36f8[8];
extern const unsigned char s_verdade_004c36f0[8];
extern const unsigned char s_FALSE_004c36e8[8];
extern const unsigned char s_falso_004c36e0[8];
extern const unsigned char DAT_004c36d8[8];
extern const unsigned char DAT_004c36d0[8];
extern const unsigned char DAT_004c36cc[4];
extern const unsigned char s_baixo_004c36c4[8];
extern const unsigned char DAT_004c36bc[8];
extern const unsigned char DAT_004c36b4[8];
extern const unsigned char s_EMPTY_004c36ac[8];
extern const unsigned char s_vazio_004c36a4[8];
extern const unsigned char s_MEDIUM_004c369c[8];
extern const unsigned char DAT_004c3694[8];
extern const unsigned char DAT_004c368c[8];
extern const unsigned char DAT_004c3684[8];
extern const unsigned char s_UNKNOWN_004c367c[8];





// FUNCTION: PORT1111 0x0043d6f0
__declspec(naked) char * FUN_0043d6f0(int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x05
        _emit 0x30
        _emit 0xf8
        _emit 0xff
        _emit 0xff
        _emit 0x83
        _emit 0xf8
        _emit 0x08
        _emit 0x0f
        _emit 0x87
        _emit 0xb7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        jmp dword ptr [eax*4 + gap_0043d7c1 + 3]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        mov eax, OFFSET DAT_004c36f8
        _emit 0x0f
        _emit 0x85
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, OFFSET s_verdade_004c36f0
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        mov eax, OFFSET s_FALSE_004c36e8
        _emit 0x0f
        _emit 0x85
        _emit 0x8b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, OFFSET s_falso_004c36e0
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        mov eax, OFFSET DAT_004c36d8
        _emit 0x75
        _emit 0x76
        mov eax, OFFSET DAT_004c36d0
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        mov eax, OFFSET DAT_004c36cc
        _emit 0x75
        _emit 0x61
        mov eax, OFFSET s_baixo_004c36c4
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        mov eax, OFFSET DAT_004c36bc
        _emit 0x75
        _emit 0x4c
        mov eax, OFFSET DAT_004c36b4
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        mov eax, OFFSET s_EMPTY_004c36ac
        _emit 0x75
        _emit 0x37
        mov eax, OFFSET s_vazio_004c36a4
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        mov eax, OFFSET s_MEDIUM_004c369c
        _emit 0x75
        _emit 0x22
        mov eax, OFFSET DAT_004c3694
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        mov eax, OFFSET DAT_004c368c
        _emit 0x75
        _emit 0x0d
        mov eax, OFFSET DAT_004c3684
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        mov eax, OFFSET s_UNKNOWN_004c367c
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}
