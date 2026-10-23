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

extern unsigned char DAT_004e2b14[];
extern void * DAT_004e240c;
extern const unsigned char DAT_004c4654[4];
extern unsigned char DAT_004e2810[4];
extern unsigned char DAT_004e2814[4];
extern const unsigned char DAT_004bd2c8[1];
extern int DAT_004c4658;





// FUNCTION: PORT1111 0x00452a50
__declspec(naked) int __cdecl FUN_00452a50(int param_1,int param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x41
        _emit 0x50
        _emit 0x8b
        _emit 0x90
        _emit 0x6c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x8d
        _emit 0x14
        _emit 0xb2
        _emit 0x8b
        _emit 0x12
        _emit 0x4a
        _emit 0x83
        _emit 0xfa
        _emit 0x08
        _emit 0x5e
        _emit 0x77
        _emit 0x36
        jmp dword ptr [edx*4 + gap_00452aa8]
        _emit 0x8b
        _emit 0x80
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x8b
        _emit 0x80
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x8b
        _emit 0x80
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x8b
        _emit 0x81
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x8b
        _emit 0x81
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        jmp FUN_00412730
        _emit 0x8b
        _emit 0x81
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0xc3
    }
}
