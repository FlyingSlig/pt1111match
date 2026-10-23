// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0048f400 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0048f400
void *CDel_0048f400::Dtor(unsigned char flags)
{
    FUN_0048dfb0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
