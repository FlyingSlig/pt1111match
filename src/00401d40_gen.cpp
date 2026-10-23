// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00401d40 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00401d40
void *CDel_00401d40::Dtor(unsigned char flags)
{
    FUN_00465c30((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
