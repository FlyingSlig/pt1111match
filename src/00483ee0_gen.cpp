// pt1111match — generated deleting dtor (vtable first).
#include "pt1111_funcs.h"
#include <new>
extern int DAT_004c6918;

struct CDel2_00483ee0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00483ee0
void *CDel2_00483ee0::Dtor(unsigned char flags)
{
    *(void **)this = &DAT_004c6918;
    FUN_00483ad0((int)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
