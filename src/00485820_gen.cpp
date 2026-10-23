// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00485820 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00485820
void *CDel_00485820::Dtor(unsigned char flags)
{
    FUN_00485810((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
