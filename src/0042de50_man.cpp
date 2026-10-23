#include "pt1111_funcs.h"

struct CM_0042de50 { int Method(int a, int b); };

// FUNCTION: PORT1111 0x0042de50
int CM_0042de50::Method(int a, int b) { if (*(int *)this == a && *(int *)((int)this + 4) == b) { return 1; } return 0; }
