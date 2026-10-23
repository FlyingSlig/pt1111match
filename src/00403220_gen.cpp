// pt1111match — generated deleting destructor.
#include "pt1111_funcs.h"
#include <new>

struct CDel_00403220 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x00403220
void *CDel_00403220::Dtor(unsigned char flags)
{
    FUN_00402b40((int *)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
