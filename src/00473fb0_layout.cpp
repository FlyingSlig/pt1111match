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

extern const unsigned char PTR_FUN_004c655c[];
extern const unsigned char s_list_T__too_long_004bce98[20];
extern const unsigned char DAT_004cc884[16];
extern const unsigned char PTR_FUN_004c6e20[12];
extern const unsigned char s_Bt_Action__d__d_004c656c[16];
extern const unsigned char s_Action___d_004c6560[12];
extern unsigned char DAT_004e2b14[12];
extern const unsigned char PTR_LAB_004c657c[4];
extern const unsigned char PTR_LAB_004c6580[60];
extern unsigned char DAT_004e2b10[4];












// FUNCTION: PORT1111 0x00473fb0
__declspec(naked) int * __fastcall FUN_00473fb0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x57
        _emit 0x8d
        _emit 0x7e
        _emit 0x04
        _emit 0x8b
        _emit 0xcf
        mov dword ptr [esi], OFFSET PTR_FUN_004c655c
        call FUN_0043d220
        _emit 0x89
        _emit 0x47
        _emit 0x04
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x47
        _emit 0x08
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x18
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00473fdb
__declspec(naked) void gap_00473fdb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00473fe0
__declspec(naked) void __fastcall FUN_00473fe0(void *pthis,unsigned int param_1)
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
        push OFFSET pt_eh_stub_004b9f68
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

// GAP: PORT1111 0x00474073
__declspec(naked) void gap_00474073(void)
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

// FUNCTION: PORT1111 0x00474080
__declspec(naked) void __fastcall FUN_00474080(void *pthis,void *param_1,void *param_2)
{
    __asm {
        _emit 0x0f
        _emit 0xb7
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x4f
        _emit 0x10
        _emit 0x50
        call FUN_0047cf90
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x74
        _emit 0x6a
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x51
        _emit 0x8d
        _emit 0x8e
        _emit 0xd0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00466a40
        _emit 0x8b
        _emit 0x86
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x1a
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x86
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x44
        _emit 0x8b
        _emit 0xce
        call FUN_00471c70
        _emit 0xc7
        _emit 0x86
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x77
        _emit 0x04
        _emit 0x8b
        _emit 0x7e
        _emit 0x04
        _emit 0x8b
        _emit 0x4f
        _emit 0x04
        _emit 0x53
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x50
        _emit 0x51
        _emit 0x57
        _emit 0x8b
        _emit 0xce
        call FUN_00413870
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0x8b
        _emit 0xd8
        call FUN_00473fe0
        _emit 0x89
        _emit 0x5f
        _emit 0x04
        _emit 0x8b
        _emit 0x53
        _emit 0x04
        _emit 0x89
        _emit 0x1a
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047410b
__declspec(naked) void gap_0047410b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00474110
__declspec(naked) int __fastcall FUN_00474110(void *pthis,void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b9f93
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
        _emit 0x83
        _emit 0xec
        _emit 0x08
        _emit 0x56
        _emit 0x6a
        _emit 0x64
        _emit 0x8b
        _emit 0xf1
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
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_0040d150
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x46
        _emit 0x40
        _emit 0xc7
        _emit 0x46
        _emit 0x64
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465cf0
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x20
        _emit 0x66
        _emit 0x8b
        _emit 0x40
        _emit 0x2c
        _emit 0x8b
        _emit 0x4e
        _emit 0x28
        _emit 0x51
        _emit 0x0f
        _emit 0xb7
        _emit 0xc0
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        push OFFSET s_Bt_Action__d__d_004c656c
        _emit 0x51
        call FUN_00466970
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0xeb
        _emit 0x17
        _emit 0x0f
        _emit 0xb7
        _emit 0x56
        _emit 0x2c
        _emit 0x52
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x08
        push OFFSET s_Action___d_004c6560
        _emit 0x50
        call FUN_00466970
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        call FUN_00465e00
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        _emit 0x50
        call FUN_00478070
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x25
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x48
        _emit 0x8b
        _emit 0x80
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x03
        _emit 0xc8
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x40
        call FUN_00478380
        _emit 0x8b
        _emit 0x56
        _emit 0x40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x6a
        _emit 0x01
        _emit 0x52
        call FUN_00477ae0
        _emit 0x8b
        _emit 0x76
        _emit 0x40
        _emit 0x8a
        _emit 0x46
        _emit 0x2c
        _emit 0x24
        _emit 0xbf
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x04
        _emit 0x88
        _emit 0x46
        _emit 0x2c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0x14
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00474245
__declspec(naked) void gap_00474245(void)
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

// FUNCTION: PORT1111 0x00474250
__declspec(naked) int __fastcall FUN_00474250(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b9fa8
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
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        _emit 0x33
        _emit 0xdb
        _emit 0x3b
        _emit 0xc3
        _emit 0x89
        _emit 0x9e
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0x85
        _emit 0x0a
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x3b
        _emit 0xc3
        _emit 0xc7
        _emit 0x46
        _emit 0x60
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x5e
        _emit 0x3c
        _emit 0x89
        _emit 0x5e
        _emit 0x40
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x23
        call FUN_0046ee80
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x23
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x54
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
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
        _emit 0x89
        _emit 0x5e
        _emit 0x68
        _emit 0x8b
        _emit 0x48
        _emit 0x3c
        _emit 0x89
        _emit 0x4e
        _emit 0x3c
        _emit 0x39
        _emit 0x5e
        _emit 0x1c
        _emit 0x75
        _emit 0x18
        _emit 0x0f
        _emit 0xb7
        _emit 0x46
        _emit 0x2c
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x60
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x3c
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00474110
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x1a
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x54
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
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
        _emit 0x57
        _emit 0x8d
        _emit 0xbe
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x57
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        call ctor_impl_466b20
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x5c
        _emit 0x24
        _emit 0x18
        call FUN_00465e40
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x40
        _emit 0x60
        _emit 0x50
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x89
        _emit 0x86
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00465e00
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00472560
        _emit 0x85
        _emit 0xc0
        _emit 0x5f
        _emit 0x75
        _emit 0x2b
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x54
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x5e
        _emit 0x33
        _emit 0xc0
        _emit 0x5b
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
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00465e40
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5e
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047439d
__declspec(naked) void gap_0047439d(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004743a0
__declspec(naked) int __fastcall FUN_004743a0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0x86
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x46
        _emit 0x60
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x3c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x14
        call FUN_0046ee80
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x18
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x54
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
        _emit 0xc7
        _emit 0x46
        _emit 0x68
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x3c
        _emit 0x89
        _emit 0x4e
        _emit 0x3c
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x18
        _emit 0x0f
        _emit 0xb7
        _emit 0x46
        _emit 0x2c
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x60
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x3c
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00474110
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xce
        _emit 0x75
        _emit 0x09
        _emit 0x8b
        _emit 0x16
        _emit 0xff
        _emit 0x52
        _emit 0x54
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
        call FUN_00473200
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xa6
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047443b
__declspec(naked) void gap_0047443b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00474440
__declspec(naked) int __fastcall FUN_00474440(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x15
        _emit 0xc7
        _emit 0x46
        _emit 0x3c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x46
        _emit 0x34
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x46
        _emit 0x60
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        call FUN_0046ee80
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x18
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x54
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
        _emit 0xc7
        _emit 0x46
        _emit 0x68
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x3c
        _emit 0x89
        _emit 0x4e
        _emit 0x3c
        _emit 0x8b
        _emit 0x56
        _emit 0x3c
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        call FUN_00474110
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0xce
        _emit 0x75
        _emit 0x09
        _emit 0x8b
        _emit 0x06
        _emit 0xff
        _emit 0x50
        _emit 0x54
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
        call FUN_00473010
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0xf3
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x18
        _emit 0x0f
        _emit 0xb7
        _emit 0x46
        _emit 0x2c
        _emit 0x8b
        _emit 0x16
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x60
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004744d9
__declspec(naked) void gap_004744d9(void)
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

// FUNCTION: PORT1111 0x004744e0
__declspec(naked) void __fastcall FUN_004744e0(void *param_1)
{
    __asm {
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x8d
        _emit 0x81
        _emit 0xdc
        _emit 0x07
        _emit 0x00
        _emit 0x00
        mov dword ptr [ecx], OFFSET PTR_LAB_004c657c
        _emit 0x89
        _emit 0x00
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004744f7
__declspec(naked) void gap_004744f7(void)
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

// FUNCTION: PORT1111 0x00474500
__declspec(naked) int * __fastcall FUN_00474500(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x68
        _emit 0xff
        _emit 0x7f
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xf1
        _emit 0x68
        _emit 0xff
        _emit 0x7f
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x86
        _emit 0xdc
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0xff
        _emit 0x7f
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x00
        _emit 0x68
        _emit 0xff
        _emit 0x7f
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x86
        _emit 0xe0
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x50
        mov dword ptr [esi], OFFSET PTR_LAB_004c657c
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call dword ptr [SetRect]
        _emit 0xc7
        _emit 0x46
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00474544
__declspec(naked) void gap_00474544(void)
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
        _emit 0x33
        _emit 0xc0
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x46
        _emit 0x08
        _emit 0x8d
        _emit 0x86
        _emit 0xdc
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x00
        _emit 0xf6
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x01
        mov dword ptr [esi], OFFSET PTR_LAB_004c657c
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

// FUNCTION: PORT1111 0x00474580
__declspec(naked) void __fastcall FUN_00474580(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x16
        _emit 0x8d
        _emit 0x81
        _emit 0xdc
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x41
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x00
        _emit 0xc7
        _emit 0x41
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047459e
__declspec(naked) void gap_0047459e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004745a0
__declspec(naked) int * __fastcall FUN_004745a0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b9fcb
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
        _emit 0x57
        _emit 0x8d
        _emit 0x4e
        _emit 0x18
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        mov dword ptr [esi], OFFSET PTR_LAB_004c6580
        call FUN_00465cf0
        _emit 0x33
        _emit 0xff
        _emit 0x8d
        _emit 0x4e
        _emit 0x38
        _emit 0x89
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        call FUN_00465cf0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x7e
        _emit 0x0c
        _emit 0x89
        _emit 0x7e
        _emit 0x10
        _emit 0x89
        _emit 0x7e
        _emit 0x14
        _emit 0x89
        _emit 0x7e
        _emit 0x28
        _emit 0x89
        _emit 0x7e
        _emit 0x30
        _emit 0x89
        _emit 0x7e
        _emit 0x34
        _emit 0x89
        _emit 0x7e
        _emit 0x20
        _emit 0x89
        _emit 0x7e
        _emit 0x04
        _emit 0x89
        _emit 0x7e
        _emit 0x08
        _emit 0x5f
        _emit 0x8b
        _emit 0xc6
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

// GAP: PORT1111 0x00474608
__declspec(naked) void gap_00474608(void)
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

// FUNCTION: PORT1111 0x00474610
__declspec(naked) void FUN_00474610(void)
{
    __asm {
        mov eax, dword ptr [DAT_004e2b10]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0f
        _emit 0x8b
        _emit 0x48
        _emit 0x18
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x08
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0xa0
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0047462b
__declspec(naked) void gap_0047462b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00474630
__declspec(naked) void __cdecl FUN_00474630(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x08
        _emit 0x8a
        _emit 0x51
        _emit 0x2d
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0x0e
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x08
        _emit 0x8a
        _emit 0x51
        _emit 0x2d
        _emit 0x84
        _emit 0xd2
        _emit 0x74
        _emit 0xf5
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0047464c
__declspec(naked) void gap_0047464c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00474650
__declspec(naked) void __fastcall FUN_00474650(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x01
        _emit 0x8a
        _emit 0x50
        _emit 0x2d
        _emit 0x84
        _emit 0xd2
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x89
        _emit 0x01
        _emit 0xc3
        _emit 0x8b
        _emit 0x10
        _emit 0x53
        _emit 0x8a
        _emit 0x5a
        _emit 0x2d
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x1a
        _emit 0x8b
        _emit 0x42
        _emit 0x08
        _emit 0x8a
        _emit 0x58
        _emit 0x2d
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x0c
        _emit 0x8b
        _emit 0xd0
        _emit 0x8b
        _emit 0x42
        _emit 0x08
        _emit 0x8a
        _emit 0x58
        _emit 0x2d
        _emit 0x84
        _emit 0xdb
        _emit 0x74
        _emit 0xf4
        _emit 0x89
        _emit 0x11
        _emit 0x5b
        _emit 0xc3
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8a
        _emit 0x50
        _emit 0x2d
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0x1e
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0x11
        _emit 0x3b
        _emit 0x10
        _emit 0x75
        _emit 0x0c
        _emit 0x89
        _emit 0x01
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8a
        _emit 0x50
        _emit 0x2d
        _emit 0x84
        _emit 0xd2
        _emit 0x74
        _emit 0xee
        _emit 0x8a
        _emit 0x50
        _emit 0x2d
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0x02
        _emit 0x89
        _emit 0x01
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x004746ad
__declspec(naked) void gap_004746ad(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004746b0
__declspec(naked) void __fastcall FUN_004746b0(void *param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x01
        _emit 0x8a
        _emit 0x50
        _emit 0x2d
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0x4d
        _emit 0x8b
        _emit 0x50
        _emit 0x08
        _emit 0x53
        _emit 0x8a
        _emit 0x5a
        _emit 0x2d
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x1b
        _emit 0x8b
        _emit 0x02
        _emit 0x8a
        _emit 0x58
        _emit 0x2d
        _emit 0x84
        _emit 0xdb
        _emit 0x75
        _emit 0x0e
        _emit 0x8d
        _emit 0x49
        _emit 0x00
        _emit 0x8b
        _emit 0xd0
        _emit 0x8b
        _emit 0x02
        _emit 0x8a
        _emit 0x58
        _emit 0x2d
        _emit 0x84
        _emit 0xdb
        _emit 0x74
        _emit 0xf5
        _emit 0x89
        _emit 0x11
        _emit 0x5b
        _emit 0xc3
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8a
        _emit 0x50
        _emit 0x2d
        _emit 0x84
        _emit 0xd2
        _emit 0x75
        _emit 0x1a
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x11
        _emit 0x3b
        _emit 0x50
        _emit 0x08
        _emit 0x75
        _emit 0x0c
        _emit 0x89
        _emit 0x01
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        _emit 0x8a
        _emit 0x50
        _emit 0x2d
        _emit 0x84
        _emit 0xd2
        _emit 0x74
        _emit 0xed
        _emit 0x89
        _emit 0x01
        _emit 0x5b
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00474707
__declspec(naked) void gap_00474707(void)
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

// FUNCTION: PORT1111 0x00474710
__declspec(naked) void __fastcall FUN_00474710(void *param_1)
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
        _emit 0xff
        _emit 0x50
        _emit 0x54
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x8b
        _emit 0x06
        _emit 0x6a
        _emit 0x02
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x4c
        _emit 0x8b
        _emit 0x06
        _emit 0x6a
        _emit 0x03
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0xff
        _emit 0x52
        _emit 0x58
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x64
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00474765
__declspec(naked) void gap_00474765(void)
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

// FUNCTION: PORT1111 0x00474770
__declspec(naked) void __fastcall FUN_00474770(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x52
        _emit 0x08
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x02
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x8b
        _emit 0x01
        _emit 0x6a
        _emit 0x00
        _emit 0xff
        _emit 0x50
        _emit 0x4c
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x03
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004747b3
__declspec(naked) void gap_004747b3(void)
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

// FUNCTION: PORT1111 0x004747c0
__declspec(naked) void __fastcall FUN_004747c0(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x42
        _emit 0x08
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0x30
        _emit 0x89
        _emit 0x72
        _emit 0x08
        _emit 0x8b
        _emit 0x30
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
        _emit 0x0d
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x5e
        _emit 0x89
        _emit 0x10
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
        _emit 0x11
        _emit 0x75
        _emit 0x0c
        _emit 0x89
        _emit 0x01
        _emit 0x5e
        _emit 0x89
        _emit 0x10
        _emit 0x89
        _emit 0x42
        _emit 0x04
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x5e
        _emit 0x89
        _emit 0x10
        _emit 0x89
        _emit 0x42
        _emit 0x04
        _emit 0x5b
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00474815
__declspec(naked) void gap_00474815(void)
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
        _emit 0x8b
        _emit 0x41
        _emit 0x28
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x0f
        _emit 0x94
        _emit 0xc1
        _emit 0x0f
        _emit 0xb6
        _emit 0xc1
        _emit 0xc3
        _emit 0xcc
    }
}
