#include "pt1111_funcs.h"
extern const unsigned char PTR_FUN_004c60d0[136];
// FUNCTION: PORT1111 0x0046eaf0
void __fastcall FUN_0046eaf0(void *param_1)
{
    *(void **)param_1 = (void *)PTR_FUN_004c60d0;
    FUN_004744e0((char *)param_1 + 0x14);
}
