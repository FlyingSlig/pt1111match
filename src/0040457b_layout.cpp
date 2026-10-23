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

extern unsigned char DAT_004e23f0[];
extern unsigned char DAT_004e2428[];
extern void * DAT_004e240c;
extern unsigned char DAT_004e2b14[12];











// GAP: PORT1111 0x0040457b
__declspec(naked) void gap_0040457b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00404580
__declspec(naked) void __fastcall FUN_00404580(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x74
        _emit 0x0a
        _emit 0x56
        _emit 0x0f
        _emit 0xbf
        _emit 0x70
        _emit 0x34
        _emit 0x3b
        _emit 0xf2
        _emit 0x5e
        _emit 0x74
        _emit 0x0c
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        jmp FUN_00475080
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004045a4
__declspec(naked) void gap_004045a4(void)
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

// FUNCTION: PORT1111 0x004045b0
__declspec(naked) void __fastcall FUN_004045b0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0x01
        _emit 0x57
        _emit 0xff
        _emit 0x50
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        call FUN_0045f060
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x8b
        _emit 0x3e
        call FUN_0045f130
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x57
        _emit 0x04
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x004045e6
__declspec(naked) void gap_004045e6(void)
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

// FUNCTION: PORT1111 0x004045f0
__declspec(naked) void __fastcall FUN_004045f0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b58cb
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
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x85
        _emit 0xc9
        _emit 0x57
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
        _emit 0x28
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x50
        _emit 0x89
        _emit 0x46
        _emit 0x28
        call FUN_0045c4f0
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x46
        _emit 0x28
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0xf7
        _emit 0xdf
        _emit 0x1b
        _emit 0xff
        _emit 0x47
        _emit 0x83
        _emit 0xf9
        _emit 0x0f
        _emit 0x75
        _emit 0x19
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        call FUN_00405bf0
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x6a
        _emit 0x00
        _emit 0x51
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_004137d0
        _emit 0x85
        _emit 0xff
        _emit 0x0f
        _emit 0x84
        _emit 0x96
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x83
        _emit 0xf8
        _emit 0x01
        _emit 0x74
        _emit 0x05
        _emit 0x83
        _emit 0xf8
        _emit 0x02
        _emit 0x75
        _emit 0x5f
        _emit 0x8b
        _emit 0x56
        _emit 0x34
        _emit 0x8b
        _emit 0x42
        _emit 0x60
        _emit 0x8b
        _emit 0x40
        _emit 0x1c
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x83
        _emit 0xcf
        _emit 0xff
        _emit 0x3b
        _emit 0xd7
        _emit 0x74
        _emit 0x4c
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
        _emit 0x28
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0x18
        _emit 0x8b
        _emit 0x4e
        _emit 0x34
        _emit 0x8b
        _emit 0x51
        _emit 0x60
        _emit 0x8b
        _emit 0x52
        _emit 0x1c
        _emit 0x8b
        _emit 0x52
        _emit 0x04
        _emit 0x57
        _emit 0x57
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        call FUN_0045c3e0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0x7e
        _emit 0x18
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x44
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0045f100
        _emit 0x5f
        _emit 0x5e
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
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
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x08
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


// GAP: PORT1111 0x00404713
__declspec(naked) void gap_00404713(void)
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

// FUNCTION: PORT1111 0x00404720
__declspec(naked) void __fastcall FUN_00404720(void *pthis,int param_1,int param_2,void *param_3)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x10
        _emit 0x53
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x43
        _emit 0x34
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xa7
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4b
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x40
        _emit 0x0c
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x1c
        _emit 0x56
        _emit 0x0f
        _emit 0xbf
        _emit 0x75
        _emit 0x30
        _emit 0x03
        _emit 0xf1
        _emit 0x0f
        _emit 0xbf
        _emit 0x08
        _emit 0x2b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x8b
        _emit 0x11
        _emit 0x57
        _emit 0x0f
        _emit 0xbf
        _emit 0x7d
        _emit 0x32
        _emit 0x03
        _emit 0xf2
        _emit 0x0f
        _emit 0xbf
        _emit 0x50
        _emit 0x02
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x8b
        _emit 0x4b
        _emit 0x34
        _emit 0x2b
        _emit 0xfa
        _emit 0x8b
        _emit 0x53
        _emit 0x14
        _emit 0x03
        _emit 0xf8
        _emit 0x8b
        _emit 0x01
        _emit 0x03
        _emit 0xfa
        _emit 0xff
        _emit 0x90
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x5d
        _emit 0x8b
        _emit 0x43
        _emit 0x0c
        _emit 0x8b
        _emit 0x48
        _emit 0x20
        _emit 0x8b
        _emit 0x40
        _emit 0x1c
        _emit 0x8b
        _emit 0x55
        _emit 0x0c
        _emit 0x03
        _emit 0xcf
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x03
        _emit 0xc6
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x8b
        _emit 0x42
        _emit 0x10
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0x48
        _emit 0x1c
        _emit 0x83
        _emit 0xc1
        _emit 0x14
        call FUN_0040ff50
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x91
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4a
        _emit 0x1c
        _emit 0x8b
        _emit 0x43
        _emit 0x0c
        _emit 0x8b
        _emit 0x11
        _emit 0x8b
        _emit 0x30
        _emit 0xff
        _emit 0x52
        _emit 0x70
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0x4b
        _emit 0x0c
        _emit 0xff
        _emit 0x56
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x004047df
__declspec(naked) void gap_004047df(void)
{
    __asm {
        _emit 0xcc
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x34
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x2d
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x90
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0x47
        _emit 0x30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x18
        _emit 0x8b
        _emit 0x47
        _emit 0x34
        _emit 0xf6
        _emit 0x40
        _emit 0x3c
        _emit 0x08
        _emit 0x74
        _emit 0x0f
        _emit 0x50
        mov ecx, OFFSET DAT_004e23f0
        call FUN_00451d50
        _emit 0x5f
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x34
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x5d
        _emit 0xf6
        _emit 0x40
        _emit 0x3c
        _emit 0x04
        _emit 0x74
        _emit 0x57
        mov eax, dword ptr [DAT_004e2428]
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x07
        _emit 0x8b
        _emit 0x47
        _emit 0x30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x47
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x49
        _emit 0x0c
        _emit 0x0f
        _emit 0xbf
        _emit 0x11
        _emit 0x0f
        _emit 0xbf
        _emit 0x49
        _emit 0x02
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x30
        _emit 0x2b
        _emit 0xc2
        _emit 0x03
        _emit 0x03
        _emit 0x0f
        _emit 0xbf
        _emit 0x56
        _emit 0x32
        _emit 0x2b
        _emit 0xd1
        _emit 0x03
        _emit 0x53
        _emit 0x04
        _emit 0x8b
        _emit 0x4f
        _emit 0x34
        _emit 0x8b
        _emit 0x79
        _emit 0x50
        _emit 0x56
        _emit 0x52
        _emit 0x8b
        _emit 0x57
        _emit 0x28
        _emit 0x50
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        call FUN_00422880
        _emit 0x5e
        _emit 0x5b
        _emit 0x5f
        _emit 0xc2
        _emit 0x10
        _emit 0x00
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00404880
__declspec(naked) void __fastcall FUN_00404880(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x34
        _emit 0x8b
        _emit 0x50
        _emit 0x7c
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x0b
        _emit 0x8b
        _emit 0x49
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x10
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00404896
__declspec(naked) void gap_00404896(void)
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
