#include "pt1111_funcs.h"
#include <new>
extern int DAT_004bd588;

// FUNCTION: PORT1111 0x0040bbc0
void __fastcall FUN_0040bbc0(void *param_1)
{
    char *sub = (char *)param_1 + 0x18;
    *(void **)param_1 = &DAT_004bd588;
    FUN_00419480((int)sub);
    ::operator delete(*(void **)(sub + 4));
    *(void **)(sub + 4) = 0;
}
