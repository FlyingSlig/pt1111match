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

extern int DAT_004e0adc;
extern unsigned char DAT_004e2674[];
extern unsigned char DAT_004e2698[];
extern void * DAT_004e240c;
extern unsigned char DAT_004e2b14[12];
extern int DAT_004bd540;













// GAP: PORT1111 0x0040a4cd
__declspec(naked) void gap_0040a4cd(void)
{
    __asm {
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x90
        _emit 0xa4
        _emit 0x40
        _emit 0x00
        _emit 0x98
        _emit 0xa4
        _emit 0x40
        _emit 0x00
        _emit 0xa0
        _emit 0xa4
        _emit 0x40
        _emit 0x00
        _emit 0xa8
        _emit 0xa4
        _emit 0x40
        _emit 0x00
        _emit 0xc8
        _emit 0xa4
        _emit 0x40
        _emit 0x00
        _emit 0xb0
        _emit 0xa4
        _emit 0x40
        _emit 0x00
        _emit 0xb8
        _emit 0xa4
        _emit 0x40
        _emit 0x00
        _emit 0xc0
        _emit 0xa4
        _emit 0x40
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x0040a4f0
__declspec(naked) void __fastcall FUN_0040a4f0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        mov dword ptr [eax], OFFSET DAT_004bd540
        _emit 0x8b
        _emit 0x51
        _emit 0x0c
        _emit 0x89
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0x51
        _emit 0x10
        _emit 0x89
        _emit 0x50
        _emit 0x10
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x89
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x51
        _emit 0x14
        _emit 0x89
        _emit 0x50
        _emit 0x14
        _emit 0x8b
        _emit 0x51
        _emit 0x18
        _emit 0x89
        _emit 0x50
        _emit 0x18
        _emit 0x8b
        _emit 0x51
        _emit 0x1c
        _emit 0x89
        _emit 0x50
        _emit 0x1c
        _emit 0x8b
        _emit 0x51
        _emit 0x20
        _emit 0x89
        _emit 0x50
        _emit 0x20
        _emit 0x8b
        _emit 0x51
        _emit 0x24
        _emit 0x89
        _emit 0x50
        _emit 0x24
        _emit 0x8b
        _emit 0x51
        _emit 0x28
        _emit 0x89
        _emit 0x50
        _emit 0x28
        _emit 0x8b
        _emit 0x51
        _emit 0x2c
        _emit 0x89
        _emit 0x50
        _emit 0x2c
        _emit 0x8b
        _emit 0x51
        _emit 0x30
        _emit 0x89
        _emit 0x50
        _emit 0x30
        _emit 0x8b
        _emit 0x49
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040a547
__declspec(naked) void gap_0040a547(void)
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
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x01
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov dword ptr [esi], OFFSET DAT_004bd540
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
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040a570
__declspec(naked) int __fastcall FUN_0040a570(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x89
        _emit 0x46
        _emit 0x20
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x04
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x50
        _emit 0x8b
        _emit 0x48
        _emit 0x7c
        _emit 0x0f
        _emit 0xaf
        _emit 0x48
        _emit 0x78
        _emit 0x89
        _emit 0x4e
        _emit 0x1c
        _emit 0xc7
        _emit 0x46
        _emit 0x28
        _emit 0x00
        _emit 0x00
        _emit 0xf1
        _emit 0xd8
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

// GAP: PORT1111 0x0040a5ab
__declspec(naked) void gap_0040a5ab(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040a5b0
__declspec(naked) void __fastcall FUN_0040a5b0(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5c2b
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
        _emit 0x68
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0x0b
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        call FUN_00431b50
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x89
        _emit 0x50
        _emit 0x14
        _emit 0x89
        _emit 0x48
        _emit 0x18
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00412e90
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
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040a62d
__declspec(naked) void gap_0040a62d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040a630
__declspec(naked) void __fastcall FUN_0040a630(int param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xd9
        _emit 0x8b
        _emit 0x43
        _emit 0x20
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x57
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x03
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x3c
        _emit 0x8b
        _emit 0x06
        _emit 0x6a
        _emit 0xff
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x8b
        _emit 0x43
        _emit 0x14
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x2e
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x51
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x3c
        _emit 0x8b
        _emit 0x06
        _emit 0x6a
        _emit 0xff
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x30
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7b
        _emit 0x14
        _emit 0x75
        _emit 0xd2
        _emit 0x5f
        _emit 0x5e
        _emit 0xc7
        _emit 0x43
        _emit 0x08
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040a69e
__declspec(naked) void gap_0040a69e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040a6a0
__declspec(naked) int __fastcall FUN_0040a6a0(int param_1)
{
    __asm {
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x20
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x48
        _emit 0x60
        _emit 0x8b
        _emit 0x49
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x07
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xc3
        _emit 0x8b
        _emit 0x47
        _emit 0x14
        _emit 0x56
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x29
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0f
        _emit 0x8b
        _emit 0x48
        _emit 0x60
        _emit 0x8b
        _emit 0x49
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x18
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0x0c
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x14
        _emit 0x75
        _emit 0xd7
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5f
        _emit 0xc3
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040a70c
__declspec(naked) void gap_0040a70c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040a710
__declspec(naked) void __fastcall FUN_0040a710(void *pthis,void *param_1)
{
    __asm {
        _emit 0x55
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xe9
        _emit 0x8b
        _emit 0x45
        _emit 0x14
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x0f
        _emit 0x84
        _emit 0x9d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0xeb
        _emit 0x07
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xd8
        _emit 0x85
        _emit 0xdb
        _emit 0x74
        _emit 0x72
        _emit 0x6a
        _emit 0x34
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x50
        mov dword ptr [eax], OFFSET DAT_004bd540
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x89
        _emit 0x48
        _emit 0x0c
        _emit 0x8b
        _emit 0x56
        _emit 0x10
        _emit 0x89
        _emit 0x50
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x56
        _emit 0x14
        _emit 0x89
        _emit 0x50
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x89
        _emit 0x48
        _emit 0x18
        _emit 0x8b
        _emit 0x56
        _emit 0x1c
        _emit 0x89
        _emit 0x50
        _emit 0x1c
        _emit 0x8b
        _emit 0x4e
        _emit 0x20
        _emit 0x89
        _emit 0x48
        _emit 0x20
        _emit 0x8b
        _emit 0x56
        _emit 0x24
        _emit 0x89
        _emit 0x50
        _emit 0x24
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x89
        _emit 0x48
        _emit 0x28
        _emit 0x8b
        _emit 0x56
        _emit 0x2c
        _emit 0x89
        _emit 0x50
        _emit 0x2c
        _emit 0x8b
        _emit 0x4e
        _emit 0x30
        _emit 0x89
        _emit 0x48
        _emit 0x30
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x89
        _emit 0x50
        _emit 0x08
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4b
        _emit 0x10
        _emit 0x89
        _emit 0x48
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00412e90
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7d
        _emit 0x14
        _emit 0x0f
        _emit 0x85
        _emit 0x6e
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x5b
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
    }
}

// GAP: PORT1111 0x0040a7ce
__declspec(naked) void gap_0040a7ce(void)
{
    __asm {
        _emit 0x12
        _emit 0x5f
        _emit 0x5e
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
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040a7e0
__declspec(naked) void __fastcall FUN_0040a7e0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x30
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x56
        _emit 0x20
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x46
        _emit 0x2c
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x56
        _emit 0x18
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x18
        _emit 0x3b
        _emit 0xd8
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x43
        _emit 0x08
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x1b
        _emit 0x3b
        _emit 0x5e
        _emit 0x14
        _emit 0x75
        _emit 0xee
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040a86d
__declspec(naked) void gap_0040a86d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040a870
__declspec(naked) void __fastcall FUN_0040a870(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x14
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x3c
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x14
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x14
        _emit 0xeb
        _emit 0x07
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x88
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x55
        call FUN_00444ee0
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x14
        _emit 0x75
        _emit 0xd9
    }
}

// GAP: PORT1111 0x0040a8b7
__declspec(naked) void gap_0040a8b7(void)
{
    __asm {
        _emit 0x5d
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040a8c0
__declspec(naked) void __fastcall FUN_0040a8c0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x14
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x2b
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0e
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        call FUN_004137d0
        _emit 0x8b
        _emit 0x36
        _emit 0x3b
        _emit 0x77
        _emit 0x14
        _emit 0x75
        _emit 0xd8
        _emit 0x5f
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0040a8fb
__declspec(naked) void gap_0040a8fb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0040a900
__declspec(naked) void __fastcall FUN_0040a900(int param_1)
{
    __asm {
        _emit 0x55
        _emit 0x8b
        _emit 0xe9
        _emit 0x8b
        _emit 0x45
        _emit 0x14
        _emit 0x57
        _emit 0x8b
        _emit 0x38
        _emit 0x3b
        _emit 0xf8
        _emit 0x74
        _emit 0x30
        _emit 0x53
        _emit 0x56
        _emit 0x90
        _emit 0x8b
        _emit 0x47
        _emit 0x08
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x0f
        _emit 0x8b
        _emit 0x1e
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x53
        _emit 0x24
        _emit 0xf7
        _emit 0xd8
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x53
        _emit 0x34
        _emit 0x8b
        _emit 0x3f
        _emit 0x3b
        _emit 0x7d
        _emit 0x14
        _emit 0x75
        _emit 0xd5
        _emit 0x5e
        _emit 0x5b
        _emit 0x5f
        _emit 0x5d
        _emit 0xc3
    }
}
