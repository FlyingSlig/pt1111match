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
extern const unsigned char PTR_LAB_004bf8b0[4];
extern unsigned char DAT_004e2074[16];
extern unsigned char DAT_004e2064[16];
extern unsigned char DAT_004e2084[16];
extern unsigned char DAT_004e2094[36];
extern unsigned char DAT_004e205c[4];
extern unsigned char DAT_004e2050[4];
extern unsigned char DAT_004e2060[4];
extern unsigned char DAT_004e2058[4];
extern int DAT_004e2404;
extern unsigned char DAT_004e264c[4];
extern unsigned char DAT_004e2648[4];
extern unsigned char DAT_004e2644[4];
extern unsigned char DAT_004e2640[4];
extern unsigned char DAT_004e265c[20];
extern unsigned char DAT_004e2658[4];
extern unsigned char DAT_004e2654[4];
extern unsigned char DAT_004e2650[4];
extern volatile int DAT_004e2c30;
extern volatile int DAT_004e2c34;




// FUNCTION: PORT1111 0x004293f0
__declspec(naked) int __fastcall FUN_004293f0(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b70b1
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
        _emit 0x51
        _emit 0x56
        _emit 0x6a
        _emit 0x7c
        _emit 0x8b
        _emit 0xf1
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0042ced0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x8e
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x96
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x8b
        _emit 0x8e
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x8b
        _emit 0x56
        _emit 0x7c
        _emit 0x51
        _emit 0x52
        _emit 0x56
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x46
        _emit 0x10
        call FUN_0042cf20
        _emit 0x6a
        _emit 0x7c
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0042ced0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x8e
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        add ecx, dword ptr [DAT_004e264c]
        _emit 0x8b
        _emit 0x96
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        add edx, dword ptr [DAT_004e2648]
        mov ecx, dword ptr [DAT_004e2644]
        _emit 0x52
        mov edx, dword ptr [DAT_004e2640]
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x52
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_0042cf20
        _emit 0x6a
        _emit 0x7c
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0042ced0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x86
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov edx, dword ptr [DAT_004e265c]
        mov ecx, dword ptr [DAT_004e2658]
        _emit 0x52
        mov edx, dword ptr [DAT_004e2654]
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2650]
        _emit 0x52
        mov edx, dword ptr [DAT_004e2404]
        _emit 0x51
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_0042cf60
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
    }
}
