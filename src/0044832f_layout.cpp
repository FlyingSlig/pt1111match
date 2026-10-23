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
extern int DAT_004e2404;
extern void * DAT_004e2410;
extern const unsigned char s_DATA_Maps_004c3828[];
extern const unsigned char s_v1_12_004c3f70[];
extern const unsigned char DAT_004c3f78[];
extern const unsigned char DAT_004c3f7c[];
extern unsigned char DAT_004dc298[];
extern unsigned char DAT_004e0af0[];
extern unsigned char DAT_004e2414[];
extern unsigned char DAT_004e2418[];
extern unsigned char DAT_004e241c[];
extern unsigned char DAT_004e2420[];
extern unsigned char DAT_004e2430[];
extern unsigned char DAT_004e2438[];
extern unsigned char DAT_004e2440[];
extern unsigned char DAT_004e26e8[];
extern unsigned char DAT_004e27ec[];
extern unsigned char DAT_004e2b14[];
extern unsigned char DAT_004e2b20[];
extern int DAT_004c3f80;
extern unsigned char DAT_004e27e8[4];
extern unsigned char DAT_004e2687[17];
extern unsigned char DAT_004e2800[4];













// GAP: PORT1111 0x0044832f
__declspec(naked) void gap_0044832f(void)
{
    __asm {
        _emit 0x90
        _emit 0xe8
        _emit 0x82
        _emit 0x44
        _emit 0x00
        _emit 0x21
        _emit 0x82
        _emit 0x44
        _emit 0x00
        _emit 0x75
        _emit 0x81
        _emit 0x44
        _emit 0x00
        _emit 0x30
        _emit 0x80
        _emit 0x44
        _emit 0x00
        _emit 0xd9
        _emit 0x81
        _emit 0x44
        _emit 0x00
        _emit 0x00
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x01
        _emit 0x04
        _emit 0x04
        _emit 0x02
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x03
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

// FUNCTION: PORT1111 0x00448360
__declspec(naked) int * __fastcall FUN_00448360(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xf1
        call FUN_00480220
        mov dword ptr [esi], OFFSET DAT_004c3f80
        _emit 0xc7
        _emit 0x46
        _emit 0x38
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [DAT_004e27e8], 0
        _emit 0xc7
        _emit 0x46
        _emit 0x28
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x2c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00448399
__declspec(naked) void gap_00448399(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004483a0
__declspec(naked) void FUN_004483a0(void)
{
    __asm {
        mov al, byte ptr [DAT_004e2687]
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        mov ecx, dword ptr [DAT_004e2800]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x12
        _emit 0x6a
        _emit 0x01
        call FUN_0044c390
        mov ecx, dword ptr [DAT_004e2800]
        jmp FUN_0044bfb0
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004483c6
__declspec(naked) void gap_004483c6(void)
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
    }
}

// FUNCTION: PORT1111 0x004483d0
__declspec(naked) void __fastcall FUN_004483d0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x33
        _emit 0xf6
        _emit 0x3b
        _emit 0xce
        _emit 0x74
        _emit 0x0b
        call FUN_00412fa0
        mov ecx, dword ptr [DAT_004e240c]
        mov eax, dword ptr [DAT_004e2800]
        _emit 0x3b
        _emit 0xc6
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0xc8
        call FUN_0044c400
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x3b
        _emit 0xce
        mov dword ptr [DAT_004e0af0], 1
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        mov dword ptr [DAT_004e240c], esi
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x3b
        _emit 0xce
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        mov dword ptr [DAT_004e2404], esi
        mov ecx, dword ptr [DAT_004e241c]
        _emit 0x3b
        _emit 0xce
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        mov dword ptr [DAT_004e241c], esi
        mov ecx, dword ptr [DAT_004e2418]
        _emit 0x3b
        _emit 0xce
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        mov dword ptr [DAT_004e2418], esi
        mov ecx, dword ptr [DAT_004e2410]
        _emit 0x3b
        _emit 0xce
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        mov dword ptr [DAT_004e2410], esi
        mov ecx, dword ptr [DAT_004e2414]
        _emit 0x3b
        _emit 0xce
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        mov dword ptr [DAT_004e2414], esi
        mov ecx, dword ptr [DAT_004e2420]
        _emit 0x3b
        _emit 0xce
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        mov dword ptr [DAT_004e2420], esi
        mov ecx, OFFSET DAT_004e26e8
        call FUN_00423b90
        _emit 0x89
        _emit 0x77
        _emit 0x2c
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004484af
__declspec(naked) void gap_004484af(void)
{
    __asm {
        _emit 0xcc
    }
}
