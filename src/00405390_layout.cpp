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

extern void * DAT_004e240c;
extern unsigned char DAT_004e26fc[4];
extern int DAT_004e2404;
extern unsigned char DAT_004e2408[4];
extern unsigned char DAT_004e2418[4];
extern void * DAT_004e2410;












// FUNCTION: PORT1111 0x00405390
__declspec(naked) int __fastcall FUN_00405390(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x06
        _emit 0xff
        _emit 0x50
        _emit 0x2c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x04
        _emit 0xb0
        _emit 0x01
        _emit 0x5e
        _emit 0xc3
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x8b
        _emit 0x49
        _emit 0x1c
        _emit 0x8b
        _emit 0x11
        _emit 0x5e
        _emit 0xff
        _emit 0x62
        _emit 0x18
    }
}

// GAP: PORT1111 0x004053ac
__declspec(naked) void gap_004053ac(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004053b0
__declspec(naked) int __fastcall FUN_004053b0(void *pthis,void *param_1)
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
        push OFFSET pt_eh_stub_004b598b
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call FUN_004127c0
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xc8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xcf
        call FUN_00424310
        _emit 0x89
        _emit 0x46
        _emit 0x64
        _emit 0x6a
        _emit 0x06
        _emit 0x8d
        _emit 0x46
        _emit 0x68
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_004243d0
        _emit 0x8b
        _emit 0xcf
        call FUN_00424310
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x46
        _emit 0x74
        call FUN_00424310
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x7c
        _emit 0x74
        _emit 0x49
        _emit 0x8b
        _emit 0x46
        _emit 0x60
        _emit 0x6a
        _emit 0x34
        _emit 0xc7
        _emit 0x40
        _emit 0x08
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_004317a0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x89
        _emit 0x48
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00412e90
        _emit 0x8b
        _emit 0xcf
        call FUN_00424310
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x86
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00424310
        _emit 0x89
        _emit 0x86
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0x7f
        _emit 0x08
        _emit 0x19
        _emit 0x7c
        _emit 0x18
        _emit 0x8b
        _emit 0xcf
        call FUN_00424310
        _emit 0x83
        _emit 0xf8
        _emit 0x01
        _emit 0x75
        _emit 0x0c
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_004449c0
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
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
        _emit 0x5f
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004054b8
__declspec(naked) void gap_004054b8(void)
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

// FUNCTION: PORT1111 0x004054c0
__declspec(naked) int __fastcall FUN_004054c0(void *pthis,int param_1)
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
        push OFFSET pt_eh_stub_004b598b
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x53
        _emit 0x55
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x20
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0xcf
        call FUN_00424310
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x86
        _emit 0xcc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00424310
        _emit 0x8b
        _emit 0xcf
        call FUN_00424310
        _emit 0x6a
        _emit 0x40
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x20
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        call FUN_0045c7f0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x56
        _emit 0x50
        _emit 0x8b
        _emit 0xaa
        _emit 0x80
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x52
        _emit 0x14
        _emit 0x8b
        _emit 0x4e
        _emit 0x60
        _emit 0x8b
        _emit 0x19
        _emit 0x55
        _emit 0x52
        _emit 0x50
        _emit 0x56
        _emit 0x57
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x2c
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0x53
        _emit 0x18
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x10
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5b
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040555e
__declspec(naked) void gap_0040555e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00405560
__declspec(naked) void __fastcall FUN_00405560(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call FUN_00412800
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x76
        _emit 0x70
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x12
        _emit 0x33
        _emit 0xc9
        _emit 0x8a
        _emit 0x4e
        _emit 0x34
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f650
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x6a
        _emit 0xff
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f650
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// FUNCTION: PORT1111 0x004055a0
__declspec(naked) void __fastcall FUN_004055a0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x57
        _emit 0x8b
        _emit 0xf1
        call FUN_00412840
        _emit 0x8b
        _emit 0x46
        _emit 0x64
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x6a
        _emit 0x06
        _emit 0x8d
        _emit 0x4e
        _emit 0x68
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f440
        _emit 0x8b
        _emit 0x56
        _emit 0x74
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x46
        _emit 0x7c
        _emit 0x50
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x8e
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x96
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        _emit 0x8b
        _emit 0xcf
        call FUN_0042f670
        _emit 0x8b
        _emit 0x86
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x48
        _emit 0x2c
        _emit 0x51
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

// GAP: PORT1111 0x0040560e
__declspec(naked) void gap_0040560e(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00405610
__declspec(naked) void __fastcall FUN_00405610(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x87
        _emit 0xcc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_0042f670
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_0042f670
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_0042f670
        _emit 0x8b
        _emit 0x4f
        _emit 0x60
        _emit 0x8b
        _emit 0x11
        _emit 0x56
        _emit 0xff
        _emit 0x52
        _emit 0x1c
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00405646
__declspec(naked) void gap_00405646(void)
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

// FUNCTION: PORT1111 0x00405650
__declspec(naked) int __fastcall FUN_00405650(void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_004125a0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x35
        _emit 0x8b
        _emit 0x46
        _emit 0x74
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1c
        _emit 0x8b
        _emit 0x46
        _emit 0x10
        _emit 0xc7
        _emit 0x46
        _emit 0x74
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x89
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_00453fc0
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004454a0
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00405695
__declspec(naked) void gap_00405695(void)
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

// FUNCTION: PORT1111 0x004056a0
__declspec(naked) int __fastcall FUN_004056a0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x70
        mov edx, dword ptr [DAT_004e26fc]
        _emit 0x3b
        _emit 0x50
        _emit 0x34
        _emit 0x74
        _emit 0x0f
        call FUN_00412b60
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x06
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x33
        _emit 0xc0
        _emit 0xc3
    }
}

// FUNCTION: PORT1111 0x004056c0
__declspec(naked) bool __fastcall FUN_004056c0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0xce
        call FUN_00412b60
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x2a
        _emit 0x8b
        _emit 0xcf
        call FUN_00412b60
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x1f
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x4f
        _emit 0x70
        _emit 0x8b
        _emit 0x50
        _emit 0x34
        _emit 0x8b
        _emit 0x71
        _emit 0x34
        _emit 0x33
        _emit 0xc0
        _emit 0x3b
        _emit 0xd6
        _emit 0x5f
        _emit 0x0f
        _emit 0x95
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00405704
__declspec(naked) void gap_00405704(void)
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

// FUNCTION: PORT1111 0x00405710
__declspec(naked) void __fastcall FUN_00405710(void *pthis,int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x70
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x1b
        _emit 0x8a
        _emit 0x50
        _emit 0x5a
        _emit 0x84
        _emit 0xd2
        _emit 0x74
        _emit 0x14
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x0c
        _emit 0x8b
        _emit 0x49
        _emit 0x50
        _emit 0x51
        _emit 0x52
        _emit 0x8b
        _emit 0xc8
        call FUN_00422110
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00405735
__declspec(naked) void gap_00405735(void)
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

// FUNCTION: PORT1111 0x00405740
__declspec(naked) void __fastcall FUN_00405740(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0xc1
        _emit 0x8b
        _emit 0x48
        _emit 0x70
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x18
        _emit 0x8a
        _emit 0x51
        _emit 0x5a
        _emit 0x84
        _emit 0xd2
        _emit 0x74
        _emit 0x11
        _emit 0x8b
        _emit 0x50
        _emit 0x40
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x40
        _emit 0x50
        _emit 0x50
        _emit 0x52
        call FUN_00422040
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00405762
__declspec(naked) void gap_00405762(void)
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

// FUNCTION: PORT1111 0x00405770
__declspec(naked) void __fastcall FUN_00405770(void *pthis,int param_1)
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
        push OFFSET pt_eh_stub_004b598b
        _emit 0x50
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x50
        _emit 0x83
        _emit 0xb8
        _emit 0xa8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x09
        _emit 0x0f
        _emit 0x84
        _emit 0x3d
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x7c
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x85
        _emit 0x32
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x90
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x34
        cmp eax, dword ptr [DAT_004e26fc]
        _emit 0x75
        _emit 0x19
        _emit 0x8b
        _emit 0x46
        _emit 0x08
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x50
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x81
        _emit 0xc1
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004218a0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x84
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x46
        _emit 0x54
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x68
        _emit 0x49
        _emit 0x04
        _emit 0x00
        _emit 0x00
        call FUN_00445030
        _emit 0x8b
        _emit 0x46
        _emit 0x54
        _emit 0x85
        _emit 0xc0
        _emit 0x0f
        _emit 0x8f
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x16
        _emit 0x6a
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x46
        _emit 0x54
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xff
        _emit 0x92
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0xc7
        _emit 0x46
        _emit 0x7c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0f
        _emit 0xbf
        _emit 0x48
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x50
        _emit 0x4e
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2408]
        _emit 0x52
        _emit 0x56
        call FUN_0043c180
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x20
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x22
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x20
        mov ecx, dword ptr [DAT_004e2418]
        _emit 0x50
        call FUN_0040af10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        call FUN_0040a970
        mov eax, dword ptr [DAT_004e240c]
        _emit 0x8b
        _emit 0x88
        _emit 0x1c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x56
        call FUN_00453a00
        _emit 0x6a
        _emit 0x34
        call pt_a_00496fa4
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0x8b
        _emit 0xc8
        call FUN_004317a0
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x89
        _emit 0x48
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00412e90
        _emit 0x8b
        _emit 0x56
        _emit 0x54
        _emit 0x8b
        _emit 0x46
        _emit 0x60
        _emit 0x8b
        _emit 0x48
        _emit 0x0c
        _emit 0x52
        call FUN_00453550
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x92
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0d
        mov ecx, dword ptr [DAT_004e2410]
        _emit 0x6a
        _emit 0x00
        call FUN_00454e30
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
        _emit 0x5e
        _emit 0x83
        _emit 0xc4
        _emit 0x0c
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004058e7
__declspec(naked) void gap_004058e7(void)
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

// FUNCTION: PORT1111 0x004058f0
__declspec(naked) int __fastcall FUN_004058f0(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x57
        call FUN_00414c30
        _emit 0x85
        _emit 0xff
        _emit 0x7c
        _emit 0x04
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x48
        _emit 0x83
        _emit 0xc9
        _emit 0xff
        _emit 0x83
        _emit 0xca
        _emit 0xff
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x06
        _emit 0x8b
        _emit 0x48
        _emit 0x04
        _emit 0x8b
        _emit 0x50
        _emit 0x08
        _emit 0x8b
        _emit 0x86
        _emit 0xd0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x2e
        _emit 0x8b
        _emit 0x86
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x75
        _emit 0x22
        _emit 0x39
        _emit 0xbe
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x1a
        _emit 0x39
        _emit 0x8e
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x12
        _emit 0x39
        _emit 0x96
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x0a
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x5f
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x0040595b
__declspec(naked) void gap_0040595b(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00405960
__declspec(naked) bool __fastcall FUN_00405960(void *pthis,int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x44
        _emit 0x8b
        _emit 0x41
        _emit 0x7c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x3d
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x85
        _emit 0xc0
        _emit 0x8b
        _emit 0x49
        _emit 0x40
        _emit 0x74
        _emit 0x33
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x2f
        _emit 0x0f
        _emit 0xbf
        _emit 0x51
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x49
        _emit 0x4e
        _emit 0x52
        _emit 0x0f
        _emit 0xbf
        _emit 0x50
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x40
        _emit 0x4e
        _emit 0x51
        _emit 0x52
        _emit 0x50
        call FUN_004051e0
        _emit 0x8b
        _emit 0x4e
        _emit 0x50
        _emit 0x8b
        _emit 0x71
        _emit 0x4c
        _emit 0x33
        _emit 0xd2
        _emit 0x83
        _emit 0xc4
        _emit 0x10
        _emit 0x3b
        _emit 0xc6
        _emit 0x0f
        _emit 0x9e
        _emit 0xc2
        _emit 0x5e
        _emit 0x8b
        _emit 0xc2
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x004059b5
__declspec(naked) void gap_004059b5(void)
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

// FUNCTION: PORT1111 0x004059c0
__declspec(naked) bool __fastcall FUN_004059c0(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x53
        _emit 0x8b
        _emit 0x46
        _emit 0x7c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x4c
        _emit 0x8b
        _emit 0x56
        _emit 0x14
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        _emit 0xff
        _emit 0x52
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0a
        _emit 0x8b
        _emit 0x47
        _emit 0x70
        _emit 0x8b
        _emit 0x48
        _emit 0x3c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x35
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x53
        _emit 0x8b
        _emit 0x5e
        _emit 0x08
        _emit 0x56
        _emit 0x53
        _emit 0x52
        _emit 0x51
        _emit 0x50
        call FUN_0045eb00
        _emit 0x8b
        _emit 0x4f
        _emit 0x50
        _emit 0x8b
        _emit 0x91
        _emit 0xf4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0x33
        _emit 0xc9
        _emit 0x83
        _emit 0xc2
        _emit 0x1e
        _emit 0x3b
        _emit 0xc2
        _emit 0x0f
        _emit 0x9e
        _emit 0xc1
        _emit 0x5b
        _emit 0x5f
        _emit 0x5e
        _emit 0x8b
        _emit 0xc1
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00405a37
__declspec(naked) void gap_00405a37(void)
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

// FUNCTION: PORT1111 0x00405a40
__declspec(naked) unsigned char __fastcall FUN_00405a40(int param_1)
{
    __asm {
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf0
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x64
        _emit 0x8b
        _emit 0x46
        _emit 0x7c
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x5d
        _emit 0x8b
        _emit 0x56
        _emit 0x14
        _emit 0x8d
        _emit 0x4e
        _emit 0x14
        _emit 0xff
        _emit 0x52
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0a
        _emit 0x8b
        _emit 0x47
        _emit 0x70
        _emit 0x8b
        _emit 0x48
        _emit 0x3c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x46
        _emit 0x8b
        _emit 0x56
        _emit 0x04
        _emit 0x8b
        _emit 0x4f
        _emit 0x08
        _emit 0x8b
        _emit 0x47
        _emit 0x04
        _emit 0x53
        _emit 0x8b
        _emit 0x5e
        _emit 0x08
        _emit 0x56
        _emit 0x53
        _emit 0x52
        _emit 0x51
        _emit 0x50
        call FUN_0045eb00
        _emit 0x8b
        _emit 0x7f
        _emit 0x50
        _emit 0x8b
        _emit 0x8f
        _emit 0xf4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xc4
        _emit 0x14
        _emit 0x3b
        _emit 0xc1
        _emit 0x5b
        _emit 0x7d
        _emit 0x0a
        _emit 0x5f
        _emit 0xb8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x97
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xc9
        _emit 0x3b
        _emit 0xc2
        _emit 0x0f
        _emit 0x9f
        _emit 0xc1
        _emit 0x5f
        _emit 0x5e
        _emit 0x8b
        _emit 0xc1
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// GAP: PORT1111 0x00405ac8
__declspec(naked) void gap_00405ac8(void)
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

// FUNCTION: PORT1111 0x00405ad0
__declspec(naked) void __fastcall FUN_00405ad0(void *pthis,int param_1,int param_2)
{
    __asm {
        _emit 0x53
        _emit 0x55
        _emit 0x8b
        _emit 0x6c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x86
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xcb
        _emit 0xff
        _emit 0x83
        _emit 0xf8
        _emit 0x02
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x18
        _emit 0x75
        _emit 0x2b
        _emit 0x83
        _emit 0xfd
        _emit 0x02
        _emit 0x75
        _emit 0x08
        _emit 0x3b
        _emit 0xbe
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x1e
        _emit 0x8b
        _emit 0x86
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x08
        _emit 0x53
        _emit 0x8b
        _emit 0xc8
        call FUN_0040e560
        _emit 0x3b
        _emit 0xeb
        _emit 0x75
        _emit 0x65
        _emit 0x53
        _emit 0x53
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x9e
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x9e
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x9e
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x9e
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x9e
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x9e
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call pt_a_00412740
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00444b20
        _emit 0x8b
        _emit 0x8e
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_004449f0
        _emit 0x8b
        _emit 0x4e
        _emit 0x5c
        _emit 0x85
        _emit 0xc9
        _emit 0x89
        _emit 0x9e
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x07
        _emit 0x6a
        _emit 0x00
        call FUN_00426b20
        _emit 0x5f
        _emit 0xc7
        _emit 0x46
        _emit 0x5c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x83
        _emit 0xfd
        _emit 0x02
        _emit 0x75
        _emit 0x1b
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x57
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x0b
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x51
        _emit 0x8b
        _emit 0xc8
        call FUN_0040e560
        _emit 0x89
        _emit 0xae
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xae
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xbe
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x9e
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x9e
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x57
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x12
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x96
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x40
        _emit 0x08
        _emit 0x89
        _emit 0x86
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5e
        _emit 0x5d
        _emit 0x5b
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}

// GAP: PORT1111 0x00405bed
__declspec(naked) void gap_00405bed(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}
