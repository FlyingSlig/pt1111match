// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00458540 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00458540
void *CDel_00458540::Dtor(unsigned char flags)
{
    thunk_FUN_00488880((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
