// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004c6830;

// FUNCTION: PORT1111 0x00480b10
void __fastcall FUN_00480b10(void *param_1)
{
    *(void **)param_1 = &DAT_004c6830;
    FUN_00480320(param_1);
}
