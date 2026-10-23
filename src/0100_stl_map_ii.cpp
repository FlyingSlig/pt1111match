// pt1111match — MSVC 7.1 std::map<int,int> _Tree instantiations.
// The original binary contains instantiations of the STL red-black tree
// template. We reproduce them by instantiating the same template from the
// same VC7.1 headers; reccmp matches each instantiation by its mangled
// symbol name via a TEMPLATE nameref marker.
#include <map>
#include "pt_stl_copy_decl.h"

void pt_use_map_ii(std::map<int, int> &m)
{
    m.erase(m.begin(), m.end());
}

// TEMPLATE: PORT1111 0x00401550
// ?_Erase@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@2@@Z
// TEMPLATE: PORT1111 0x00401880
// ?erase@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@V312@@Z
// TEMPLATE: PORT1111 0x00401bd0
// ?erase@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z
