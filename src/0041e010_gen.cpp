// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0041e010 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0041e010
void *CDel_0041e010::Dtor(unsigned char flags)
{
    FUN_0041de80((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
