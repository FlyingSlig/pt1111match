// pt1111match — CUIWidget vtable resets 0x409080/0x409090.
// Kept as free __fastcall (0 stack args => thiscall-equivalent) so other units
// can call them directly.

#include "pt1111_funcs.h"

extern int DAT_004bd0a8;

// FUNCTION: PORT1111 0x00409080
void *__fastcall FUN_00409080(void *param_1)
{
    *(void **)param_1 = &DAT_004bd0a8;
    *(int *)((int)param_1 + 0x10) = 0;
    return param_1;
}
