// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0045af80 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0045af80
void *CDel_0045af80::Dtor(unsigned char flags)
{
    FUN_0045a960((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
