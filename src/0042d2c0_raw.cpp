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

extern const unsigned char DAT_004bd610[];
extern "C" void free_thunk(void *);
extern int DAT_004e2404;
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e21b0[4];
extern unsigned char DAT_004e26f0[4];
extern const unsigned char PTR_FUN_004bf990[4];
extern volatile int DAT_004e2c30;
extern volatile int DAT_004e2c34;
extern int DAT_004bf994;





// FUNCTION: PORT1111 0x0042d2c0
__declspec(naked) void __fastcall FUN_0042d2c0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call FUN_0042cfe0
        _emit 0x8b
        _emit 0xce
        call FUN_0042d150
        _emit 0x33
        _emit 0xff
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x4e
        _emit 0x6c
        _emit 0x89
        _emit 0x04
        _emit 0xb9
        _emit 0x8b
        _emit 0xce
        call FUN_0042d150
        _emit 0x47
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0xee
        _emit 0x8b
        _emit 0x56
        _emit 0x6c
        _emit 0xc7
        _emit 0x04
        _emit 0xba
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x4f
        _emit 0x89
        _emit 0x7e
        _emit 0x68
        mov eax, dword ptr [DAT_004e2c30]
        _emit 0x89
        _emit 0x46
        _emit 0x70
        mov ecx, dword ptr [DAT_004e2c34]
        _emit 0x5f
        _emit 0x89
        _emit 0x4e
        _emit 0x74
        _emit 0x5e
        _emit 0xc3
    }
}
