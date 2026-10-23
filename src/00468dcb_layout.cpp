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

extern const unsigned char s_map_set_T__too_long_004bd55c[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];











// GAP: PORT1111 0x00468dcb
__declspec(naked) void gap_00468dcb(void)
{
    __asm {
        _emit 0x84
        _emit 0xc0
        _emit 0x8b
        _emit 0xfe
        _emit 0x74
        _emit 0xe1
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
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
    }
}

// FUNCTION: PORT1111 0x00468de0
__declspec(naked) void __fastcall FUN_00468de0(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x8b
        _emit 0x42
        _emit 0x04
        _emit 0x53
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x75
        _emit 0x1b
        _emit 0x56
        _emit 0x66
        _emit 0x8b
        _emit 0x37
        _emit 0x66
        _emit 0x39
        _emit 0x70
        _emit 0x0c
        _emit 0x73
        _emit 0x05
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0xeb
        _emit 0x04
        _emit 0x8b
        _emit 0xd0
        _emit 0x8b
        _emit 0x00
        _emit 0x8a
        _emit 0x58
        _emit 0x15
        _emit 0x84
        _emit 0xdb
        _emit 0x74
        _emit 0xea
        _emit 0x5e
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x3b
        _emit 0xd0
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x74
        _emit 0x1b
        _emit 0x66
        _emit 0x8b
        _emit 0x0f
        _emit 0x66
        _emit 0x3b
        _emit 0x4a
        _emit 0x0c
        _emit 0x72
        _emit 0x12
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x5f
        _emit 0x89
        _emit 0x10
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x5f
        _emit 0x89
        _emit 0x10
        _emit 0x5b
        _emit 0x59
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00468e4b
__declspec(naked) void gap_00468e4b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00468e50
__declspec(naked) void __fastcall FUN_00468e50(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x47
        _emit 0x30
        _emit 0x8b
        _emit 0x30
        _emit 0x3b
        _emit 0xf0
        _emit 0x74
        _emit 0x62
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0x8a
        _emit 0x46
        _emit 0x15
        _emit 0x84
        _emit 0xc0
        _emit 0x75
        _emit 0x46
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0x1f
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x06
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0x31
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x06
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x74
        _emit 0xf5
        _emit 0xeb
        _emit 0x1d
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x75
        _emit 0x11
        _emit 0x3b
        _emit 0x70
        _emit 0x08
        _emit 0x75
        _emit 0x0c
        _emit 0x8b
        _emit 0xf0
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8a
        _emit 0x48
        _emit 0x15
        _emit 0x84
        _emit 0xc9
        _emit 0x74
        _emit 0xef
        _emit 0x8b
        _emit 0xf0
        _emit 0x3b
        _emit 0x77
        _emit 0x30
        _emit 0x75
        _emit 0xa1
        _emit 0x8b
        _emit 0x4f
        _emit 0x30
        _emit 0x8b
        _emit 0x51
        _emit 0x04
        _emit 0x8d
        _emit 0x77
        _emit 0x2c
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call pt_a_00468da0
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x40
        _emit 0x04
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x00
        _emit 0x8b
        _emit 0x76
        _emit 0x04
        _emit 0x5f
        _emit 0x89
        _emit 0x76
        _emit 0x08
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00468eeb
__declspec(naked) void gap_00468eeb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00468ef0
__declspec(naked) int __fastcall FUN_00468ef0(void *pthis,unsigned short param_1)
{
    __asm {
        _emit 0x51
        _emit 0x0f
        _emit 0xb7
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0xf8
        _emit 0xff
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x74
        _emit 0x23
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0x8d
        _emit 0x4e
        _emit 0x2c
        call FUN_00468de0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x3b
        _emit 0x46
        _emit 0x30
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x40
        _emit 0x10
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0x59
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00468f28
__declspec(naked) void gap_00468f28(void)
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

// FUNCTION: PORT1111 0x00468f30
__declspec(naked) void __fastcall FUN_00468f30(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call FUN_00468e50
        _emit 0x8b
        _emit 0x8e
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x05
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x20
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x3b
        _emit 0xc8
        _emit 0x74
        _emit 0x19
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x8b
        _emit 0x4e
        _emit 0x64
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x10
        _emit 0xeb
        _emit 0x14
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x04
        _emit 0x8b
        _emit 0x11
        _emit 0xeb
        _emit 0x08
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0xc8
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x8b
        _emit 0x8e
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xcf
        _emit 0x89
        _emit 0x7e
        _emit 0x64
        _emit 0x89
        _emit 0x7e
        _emit 0x60
        _emit 0x74
        _emit 0x16
        call FUN_00476e50
        _emit 0x8b
        _emit 0x8e
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x07
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x5c
        _emit 0x3b
        _emit 0xcf
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x89
        _emit 0xbe
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x7e
        _emit 0x5c
        _emit 0x5f
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        jmp FUN_00467dc0
    }
}


// GAP: PORT1111 0x00468fc6
__declspec(naked) void gap_00468fc6(void)
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
