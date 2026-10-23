// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0043aa70 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0043aa70
void *CDel_0043aa70::Dtor(unsigned char flags)
{
    FUN_0043a930((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
