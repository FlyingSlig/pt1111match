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

extern const unsigned char DAT_004bd2c8[1];
extern unsigned char DAT_004e2b14[12];
extern int DAT_004be968;
extern int DAT_004be93c;












// FUNCTION: PORT1111 0x004111d0
__declspec(naked) void __fastcall FUN_004111d0(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b609e
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
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8d
        _emit 0x4e
        _emit 0x4c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00419670
        _emit 0x8b
        _emit 0x46
        _emit 0x34
        _emit 0x33
        _emit 0xff
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x7e
        _emit 0x34
        _emit 0x89
        _emit 0x7e
        _emit 0x38
        _emit 0x89
        _emit 0x7e
        _emit 0x3c
        _emit 0x8b
        _emit 0x46
        _emit 0x24
        _emit 0x3b
        _emit 0xc7
        _emit 0x74
        _emit 0x09
        _emit 0x50
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x7e
        _emit 0x24
        _emit 0x89
        _emit 0x7e
        _emit 0x28
        _emit 0x89
        _emit 0x7e
        _emit 0x2c
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00411fe0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
    }
}

// GAP: PORT1111 0x0041124c
__declspec(naked) void gap_0041124c(void)
{
    __asm {
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x10
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
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00411260
__declspec(naked) int __fastcall FUN_00411260(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b60d1
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
        _emit 0x57
        _emit 0x6a
        _emit 0x30
        _emit 0x8b
        _emit 0xf9
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
        _emit 0x0b
        _emit 0x8b
        _emit 0xc8
        call FUN_00477720
        _emit 0x8b
        _emit 0xf0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xf6
        _emit 0x85
        _emit 0xf6
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x0f
        _emit 0x84
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        push OFFSET DAT_004bd2c8
        _emit 0x8b
        _emit 0xce
        call FUN_00477a40
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        _emit 0x56
        call FUN_00476a10
        _emit 0x6a
        _emit 0x64
        mov dword ptr [esi + 0x20], OFFSET gap_00411e0c + 4
        mov dword ptr [esi + 0x24], OFFSET gap_00411e0c + 84
        mov dword ptr [esi + 0x28], OFFSET gap_00411e0c + 52
        mov dword ptr [esi + 0x2c], OFFSET gap_00411e0c + 116
        _emit 0x89
        _emit 0x7e
        _emit 0x1c
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
        _emit 0x01
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
        push OFFSET DAT_004bd2c8
        _emit 0x8b
        _emit 0xc8
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x47
        _emit 0x18
        call FUN_00478070
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x22
        _emit 0x8b
        _emit 0x4f
        _emit 0x18
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
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
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x47
        _emit 0x18
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00477ae0
        _emit 0x6a
        _emit 0x2c
        _emit 0x89
        _emit 0x47
        _emit 0x1c
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
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0a
        _emit 0x57
        _emit 0x8b
        _emit 0xc8
        call FUN_00410b50
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4f
        _emit 0x18
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x89
        _emit 0x47
        _emit 0x40
        call FUN_0047aa60
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x33
        _emit 0x8b
        _emit 0x77
        _emit 0x40
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x17
        _emit 0x8b
        _emit 0xce
        call FUN_0047bab0
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        _emit 0x47
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
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
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x18
        _emit 0x68
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        call FUN_00478250
        _emit 0x8b
        _emit 0x4f
        _emit 0x18
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x00
        _emit 0x6a
        _emit 0x01
        _emit 0x6a
        _emit 0x01
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_00411d00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x20
        _emit 0x6a
        _emit 0x00
        _emit 0x52
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_00411b80
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x5f
        _emit 0x5e
        _emit 0x64
        _emit 0x89
        _emit 0x0d
    }
}

// GAP: PORT1111 0x0041140a
__declspec(naked) void gap_0041140a(void)
{
    __asm {
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

// FUNCTION: PORT1111 0x00411420
__declspec(naked) int * __fastcall FUN_00411420(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x6a
        _emit 0x01
        _emit 0x50
        _emit 0x8b
        _emit 0xf1
        call FUN_004124b0
        _emit 0x33
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x5c
        _emit 0x89
        _emit 0x46
        _emit 0x60
        _emit 0x89
        _emit 0x46
        _emit 0x64
        _emit 0x89
        _emit 0x46
        _emit 0x68
        mov dword ptr [esi], OFFSET DAT_004be968
        mov dword ptr [esi + 0x14], OFFSET DAT_004be93c
        _emit 0x8b
        _emit 0xc6
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
