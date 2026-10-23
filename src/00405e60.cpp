#include "pt1111_funcs.h"

extern void *DAT_004e2410;

// FUNCTION: PORT1111 0x00405e60
__declspec(naked) void __fastcall FUN_00405e60(void *param_1)
{
    __asm {
        push esi
        mov esi, ecx
        mov ecx, DWORD PTR [esi+0xb0]
        test ecx, ecx
        je L_ret
        mov eax, DWORD PTR [ecx+0x2c]
        test eax, eax
        jne L_ret
        push 2
        call FUN_00444bf0
        push 0xffffffff
        push 0xffffffff
        mov ecx, esi
        call FUN_00405ad0
        mov ecx, DWORD PTR [DAT_004e2410]
        pop esi
        jmp FUN_00455c40
    L_ret:
        pop esi
        ret
    }
}
