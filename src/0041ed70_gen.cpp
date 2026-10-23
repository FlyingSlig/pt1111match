// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0041ed70 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0041ed70
void *CDel_0041ed70::Dtor(unsigned char flags)
{
    FUN_0041ebb0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
