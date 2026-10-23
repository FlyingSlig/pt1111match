// pt1111match — shared STL assertion-path helpers used by _Tree bounds checks.
#include "pt1111_funcs.h"

// STRING: PORT1111 0x004bc3c0
const char *pt_str_invalid_map_iter = "invalid map/set<T> iterator";

// TEMPLATE: PORT1111 0x004016b0
// ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV12@PBDI@Z
// TEMPLATE: PORT1111 0x004017e0
// ??0logic_error@std@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z
// TEMPLATE: PORT1111 0x00413730
// ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAEXXZ

// LIBRARY: PORT1111 0x00497902
// _CxxThrowException
