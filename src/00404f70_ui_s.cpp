// pt1111match — 0x404f70: calls __thiscall 0x417670 on the object in DAT_004e240c.

#include "pt1111_funcs.h"

extern void *DAT_004e240c;
extern unsigned char DAT_004e21bc[4];

struct CSomething {
    int Method(int arg);
};

// FUNCTION: PORT1111 0x00404f70
int __fastcall FUN_00404f70(int param_1)
{
    ((CSomething *)DAT_004e240c)->Method(param_1);
    return 1;
}
