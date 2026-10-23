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

extern const unsigned char s_map_set_T__too_long_004bd55c[];
extern unsigned char DAT_004db290[];
extern unsigned char DAT_004e0ae0[];
extern unsigned char DAT_004e0ae4[];
extern unsigned char DAT_004e0ae8[];
extern unsigned char DAT_004e2700[];
extern unsigned char DAT_004e2424[4];
extern int DAT_004e0af4;
extern unsigned char DAT_004e0af8[4];
extern unsigned char DAT_004e0afc[4];
extern unsigned char DAT_004e0b08[4];
extern unsigned char DAT_004e0b04[4];
extern unsigned char DAT_004e21c0[4];
extern unsigned char DAT_004e21bc[4];
extern unsigned char DAT_004e21c4[4];
extern void * DAT_004e240c;
extern unsigned char DAT_004e21b8[4];
extern unsigned char DAT_004e2c58[4];
extern unsigned char DAT_004e2444[4];
extern unsigned char DAT_004e26bc[4];
extern void * DAT_004e2410;
extern unsigned char DAT_004e26fc[4];
extern int DAT_004e2404;
extern unsigned char DAT_004e2afc[4];
extern int DAT_004e0adc;
extern unsigned char DAT_004e0ad8[4];
extern unsigned char DAT_004e0870[8];
extern unsigned char DAT_004e2418[4];
extern unsigned char DAT_004e2414[4];
extern const unsigned char DAT_004bef50[36];
extern unsigned char DAT_004e26f0[4];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];












// GAP: PORT1111 0x004161c6
__declspec(naked) void gap_004161c6(void)
{
    __asm {
        _emit 0x8b
        _emit 0xff
        _emit 0x8c
        _emit 0x60
        _emit 0x41
        _emit 0x00
        _emit 0xa8
        _emit 0x60
        _emit 0x41
        _emit 0x00
        _emit 0x96
        _emit 0x60
        _emit 0x41
        _emit 0x00
        _emit 0x9e
        _emit 0x60
        _emit 0x41
        _emit 0x00
        _emit 0xb6
        _emit 0x60
        _emit 0x41
        _emit 0x00
        _emit 0x00
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x01
        _emit 0x04
        _emit 0x02
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x04
        _emit 0x03
        _emit 0x03
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004161f0
__declspec(naked) void __fastcall FUN_004161f0(void *pthis,unsigned int param_1)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b63d8
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x83
        _emit 0xec
        _emit 0x44
        _emit 0x56
        _emit 0xbe
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x3f
        _emit 0x2b
        _emit 0xf0
        _emit 0x3b
        _emit 0xf2
        _emit 0x5e
        _emit 0x73
        _emit 0x51
        _emit 0x6a
        _emit 0x10
        push OFFSET s_list_T__too_long_004bce98
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x0f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        call pt_a_004016b0
        _emit 0x8d
        _emit 0x04
        _emit 0x24
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x50
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call pt_a_004017e0
        push OFFSET DAT_004cc884
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x51
        mov dword ptr [esp + 0x24], OFFSET pt_d_004c6e20
        call _CxxThrowException
        _emit 0x03
        _emit 0xc2
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x44
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x50
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00416283
__declspec(naked) void gap_00416283(void)
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

// FUNCTION: PORT1111 0x00416290
__declspec(naked) void FUN_00416290(void *pthis,void *param_1,char param_2,void *param_3,void *param_4)
{
    __asm {
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b63d8
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xec
        _emit 0x44
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x81
        _emit 0x7f
        _emit 0x08
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        _emit 0x1f
        _emit 0x72
        _emit 0x4c
        _emit 0x6a
        _emit 0x13
        _emit 0x33
        _emit 0xf6
        push OFFSET s_map_set_T__too_long_004bd55c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x28
        _emit 0x0f
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x24
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        call pt_a_004016b0
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x58
        call pt_a_004017e0
        push OFFSET DAT_004cc884
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x28
        _emit 0x51
        mov dword ptr [esp + 0x2c], OFFSET pt_d_004c6e20
        call _CxxThrowException
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x68
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x64
        _emit 0x53
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        _emit 0x50
        _emit 0x56
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_00429ea0
        _emit 0x8b
        _emit 0x5f
        _emit 0x08
        _emit 0x8b
        _emit 0xc8
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x43
        _emit 0x3b
        _emit 0xf0
        _emit 0x89
        _emit 0x4c
        _emit 0x24
        _emit 0x6c
        _emit 0x89
        _emit 0x5f
        _emit 0x08
        _emit 0x75
        _emit 0x10
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x89
        _emit 0x08
        _emit 0x8b
        _emit 0x57
        _emit 0x04
        _emit 0x89
        _emit 0x4a
        _emit 0x08
        _emit 0xeb
        _emit 0x23
        _emit 0x8a
        _emit 0x44
        _emit 0x24
        _emit 0x64
        _emit 0x84
        _emit 0xc0
        _emit 0x74
        _emit 0x0d
        _emit 0x89
        _emit 0x0e
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x3b
        _emit 0x30
        _emit 0x75
        _emit 0x12
        _emit 0x89
        _emit 0x08
        _emit 0xeb
        _emit 0x0e
        _emit 0x89
        _emit 0x4e
        _emit 0x08
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x3b
        _emit 0x70
        _emit 0x08
        _emit 0x75
        _emit 0x03
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x80
        _emit 0x7a
        _emit 0x14
        _emit 0x00
        _emit 0x8d
        _emit 0x41
        _emit 0x04
        _emit 0x8b
        _emit 0xf1
        _emit 0xb3
        _emit 0x01
        _emit 0x0f
        _emit 0x85
        _emit 0xa5
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x69
        _emit 0x04
        _emit 0x8b
        _emit 0x55
        _emit 0x00
        _emit 0x3b
        _emit 0xca
        _emit 0x75
        _emit 0x50
        _emit 0x8b
        _emit 0x55
        _emit 0x08
        _emit 0x80
        _emit 0x7a
        _emit 0x14
        _emit 0x00
        _emit 0x75
        _emit 0x18
        _emit 0x8b
        _emit 0x08
        _emit 0x88
        _emit 0x59
        _emit 0x14
        _emit 0x88
        _emit 0x5a
        _emit 0x14
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0x4a
        _emit 0x04
        _emit 0xc6
        _emit 0x41
        _emit 0x14
        _emit 0x00
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0x72
        _emit 0x04
        _emit 0xeb
        _emit 0x61
        _emit 0x3b
        _emit 0x71
        _emit 0x08
        _emit 0x75
        _emit 0x0a
        _emit 0x8b
        _emit 0xf1
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call pt_a_00484d60
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x88
        _emit 0x58
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0xc6
        _emit 0x42
        _emit 0x14
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call pt_a_00495a40
        _emit 0xeb
        _emit 0x32
        _emit 0x80
        _emit 0x7a
        _emit 0x14
        _emit 0x00
        _emit 0x74
        _emit 0xb3
        _emit 0x3b
        _emit 0x31
        _emit 0x75
        _emit 0x0a
        _emit 0x8b
        _emit 0xf1
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call pt_a_00495a40
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x88
        _emit 0x58
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0xc6
        _emit 0x42
        _emit 0x14
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call pt_a_00484d60
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x8a
        _emit 0x4a
        _emit 0x14
        _emit 0x84
        _emit 0xc9
        _emit 0x8d
        _emit 0x46
        _emit 0x04
        _emit 0x0f
        _emit 0x84
        _emit 0x61
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x70
        _emit 0x5d
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x60
        _emit 0x88
        _emit 0x5a
        _emit 0x14
        _emit 0x5b
        _emit 0x89
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x4c
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
        _emit 0x50
        _emit 0xc2
        _emit 0x10
        _emit 0x00
    }
}

// GAP: PORT1111 0x0041643d
__declspec(naked) void gap_0041643d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
