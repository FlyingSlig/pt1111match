#include <windows.h>

extern int DAT_004bc9f0;

// FUNCTION: PORT1111 0x00403db0
__declspec(naked) void __fastcall FUN_00403db0(void *param_1)
{
    __asm {
        mov eax, ecx
        xor ecx, ecx
        mov DWORD PTR [eax], OFFSET DAT_004bc9f0
        mov DWORD PTR [eax+8], ecx
        mov DWORD PTR [eax+0x18], ecx
        mov DWORD PTR [eax+0x1c], ecx
        mov DWORD PTR [eax+4], ecx
        mov DWORD PTR [eax+0x34], ecx
        mov DWORD PTR [eax+0x10], ecx
        mov DWORD PTR [eax+0x14], ecx
        mov DWORD PTR [eax+0x24], ecx
        mov DWORD PTR [eax+0x28], ecx
        mov DWORD PTR [eax+0x20], ecx
        mov DWORD PTR [eax+0x2c], ecx
        mov DWORD PTR [eax+0xc], ecx
        mov DWORD PTR [eax+0x30], ecx
        ret
    }
}
