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

extern const unsigned char s_data_som__004c450c[];
extern unsigned char DAT_004e2b14[];
extern unsigned char DAT_004e2686[1];
extern unsigned char DAT_004e26c8[4];
extern unsigned char DAT_004e26d0[4];
extern unsigned char DAT_004e26cc[4];
extern volatile int DAT_004e2c30;
extern unsigned char DAT_004e26d4[4];
extern volatile int DAT_004e2c34;
extern unsigned char DAT_004dc2a0[4];












// FUNCTION: PORT1111 0x0044d460
__declspec(naked) int __fastcall FUN_0044d460(void *pthis,void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b8ac8
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
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x50
        call pt_a_00403340
        push OFFSET s_data_som__004c450c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call thunk_FUN_00466040
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        call thunk_FUN_00466040
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        call FUN_00465e00
        _emit 0x50
        _emit 0x8d
        _emit 0x4e
        _emit 0x1c
        call FUN_004861c0
        _emit 0x85
        _emit 0xc0
        _emit 0x5e
        _emit 0x8d
        _emit 0x0c
        _emit 0x24
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x75
        _emit 0x18
        call FUN_00465e40
        _emit 0x33
        _emit 0xc0
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
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0044d502
__declspec(naked) void gap_0044d502(void)
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

// FUNCTION: PORT1111 0x0044d510
__declspec(naked) void __fastcall FUN_0044d510(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x02
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0x70
        _emit 0x08
        _emit 0x89
        _emit 0x32
        _emit 0x8b
        _emit 0x70
        _emit 0x08
        _emit 0x8a
        _emit 0x5e
        _emit 0x2d
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x03
        _emit 0x89
        _emit 0x56
        _emit 0x04
        _emit 0x8b
        _emit 0x72
        _emit 0x04
        _emit 0x89
        _emit 0x70
        _emit 0x04
        _emit 0x8b
        _emit 0x49
        _emit 0x04
        _emit 0x3b
        _emit 0x51
        _emit 0x04
        _emit 0x75
        _emit 0x0e
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x5e
        _emit 0x89
        _emit 0x50
        _emit 0x08
        _emit 0x89
        _emit 0x42
        _emit 0x04
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4a
        _emit 0x04
        _emit 0x3b
        _emit 0x51
        _emit 0x08
        _emit 0x75
        _emit 0x0e
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x5e
        _emit 0x89
        _emit 0x50
        _emit 0x08
        _emit 0x89
        _emit 0x42
        _emit 0x04
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x89
        _emit 0x01
        _emit 0x5e
        _emit 0x89
        _emit 0x50
        _emit 0x08
        _emit 0x89
        _emit 0x42
        _emit 0x04
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0044d569
__declspec(naked) void gap_0044d569(void)
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

// FUNCTION: PORT1111 0x0044d570
__declspec(naked) void FUN_0044d570(void *param_1,int param_2,int param_3,int param_4,int param_5)
{
    __asm {
        mov al, byte ptr [DAT_004e2686]
        _emit 0x84
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x40
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x08
        _emit 0x75
        _emit 0x0f
        _emit 0x8b
        _emit 0xcf
        call FUN_00486830
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0x23
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e26c8]
        mov eax, dword ptr [DAT_004e26d0]
        mov edx, dword ptr [DAT_004e26cc]
        _emit 0x2b
        _emit 0xc1
        mov ecx, dword ptr [DAT_004e2c30]
        _emit 0xd1
        _emit 0xf8
        _emit 0x2b
        _emit 0xc1
        mov ecx, dword ptr [DAT_004e26d4]
        _emit 0x2b
        _emit 0xca
        mov edx, dword ptr [DAT_004e2c34]
        _emit 0xd1
        _emit 0xf9
        _emit 0x2b
        _emit 0xca
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0xf2
        _emit 0x2b
        _emit 0xf0
        _emit 0xc1
        _emit 0xe6
        _emit 0x02
        _emit 0x81
        _emit 0xfe
        _emit 0x10
        _emit 0x27
        _emit 0x00
        _emit 0x00
        _emit 0x7e
        _emit 0x07
        _emit 0xbe
        _emit 0x10
        _emit 0x27
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x0d
        _emit 0x81
        _emit 0xfe
        _emit 0xf0
        _emit 0xd8
        _emit 0xff
        _emit 0xff
        _emit 0x7d
        _emit 0x05
        _emit 0xbe
        _emit 0xf0
        _emit 0xd8
        _emit 0xff
        _emit 0xff
        _emit 0x2b
        _emit 0xc2
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x2b
        _emit 0xcb
        _emit 0x8b
        _emit 0xc1
        _emit 0x0f
        _emit 0xaf
        _emit 0xc1
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xd9
        _emit 0xc1
        _emit 0xd8
        _emit 0xca
        _emit 0xde
        _emit 0xc1
        _emit 0xd9
        _emit 0xfa
        _emit 0xdd
        _emit 0xd9
        _emit 0xe8
        _emit 0x6b
        _emit 0xa7
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0xc8
        _emit 0x33
        _emit 0xc0
        _emit 0x81
        _emit 0xf9
        _emit 0xf4
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x7e
        _emit 0x57
        _emit 0x81
        _emit 0xc1
        _emit 0x0c
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        _emit 0xb8
        _emit 0x67
        _emit 0x66
        _emit 0x66
        _emit 0x66
        _emit 0xf7
        _emit 0xe9
        _emit 0xc1
        _emit 0xfa
        _emit 0x02
        _emit 0x8b
        _emit 0xc2
        _emit 0xc1
        _emit 0xe8
        _emit 0x1f
        _emit 0x03
        _emit 0xc2
        _emit 0xba
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb9
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0xff
        _emit 0xf6
        _emit 0xc1
        _emit 0x01
        _emit 0x74
        _emit 0x03
        _emit 0x0f
        _emit 0xaf
        _emit 0xd0
        _emit 0xd1
        _emit 0xe9
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0xd8
        _emit 0x0f
        _emit 0xaf
        _emit 0xc3
        _emit 0xeb
        _emit 0xeb
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0xd9
        _emit 0xe0
        _emit 0xe8
        _emit 0x14
        _emit 0xa7
        _emit 0x04
        _emit 0x00
        _emit 0x3d
        _emit 0xf0
        _emit 0xd8
        _emit 0xff
        _emit 0xff
        _emit 0x7d
        _emit 0x05
        _emit 0xb8
        _emit 0xf0
        _emit 0xd8
        _emit 0xff
        _emit 0xff
        mov edx, dword ptr [DAT_004dc2a0]
        _emit 0x83
        _emit 0xfa
        _emit 0x64
        _emit 0x5b
        _emit 0x74
        _emit 0x1f
        _emit 0x8d
        _emit 0x88
        _emit 0x10
        _emit 0x27
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xaf
        _emit 0xca
        _emit 0xb8
        _emit 0x1f
        _emit 0x85
        _emit 0xeb
        _emit 0x51
        _emit 0xf7
        _emit 0xe9
        _emit 0xc1
        _emit 0xfa
        _emit 0x05
        _emit 0x8b
        _emit 0xca
        _emit 0xc1
        _emit 0xe9
        _emit 0x1f
        _emit 0x8d
        _emit 0x84
        _emit 0x0a
        _emit 0xf0
        _emit 0xd8
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x17
        _emit 0x51
        _emit 0x6a
        _emit 0x00
        _emit 0x50
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x52
        _emit 0x04
        _emit 0x5e
        _emit 0x5f
        _emit 0xc2
        _emit 0x14
        _emit 0x00
    }
}
