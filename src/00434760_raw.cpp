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

extern const unsigned char PTR_LAB_004bfcd0[];
extern unsigned char DAT_004db294[];
extern unsigned char DAT_004e0ae0[];
extern unsigned char DAT_004e0aec[];
extern unsigned char DAT_004e26ac[];
extern unsigned char DAT_004e26b0[];
extern unsigned char DAT_004e26b4[];
extern unsigned char DAT_004e26b8[];
extern unsigned char DAT_004e26c0[];
extern unsigned char DAT_004e26c4[];
extern unsigned char DAT_004e26f0[];
extern unsigned char DAT_004e26fc[];
extern unsigned char DAT_004e2700[];
extern unsigned char DAT_004e2800[];
extern const unsigned char PTR_LAB_004bfd38[4];
extern const unsigned char PTR_FUN_004bfd3c[4];
extern const unsigned char PTR_InitializeCriticalSection_004bc12c[4];
extern const unsigned char PTR_FUN_004bfcdc[12];
extern unsigned char DAT_004e21b4[4];
extern unsigned char DAT_004e21b8[4];
extern unsigned char DAT_004ddb0c[12];
extern void * DAT_004e240c;
extern unsigned char DAT_004d6a80[8];
extern const unsigned char PTR_FUN_004bfd08[12];
extern unsigned char DAT_004e2424[4];
extern const unsigned char PTR_FUN_004bfd40[24];
extern const unsigned char PTR_FUN_004bfd58[24];




// FUNCTION: PORT1111 0x00434760
__declspec(naked) void __fastcall FUN_00434760(void *pthis,void *param_1)
{
    __asm {
        _emit 0x83
        _emit 0xec
        _emit 0x68
        mov eax, dword ptr [DAT_004ddb0c]
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x64
        mov eax, dword ptr [DAT_004e21b8]
        _emit 0x85
        _emit 0xc0
        _emit 0x56
        _emit 0x8b
        _emit 0x74
        _emit 0x24
        _emit 0x70
        _emit 0x74
        _emit 0x25
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x83
        _emit 0xf8
        _emit 0x05
        _emit 0x74
        _emit 0x1d
        _emit 0x83
        _emit 0xf8
        _emit 0x0f
        _emit 0x74
        _emit 0x18
        _emit 0x8b
        _emit 0x06
        _emit 0x6a
        _emit 0x01
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x10
        _emit 0x5e
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x64
        call pt_a_00497aa6
        _emit 0x83
        _emit 0xc4
        _emit 0x68
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        mov edx, dword ptr [DAT_004e240c]
        _emit 0x83
        _emit 0x7a
        _emit 0x60
        _emit 0x02
        _emit 0x75
        _emit 0x37
        _emit 0x83
        _emit 0x7e
        _emit 0x0c
        _emit 0x09
        _emit 0x74
        _emit 0x31
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0x8b
        _emit 0xce
        call FUN_00433980
        mov edx, dword ptr [DAT_004e240c]
        _emit 0x6a
        _emit 0x64
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x08
        _emit 0x51
        _emit 0x8b
        _emit 0x4a
        _emit 0x64
        call FUN_00445740
        _emit 0x5e
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x64
        call pt_a_00497aa6
        _emit 0x83
        _emit 0xc4
        _emit 0x68
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x56
        call FUN_004346f0
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x83
        _emit 0xc0
        _emit 0xf7
        _emit 0x83
        _emit 0xf8
        _emit 0x16
        _emit 0x77
        _emit 0x0e
        movzx eax, byte ptr [eax + gap_004348a5 + 11]
        jmp dword ptr [eax*4 + gap_004348a5 + 3]
        _emit 0x8b
        _emit 0x4e
        _emit 0x04
        _emit 0x53
        _emit 0x57
        _emit 0x51
        mov ecx, dword ptr [DAT_004e240c]
        call FUN_00414c30
        _emit 0x8b
        _emit 0xf8
        _emit 0x8b
        _emit 0x46
        _emit 0x0c
        _emit 0x33
        _emit 0xdb
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x0c
        _emit 0x8b
        _emit 0x86
        _emit 0xd4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x6c
        _emit 0xeb
        _emit 0x60
        _emit 0x83
        _emit 0xf8
        _emit 0x0d
        _emit 0x75
        _emit 0x0d
        _emit 0x8b
        _emit 0x76
        _emit 0x14
        _emit 0x83
        _emit 0xfe
        _emit 0x35
        _emit 0x74
        _emit 0x4e
        _emit 0x83
        _emit 0xfe
        _emit 0x50
        _emit 0xeb
        _emit 0x47
        _emit 0x8b
        _emit 0x16
        _emit 0x8b
        _emit 0xce
        _emit 0xff
        _emit 0x52
        _emit 0x14
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x43
        _emit 0x83
        _emit 0x7e
        _emit 0x34
        _emit 0x01
        _emit 0x75
        _emit 0x3d
        _emit 0x8b
        _emit 0x46
        _emit 0x14
        mov ecx, dword ptr [DAT_004e240c]
        _emit 0x50
        call FUN_00414c30
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x34
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x30
        _emit 0x8b
        _emit 0x4e
        _emit 0x30
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0a
        _emit 0x8b
        _emit 0x8f
        _emit 0xe4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x15
        _emit 0x8b
        _emit 0x40
        _emit 0x50
        _emit 0x8b
        _emit 0x40
        _emit 0x14
        _emit 0x83
        _emit 0xf8
        _emit 0x35
        _emit 0x74
        _emit 0x05
        _emit 0x83
        _emit 0xf8
        _emit 0x50
        _emit 0x75
        _emit 0x05
        _emit 0xbb
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xff
        _emit 0x74
        _emit 0x06
        _emit 0x89
        _emit 0x9f
        _emit 0xe4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x5b
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x68
        _emit 0x5e
        call pt_a_00497aa6
        _emit 0x83
        _emit 0xc4
        _emit 0x68
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}
