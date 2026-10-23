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





// FUNCTION: PORT1111 0x00453150
__declspec(naked) void __fastcall FUN_00453150(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00413490
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x83
        _emit 0xe8
        _emit 0x00
        _emit 0x74
        _emit 0x67
        _emit 0x48
        _emit 0x74
        _emit 0x07
        _emit 0xba
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x35
        mov eax, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x88
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        call FUN_00453b70
        _emit 0xf6
        _emit 0x40
        _emit 0x3c
        _emit 0x08
        _emit 0x74
        _emit 0x1a
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        call FUN_004056a0
        _emit 0x85
        _emit 0xc0
        _emit 0xba
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x05
        _emit 0xba
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0x8d
        _emit 0x4e
        _emit 0x08
        _emit 0x74
        _emit 0x06
        _emit 0x0f
        _emit 0xb7
        _emit 0x40
        _emit 0x1c
        _emit 0xeb
        _emit 0x03
        _emit 0x83
        _emit 0xc8
        _emit 0xff
        _emit 0x3b
        _emit 0xc2
        _emit 0x74
        _emit 0x06
        _emit 0x52
        call FUN_00487cd0
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        call FUN_00452c30
        _emit 0x5e
        _emit 0xc3
        _emit 0x8d
        _emit 0x4e
        _emit 0x08
        _emit 0x5e
        jmp FUN_00487c40
    }
}
