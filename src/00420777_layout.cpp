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

extern const unsigned char PTR_LAB_004bf6fc[60];











// GAP: PORT1111 0x00420777
__declspec(naked) void gap_00420777(void)
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

// FUNCTION: PORT1111 0x00420780
__declspec(naked) void __fastcall FUN_00420780(void *pthis,void *param_1,void *param_2,void *param_3)
{
    __asm {
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x77
        _emit 0x04
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x1b
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x2b
        _emit 0xce
        _emit 0xb8
        _emit 0xab
        _emit 0xaa
        _emit 0xaa
        _emit 0x2a
        _emit 0xf7
        _emit 0xe9
        _emit 0xd1
        _emit 0xfa
        _emit 0x8b
        _emit 0xc2
        _emit 0xc1
        _emit 0xe8
        _emit 0x1f
        _emit 0x03
        _emit 0xc2
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xf6
        _emit 0xeb
        _emit 0x14
        _emit 0x8b
        _emit 0xcb
        _emit 0x2b
        _emit 0xce
        _emit 0xb8
        _emit 0xab
        _emit 0xaa
        _emit 0xaa
        _emit 0x2a
        _emit 0xf7
        _emit 0xe9
        _emit 0xd1
        _emit 0xfa
        _emit 0x8b
        _emit 0xf2
        _emit 0xc1
        _emit 0xee
        _emit 0x1f
        _emit 0x03
        _emit 0xf2
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x6a
        _emit 0x01
        _emit 0x53
        _emit 0x8b
        _emit 0xcf
        call FUN_0041ff30
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x8d
        _emit 0x14
        _emit 0x76
        _emit 0x5f
        _emit 0x8d
        _emit 0x0c
        _emit 0x90
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x5e
        _emit 0x89
        _emit 0x08
        _emit 0x5b
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}

// GAP: PORT1111 0x004207e7
__declspec(naked) void gap_004207e7(void)
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

// FUNCTION: PORT1111 0x004207f0
__declspec(naked) void __fastcall FUN_004207f0(int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x52
        _emit 0x83
        _emit 0xc1
        _emit 0x7c
        call FUN_00420440
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0042080b
__declspec(naked) void gap_0042080b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00420810
__declspec(naked) void __fastcall FUN_00420810(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8b
        _emit 0x7e
        _emit 0x04
        _emit 0x85
        _emit 0xff
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc9
        _emit 0xeb
        _emit 0x15
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x2b
        _emit 0xcf
        _emit 0xb8
        _emit 0xab
        _emit 0xaa
        _emit 0xaa
        _emit 0x2a
        _emit 0xf7
        _emit 0xe9
        _emit 0xd1
        _emit 0xfa
        _emit 0x8b
        _emit 0xca
        _emit 0xc1
        _emit 0xe9
        _emit 0x1f
        _emit 0x03
        _emit 0xca
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x3d
        _emit 0x8b
        _emit 0x56
        _emit 0x0c
        _emit 0x2b
        _emit 0xd7
        _emit 0xb8
        _emit 0xab
        _emit 0xaa
        _emit 0xaa
        _emit 0x2a
        _emit 0xf7
        _emit 0xea
        _emit 0xd1
        _emit 0xfa
        _emit 0x8b
        _emit 0xc2
        _emit 0xc1
        _emit 0xe8
        _emit 0x1f
        _emit 0x03
        _emit 0xc2
        _emit 0x3b
        _emit 0xc8
        _emit 0x73
        _emit 0x24
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x7e
        _emit 0x08
        _emit 0x50
        _emit 0x56
        _emit 0x51
        _emit 0x6a
        _emit 0x01
        _emit 0x57
        call FUN_004194c0
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0x83
        _emit 0xc7
        _emit 0x0c
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x52
        _emit 0x50
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00420780
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0042088f
__declspec(naked) void gap_0042088f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00420890
__declspec(naked) void __fastcall FUN_00420890(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x85
        _emit 0xd2
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xc9
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x2b
        _emit 0xca
        _emit 0xc1
        _emit 0xf9
        _emit 0x03
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x31
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x2b
        _emit 0xc2
        _emit 0xc1
        _emit 0xf8
        _emit 0x03
        _emit 0x3b
        _emit 0xc8
        _emit 0x73
        _emit 0x25
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0x7e
        _emit 0x08
        _emit 0x50
        _emit 0x56
        _emit 0x51
        _emit 0x6a
        _emit 0x01
        _emit 0x57
        call FUN_0041f4d0
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0x83
        _emit 0xc7
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x52
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_004201f0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x004208f1
__declspec(naked) void gap_004208f1(void)
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
