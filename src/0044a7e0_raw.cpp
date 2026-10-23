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

extern unsigned char DAT_004dc2a8[];
extern unsigned char DAT_004e26c8[];
extern unsigned char DAT_004e26d8[];
extern unsigned char DAT_004e27f0[];
extern const unsigned char PTR_FUN_004c4280[192];
extern const unsigned char PTR_FUN_004c4340[188];
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004ddb0c[12];
extern const unsigned char PTR_RegQueryValueExA_004bc000[4];
extern const unsigned char s_SoundLevel_004c4420[12];
extern unsigned char DAT_004dc2a0[4];
extern const unsigned char s_MusicLevel_004c4414[12];
extern unsigned char DAT_004dc29c[4];
extern const unsigned char s_SpeedLevel_004c4408[12];
extern unsigned char DAT_004db290[4];
extern const unsigned char s_DifLevel_004c43fc[12];
extern unsigned char DAT_004db294[4];
extern const unsigned char PTR_RegSetValueExA_004bc008[4];
extern unsigned char DAT_004e2800[4];
extern unsigned char DAT_004dc2a4[4];
extern unsigned char DAT_004dc2ac[4];
extern unsigned char DAT_004e2424[4];
extern unsigned char DAT_004d6a80[8];
extern unsigned char DAT_004e27f4[4];
extern unsigned char DAT_004e27f8[4];
extern unsigned char DAT_004e27fc[4];
extern const unsigned char s_Display_004c442c[8];





// FUNCTION: PORT1111 0x0044a7e0
__declspec(naked) int __fastcall FUN_0044a7e0(void *pthis,unsigned short param_1)
{
    __asm {
        _emit 0x0f
        _emit 0xb7
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xc0
        _emit 0x9b
        _emit 0x83
        _emit 0xf8
        _emit 0x78
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        _emit 0x0f
        _emit 0x87
        _emit 0x06
        _emit 0x01
        _emit 0x00
        _emit 0x00
        movzx eax, byte ptr [eax + gap_0044a900 + 36]
        jmp dword ptr [eax*4 + gap_0044a900]
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x49
        _emit 0x51
        _emit 0x8b
        _emit 0xce
        call FUN_00453550
        mov ecx, dword ptr [DAT_004e2800]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x0b
        _emit 0x33
        _emit 0xd2
        _emit 0x8a
        _emit 0x56
        _emit 0x18
        _emit 0x52
        call FUN_0044c020
        _emit 0x8b
        _emit 0x46
        _emit 0x18
        mov dword ptr [DAT_004dc29c], eax
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x4e
        _emit 0x18
        _emit 0x41
        _emit 0xeb
        _emit 0xcc
        _emit 0x8b
        _emit 0x56
        _emit 0x48
        _emit 0x8d
        _emit 0x4e
        _emit 0x30
        _emit 0x4a
        _emit 0x52
        call FUN_00453550
        _emit 0x8b
        _emit 0x46
        _emit 0x48
        mov dword ptr [DAT_004dc2a0], eax
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x56
        _emit 0x48
        _emit 0x8d
        _emit 0x4e
        _emit 0x30
        _emit 0x42
        _emit 0x52
        call FUN_00453550
        _emit 0x8b
        _emit 0x46
        _emit 0x48
        mov dword ptr [DAT_004dc2a0], eax
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x56
        _emit 0x78
        _emit 0x8d
        _emit 0x4e
        _emit 0x60
        _emit 0x4a
        _emit 0x52
        call FUN_00453550
        _emit 0x8b
        _emit 0x76
        _emit 0x78
        mov eax, dword ptr [DAT_004e2b14]
        mov dword ptr [DAT_004db290], esi
        _emit 0x8b
        _emit 0x88
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        call FUN_00475230
        mov eax, dword ptr [DAT_004e2424]
        _emit 0x85
        _emit 0xc0
        _emit 0x74
        _emit 0x4b
        mov ecx, dword ptr [DAT_004db290]
        mov dword ptr [DAT_004d6a80], ecx
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0xc2
        _emit 0x04
        _emit 0x00
        _emit 0x8b
        _emit 0x56
        _emit 0x78
        _emit 0x8d
        _emit 0x4e
        _emit 0x60
        _emit 0x42
        _emit 0xeb
        _emit 0xb9
        _emit 0x8b
        _emit 0x96
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x8e
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x4a
        _emit 0xeb
        _emit 0x0d
        _emit 0x8b
        _emit 0x96
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x8e
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x42
        _emit 0x52
        call FUN_00453550
        _emit 0x8b
        _emit 0x86
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov dword ptr [DAT_004db294], eax
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
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
