#include "pt1111_funcs.h"
extern const unsigned char PTR_FUN_004c4754[4];
// FUNCTION: PORT1111 0x00458350
void __fastcall FUN_00458350(void *param_1)
{
    *(void **)param_1 = (void *)PTR_FUN_004c4754;
    FUN_00465e40((char *)param_1 + 4);
}
