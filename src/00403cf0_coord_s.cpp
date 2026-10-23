// pt1111match — screen-coordinate helper module.
// Original objs: the 5 functions below are contiguous at 0x403cf0..0x403daf and
// share the screen-origin globals, so they are reconstructed as one TU.

#include <windows.h>

extern volatile int DAT_004e2c30;   // screen offset X
extern volatile int DAT_004e2c34;   // screen offset Y

// FUNCTION: PORT1111 0x00403cf0
int __cdecl FUN_00403cf0(int param_1)
{
    return DAT_004e2c30 + param_1;
}

