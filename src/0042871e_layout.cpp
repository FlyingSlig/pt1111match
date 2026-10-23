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












// GAP: PORT1111 0x0042871e
__declspec(naked) void gap_0042871e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00428720
__declspec(naked) void __fastcall FUN_00428720(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0xc7
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x71
        _emit 0x04
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xd2
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x2b
        _emit 0xd6
        _emit 0xc1
        _emit 0xfa
        _emit 0x02
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x2b
        _emit 0xc6
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xd0
        _emit 0x73
        _emit 0x10
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x89
        _emit 0x38
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0x5f
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        call FUN_00428530
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00428774
__declspec(naked) void gap_00428774(void)
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
    }
}

// FUNCTION: PORT1111 0x00428780
__declspec(naked) void __fastcall FUN_00428780(void *pthis,int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xc1
        _emit 0x5c
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x04
        _emit 0x85
        _emit 0xf6
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xd2
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x2b
        _emit 0xd6
        _emit 0xc1
        _emit 0xfa
        _emit 0x02
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x1f
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x2b
        _emit 0xc6
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xd0
        _emit 0x73
        _emit 0x13
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x10
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        call FUN_0041eeb0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004287ce
__declspec(naked) void gap_004287ce(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004287d0
__declspec(naked) void __fastcall FUN_004287d0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6f78
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
        _emit 0x8b
        _emit 0xf1
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x04
        mov dword ptr [esi], OFFSET PTR_LAB_004bf8b0
        _emit 0x8b
        _emit 0x46
        _emit 0x10
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
        _emit 0x50
        call free
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8a
        _emit 0x46
        _emit 0x34
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x30
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0xc7
        _emit 0x46
        _emit 0x30
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0b
        _emit 0x50
        mov ecx, OFFSET DAT_004e2074
        call FUN_00428720
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0b
        _emit 0x50
        mov ecx, OFFSET DAT_004e2064
        call FUN_00428720
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0b
        _emit 0x50
        mov ecx, OFFSET DAT_004e2084
        call FUN_00428720
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0b
        _emit 0x50
        mov ecx, OFFSET DAT_004e2094
        call FUN_00428720
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00424990
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
    }
}

// GAP: PORT1111 0x0042888a
__declspec(naked) void gap_0042888a(void)
{
    __asm {
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00428890
__declspec(naked) int __fastcall FUN_00428890(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x31
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call FUN_00426ba0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x23
        _emit 0x8b
        _emit 0x46
        _emit 0x20
        _emit 0x83
        _emit 0x38
        _emit 0x00
        _emit 0x75
        _emit 0x12
        _emit 0x50
        mov ecx, OFFSET DAT_004e2094
        call FUN_00428720
        _emit 0xc7
        _emit 0x46
        _emit 0x20
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004288d1
__declspec(naked) void gap_004288d1(void)
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

// FUNCTION: PORT1111 0x004288e0
__declspec(naked) int __fastcall FUN_004288e0(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x31
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call FUN_00426b50
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x23
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x83
        _emit 0x38
        _emit 0x00
        _emit 0x75
        _emit 0x12
        _emit 0x50
        mov ecx, OFFSET DAT_004e2064
        call FUN_00428720
        _emit 0xc7
        _emit 0x46
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00428921
__declspec(naked) void gap_00428921(void)
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

// FUNCTION: PORT1111 0x00428930
__declspec(naked) int __fastcall FUN_00428930(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x14
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x43
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call FUN_00426ba0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x35
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x83
        _emit 0x38
        _emit 0x00
        _emit 0x75
        _emit 0x12
        _emit 0x50
        mov ecx, OFFSET DAT_004e2074
        call FUN_00428720
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x56
        _emit 0x81
        _emit 0xc1
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00421240
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00428983
__declspec(naked) void gap_00428983(void)
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
    }
}

// FUNCTION: PORT1111 0x00428990
__declspec(naked) void __fastcall FUN_00428990(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x50
        call FUN_00426ba0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1a
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x83
        _emit 0x38
        _emit 0x00
        _emit 0x75
        _emit 0x12
        _emit 0x50
        mov ecx, OFFSET DAT_004e2084
        call FUN_00428720
        _emit 0xc7
        _emit 0x46
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004289c2
__declspec(naked) void gap_004289c2(void)
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
    }
}
