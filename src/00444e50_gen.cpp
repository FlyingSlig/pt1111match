// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00444e50 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00444e50
void *CDel_00444e50::Dtor(unsigned char flags)
{
    FUN_00444c40((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
