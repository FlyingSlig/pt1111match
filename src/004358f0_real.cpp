#include "pt1111_funcs.h"
extern const unsigned char PTR_FUN_004bfda0[24];
// FUNCTION: PORT1111 0x004358f0
void __fastcall FUN_004358f0(void *param_1)
{
    *(void **)param_1 = (void *)PTR_FUN_004bfda0;
    FUN_00465e40((char *)param_1 + 4);
}
