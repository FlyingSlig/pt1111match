// pt1111match — 0x4069c0.

#include "pt1111_funcs.h"

struct CSub50b {
    void Method2(int arg);
};

#pragma comment(linker, "/alternatename:?Method2@CSub50b@@QAEXH@Z=?FUN_004072a0@@YIXPAXH@Z")

// FUNCTION: PORT1111 0x004069c0
void __fastcall FUN_004069c0(void *param_1)
{
    int v = FUN_0047fd20(*(int *)((int)param_1 + 0x18));
    ((CSub50b *)param_1)->Method2(v);
}
