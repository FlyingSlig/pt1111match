// pt1111match — generated deleting dtor (vtable first).
#include "pt1111_funcs.h"
#include <new>
extern int DAT_004bc9f0;

struct CDel2_004048a0 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x004048a0
void *CDel2_004048a0::Dtor(unsigned char flags)
{
    *(void **)this = &DAT_004bc9f0;
    FUN_00404500((int)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
