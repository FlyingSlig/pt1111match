#include "pt1111_funcs.h"

struct CM_00426740 { void Method(short a, short b); };

// FUNCTION: PORT1111 0x00426740
void CM_00426740::Method(short a, short b) { *(short *)((int)this + 4) = a; *(short *)((int)this + 6) = b; }
