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

extern char * sub;

extern int DAT_004e25f8;
extern const unsigned char PTR_FUN_004c3b98[];
extern const unsigned char s_GenerateWorldObjSharedData___004c3b9c[];
extern const unsigned char s_SoureRLA_d_gbf_004c3bbc[];
extern const unsigned char s_progressbar_png_004c3bcc[];
extern unsigned char DAT_004dd964[];
extern unsigned char DAT_004e2687[];
extern unsigned char DAT_004e27dc[];
extern unsigned char DAT_004e27e0[];
extern unsigned char DAT_004e2800[];
extern unsigned char DAT_004e2afc[];
extern unsigned char DAT_004e2b14[];
extern unsigned char DAT_004e2b20[];
extern const unsigned char PTR_FUN_004c3be0[168];
extern const unsigned char s_Overlay_Callback_Object_004c3cb0[24];
extern const unsigned char PTR_LAB_004c3ca0[16];
extern const unsigned char PTR_LAB_004c3c88[24];
extern unsigned char DAT_004e27e4[4];





// GAP: PORT1111 0x004469d7
__declspec(naked) void gap_004469d7(void)
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x40
        _emit 0xf8
        _emit 0x8b
        _emit 0x08
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xff
        _emit 0x21
        _emit 0xcc
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x40
        _emit 0xf8
        _emit 0x8b
        _emit 0x08
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xff
        _emit 0x61
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_00446a20
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x01
        _emit 0x74
        _emit 0x09
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
    }
}
