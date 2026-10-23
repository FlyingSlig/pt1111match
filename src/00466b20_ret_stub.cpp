#include "pt1111_funcs.h"
extern unsigned char PTR_DAT_004dd95c[4];

static volatile int sink_ret;
struct Ret466b20 { Ret466b20(void *p); ~Ret466b20(); };

// FUNCTION: PORT1111 0x00466b20
extern "C" __declspec(naked) void ctor_impl_466b20(void *pthis, void *p)
{
    __asm {
        mov eax, DWORD PTR [PTR_DAT_004dd95c]
        push esi
        mov esi, ecx
        mov ecx, DWORD PTR [esp+8]
        mov DWORD PTR [esi], eax
        mov edx, DWORD PTR [ecx]
        push 0xffffffff
        push edx
        mov ecx, esi
        call FUN_00466160
        mov eax, esi
        pop esi
        ret 4
    }
}

#pragma comment(linker, "/alternatename:??0Ret466b20@@QAE@PAX@Z=_ctor_impl_466b20")

__declspec(noinline) Ret466b20::~Ret466b20() { sink_ret = 0; }
