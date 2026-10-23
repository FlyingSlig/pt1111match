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

extern "C" void free_thunk(void *);
extern int DAT_004bf994;
extern unsigned char DAT_004e2c5c[];
extern unsigned char DAT_004e2b14[12];
extern const unsigned char PTR_FUN_004bf9a8[28];
extern int DAT_004e2404;
extern unsigned char DAT_004e2681[1];
extern unsigned char DAT_004e2050[4];
extern unsigned char DAT_004e204c[4];












// GAP: PORT1111 0x0042d7a6
__declspec(naked) void gap_0042d7a6(void)
{
    __asm {
        _emit 0x8b
        _emit 0xff
        _emit 0xd7
        _emit 0xd6
        _emit 0x42
        _emit 0x00
        _emit 0xc6
        _emit 0xd6
        _emit 0x42
        _emit 0x00
        _emit 0xad
        _emit 0xd6
        _emit 0x42
        _emit 0x00
        _emit 0xde
        _emit 0xd6
        _emit 0x42
        _emit 0x00
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

// FUNCTION: PORT1111 0x0042d7c0
__declspec(naked) void __fastcall FUN_0042d7c0(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0xff
        _emit 0x50
        _emit 0x14
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_0042d420
        _emit 0x33
        _emit 0xc0
        _emit 0x33
        _emit 0xc9
        _emit 0x89
        _emit 0x46
        _emit 0x10
        _emit 0x89
        _emit 0x4e
        _emit 0x14
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0042d7e2
__declspec(naked) void gap_0042d7e2(void)
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

// FUNCTION: PORT1111 0x0042d7f0
__declspec(naked) void __fastcall FUN_0042d7f0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x3a
        _emit 0x50
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00420ee0
        _emit 0x8b
        _emit 0x56
        _emit 0x08
        _emit 0x0f
        _emit 0xbf
        _emit 0x42
        _emit 0x34
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x6a
        _emit 0x16
        call FUN_004750b0
        _emit 0x8b
        _emit 0xc8
        call FUN_00477b30
        _emit 0xc7
        _emit 0x46
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x0042d836
__declspec(naked) void gap_0042d836(void)
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

// FUNCTION: PORT1111 0x0042d840
__declspec(naked) void __fastcall FUN_0042d840(int param_1)
{
    __asm {
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        call FUN_0042d420
        _emit 0x8b
        _emit 0x47
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0x9e
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x8b
        _emit 0x58
        _emit 0x30
        _emit 0x0f
        _emit 0xaf
        _emit 0x58
        _emit 0x2c
        _emit 0x56
        _emit 0x8d
        _emit 0x34
        _emit 0x9d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0xe8
        _emit 0xdf
        _emit 0x97
        _emit 0x06
        _emit 0x00
        _emit 0x56
        _emit 0x89
        _emit 0x47
        _emit 0x1c
        _emit 0xe8
        _emit 0xd6
        _emit 0x97
        _emit 0x06
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x08
        _emit 0x33
        _emit 0xf6
        _emit 0x85
        _emit 0xdb
        _emit 0x89
        _emit 0x47
        _emit 0x20
        _emit 0x0f
        _emit 0x8e
        _emit 0x6a
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x55
        _emit 0xbd
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x06
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x03
        _emit 0x6a
        _emit 0x07
        call FUN_004750b0
        _emit 0x8b
        _emit 0xc8
        call FUN_00475080
        _emit 0x8b
        _emit 0xc8
        call FUN_00479800
        _emit 0x8b
        _emit 0x4f
        _emit 0x1c
        _emit 0x89
        _emit 0x04
        _emit 0xb1
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x47
        _emit 0x1c
        _emit 0x8b
        _emit 0x8a
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x14
        _emit 0xb0
        _emit 0x6a
        _emit 0x01
        _emit 0x52
        _emit 0x6a
        _emit 0x16
        call FUN_004750b0
        _emit 0x8b
        _emit 0xc8
        call FUN_00477ae0
        _emit 0x8b
        _emit 0x47
        _emit 0x1c
        _emit 0x8b
        _emit 0x04
        _emit 0xb0
        _emit 0x09
        _emit 0x68
        _emit 0x28
        _emit 0x8b
        _emit 0x4f
        _emit 0x1c
        _emit 0x8b
        _emit 0x0c
        _emit 0xb1
        _emit 0x6a
        _emit 0x01
        call FUN_00478380
        _emit 0x8b
        _emit 0x57
        _emit 0x1c
        _emit 0x8b
        _emit 0x0c
        _emit 0xb2
        call FUN_004787e0
        _emit 0x8b
        _emit 0x47
        _emit 0x1c
        _emit 0x8b
        _emit 0x0c
        _emit 0xb0
        call FUN_00478920
        _emit 0x8b
        _emit 0x4f
        _emit 0x1c
        _emit 0x8b
        _emit 0x0c
        _emit 0xb1
        _emit 0x6a
        _emit 0x01
        call FUN_004789b0
        _emit 0x8b
        _emit 0x57
        _emit 0x1c
        _emit 0x8b
        _emit 0x0c
        _emit 0xb2
        _emit 0x6a
        _emit 0x00
        call FUN_00478010
        _emit 0x8b
        _emit 0x47
        _emit 0x1c
        _emit 0x8b
        _emit 0x0c
        _emit 0xb0
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x51
        _emit 0x8b
        _emit 0x8a
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004207f0
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0x02
        _emit 0x6a
        _emit 0x07
        call FUN_004750b0
        _emit 0x8b
        _emit 0xc8
        call FUN_00475080
        _emit 0x8b
        _emit 0xc8
        call FUN_00479800
        _emit 0x8b
        _emit 0x4f
        _emit 0x20
        _emit 0x89
        _emit 0x04
        _emit 0xb1
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x47
        _emit 0x20
        _emit 0x8b
        _emit 0x8a
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x14
        _emit 0xb0
        _emit 0x6a
        _emit 0x01
        _emit 0x52
        _emit 0x6a
        _emit 0x16
        call FUN_004750b0
        _emit 0x8b
        _emit 0xc8
        call FUN_00477ae0
        _emit 0x8b
        _emit 0x47
        _emit 0x20
        _emit 0x8b
        _emit 0x04
        _emit 0xb0
        _emit 0x09
        _emit 0x68
        _emit 0x28
        _emit 0x8b
        _emit 0x4f
        _emit 0x20
        _emit 0x8b
        _emit 0x0c
        _emit 0xb1
        _emit 0x6a
        _emit 0x01
        call FUN_00478380
        _emit 0x8b
        _emit 0x57
        _emit 0x20
        _emit 0x8b
        _emit 0x0c
        _emit 0xb2
        call FUN_004787e0
        _emit 0x8b
        _emit 0x47
        _emit 0x20
        _emit 0x8b
        _emit 0x0c
        _emit 0xb0
        call FUN_00478920
        _emit 0x8b
        _emit 0x4f
        _emit 0x20
        _emit 0x8b
        _emit 0x0c
        _emit 0xb1
        _emit 0x6a
        _emit 0x01
        call FUN_004789b0
        _emit 0x8b
        _emit 0x57
        _emit 0x20
        _emit 0x8b
        _emit 0x0c
        _emit 0xb2
        _emit 0x6a
        _emit 0x00
        call FUN_00478010
        _emit 0x8b
        _emit 0x47
        _emit 0x20
        _emit 0x8b
        _emit 0x0c
        _emit 0xb0
        mov edx, dword ptr [DAT_004e2b14]
        _emit 0x51
        _emit 0x8b
        _emit 0x8a
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004207f0
        _emit 0x46
        _emit 0x3b
        _emit 0xf3
        _emit 0x0f
        _emit 0x8c
        _emit 0xa5
        _emit 0xfe
        _emit 0xff
        _emit 0xff
        _emit 0x5d
        _emit 0x5e
    }
}

// GAP: PORT1111 0x0042d9ed
__declspec(naked) void gap_0042d9ed(void)
{
    __asm {
        _emit 0x89
        _emit 0x5f
        _emit 0x18
        _emit 0x5b
        _emit 0x5f
        _emit 0xc3
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
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x42
        _emit 0x0c
        _emit 0x8b
        _emit 0x40
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x3b
        _emit 0xd1
        _emit 0x75
        _emit 0x09
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        mov dword ptr [DAT_004e2c5c], ecx
        _emit 0xc3
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
