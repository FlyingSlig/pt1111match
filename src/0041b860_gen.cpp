// pt1111match — generated vtable setter + base call.
#include "pt1111_funcs.h"
extern int DAT_004bf400;

// FUNCTION: PORT1111 0x0041b860
void __fastcall FUN_0041b860(void *param_1)
{
    *(void **)param_1 = &DAT_004bf400;
    FUN_0041b450(param_1);
}
