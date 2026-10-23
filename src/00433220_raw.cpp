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

extern void * DAT_004e240c;
extern int DAT_004bfca0;





// FUNCTION: PORT1111 0x00433220
__declspec(naked) int __fastcall FUN_00433220(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x03
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x47
        _emit 0x14
        _emit 0x89
        _emit 0x86
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x7f
        _emit 0x14
        _emit 0x83
        _emit 0xff
        _emit 0x03
        _emit 0x77
        _emit 0x2c
        jmp dword ptr [edi*4 + gap_0043329a + 2]
        _emit 0x68
        _emit 0x10
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x13
        _emit 0x68
        _emit 0x11
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x0c
        _emit 0x68
        _emit 0x12
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x05
        _emit 0x68
        _emit 0x13
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00445030
        _emit 0x6a
        _emit 0xff
        _emit 0x6a
        _emit 0xff
        _emit 0x8b
        _emit 0xce
        call FUN_00405ad0
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x00
        _emit 0x56
        call FUN_004137d0
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}
