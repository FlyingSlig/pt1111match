// pt1111match — generated thiscall indexed getter.
#include "pt1111_funcs.h"

struct CTG_0043c7c0 { int Method(int param_1); };

// FUNCTION: PORT1111 0x0043c7c0
int CTG_0043c7c0::Method(int param_1)
{
    return *(int *)((int)this + param_1 * 4 + 0x10);
}
