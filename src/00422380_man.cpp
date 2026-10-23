#include "pt1111_funcs.h"

struct CM_00422380 { int Method(int param_1); };

// FUNCTION: PORT1111 0x00422380
int CM_00422380::Method(int param_1) { return *(int *)(*(int *)((int)this + 0x60) + param_1 * 4); }
