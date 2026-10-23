// pt1111match — generated deleting dtor (vtable first).
#include "pt1111_funcs.h"
#include <new>
extern int DAT_004c452c;

struct CDel2_0044d430 { void *Dtor(unsigned char flags); };

// FUNCTION: PORT1111 0x0044d430
void *CDel2_0044d430::Dtor(unsigned char flags)
{
    *(void **)this = &DAT_004c452c;
    FUN_00486190((int)this);
    if (flags & 1)
        ::operator delete(this);
    return this;
}
