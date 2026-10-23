// pt1111match — MSVC 7.1 std::map<int,unsigned> _Tree instantiations.
#include <map>
#include "pt_stl_copy_decl.h"

void pt_use_map_iu(std::map<int, unsigned> &m) { m.erase(m.begin(), m.end()); }
void pt_del_map_iu(std::map<int, unsigned> *p) { delete p; }

// TEMPLATE: PORT1111 0x0040ae40
// ?_Erase@?$_Tree@V?$_Tmap_traits@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@2@@Z
// TEMPLATE: PORT1111 0x0040b000
// ?erase@?$_Tree@V?$_Tmap_traits@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@V312@@Z
// TEMPLATE: PORT1111 0x0040b2c0
// ?erase@?$_Tree@V?$_Tmap_traits@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z
// TEMPLATE: PORT1111 0x0040b7d0
// ??1?$_Tree@V?$_Tmap_traits@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@std@@QAE@XZ
void pt_ops_iu(std::map<int,unsigned> &m) { m.insert(std::map<int,unsigned>::value_type(1,2u)); m.lower_bound(0); }
// TEMPLATE: PORT1111 0x0040b5a0
// ?insert@?$_Tree@V?$_Tmap_traits@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBHI@2@@Z
// TEMPLATE: PORT1111 0x0040b380
// ?_Insert@?$_Tree@V?$_Tmap_traits@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@2@ABU?$pair@$$CBHI@2@@Z
void pt_ins2_iu(std::map<int,unsigned> &m) { m.insert(m.begin(), std::map<int,unsigned>::value_type(1,2u)); }
// TEMPLATE: PORT1111 0x0040b660
// ?insert@?$_Tree@V?$_Tmap_traits@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@V312@ABU?$pair@$$CBHI@2@@Z
