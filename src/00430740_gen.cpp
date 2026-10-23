// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00430740 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00430740
void *CDel_00430740::Dtor(unsigned char flags)
{
    FUN_004306d0((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
