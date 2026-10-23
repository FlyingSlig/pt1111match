// pt1111match — 0x404f70: calls __thiscall 0x417670 on the object in DAT_004e240c.

#include "pt1111_funcs.h"

extern void *DAT_004e240c;
extern unsigned char DAT_004e21bc[4];

struct CSomething {
    int Method(int arg);
};

// FUNCTION: PORT1111 0x00417670
__declspec(noinline) int CSomething::Method(int arg)
{
    __asm {
        mov esi, DWORD PTR [esp+8]
        mov eax, DWORD PTR [esi+0x10]
        lea edx, DWORD PTR [esp+8]
        push edx
        add ecx, 4
        mov DWORD PTR [esp+0xc], eax
        call FUN_00417480
        mov DWORD PTR [eax], esi
        mov eax, DWORD PTR [esi+0x50]
        mov cl, BYTE PTR [eax+0x54]
        test cl, cl
        je L1
        mov ecx, DWORD PTR [esi+0x10]
        lea edx, DWORD PTR [esp+8]
        mov DWORD PTR [esp+8], ecx
        push edx
        mov ecx, OFFSET DAT_004e21bc
        call FUN_00417480
        mov DWORD PTR [eax], esi
    L1:
    }
}

