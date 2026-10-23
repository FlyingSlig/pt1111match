#include "pt1111_funcs.h"
extern int DAT_004d6450;

struct CM_00424a50 { int Method(int param_1); };

// FUNCTION: PORT1111 0x00424a50
int CM_00424a50::Method(int param_1) { return (&DAT_004d6450)[param_1] * 0x30 + *(int *)((int)this + 8); }
