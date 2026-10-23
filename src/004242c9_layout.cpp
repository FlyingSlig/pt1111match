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

extern const unsigned char DAT_004cd26c[16];
extern const unsigned char s_Unexpected_number_of_byte__004bf7a0[28];
extern const unsigned char s_Error_reading_file_004bf7d8[20];
extern const unsigned char s_Memory_allocation_failure__004bf7bc[28];
extern const unsigned char PTR_ReadFile_004bc14c[4];
extern const unsigned char PTR_FUN_004bf794[12];











// GAP: PORT1111 0x004242c9
__declspec(naked) void gap_004242c9(void)
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

// FUNCTION: PORT1111 0x004242d0
__declspec(naked) int __fastcall FUN_004242d0(int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x41
        _emit 0x14
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x10
        _emit 0x8d
        _emit 0x50
        _emit 0x01
        _emit 0x3b
        _emit 0xd6
        _emit 0x7e
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        mov dword ptr [esp + 0xc], OFFSET s_Unexpected_number_of_byte__004bf7a0
        call _CxxThrowException
        _emit 0x8b
        _emit 0x71
        _emit 0x18
        _emit 0x8a
        _emit 0x04
        _emit 0x30
        _emit 0x89
        _emit 0x51
        _emit 0x14
        _emit 0x5e
        _emit 0x59
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00424302
__declspec(naked) void gap_00424302(void)
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

// FUNCTION: PORT1111 0x00424310
__declspec(naked) int __fastcall FUN_00424310(int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x41
        _emit 0x14
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x10
        _emit 0x8d
        _emit 0x50
        _emit 0x04
        _emit 0x3b
        _emit 0xd6
        _emit 0x7e
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        mov dword ptr [esp + 0xc], OFFSET s_Unexpected_number_of_byte__004bf7a0
        call _CxxThrowException
        _emit 0x8b
        _emit 0x71
        _emit 0x18
        _emit 0x8b
        _emit 0x04
        _emit 0x30
        _emit 0x89
        _emit 0x51
        _emit 0x14
        _emit 0x5e
        _emit 0x59
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00424342
__declspec(naked) void gap_00424342(void)
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

// FUNCTION: PORT1111 0x00424350
__declspec(naked) double __fastcall FUN_00424350(int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x41
        _emit 0x14
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x10
        _emit 0x8d
        _emit 0x50
        _emit 0x04
        _emit 0x3b
        _emit 0xd6
        _emit 0x7e
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        mov dword ptr [esp + 0xc], OFFSET s_Unexpected_number_of_byte__004bf7a0
        call _CxxThrowException
        _emit 0x8b
        _emit 0x71
        _emit 0x18
        _emit 0xd9
        _emit 0x04
        _emit 0x30
        _emit 0x89
        _emit 0x51
        _emit 0x14
        _emit 0x5e
        _emit 0x59
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00424382
__declspec(naked) void gap_00424382(void)
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

// FUNCTION: PORT1111 0x00424390
__declspec(naked) int __fastcall FUN_00424390(int param_1)
{
    __asm {
        _emit 0x51
        _emit 0x8b
        _emit 0x41
        _emit 0x14
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x10
        _emit 0x8d
        _emit 0x50
        _emit 0x02
        _emit 0x3b
        _emit 0xd6
        _emit 0x7e
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        mov dword ptr [esp + 0xc], OFFSET s_Unexpected_number_of_byte__004bf7a0
        call _CxxThrowException
        _emit 0x8b
        _emit 0x71
        _emit 0x18
        _emit 0x66
        _emit 0x8b
        _emit 0x04
        _emit 0x30
        _emit 0x89
        _emit 0x51
        _emit 0x14
        _emit 0x5e
        _emit 0x59
        _emit 0xc3
    }
}


// GAP: PORT1111 0x004243c3
__declspec(naked) void gap_004243c3(void)
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

// FUNCTION: PORT1111 0x004243d0
__declspec(naked) void __fastcall FUN_004243d0(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x50
        _emit 0x14
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0x70
        _emit 0x10
        _emit 0x8d
        _emit 0x0c
        _emit 0x1a
        _emit 0x3b
        _emit 0xce
        _emit 0x7e
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        mov dword ptr [esp + 0x18], OFFSET s_Unexpected_number_of_byte__004bf7a0
        call _CxxThrowException
        _emit 0x8b
        _emit 0x70
        _emit 0x18
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x03
        _emit 0xf2
        _emit 0x8b
        _emit 0xcb
        _emit 0x8b
        _emit 0xd1
        _emit 0xc1
        _emit 0xe9
        _emit 0x02
        _emit 0xf3
        _emit 0xa5
        _emit 0x8b
        _emit 0xca
        _emit 0x83
        _emit 0xe1
        _emit 0x03
        _emit 0xf3
        _emit 0xa4
        _emit 0x8b
        _emit 0x48
        _emit 0x14
        _emit 0x5f
        _emit 0x03
        _emit 0xcb
        _emit 0x5e
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00424424
__declspec(naked) void gap_00424424(void)
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

// FUNCTION: PORT1111 0x00424430
__declspec(naked) void __fastcall FUN_00424430(void *pthis,int param_1,int param_2,int param_3)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x1c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x51
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0xc2
        _emit 0x0c
        _emit 0x00
    }
}


// GAP: PORT1111 0x00424448
__declspec(naked) void gap_00424448(void)
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

// FUNCTION: PORT1111 0x00424450
__declspec(naked) void __fastcall FUN_00424450(int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x6a
        _emit 0x04
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x51
        call FUN_0044f970
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x83
        _emit 0xf8
        _emit 0x04
        _emit 0x74
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        mov dword ptr [esp + 0x10], OFFSET s_Error_reading_file_004bf7d8
        call _CxxThrowException
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x39
        _emit 0x4e
        _emit 0x0c
        _emit 0x73
        _emit 0x32
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x51
        _emit 0x50
        _emit 0xe8
        _emit 0x69
        _emit 0x3d
        _emit 0x07
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
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
        mov dword ptr [esp + 0x10], OFFSET s_Memory_allocation_failure__004bf7bc
        call _CxxThrowException
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x4e
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x56
        _emit 0x18
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x51
        _emit 0x52
        _emit 0x50
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x4e
        _emit 0x10
        call FUN_0044f970
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x51
        mov dword ptr [esp + 0x10], OFFSET s_Error_reading_file_004bf7d8
        call _CxxThrowException
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
    }
}


// GAP: PORT1111 0x004244ff
__declspec(naked) void gap_004244ff(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00424500
__declspec(naked) void __fastcall FUN_00424500(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xc7
        _emit 0x73
        _emit 0x2e
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x57
        _emit 0x50
        _emit 0xe8
        _emit 0xe8
        _emit 0x3c
        _emit 0x07
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        mov dword ptr [esp + 0x14], OFFSET s_Memory_allocation_failure__004bf7bc
        call _CxxThrowException
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x56
        _emit 0x18
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x57
        _emit 0x52
        _emit 0x50
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x7e
        _emit 0x10
        call FUN_0044f970
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        mov dword ptr [esp + 0x14], OFFSET s_Error_reading_file_004bf7d8
        call _CxxThrowException
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00424578
__declspec(naked) void gap_00424578(void)
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

// FUNCTION: PORT1111 0x00424580
__declspec(naked) void __fastcall FUN_00424580(int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x0c
        _emit 0x56
        _emit 0x57
        mov edi, dword ptr [ReadFile]
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x56
        _emit 0x1c
        _emit 0x6a
        _emit 0x04
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x18
        _emit 0x51
        _emit 0x52
        _emit 0xff
        _emit 0xd7
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x83
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0x7c
        _emit 0x24
        _emit 0x08
        _emit 0x04
        _emit 0x75
        _emit 0x7c
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x39
        _emit 0x4e
        _emit 0x0c
        _emit 0x73
        _emit 0x32
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x51
        _emit 0x50
        _emit 0xe8
        _emit 0x3e
        _emit 0x3c
        _emit 0x07
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        mov dword ptr [esp + 0x18], OFFSET s_Memory_allocation_failure__004bf7bc
        call _CxxThrowException
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x4e
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x51
        _emit 0x89
        _emit 0x4e
        _emit 0x10
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x50
        _emit 0x51
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0xd7
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x3b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x2e
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x50
        mov dword ptr [esp + 0x18], OFFSET s_Error_reading_file_004bf7d8
        call _CxxThrowException
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        mov dword ptr [esp + 0x18], OFFSET s_Error_reading_file_004bf7d8
        call _CxxThrowException
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00424649
__declspec(naked) void gap_00424649(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x51
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x3b
        _emit 0xc7
        _emit 0x73
        _emit 0x2e
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x57
        _emit 0x50
        _emit 0xe8
        _emit 0x97
        _emit 0x3b
        _emit 0x07
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x51
        mov dword ptr [esp + 0x18], OFFSET s_Memory_allocation_failure__004bf7bc
        call _CxxThrowException
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x6a
        _emit 0x00
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x57
        _emit 0x50
        _emit 0x51
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x7e
        _emit 0x10
        call dword ptr [ReadFile]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x39
        _emit 0x7c
        _emit 0x24
        _emit 0x08
        _emit 0x74
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x14
        _emit 0x52
        mov dword ptr [esp + 0x18], OFFSET s_Error_reading_file_004bf7d8
        call _CxxThrowException
        _emit 0x5f
        _emit 0x5e
        _emit 0x59
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

// FUNCTION: PORT1111 0x004246e0
__declspec(naked) void __fastcall FUN_004246e0(int param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x04
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x08
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
        mov dword ptr [esp + 0x10], OFFSET s_Error_reading_file_004bf7d8
        call _CxxThrowException
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x39
        _emit 0x56
        _emit 0x0c
        _emit 0x73
        _emit 0x32
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x52
        _emit 0x51
        _emit 0xe8
        _emit 0xde
        _emit 0x3a
        _emit 0x07
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        mov dword ptr [esp + 0x10], OFFSET s_Memory_allocation_failure__004bf7bc
        call _CxxThrowException
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x56
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x89
        _emit 0x56
        _emit 0x10
        _emit 0x52
        _emit 0x8b
        _emit 0x56
        _emit 0x18
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x01
        _emit 0x52
        _emit 0xff
        _emit 0x50
        _emit 0x08
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
        mov dword ptr [esp + 0x10], OFFSET s_Error_reading_file_004bf7d8
        call _CxxThrowException
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00424782
__declspec(naked) void gap_00424782(void)
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

// FUNCTION: PORT1111 0x00424790
__declspec(naked) void __fastcall FUN_00424790(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xc7
        _emit 0x73
        _emit 0x2e
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x57
        _emit 0x50
        _emit 0xe8
        _emit 0x58
        _emit 0x3a
        _emit 0x07
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        mov dword ptr [esp + 0x14], OFFSET s_Memory_allocation_failure__004bf7bc
        call _CxxThrowException
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        _emit 0x57
        _emit 0xc7
        _emit 0x46
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x7e
        _emit 0x10
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        mov dword ptr [esp + 0x14], OFFSET s_Error_reading_file_004bf7d8
        call _CxxThrowException
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00424804
__declspec(naked) void gap_00424804(void)
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

// FUNCTION: PORT1111 0x00424810
__declspec(naked) void __fastcall FUN_00424810(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        _emit 0x8b
        _emit 0x56
        _emit 0x10
        _emit 0x8d
        _emit 0x48
        _emit 0x04
        _emit 0x3b
        _emit 0xca
        _emit 0x7e
        _emit 0x17
        push OFFSET DAT_004cd26c
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        mov dword ptr [esp + 0x10], OFFSET s_Unexpected_number_of_byte__004bf7a0
        call _CxxThrowException
        _emit 0x8b
        _emit 0x56
        _emit 0x18
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x0c
        _emit 0x03
        _emit 0xd0
        _emit 0x57
        _emit 0x8b
        _emit 0x3a
        _emit 0x8d
        _emit 0x47
        _emit 0x01
        _emit 0x89
        _emit 0x4e
        _emit 0x14
        _emit 0x50
        _emit 0x8b
        _emit 0xcb
        call FUN_00466100
        _emit 0x8b
        _emit 0x0b
        _emit 0x57
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_004243d0
        _emit 0x8b
        _emit 0x13
        _emit 0xc6
        _emit 0x04
        _emit 0x17
        _emit 0x00
        _emit 0x5f
        _emit 0x5b
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}


// GAP: PORT1111 0x00424869
__declspec(naked) void gap_00424869(void)
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
