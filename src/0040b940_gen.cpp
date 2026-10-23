// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_0040b940 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0040b940
void *CDel_0040b940::Dtor(unsigned char flags)
{
    FUN_0040b800((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
