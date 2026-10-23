// pt1111match - UI method 0x402ca0.
#include "pt1111_funcs.h"

struct CUIThing {
    char gap_00[0x5c];
    char field_5c;
    void Method(int param_1);
};

// FUNCTION: PORT1111 0x00402ca0
__declspec(noinline) void CUIThing::Method(int param_1)
{
    __asm {
        mov edx, dword ptr [esp + 4]
        lea eax, [ecx + 0x5c]
        push eax
        push edx
        call FUN_00439360
    }
}
