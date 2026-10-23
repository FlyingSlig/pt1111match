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

extern const unsigned char s_fx_rdt_004bc878[8];
extern unsigned char DAT_004e279c[48];
extern unsigned char DAT_004e2b14[12];
extern unsigned char DAT_004e2b10[4];
extern unsigned char DAT_004e2800[4];
extern unsigned char DAT_004e2687[17];
extern unsigned char DAT_004e2686[1];
extern const unsigned char s_data_ai_004bc870[8];
extern unsigned char DAT_004e2a80[4];
extern const unsigned char s_alert_wav_004bc864[12];











// GAP: PORT1111 0x004032eb
__declspec(naked) void gap_004032eb(void)
{
    __asm {
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
        _emit 0xcc
    }
}

// FUNCTION: PORT1111 0x004032f0
__declspec(naked) void FUN_004032f0(void)
{
    __asm {
        call FUN_00454db0
        call FUN_0042ac60
        call FUN_004146d0
        mov ecx, dword ptr [DAT_004e2800]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x2b
        call FUN_0044c400
        mov ecx, dword ptr [DAT_004e2800]
        _emit 0x85
        _emit 0xc9
        _emit 0x74
        _emit 0x1c
        _emit 0x56
        _emit 0x8b
        _emit 0xf1
        call FUN_0044cfd0
        _emit 0x56
        call pt_a_004978fd
        _emit 0x83
    }
}


// GAP: PORT1111 0x00403327
__declspec(naked) void gap_00403327(void)
{
    __asm {
        _emit 0xc4
        _emit 0x04
        _emit 0xc7
        add eax, OFFSET DAT_004e2800
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5e
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
    }
}
