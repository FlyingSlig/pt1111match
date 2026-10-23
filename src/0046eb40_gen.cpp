// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0046eb40 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0046eb40
void *CDel_0046eb40::Dtor(unsigned char flags)
{
    FUN_0046eaf0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
