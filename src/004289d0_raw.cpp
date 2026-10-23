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
extern const unsigned char PTR_LAB_004bf8b0[4];
extern unsigned char DAT_004e2074[16];
extern unsigned char DAT_004e2064[16];
extern unsigned char DAT_004e2084[16];
extern unsigned char DAT_004e2094[36];
extern unsigned char DAT_004e205c[4];
extern unsigned char DAT_004e2050[4];
extern unsigned char DAT_004e2060[4];
extern unsigned char DAT_004e2058[4];
extern int DAT_004e2404;
extern unsigned char DAT_004e264c[4];
extern unsigned char DAT_004e2648[4];
extern unsigned char DAT_004e2644[4];
extern unsigned char DAT_004e2640[4];
extern unsigned char DAT_004e265c[20];
extern unsigned char DAT_004e2658[4];
extern unsigned char DAT_004e2654[4];
extern unsigned char DAT_004e2650[4];
extern volatile int DAT_004e2c30;
extern volatile int DAT_004e2c34;




// FUNCTION: PORT1111 0x004289d0
__declspec(naked) void __fastcall FUN_004289d0(void *param_1)
{
    __asm {
        _emit 0x51
        mov edx, dword ptr [DAT_004e205c]
        _emit 0x53
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x0f
        _emit 0xb7
        _emit 0x46
        _emit 0x3c
        mov ecx, dword ptr [DAT_004e2050]
        _emit 0x23
        _emit 0xc1
        _emit 0x3b
        _emit 0xc2
        _emit 0x57
        _emit 0x75
        _emit 0x2e
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x57
        _emit 0x8b
        _emit 0x10
        _emit 0x8b
        _emit 0x58
        _emit 0x08
        _emit 0x33
        _emit 0xff
        _emit 0x85
        _emit 0xd2
        _emit 0x76
        _emit 0x4c
        _emit 0x8b
        _emit 0xff
        _emit 0x8b
        _emit 0x0c
        _emit 0xbb
        call FUN_0041ee10
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x8b
        _emit 0x08
        _emit 0x47
        _emit 0x3b
        _emit 0xf9
        _emit 0x72
        _emit 0xee
        mov ecx, dword ptr [DAT_004e2050]
        _emit 0xeb
        _emit 0x30
        cmp eax, dword ptr [DAT_004e2060]
        _emit 0x75
        _emit 0x28
        _emit 0x8b
        _emit 0x46
        _emit 0x1c
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x21
        _emit 0x8b
        _emit 0x18
        _emit 0x33
        _emit 0xff
        _emit 0x85
        _emit 0xdb
        _emit 0x55
        _emit 0x8b
        _emit 0x68
        _emit 0x08
        _emit 0x7e
        _emit 0x14
        _emit 0x8b
        _emit 0x4c
        _emit 0xbd
        _emit 0x00
        call FUN_0041edc0
        _emit 0x47
        _emit 0x3b
        _emit 0xfb
        _emit 0x7c
        _emit 0xf2
        mov ecx, dword ptr [DAT_004e2050]
        _emit 0x5d
        _emit 0xf7
        _emit 0xd1
        _emit 0x66
        _emit 0x21
        _emit 0x4e
        _emit 0x3c
        mov ecx, dword ptr [DAT_004e2058]
        _emit 0x33
        _emit 0xc0
        _emit 0x66
        _emit 0x8b
        _emit 0x46
        _emit 0x3c
        _emit 0xbb
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0b
        _emit 0xc1
        _emit 0x66
        _emit 0x89
        _emit 0x46
        _emit 0x3c
        _emit 0x8b
        _emit 0x46
        _emit 0x40
        _emit 0x85
        _emit 0xc0
        _emit 0x75
        _emit 0x4f
        _emit 0x89
        _emit 0x5e
        _emit 0x40
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x8b
        _emit 0x51
        _emit 0x60
        _emit 0x83
        _emit 0xc1
        _emit 0x5c
        _emit 0x85
        _emit 0xd2
        _emit 0x89
        _emit 0x74
        _emit 0x24
        _emit 0x0c
        _emit 0x75
        _emit 0x04
        _emit 0x33
        _emit 0xff
        _emit 0xeb
        _emit 0x08
        _emit 0x8b
        _emit 0x79
        _emit 0x08
        _emit 0x2b
        _emit 0xfa
        _emit 0xc1
        _emit 0xff
        _emit 0x02
        _emit 0x85
        _emit 0xd2
        _emit 0x74
        _emit 0x19
        _emit 0x8b
        _emit 0x41
        _emit 0x0c
        _emit 0x2b
        _emit 0xc2
        _emit 0xc1
        _emit 0xf8
        _emit 0x02
        _emit 0x3b
        _emit 0xf8
        _emit 0x73
        _emit 0x0d
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x89
        _emit 0x30
        _emit 0x83
        _emit 0xc0
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0xeb
        _emit 0x0f
        _emit 0x8b
        _emit 0x41
        _emit 0x08
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x0c
        _emit 0x52
        _emit 0x53
        _emit 0x50
        call FUN_0041eeb0
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x4e
        _emit 0x48
        _emit 0x49
        _emit 0x50
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        call FUN_00429ac0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x48
        _emit 0x40
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x0f
        _emit 0x89
        _emit 0x58
        _emit 0x40
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x50
        call FUN_00428780
        _emit 0x0f
        _emit 0xbf
        _emit 0x56
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x4e
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x4a
        _emit 0x52
        _emit 0x50
        call FUN_00429ac0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x48
        _emit 0x40
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x0f
        _emit 0x89
        _emit 0x58
        _emit 0x40
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x50
        call FUN_00428780
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x56
        _emit 0x4e
        _emit 0x49
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x42
        _emit 0x52
        call FUN_00429ac0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x48
        _emit 0x40
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x0f
        _emit 0x89
        _emit 0x58
        _emit 0x40
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x50
        call FUN_00428780
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x4e
        _emit 0x41
        _emit 0x50
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        call FUN_00429ac0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x48
        _emit 0x40
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x0f
        _emit 0x89
        _emit 0x58
        _emit 0x40
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x50
        call FUN_00428780
        _emit 0x0f
        _emit 0xbf
        _emit 0x56
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x4e
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x42
        _emit 0x52
        _emit 0x40
        _emit 0x50
        call FUN_00429ac0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x48
        _emit 0x40
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x0f
        _emit 0x89
        _emit 0x58
        _emit 0x40
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x50
        call FUN_00428780
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x56
        _emit 0x4e
        _emit 0x41
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x52
        call FUN_00429ac0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x48
        _emit 0x40
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x0f
        _emit 0x89
        _emit 0x58
        _emit 0x40
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x50
        call FUN_00428780
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x4e
        _emit 0x4e
        _emit 0x40
        _emit 0x49
        _emit 0x50
        _emit 0x51
        mov ecx, dword ptr [DAT_004e2404]
        call FUN_00429ac0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x48
        _emit 0x40
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x0f
        _emit 0x89
        _emit 0x58
        _emit 0x40
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x50
        call FUN_00428780
        _emit 0x0f
        _emit 0xbf
        _emit 0x56
        _emit 0x4c
        _emit 0x0f
        _emit 0xbf
        _emit 0x46
        _emit 0x4e
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x52
        _emit 0x48
        _emit 0x50
        call FUN_00429ac0
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x16
        _emit 0x8b
        _emit 0x48
        _emit 0x40
        _emit 0x85
        _emit 0xc9
        _emit 0x75
        _emit 0x0f
        _emit 0x89
        _emit 0x58
        _emit 0x40
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x50
        call FUN_00428780
        mov ecx, dword ptr [DAT_004e2404]
        _emit 0x56
        _emit 0x81
        _emit 0xc1
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        call FUN_00421240
        _emit 0x5f
        _emit 0x5e
        _emit 0x5b
        _emit 0x59
        _emit 0xc3
    }
}
