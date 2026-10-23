// pt1111match — generated deleting dtor (vtable first).
#include "pt1111_funcs.h"
#include <new>
extern int DAT_004c68ec;

struct CDel2_00480f40 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00480f40
void *CDel2_00480f40::Dtor(unsigned char flags)
{
    *(void **)this = &DAT_004c68ec;
    FUN_00480e90((int)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
