#include "pt1111_funcs.h"

struct CM_00412740 { void Method(int a, int b); };

// FUNCTION: PORT1111 0x00412740
void CM_00412740::Method(int a, int b) { *(int *)((int)this + 0x44) = a; *(int *)((int)this + 0x48) = b; }
