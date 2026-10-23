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





// FUNCTION: PORT1111 0x0042d310
__declspec(naked) int __fastcall FUN_0042d310(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x6c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x3c
        _emit 0x8b
        _emit 0x56
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x2b
        _emit 0xca
        _emit 0x2b
        _emit 0x46
        _emit 0x14
        _emit 0xc1
        _emit 0xf9
        _emit 0x05
        _emit 0xc1
        _emit 0xf8
        _emit 0x04
        _emit 0x0f
        _emit 0xaf
        _emit 0xc1
        _emit 0x8d
        _emit 0x14
        _emit 0x85
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x48
        _emit 0x01
        _emit 0x52
        _emit 0x89
        _emit 0x4e
        _emit 0x78
        _emit 0xe8
        _emit 0x04
        _emit 0x9d
        _emit 0x06
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x46
        _emit 0x6c
        call FUN_0042d2c0
        _emit 0x8b
        _emit 0x46
        _emit 0x6c
        _emit 0x5e
        _emit 0xc3
        mov eax, dword ptr [DAT_004e2c30]
        _emit 0x39
        _emit 0x46
        _emit 0x70
        _emit 0x75
        _emit 0x12
        mov ecx, dword ptr [DAT_004e2c34]
        _emit 0x39
        _emit 0x4e
        _emit 0x74
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0x46
        _emit 0x54
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0xce
        call FUN_0042d2c0
        _emit 0x8b
        _emit 0x46
        _emit 0x6c
        _emit 0x5e
        _emit 0xc3
    }
}
