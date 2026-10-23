#include "pt1111_funcs.h"

struct CM_0041ca90 { int Method(int param_1); };

// FUNCTION: PORT1111 0x0041ca90
int CM_0041ca90::Method(int param_1) { return *(int *)((int)this + param_1 * 4 + 0x94); }
