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

extern int DAT_004e0adc;
extern int DAT_004e2404;
extern void * DAT_004e240c;
extern unsigned char DAT_004e2b14[12];
extern const unsigned char PTR_FUN_004beab4[24];
extern int DAT_004bea90;
extern int DAT_004bea64;











// GAP: PORT1111 0x00411be3
__declspec(naked) void gap_00411be3(void)
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

// FUNCTION: PORT1111 0x00411bf0
__declspec(naked) int __fastcall FUN_00411bf0(void *pthis,void *param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x0c
        _emit 0x3b
        _emit 0xcf
        _emit 0x75
        _emit 0x12
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        call FUN_00426ce0
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
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0f
        _emit 0x56
        call FUN_004288e0
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x05
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x56
        _emit 0x8b
        _emit 0xcf
        _emit 0x89
        _emit 0x7e
        _emit 0x18
        call FUN_00428240
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


// GAP: PORT1111 0x00411c39
__declspec(naked) void gap_00411c39(void)
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

// FUNCTION: PORT1111 0x00411c40
__declspec(naked) void __fastcall FUN_00411c40(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x56
        call FUN_00417430
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x56
        call FUN_004288e0
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x20
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0xc7
        _emit 0x46
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}


// GAP: PORT1111 0x00411c7a
__declspec(naked) void gap_00411c7a(void)
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

// FUNCTION: PORT1111 0x00411c80
__declspec(naked) int __fastcall FUN_00411c80(void *pthis,int param_1,int param_2)
{
    __asm {
        mov eax, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x52
        call FUN_004750b0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x19
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_00476aa0
        _emit 0x85
        _emit 0xc0
        _emit 0x89
        _emit 0x46
        _emit 0x0c
        _emit 0x75
        _emit 0x06
        _emit 0x33
        _emit 0xc0
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x89
        _emit 0x56
        _emit 0x04
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x08
        _emit 0x00
    }
}


// GAP: PORT1111 0x00411ccb
__declspec(naked) void gap_00411ccb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00411cd0
__declspec(naked) void __fastcall FUN_00411cd0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x23
        _emit 0x8b
        _emit 0x4e
        _emit 0x10
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x15
        _emit 0x8b
        _emit 0x40
        _emit 0x04
        mov ecx, dword ptr [DAT_004e2b14]
        _emit 0x8b
        _emit 0x89
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x50
        call FUN_004765a0
        _emit 0xc7
        _emit 0x46
        _emit 0x0c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc3
    }
}

// GAP: PORT1111 0x00411cff
__declspec(naked) void gap_00411cff(void)
{
    __asm {
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x00411d00
__declspec(naked) void __fastcall FUN_00411d00(void *pthis,int param_1,int param_2,int param_3,int param_4,int param_5)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x56
        _emit 0x28
        _emit 0x57
        _emit 0x8b
        _emit 0xf9
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x14
        _emit 0x83
        _emit 0xca
        _emit 0x04
        _emit 0x85
        _emit 0xc9
        _emit 0x89
        _emit 0x56
        _emit 0x28
        _emit 0x8b
        _emit 0xc2
        _emit 0x74
        _emit 0x06
        _emit 0x83
        _emit 0xc8
        _emit 0x20
        _emit 0x89
        _emit 0x46
        _emit 0x28
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x04
        _emit 0x83
        _emit 0x4e
        _emit 0x28
        _emit 0x40
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x07
        _emit 0x81
        _emit 0x4e
        _emit 0x28
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x81
        _emit 0x4e
        _emit 0x28
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        call FUN_004787e0
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x03
        _emit 0x89
        _emit 0x77
        _emit 0x08
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x14
        _emit 0x00
    }
}


// GAP: PORT1111 0x00411d5a
__declspec(naked) void gap_00411d5a(void)
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

// FUNCTION: PORT1111 0x00411d60
__declspec(naked) int __fastcall FUN_00411d60(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x83
        _emit 0x78
        _emit 0x24
        _emit 0x01
        _emit 0x75
        _emit 0x62
        _emit 0x6a
        _emit 0x34
        call pt_a_00496fa4
        _emit 0x33
        _emit 0xc9
        _emit 0x83
        _emit 0xc4
        _emit 0x04
        _emit 0x3b
        _emit 0xc1
        _emit 0x74
        _emit 0x34
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0x89
        _emit 0x48
        _emit 0x18
        _emit 0x89
        _emit 0x48
        _emit 0x1c
        _emit 0x89
        _emit 0x48
        _emit 0x20
        _emit 0x89
        _emit 0x48
        _emit 0x24
        _emit 0x89
        _emit 0x48
        _emit 0x28
        _emit 0x89
        _emit 0x48
        _emit 0x2c
        _emit 0x89
        _emit 0x48
        _emit 0x30
        _emit 0xc7
        _emit 0x40
        _emit 0x08
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        mov dword ptr [eax], OFFSET PTR_FUN_004beab4
        _emit 0xc7
        _emit 0x40
        _emit 0x0c
        _emit 0x21
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xeb
        _emit 0x02
        _emit 0x33
        _emit 0xc0
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x8b
        _emit 0x51
        _emit 0x10
        _emit 0x89
        _emit 0x50
        _emit 0x04
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00412e90
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

// GAP: PORT1111 0x00411dd2
__declspec(naked) void gap_00411dd2(void)
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

// FUNCTION: PORT1111 0x00411de0
__declspec(naked) void __fastcall FUN_00411de0(int param_1)
{
    __asm {
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x46
        _emit 0x04
        _emit 0x8b
        _emit 0x48
        _emit 0x08
        _emit 0x8b
        _emit 0x50
        _emit 0x04
        _emit 0x51
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x52
        call FUN_00478700
        _emit 0x8b
        _emit 0x4e
        _emit 0x08
        _emit 0x8a
        _emit 0x41
        _emit 0x2c
        _emit 0xa8
        _emit 0x01
        _emit 0x5e
        _emit 0x74
        _emit 0x06
        _emit 0x0c
        _emit 0x88
        _emit 0x88
        _emit 0x41
        _emit 0x2c
        _emit 0xc3
        jmp FUN_00478920
    }
}


// GAP: PORT1111 0x00411e0c
__declspec(naked) void gap_00411e0c(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x48
        _emit 0x0c
        _emit 0x8b
        _emit 0x49
        _emit 0x1c
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x03
        _emit 0x33
        _emit 0xc0
        _emit 0xc3
        _emit 0x8b
        _emit 0x11
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x14
        _emit 0x56
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x0c
        _emit 0x5e
        _emit 0xc3
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
        _emit 0x8b
        _emit 0x48
        _emit 0x0c
        _emit 0x8b
        _emit 0x49
        _emit 0x1c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0f
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x14
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8b
        _emit 0x48
        _emit 0x0c
        _emit 0x8b
        _emit 0x49
        _emit 0x1c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0f
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x8b
        _emit 0x11
        _emit 0x50
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x50
        _emit 0xff
        _emit 0x52
        _emit 0x10
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8b
        _emit 0x48
        _emit 0x0c
        _emit 0x56
        _emit 0x8b
        _emit 0x71
        _emit 0x1c
        _emit 0x85
        _emit 0xf6
        _emit 0x74
        _emit 0x1a
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0f
        _emit 0x8b
        _emit 0x06
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x50
        _emit 0x18
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0x5e
        _emit 0xff
        _emit 0x62
        _emit 0x1c
        _emit 0x5e
        _emit 0xc3
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x8b
        _emit 0x07
        _emit 0x8b
        _emit 0xf1
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x0c
        _emit 0x56
        _emit 0x51
        _emit 0x8b
        _emit 0xcf
        _emit 0xff
        _emit 0x50
        _emit 0x08
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x05
        _emit 0x5f
        _emit 0x5e
        _emit 0xc2
        _emit 0x14
        _emit 0x00
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x10
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x1c
        _emit 0x8b
        _emit 0x06
        _emit 0x6a
        _emit 0x00
        _emit 0x89
        _emit 0x56
        _emit 0x20
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x1c
        _emit 0x51
        _emit 0x52
        _emit 0x8b
        _emit 0xce
        _emit 0x89
        _emit 0x7e
        _emit 0x1c
        _emit 0xff
        _emit 0x50
        _emit 0x0c
        mov eax, dword ptr [DAT_004e0adc]
        _emit 0x89
        _emit 0x46
        _emit 0x10
        inc dword ptr [DAT_004e0adc]
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x56
        call FUN_004176c0
        _emit 0x5f
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x14
        _emit 0x00
        _emit 0xcc
        _emit 0x8b
        _emit 0x44
        _emit 0x24
        _emit 0x0c
        _emit 0x53
        _emit 0x8b
        _emit 0x5c
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x57
        _emit 0x8b
        _emit 0x7c
        _emit 0x24
        _emit 0x14
        _emit 0x50
        _emit 0x57
        _emit 0x53
        _emit 0x8b
        _emit 0xf1
        call FUN_004090a0
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x57
        _emit 0x53
        call FUN_00429b40
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x08
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00411bf0
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0xc2
        _emit 0x0c
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

// FUNCTION: PORT1111 0x00411f50
__declspec(naked) void __fastcall FUN_00411f50(void *param_1)
{
    __asm {
        _emit 0x6a
        _emit 0xff
        push OFFSET pt_eh_stub_004b6108
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
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x04
        mov dword ptr [esi], OFFSET DAT_004bea90
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x56
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00417430
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x56
        call FUN_004288e0
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x05
        _emit 0x8b
        _emit 0x01
        _emit 0xff
        _emit 0x50
        _emit 0x20
        _emit 0x8b
        _emit 0x4e
        _emit 0x1c
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0d
        _emit 0x8b
        _emit 0x11
        _emit 0x6a
        _emit 0x01
        _emit 0xff
        _emit 0x12
        _emit 0xc7
        _emit 0x46
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xce
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0xff
        _emit 0xff
        _emit 0xff
        _emit 0xff
        call FUN_00409090
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x08
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


// GAP: PORT1111 0x00411fcf
__declspec(naked) void gap_00411fcf(void)
{
    __asm {
        _emit 0xcc
    }
}
