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

extern const unsigned char PTR_FUN_004c676c[12];
extern const unsigned char PTR_CloseHandle_004bc150[4];
extern const unsigned char PTR_CreateEventA_004bc098[4];
extern const unsigned char PTR_InitializeCriticalSection_004bc12c[4];
extern const unsigned char PTR_FUN_004c6778[16];
extern const unsigned char PTR_FUN_004bfcdc[12];
extern const unsigned char PTR_DeleteCriticalSection_004bc128[4];
extern const unsigned char PTR_LAB_004bfcd0[12];
extern const unsigned char PTR_FUN_004c376c[4];











// GAP: PORT1111 0x0047fd24
__declspec(naked) void gap_0047fd24(void)
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

// FUNCTION: PORT1111 0x0047fd30
__declspec(naked) bool __fastcall FUN_0047fd30(void *pthis,DWORD param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x08
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x51
        _emit 0x50
        call dword ptr [WaitForSingleObject]
        _emit 0xf7
        _emit 0xd8
        _emit 0x1b
        _emit 0xc0
        _emit 0x40
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047fd53
__declspec(naked) void gap_0047fd53(void)
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

// FUNCTION: PORT1111 0x0047fd60
__declspec(naked) void __fastcall FUN_0047fd60(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x03
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x51
        _emit 0x50
        call dword ptr [SetThreadPriority]
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047fd79
__declspec(naked) void gap_0047fd79(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047fd90
__declspec(naked) void __fastcall FUN_0047fd90(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x3b
        _emit 0x41
        _emit 0x04
        _emit 0x74
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0047fda4
__declspec(naked) void gap_0047fda4(void)
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

// FUNCTION: PORT1111 0x0047fdb0
__declspec(naked) void __fastcall FUN_0047fdb0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        mov dword ptr [esi], OFFSET PTR_FUN_004c676c
        _emit 0x74
        _emit 0x0e
        _emit 0x50
        call dword ptr [CloseHandle]
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x0047fdd0
__declspec(naked) bool __fastcall FUN_0047fdd0(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xf7
        _emit 0xd9
        _emit 0x8d
        _emit 0x46
        _emit 0x08
        _emit 0x50
        _emit 0x1b
        _emit 0xc9
        _emit 0x83
        _emit 0xe1
        _emit 0x04
        _emit 0x51
        _emit 0x56
        push OFFSET gap_0047fd79 + 7
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0xe8
        _emit 0xbd
        _emit 0x93
        _emit 0x01
        _emit 0x00
        _emit 0x33
        _emit 0xd2
        _emit 0x83
        _emit 0xc4
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x95
        _emit 0xc2
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x5e
        _emit 0x8b
        _emit 0xc2
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0047fe12
__declspec(naked) void gap_0047fe12(void)
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

// FUNCTION: PORT1111 0x0047fe20
__declspec(naked) int * __fastcall FUN_0047fe20(void *pthis,unsigned char param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        mov dword ptr [esi], OFFSET PTR_FUN_004c676c
        _emit 0x74
        _emit 0x0e
        _emit 0x50
        call dword ptr [CloseHandle]
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x01
        _emit 0x74
        _emit 0x09
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
    }
}


// GAP: PORT1111 0x0047fe51
__declspec(naked) void gap_0047fe51(void)
{
    __asm {
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0047fe60
__declspec(naked) void __fastcall FUN_0047fe60(void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xc3
        _emit 0x57
        _emit 0x74
        _emit 0x1f
        _emit 0x39
        _emit 0x5e
        _emit 0x58
        _emit 0x75
        _emit 0x1d
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x50
        call dword ptr [SetEvent]
        _emit 0x6a
        _emit 0xff
        _emit 0x8b
        _emit 0xce
        call FUN_0047fd30
        _emit 0x8b
        _emit 0xce
        call FUN_0047fce0
        _emit 0x39
        _emit 0x5e
        _emit 0x58
        mov edi, dword ptr [CloseHandle]
        _emit 0x75
        _emit 0x0a
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x06
        _emit 0x50
        _emit 0xff
        _emit 0xd7
        _emit 0x89
        _emit 0x5e
        _emit 0x10
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x06
        _emit 0x50
        _emit 0xff
        _emit 0xd7
        _emit 0x89
        _emit 0x5e
        _emit 0x14
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x3b
        _emit 0xc3
        _emit 0x74
        _emit 0x06
        _emit 0x50
        _emit 0xff
        _emit 0xd7
        _emit 0x89
        _emit 0x5e
        _emit 0x18
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0047fec3
__declspec(naked) void gap_0047fec3(void)
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

// FUNCTION: PORT1111 0x0047fed0
__declspec(naked) bool __fastcall FUN_0047fed0(void *pthis,int param_1,HANDLE param_2)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x56
        _emit 0x57
        mov edi, dword ptr [CreateEventA]
        _emit 0x8b
        _emit 0xf1
        _emit 0x75
        _emit 0x13
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0xd7
        _emit 0xc7
        _emit 0x46
        _emit 0x58
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x07
        _emit 0xc7
        _emit 0x46
        _emit 0x58
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0xff
        _emit 0xd7
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x74
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0xd7
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x75
        _emit 0x07
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0047fdd0
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047ff39
__declspec(naked) void gap_0047ff39(void)
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

// FUNCTION: PORT1111 0x0047ff40
__declspec(naked) void __fastcall FUN_0047ff40(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x38
        _emit 0x8d
        _emit 0x77
        _emit 0x38
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x16
        _emit 0x89
        _emit 0x4f
        _emit 0x54
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0047ff62
__declspec(naked) void gap_0047ff62(void)
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
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x83
        _emit 0xc1
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x05
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x60
        _emit 0x04
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x62
        _emit 0x08
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

// FUNCTION: PORT1111 0x0047ff90
__declspec(naked) int * __fastcall FUN_0047ff90(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call FUN_0047fcc0
        mov edi, dword ptr [InitializeCriticalSection]
        _emit 0x8d
        _emit 0x46
        _emit 0x20
        mov dword ptr [esi], OFFSET PTR_FUN_004c6778
        _emit 0x50
        mov dword ptr [esi + 0x1c], OFFSET PTR_FUN_004bfcdc
        _emit 0xff
        _emit 0xd7
        _emit 0x8d
        _emit 0x4e
        _emit 0x3c
        _emit 0x51
        mov dword ptr [esi + 0x38], OFFSET PTR_FUN_004bfcdc
        _emit 0xff
        _emit 0xd7
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x89
        _emit 0x46
        _emit 0x58
        _emit 0x89
        _emit 0x46
        _emit 0x54
        _emit 0x89
        _emit 0x46
        _emit 0x5c
        _emit 0x89
        _emit 0x46
        _emit 0x64
        _emit 0x5f
        _emit 0xc7
        _emit 0x46
        _emit 0x60
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x0047ffe2
__declspec(naked) void gap_0047ffe2(void)
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

// FUNCTION: PORT1111 0x0047fff0
__declspec(naked) void __fastcall FUN_0047fff0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004ba60e
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
        _emit 0x57
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        mov dword ptr [esi], OFFSET PTR_FUN_004c6778
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0047fe60
        mov edi, dword ptr [DeleteCriticalSection]
        _emit 0x8d
        _emit 0x46
        _emit 0x3c
        _emit 0x50
        mov dword ptr [esi + 0x38], OFFSET PTR_FUN_004bfcdc
        _emit 0xff
        _emit 0xd7
        _emit 0x8d
        _emit 0x4e
        _emit 0x20
        mov dword ptr [esi + 0x38], OFFSET PTR_LAB_004bfcd0
        _emit 0x51
        mov dword ptr [esi + 0x1c], OFFSET PTR_FUN_004bfcdc
        _emit 0xff
        _emit 0xd7
        _emit 0x8b
        _emit 0xce
        mov dword ptr [esi + 0x1c], OFFSET PTR_LAB_004bfcd0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_0047fdb0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
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

// GAP: PORT1111 0x0048006f
__declspec(naked) void gap_0048006f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00480070
__declspec(naked) int __fastcall FUN_00480070(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x06
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x50
        call dword ptr [SetEvent]
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x6a
        _emit 0xff
        _emit 0x51
        call dword ptr [WaitForSingleObject]
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x004800a7
__declspec(naked) void gap_004800a7(void)
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
