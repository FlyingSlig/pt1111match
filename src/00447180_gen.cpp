// pt1111match — generated thiscall field setter.
#include "pt1111_funcs.h"

struct CTS_00447180 { void Method(int param_1); };

// FUNCTION: PORT1111 0x00447180
void CTS_00447180::Method(int param_1)
{
    *(int *)((int)this + 0x18) = param_1;
}
