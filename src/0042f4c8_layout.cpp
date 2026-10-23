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

extern const unsigned char s_Memory_allocation_failure__004bf7bc[];
extern const unsigned char DAT_004cd26c[16];
extern const unsigned char s_Error_writing_file_004bfa04[20];
extern const unsigned char PTR_FUN_004bfa18[8];











// GAP: PORT1111 0x0042f4c8
__declspec(naked) void gap_0042f4c8(void)
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
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x74
        _emit 0x2d
        _emit 0x8b
        _emit 0x4e
        _emit 0x14
        _emit 0x6a
        _emit 0x04
        _emit 0x8d
        _emit 0x46
        _emit 0x0c
        _emit 0x50
        _emit 0x51
        call FUN_00450c30
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        mov dword ptr [esp + 0x10], OFFSET s_Error_writing_file_004bfa04
        call _CxxThrowException
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x8b
        _emit 0x56
        _emit 0x14
        _emit 0x50
        _emit 0x51
        _emit 0x52
        call FUN_00450c30
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        mov dword ptr [esp + 0x10], OFFSET s_Error_writing_file_004bfa04
        call _CxxThrowException
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
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
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042f550
__declspec(naked) void __fastcall FUN_0042f550(void *pthis,void *param_1,int param_2,size_t param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x57
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x89
        _emit 0x4e
        _emit 0x04
        call malloc
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x74
        _emit 0x08
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x52
        mov dword ptr [esp + 0x14], OFFSET s_Memory_allocation_failure__004bf7bc
        call _CxxThrowException
    }
}


// GAP: PORT1111 0x0042f595
__declspec(naked) void gap_0042f595(void)
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
    }
}

// FUNCTION: PORT1111 0x0042f5a0
__declspec(naked) void __fastcall FUN_0042f5a0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x74
        _emit 0x29
        _emit 0x8b
        _emit 0x4e
        _emit 0x14
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x04
        _emit 0x8d
        _emit 0x56
        _emit 0x0c
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        mov dword ptr [esp + 0x10], OFFSET s_Error_writing_file_004bfa04
        call _CxxThrowException
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x8b
        _emit 0x4e
        _emit 0x14
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        mov dword ptr [esp + 0x10], OFFSET s_Error_writing_file_004bfa04
        call _CxxThrowException
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0042f60a
__declspec(naked) void gap_0042f60a(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042f610
__declspec(naked) void __fastcall FUN_0042f610(void *pthis,void *param_1)
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
        call FUN_00465d00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x6a
        _emit 0x04
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0042f440
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x17
        _emit 0x51
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_0042f440
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0042f645
__declspec(naked) void gap_0042f645(void)
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
    }
}

// FUNCTION: PORT1111 0x0042f650
__declspec(naked) void __fastcall FUN_0042f650(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0x01
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call FUN_0042f440
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0042f65f
__declspec(naked) void gap_0042f65f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042f660
__declspec(naked) void __fastcall FUN_0042f660(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0x02
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call FUN_0042f440
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0042f66f
__declspec(naked) void gap_0042f66f(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x0042f670
__declspec(naked) void __fastcall FUN_0042f670(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0x04
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        call FUN_0042f440
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x0042f67f
__declspec(naked) void gap_0042f67f(void)
{
    __asm {
        _emit 0xcc
    }
}
