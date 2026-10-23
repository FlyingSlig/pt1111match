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

extern unsigned char DAT_004e0864[];
extern void * DAT_004e240c;
extern const unsigned char PTR_FUN_004bfd88[24];













// FUNCTION: PORT1111 0x00434e40
__declspec(naked) int __fastcall FUN_00434e40(int param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b7966
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
        _emit 0x0f
        _emit 0x84
        _emit 0xc3
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x7c
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0xb8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x51
        _emit 0x8b
        _emit 0x86
        _emit 0xc4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x86
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x84
        _emit 0x9f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x60
        _emit 0x8b
        _emit 0x48
        _emit 0x1c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0x56
        _emit 0xff
        _emit 0x50
        _emit 0x10
        _emit 0x6a
        _emit 0x18
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x5b
        _emit 0x8b
        _emit 0x7f
        _emit 0x14
        _emit 0x6a
        _emit 0x01
        _emit 0x57
        _emit 0x6a
        _emit 0x14
        _emit 0x8b
        _emit 0xc8
        call FUN_0045c3e0
        _emit 0xeb
        _emit 0x4c
        mov eax, dword ptr [DAT_004e0864]
        _emit 0x40
        mov dword ptr [DAT_004e0864], eax
        _emit 0x89
        _emit 0x86
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x60
        _emit 0x8b
        _emit 0x48
        _emit 0x1c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0x56
        _emit 0xff
        _emit 0x50
        _emit 0x10
        _emit 0x6a
        _emit 0x18
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x7f
        _emit 0x14
        _emit 0x6a
        _emit 0x00
        _emit 0x57
        _emit 0x6a
        _emit 0x14
        _emit 0x8b
        _emit 0xc8
        call FUN_0045c3e0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x8b
        _emit 0x49
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
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

// GAP: PORT1111 0x00434f4c
__declspec(naked) void gap_00434f4c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0x51
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_004146a0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x01
        _emit 0xc3
        _emit 0x8b
        _emit 0x10
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xc8
        _emit 0xff
        _emit 0x12
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
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
