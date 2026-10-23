#include "pt1111_funcs.h"

struct CM_00422d10 { void Method(int p); };

// FUNCTION: PORT1111 0x00422d10
void CM_00422d10::Method(int p) { *(int *)(*(int *)((int)this + 0x60) + p * 4) = *(int *)(*(int *)((int)this + 0x60) + p * 4) + -1; *(int *)(*(int *)((int)this + 0x1fc) + p * 4) = 1; }
