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

extern unsigned char DAT_004d531c[];
extern unsigned char DAT_004d5318[4];
extern const unsigned char PTR_FUN_004bc804[20];
extern const unsigned char PTR_FUN_004bc984[80];
extern const unsigned char PTR_FUN_004bc96c[24];











// GAP: PORT1111 0x00403a28
__declspec(naked) void gap_00403a28(void)
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

// FUNCTION: PORT1111 0x00403a30
__declspec(naked) void __fastcall FUN_00403a30(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5868
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
        mov dword ptr [esi], OFFSET PTR_FUN_004bc96c
        push OFFSET FUN_00403a20
        _emit 0x6a
        _emit 0x05
        _emit 0x6a
        _emit 0x30
        _emit 0x8d
        _emit 0x86
        _emit 0xb0
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xe8
        _emit 0xfc
        _emit 0x41
        _emit 0x09
        _emit 0x00
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
        call FUN_004198a0
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
        _emit 0xc4
        _emit 0x10
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00403a8f
__declspec(naked) void gap_00403a8f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00403a90
__declspec(naked) void FUN_00403a90(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xe9
        _emit 0x33
        _emit 0xff
        mov esi, OFFSET DAT_004d5318
        _emit 0x83
        _emit 0x3e
        _emit 0x00
        _emit 0x74
        _emit 0x32
        _emit 0x8b
        _emit 0x46
        _emit 0xf8
        _emit 0x50
        _emit 0x8d
        _emit 0x4b
        _emit 0x04
        call FUN_004662f0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x06
        _emit 0x47
        _emit 0x83
        _emit 0xc6
        _emit 0x18
        _emit 0xeb
        _emit 0xe5
        _emit 0x8d
        _emit 0x04
        _emit 0x7f
        _emit 0xc1
        _emit 0xe0
        _emit 0x03
        mov ecx, dword ptr [eax + DAT_004d531c]
        _emit 0x53
        _emit 0x03
        _emit 0xcd
        _emit 0xff
        _emit 0x90
        _emit 0x18
        _emit 0x53
        _emit 0x4d
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0xcd
        call FUN_00417f40
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00403ae7
__declspec(naked) void gap_00403ae7(void)
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

// FUNCTION: PORT1111 0x00403af0
__declspec(naked) int * __fastcall FUN_00403af0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8d
        _emit 0x4e
        _emit 0x04
        mov dword ptr [esi], OFFSET PTR_FUN_004bc804
        call FUN_00465cf0
        _emit 0x33
        _emit 0xc0
        _emit 0xb9
        _emit 0xe7
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x4e
        _emit 0x10
        _emit 0x89
        _emit 0x4e
        _emit 0x14
        _emit 0xb9
        _emit 0x19
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0x89
        _emit 0x46
        _emit 0x24
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x89
        _emit 0x46
        _emit 0x2c
        mov dword ptr [esi], OFFSET PTR_FUN_004bc984
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x4e
        _emit 0x18
        _emit 0x89
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00403b39
__declspec(naked) void gap_00403b39(void)
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

// FUNCTION: PORT1111 0x00403b40
__declspec(naked) int * __fastcall FUN_00403b40(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5868
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
        call FUN_0041a3a0
        push OFFSET FUN_00403a20
        push OFFSET FUN_00403af0
        _emit 0x6a
        _emit 0x05
        _emit 0x6a
        _emit 0x30
        _emit 0x8d
        _emit 0x86
        _emit 0xb0
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [esi], OFFSET PTR_FUN_004bc96c
        _emit 0xe8
        _emit 0x42
        _emit 0x41
        _emit 0x09
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0xc6
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

// GAP: PORT1111 0x00403b9c
__declspec(naked) void gap_00403b9c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
