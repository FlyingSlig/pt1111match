#include "pt1111_funcs.h"

extern void *DAT_004e2410;

// FUNCTION: PORT1111 0x00409a10
__declspec(naked) void __fastcall FUN_00409a10(void *this_, int param_1)
{
    __asm {
        mov eax, DWORD PTR [ecx+0x124]
        push esi
        mov esi, DWORD PTR [esp+0x8]
        add eax, esi
        mov DWORD PTR [ecx+0x124], eax
        mov ecx, DWORD PTR [ecx+0xb0]
        push 0x3f1
        call FUN_00445030
        test esi, esi
        pop esi
        jge L_ret
        mov ecx, DWORD PTR [DAT_004e2410]
        call FUN_00455220
    L_ret:
        ret 0x4
    }
}
