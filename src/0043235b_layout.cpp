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
extern void * DAT_004e2410;
extern int DAT_004bfbb0;











// GAP: PORT1111 0x0043235b
__declspec(naked) void gap_0043235b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00432360
__declspec(naked) bool __fastcall FUN_00432360(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x50
        _emit 0x8a
        _emit 0x90
        _emit 0x07
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x84
        _emit 0xd2
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x91
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xd2
        _emit 0x0f
        _emit 0x9f
        _emit 0xc0
        _emit 0xc3
        _emit 0x8b
        _emit 0x91
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xd2
        _emit 0x0f
        _emit 0x9f
        _emit 0xc0
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00432387
__declspec(naked) void gap_00432387(void)
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
    }
}

// FUNCTION: PORT1111 0x00432390
__declspec(naked) int __fastcall FUN_00432390(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x14
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x0e
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0xac
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x05
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x4e
        _emit 0x50
        _emit 0x8a
        _emit 0x91
        _emit 0x07
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x84
        _emit 0xd2
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x8e
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x06
        _emit 0x8b
        _emit 0x8e
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x8b
        _emit 0x4f
        _emit 0x40
        _emit 0x0f
        _emit 0x9f
        _emit 0xc0
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x26
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x41
        _emit 0x50
        _emit 0x8b
        _emit 0x80
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x2b
        _emit 0x81
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x2b
        _emit 0x81
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xed
        _emit 0x2b
        _emit 0x81
        _emit 0xd4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x84
        _emit 0xd2
        _emit 0x74
        _emit 0x43
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x0f
        _emit 0x8b
        _emit 0x8e
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x7e
        _emit 0x05
        _emit 0xbd
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8e
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xc1
        _emit 0x7c
        _emit 0x15
        _emit 0x8b
        _emit 0x47
        _emit 0x40
        _emit 0x01
        _emit 0x88
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x86
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x52
        _emit 0x8b
        _emit 0x4f
        _emit 0x40
        _emit 0x01
        _emit 0x81
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x29
        _emit 0x86
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x41
        _emit 0x85
        _emit 0xc0
        _emit 0x7e
        _emit 0x0f
        _emit 0x8b
        _emit 0x8e
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x7e
        _emit 0x05
        _emit 0xbd
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x8e
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xc1
        _emit 0x7c
        _emit 0x15
        _emit 0x8b
        _emit 0x47
        _emit 0x40
        _emit 0x01
        _emit 0x88
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x86
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x0f
        _emit 0x8b
        _emit 0x4f
        _emit 0x40
        _emit 0x01
        _emit 0x81
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x29
        _emit 0x86
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2410]
        call FUN_00454e60
        mov ecx, dword ptr [DAT_004e2410]
        call FUN_00455220
        _emit 0x85
        _emit 0xed
        _emit 0x5d
        _emit 0x74
        _emit 0x7f
        _emit 0x8b
        _emit 0x4f
        _emit 0x40
        _emit 0x8b
        _emit 0x89
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0xef
        _emit 0x03
        _emit 0x00
        _emit 0x00
        call FUN_00445030
        _emit 0x8b
        _emit 0x57
        _emit 0x40
        _emit 0x8b
        _emit 0x8a
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0xf6
        _emit 0x03
        _emit 0x00
        _emit 0x00
        call FUN_00445030
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0xef
        _emit 0x03
        _emit 0x00
        _emit 0x00
        call FUN_00445030
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0xf6
        _emit 0x03
        _emit 0x00
        _emit 0x00
        call FUN_00445030
        _emit 0x8b
        _emit 0x47
        _emit 0x40
        _emit 0x8b
        _emit 0x48
        _emit 0x3c
        _emit 0xf6
        _emit 0xc5
        _emit 0x04
        _emit 0x74
        _emit 0x2e
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x92
        _emit 0xcc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
        _emit 0x6a
        _emit 0xff
        _emit 0x6a
        _emit 0xff
        call FUN_00405ad0
        _emit 0x8b
        _emit 0x47
        _emit 0x40
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x00
        _emit 0x50
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


// GAP: PORT1111 0x00432531
__declspec(naked) void gap_00432531(void)
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
