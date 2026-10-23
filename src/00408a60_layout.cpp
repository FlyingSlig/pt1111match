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

extern int DAT_004bcdc0;
extern int DAT_004bcd98;
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];












// FUNCTION: PORT1111 0x00408a60
__declspec(naked) int __fastcall FUN_00408a60(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x8e
        _emit 0x08
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x01
        _emit 0x57
        _emit 0x39
        _emit 0x96
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x19
        _emit 0x8b
        _emit 0x86
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc9
        _emit 0x5f
        _emit 0x89
        _emit 0x8e
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x8e
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x11
        _emit 0x39
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0x8e
        _emit 0x08
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x00
        _emit 0x3b
        _emit 0xc1
        _emit 0x75
        _emit 0xef
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x3b
        _emit 0xc1
        _emit 0x8b
        _emit 0x78
        _emit 0x0c
        _emit 0x74
        _emit 0x25
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x10
        _emit 0x89
        _emit 0x11
        _emit 0x8b
        _emit 0x08
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x50
        _emit 0x89
        _emit 0x51
        _emit 0x04
        call pt_a_004978fd
        _emit 0x8b
        _emit 0x86
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
    }
}

// GAP: PORT1111 0x00408ad0
__declspec(naked) void gap_00408ad0(void)
{
    __asm {
        _emit 0xc4
        _emit 0x04
        _emit 0x48
        _emit 0x89
        _emit 0x86
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc7
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x00408ae0
__declspec(naked) int * __fastcall FUN_00408ae0(void *pthis,int param_1,unsigned int param_2)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b5ac8
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x20
        _emit 0x83
        _emit 0xc8
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x14
        call FUN_00405220
        _emit 0x33
        _emit 0xff
        _emit 0x8d
        _emit 0x9e
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcb
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        mov dword ptr [esi], OFFSET DAT_004bcdc0
        mov dword ptr [esi + 0x14], OFFSET DAT_004bcd98
        call FUN_004089f0
        _emit 0x89
        _emit 0x43
        _emit 0x04
        _emit 0x89
        _emit 0x7b
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        _emit 0x89
        _emit 0xbe
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0xf4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x54
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xdb
        _emit 0x80
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0xda
        _emit 0xb0
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0xec
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0xd9
        _emit 0x9e
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x5b
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

// GAP: PORT1111 0x00408ba1
__declspec(naked) void gap_00408ba1(void)
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
