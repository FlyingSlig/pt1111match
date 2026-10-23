// pt1111match — table accessor 0x4067a0.

#include "pt1111_funcs.h"

extern int DAT_004d5340[];

// FUNCTION: PORT1111 0x004067a0
int __cdecl FUN_004067a0(int param_1, int param_2)
{
    return DAT_004d5340[param_1 * 3 + param_2];
}
