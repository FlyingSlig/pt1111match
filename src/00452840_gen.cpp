// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00452840 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00452840
void *CDel_00452840::Dtor(unsigned char flags)
{
    FUN_00452540((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
