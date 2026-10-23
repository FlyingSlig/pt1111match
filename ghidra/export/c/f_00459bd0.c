// FUNCTION: PORT1111 0x00459bd0
// name: FUN_00459bd0
// sig: undefined4 * FUN_00459bd0(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)


undefined4 * __thiscall
FUN_00459bd0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9261;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00480aa0(this,param_1,0xc,0,0xc,0xd3,0xd4,0xd5,0);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004c48c0;
  FUN_00482130((undefined4 *)((int)this + 0x4c));
  local_4._0_1_ = 1;
  FUN_00482130((undefined4 *)((int)this + 0x308));
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00482130((undefined4 *)((int)this + 0x5c4));
  *(undefined4 *)((int)this + 0x888) = param_2;
  *(undefined4 *)((int)this + 0x890) = param_5;
  *(undefined4 *)((int)this + 0x880) = param_4;
  *(undefined4 *)((int)this + 0x88c) = param_3;
  ExceptionList = local_c;
  return this;
}

