// pt1111match — 0x408310. Callee 0x407b10 is __thiscall; modelled as a member
// and linked to the raw naked implementation of 0x407b10 via alternatename.

#include "pt1111_funcs.h"

struct CSub50 {
    void Method(int arg);
};

#pragma comment(linker, "/alternatename:?Method@CSub50@@QAEXH@Z=?FUN_00407b10@@YIXPAXH@Z")

// FUNCTION: PORT1111 0x00408310
void __fastcall FUN_00408310(void *param_1)
{
    ((CSub50 *)param_1)->Method(*(int *)(*(int *)((int)param_1 + 0x50) + 0xfc));
}
