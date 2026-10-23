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

extern const unsigned char s_cursor_d_bmp_004bc3b0[];
extern unsigned char DAT_004e2b14[12];





// FUNCTION: PORT1111 0x00401230
__declspec(naked) void __fastcall FUN_00401230(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x54
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0e
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call FUN_004656e0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0xb8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xc7
        _emit 0x0f
        _emit 0x84
        _emit 0xa7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x47
        _emit 0xff
        _emit 0x83
        _emit 0xf8
        _emit 0x67
        _emit 0x0f
        _emit 0x87
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        movzx ecx, byte ptr [eax + gap_0040130f + 25]
        jmp dword ptr [ecx*4 + gap_0040130f + 1]
        _emit 0x8b
        _emit 0x56
        _emit 0x20
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x52
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0x4a
        _emit 0x5c
        call FUN_004010b0
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x44
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x8b
        _emit 0x56
        _emit 0x3c
        _emit 0xeb
        _emit 0x4d
        _emit 0x8b
        _emit 0x4e
        _emit 0x50
        _emit 0x8b
        _emit 0x56
        _emit 0x4c
        _emit 0x8b
        _emit 0x46
        _emit 0x48
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x49
        _emit 0x5c
        _emit 0x52
        _emit 0x50
        call FUN_004010b0
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x56
        _emit 0x2c
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x52
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0x4a
        _emit 0x5c
        call FUN_004010b0
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x38
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x56
        _emit 0x30
        _emit 0x50
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x51
        _emit 0x8b
        _emit 0x48
        _emit 0x5c
        _emit 0x52
        call FUN_004010b0
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
