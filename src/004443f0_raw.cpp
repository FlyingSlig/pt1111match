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
extern void * DAT_004e240c;
extern unsigned char DAT_004e2420[4];
extern unsigned char DAT_004e26f0[4];
extern int DAT_004e2404;
extern const unsigned char PTR_FUN_004c373c[4];
extern const unsigned char PTR_FUN_004c3740[4];
extern const unsigned char DAT_004c3760[4];
extern const unsigned char DAT_004c375c[4];
extern const unsigned char DAT_004c3724[4];
extern const unsigned char DAT_004c3720[4];
extern const unsigned char DAT_004c371c[4];
extern const unsigned char DAT_004c3718[4];
extern const unsigned char DAT_004c3714[4];
extern const unsigned char DAT_004c3710[4];
extern const unsigned char s_UNKNOWN_004c367c[8];
extern const unsigned char s__s__s__s_004c3750[12];
extern const unsigned char DAT_004c3744[12];
extern const unsigned char PTR_FUN_004c3764[4];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];





// FUNCTION: PORT1111 0x004443f0
__declspec(naked) int __fastcall FUN_004443f0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b81c8
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xec
        _emit 0x30
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0xe9
        _emit 0x57
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x89
        _emit 0x6c
        _emit 0x24
        _emit 0x18
        call FUN_0043e7a0
        _emit 0x33
        _emit 0xf6
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x48
        call FUN_00465cf0
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x50
        push OFFSET DAT_004c3760
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x4c
        _emit 0x01
        call FUN_00466a40
        _emit 0x8b
        _emit 0x4d
        _emit 0x18
        _emit 0x8b
        _emit 0x45
        _emit 0x0c
        _emit 0x8b
        _emit 0x19
        _emit 0x8b
        _emit 0x4d
        _emit 0x24
        _emit 0x8b
        _emit 0x09
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x50
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x0f
        _emit 0x84
        _emit 0xfa
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x50
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2c
        push OFFSET DAT_004c375c
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_00466fb0
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x4c
        _emit 0x02
        call FUN_00466a50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x48
        _emit 0x01
        call FUN_00465e40
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x50
        _emit 0x0f
        _emit 0xbe
        _emit 0x40
        _emit 0x08
        _emit 0x42
        _emit 0x83
        _emit 0xf8
        _emit 0x05
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x50
        _emit 0x77
        _emit 0x31
        jmp dword ptr [eax*4 + gap_004445da + 2]
        mov ebp, OFFSET DAT_004c3724
        _emit 0xeb
        _emit 0x28
        mov ebp, OFFSET DAT_004c3720
        _emit 0xeb
        _emit 0x21
        mov ebp, OFFSET DAT_004c371c
        _emit 0xeb
        _emit 0x1a
        mov ebp, OFFSET DAT_004c3718
        _emit 0xeb
        _emit 0x13
        mov ebp, OFFSET DAT_004c3714
        _emit 0xeb
        _emit 0x0c
        mov ebp, OFFSET DAT_004c3710
        _emit 0xeb
        _emit 0x05
        mov ebp, OFFSET s_UNKNOWN_004c367c
        _emit 0x8b
        _emit 0x4b
        _emit 0x08
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        call FUN_0043d6f0
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x50
        _emit 0x55
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x34
        call FUN_0043dc00
        _emit 0x50
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x20
        push OFFSET s__s__s__s_004c3750
        _emit 0x50
        call FUN_00466970
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_00466fd0
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x4c
        _emit 0x03
        call FUN_00466a50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x48
        _emit 0x01
        call FUN_00465e40
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x02
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x36
        _emit 0x8b
        _emit 0x1b
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0x71
        _emit 0x0c
        _emit 0x0f
        _emit 0x85
        _emit 0x0a
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0xe9
        _emit 0x8b
        _emit 0x55
        _emit 0x04
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x2c
        call FUN_0043dc00
        _emit 0x50
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x18
        push OFFSET DAT_004c3744
        _emit 0x50
        call FUN_00466970
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_00466fd0
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x4c
        _emit 0x04
        call FUN_00466a50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x48
        _emit 0x01
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x48
        _emit 0x00
        call FUN_00465e40
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x24
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x48
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_0043e6c0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x40
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x50
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x3c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
