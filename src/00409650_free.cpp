// pt1111match — 0x409650: base dtor then free the owned object and null it.

#include "pt1111_funcs.h"

#include <new>


// FUNCTION: PORT1111 0x00409650
void __fastcall FUN_00409650(int param_1)
{
    FUN_00419480(param_1);
    ::operator delete(*(void **)(param_1 + 4));
    *(void **)(param_1 + 4) = 0;
}
