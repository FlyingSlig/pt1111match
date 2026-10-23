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

extern int DAT_004c4aa4;











// GAP: PORT1111 0x0045c3d9
__declspec(naked) void gap_0045c3d9(void)
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

// FUNCTION: PORT1111 0x0045c3e0
__declspec(naked) void __fastcall FUN_0045c3e0(void *pthis,int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        mov dword ptr [eax], OFFSET DAT_004c4aa4
        _emit 0x89
        _emit 0x50
        _emit 0x0c
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}


// FUNCTION: PORT1111 0x0045c400
__declspec(naked) void __fastcall FUN_0045c400(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        mov dword ptr [eax], OFFSET DAT_004c4aa4
        _emit 0x8b
        _emit 0x51
        _emit 0x08
        _emit 0x89
        _emit 0x50
        _emit 0x08
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
        _emit 0x49
        _emit 0x14
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045c42d
__declspec(naked) void gap_0045c42d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0045c430
__declspec(naked) int __fastcall FUN_0045c430(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0xcf
        call FUN_00424310
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x46
        _emit 0x08
        call FUN_00424310
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        call FUN_00424310
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045c45d
__declspec(naked) void gap_0045c45d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0045c460
__declspec(naked) void FUN_0045c460(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x4e
        _emit 0x0c
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x56
        _emit 0x10
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0045c48e
__declspec(naked) void gap_0045c48e(void)
{
    __asm {
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
        mov dword ptr [esi], OFFSET DAT_004c4aa4
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
