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

extern const unsigned char DAT_004bd580[8];
extern const unsigned char DAT_004bd578[8];
extern void * DAT_004e240c;
extern int DAT_004bd588;












// FUNCTION: PORT1111 0x0040b960
__declspec(naked) void __fastcall FUN_0040b960(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call FUN_0040b530
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x47
        _emit 0x30
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x8d
        _emit 0x4e
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x10
        call FUN_0040b880
        _emit 0x89
        _emit 0x38
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040b988
__declspec(naked) void gap_0040b988(void)
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
    }
}

// FUNCTION: PORT1111 0x0040b990
__declspec(naked) int FUN_0040b990(void * pthis, int param_1, int param_2, int param_3, int param_4, int param_5)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x51
        _emit 0x10
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x41
        _emit 0x0c
        _emit 0x89
        _emit 0x71
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x51
        _emit 0x14
        _emit 0x5e
        _emit 0xb0
        _emit 0x01
        _emit 0x75
        _emit 0x04
        _emit 0x4a
        _emit 0x89
        _emit 0x51
        _emit 0x14
        _emit 0xc2
        _emit 0x14
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040b9c2
__declspec(naked) void gap_0040b9c2(void)
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

// FUNCTION: PORT1111 0x0040b9d0
__declspec(naked) void __fastcall FUN_0040b9d0(int param_1)
{
    __asm {
        _emit 0xdb
        _emit 0x41
        _emit 0x10
        _emit 0x8b
        _emit 0x41
        _emit 0x44
        _emit 0x8b
        _emit 0x51
        _emit 0x0c
        _emit 0x40
        _emit 0x85
        _emit 0xd2
        _emit 0xd9
        _emit 0xc0
        _emit 0xdc
        _emit 0x41
        _emit 0x38
        _emit 0x89
        _emit 0x41
        _emit 0x44
        _emit 0xdd
        _emit 0x51
        _emit 0x38
        _emit 0x75
        _emit 0x0d
        _emit 0x3b
        _emit 0x41
        _emit 0x48
        _emit 0x75
        _emit 0x08
        _emit 0xd8
        _emit 0xc1
        _emit 0xdd
        _emit 0x59
        _emit 0x38
        _emit 0xdd
        _emit 0xd8
        _emit 0xc3
        _emit 0xdd
        _emit 0xd8
        _emit 0xdd
        _emit 0xd8
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040b9fb
__declspec(naked) void gap_0040b9fb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040ba00
__declspec(naked) int __fastcall FUN_0040ba00(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0xdd
        _emit 0x46
        _emit 0x38
        _emit 0xe8
        _emit 0x7d
        _emit 0xc3
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x56
        _emit 0x28
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x03
        _emit 0xc2
        _emit 0x03
        _emit 0xc1
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040ba17
__declspec(naked) void gap_0040ba17(void)
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

// FUNCTION: PORT1111 0x0040ba20
__declspec(naked) int __fastcall FUN_0040ba20(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x51
        _emit 0x20
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x0c
        _emit 0x85
        _emit 0xf6
        _emit 0x89
        _emit 0x41
        _emit 0x28
        _emit 0x8b
        _emit 0x41
        _emit 0x10
        _emit 0x57
        _emit 0x75
        _emit 0x0f
        _emit 0x8b
        _emit 0xf8
        _emit 0x0f
        _emit 0xaf
        _emit 0xfa
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0xeb
        _emit 0x0e
        _emit 0x8d
        _emit 0x7a
        _emit 0xff
        _emit 0x0f
        _emit 0xaf
        _emit 0xf8
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x85
        _emit 0xff
        _emit 0x7d
        _emit 0x06
        fadd qword ptr [DAT_004bd580]
        _emit 0xf6
        _emit 0xc2
        _emit 0x01
        _emit 0xdd
        _emit 0x59
        _emit 0x30
        _emit 0xdd
        _emit 0x41
        _emit 0x30
        _emit 0xc7
        _emit 0x41
        _emit 0x44
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        fmul qword ptr [DAT_004bd578]
        _emit 0xd9
        _emit 0xe0
        _emit 0xdd
        _emit 0x59
        _emit 0x38
        _emit 0x75
        _emit 0x0d
        _emit 0x8b
        _emit 0x41
        _emit 0x28
        _emit 0xd1
        _emit 0xea
        _emit 0x5f
        _emit 0x89
        _emit 0x51
        _emit 0x48
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x42
        _emit 0xd1
        _emit 0xea
        _emit 0x85
        _emit 0xf6
        _emit 0x89
        _emit 0x51
        _emit 0x48
        _emit 0x75
        _emit 0x0a
        _emit 0x99
        _emit 0x2b
        _emit 0xc2
        _emit 0xd1
        _emit 0xf8
        _emit 0xf7
        _emit 0xd8
        _emit 0x89
        _emit 0x41
        _emit 0x28
        _emit 0x8b
        _emit 0x41
        _emit 0x28
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040baa3
__declspec(naked) void gap_0040baa3(void)
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

// FUNCTION: PORT1111 0x0040bab0
__declspec(naked) int __fastcall FUN_0040bab0(void *pthis,int param_1)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xec
        _emit 0x83
        _emit 0xe4
        _emit 0xf8
        _emit 0x51
        _emit 0x8b
        _emit 0x45
        _emit 0x08
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_0040ba20
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x8b
        _emit 0x08
        _emit 0x3b
        _emit 0xc8
        _emit 0x89
        _emit 0x4e
        _emit 0x40
        _emit 0x0f
        _emit 0x84
        _emit 0xa7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x09
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x52
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf8
        _emit 0x85
        _emit 0xff
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x40
        _emit 0x8b
        _emit 0x4e
        _emit 0x24
        _emit 0x8b
        _emit 0x51
        _emit 0x30
        _emit 0x8b
        _emit 0x07
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x8b
        _emit 0x07
        _emit 0x6a
        _emit 0x02
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x3c
        _emit 0xdd
        _emit 0x46
        _emit 0x38
        _emit 0x8b
        _emit 0x1f
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x8b
        _emit 0x7e
        _emit 0x28
        _emit 0x03
        _emit 0xfa
        _emit 0xe8
        _emit 0x63
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x03
        _emit 0xf8
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x53
        _emit 0x34
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x17
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x38
        _emit 0xdb
        _emit 0x46
        _emit 0x10
        _emit 0x8b
        _emit 0x56
        _emit 0x44
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x42
        _emit 0x85
        _emit 0xc9
        _emit 0xd9
        _emit 0xc0
        _emit 0xdc
        _emit 0x46
        _emit 0x38
        _emit 0x89
        _emit 0x56
        _emit 0x44
        _emit 0x8b
        _emit 0xc2
        _emit 0xdd
        _emit 0x56
        _emit 0x38
        _emit 0x75
        _emit 0x0c
        _emit 0x3b
        _emit 0x46
        _emit 0x48
        _emit 0x75
        _emit 0x07
        _emit 0xd8
        _emit 0xc1
        _emit 0xdd
        _emit 0x5e
        _emit 0x38
        _emit 0xeb
        _emit 0x02
        _emit 0xdd
        _emit 0xd8
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0xdd
        _emit 0xd8
        _emit 0x8b
        _emit 0x11
        _emit 0x89
        _emit 0x56
        _emit 0x40
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0xc2
        _emit 0x3b
        _emit 0xc1
        _emit 0x0f
        _emit 0x85
        _emit 0x64
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x46
        _emit 0x28
    }
}

// GAP: PORT1111 0x0040bb7f
__declspec(naked) void gap_0040bb7f(void)
{
    __asm {
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x8b
        _emit 0xe5
        _emit 0x5d
        _emit 0xc2
        _emit 0x04
        _emit 0x00
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

// FUNCTION: PORT1111 0x0040bb90
__declspec(naked) int * __fastcall FUN_0040bb90(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8d
        _emit 0x7e
        _emit 0x18
        _emit 0x8b
        _emit 0xcf
        mov dword ptr [esi], OFFSET DAT_004bd588
        call FUN_0043d220
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x47
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x40
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040bbb4
__declspec(naked) void gap_0040bbb4(void)
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
