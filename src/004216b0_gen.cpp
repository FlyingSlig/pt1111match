// pt1111match — generated placement-init object.
#include "pt1111_funcs.h"

// FUNCTION: PORT1111 0x004216b0
void __cdecl FUN_004216b0(void)
{
    void *p = operator new(0x1c);
    if (p != 0)
        *(void **)p = p;
    if ((void *)((int)p + 0x4) != 0)
        *(void **)((int)p + 0x4) = p;
}
