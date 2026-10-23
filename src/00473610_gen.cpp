// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00473610 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00473610
void *CDel_00473610::Dtor(unsigned char flags)
{
    thunk_FUN_0046f1f0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
