// pt1111match — std::vector<T> instantiations.
#include <vector>
#include "pt_stl_copy_decl.h"

// STRING: PORT1111 0x004be704
const char *pt_str_vec_too_long = "vector<T> too long";

void pt_use_vec_i(std::vector<int> &v, int n, int x) { v.insert(v.begin(), n, x); }

// TEMPLATE: PORT1111 0x00416e50
// ?_Insert_n@?$vector@HV?$allocator@H@std@@@std@@IAEXViterator@12@IABH@Z
// TEMPLATE: PORT1111 0x00416440
// ?_Xlen@?$vector@HV?$allocator@H@std@@@std@@IBEXXZ
// TEMPLATE: PORT1111 0x0042a600
// ?_Ufill@?$vector@HV?$allocator@H@std@@@std@@IAEPAHPAHIABH@Z
// LIBRARY: PORT1111 0x004975c0
// memmove
// ?_Ufill@?$vector@HV?$allocator@H@std@@@std@@IAEPAHPAHIABH@Z
// TEMPLATE: PORT1111 0x00457c40
// ??$_Ucopy@PAH@?$vector@HV?$allocator@H@std@@@std@@IAEPAHPAH00@Z

// TEMPLATE: PORT1111 0x0044c050
// ??$fill@PAHH@std@@YAXPAH0ABH@Z
// TEMPLATE: PORT1111 0x004193c0
// ??$copy_backward@PAHPAH@std@@YAPAHPAH00@Z
