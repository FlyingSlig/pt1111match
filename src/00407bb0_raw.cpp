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

extern unsigned char DAT_004e2683[];
extern "C" void free_thunk(void *);
extern unsigned char DAT_004e2408[4];
extern void * DAT_004e240c;





// FUNCTION: PORT1111 0x00407bb0
__declspec(naked) void __fastcall FUN_00407bb0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0041eb00
        _emit 0x83
        _emit 0xf8
        _emit 0x03
        _emit 0x77
        _emit 0x1e
        jmp dword ptr [eax*4 + gap_00407be3 + 1]
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x18
        _emit 0xeb
        _emit 0x0e
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x8b
        _emit 0xce
        call FUN_0041ebe0
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        _emit 0xff
        _emit 0x60
        _emit 0x0c
    }
}
