// pt1111match — std::basic_string / std::logic_error internals.
#include <string>
#include "pt1111_funcs.h"

void pt_use_str_erase(std::string &s) { s.erase(2, 3); }

// TEMPLATE: PORT1111 0x00401390
// ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV12@II@Z
// TEMPLATE: PORT1111 0x004015c0
// ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV12@ABV12@II@Z
// TEMPLATE: PORT1111 0x00496fc8
// ?_Xran@_String_base@std@@QBEXXZ
// TEMPLATE: PORT1111 0x00497008
// ?_Xlen@_String_base@std@@QBEXXZ
// VTABLE: PORT1111 0x004c6e14
// class std::logic_error
