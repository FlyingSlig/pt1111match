// FUNCTION: PORT1111 0x00459950
// name: FUN_00459950
// sig: undefined4 * FUN_00459950(void * this, int param_1, undefined4 param_2, undefined4 param_3)


undefined4 * __thiscall FUN_00459950(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00480aa0(this,param_1,0xd,0,0xd,0xd3,0xd4,0xffffffff,10000);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004c4800;
  FUN_00482130((undefined4 *)((int)this + 0x4c));
  *(undefined4 *)((int)this + 0x308) = param_2;
  *(undefined4 *)((int)this + 0x30c) = param_3;
  ExceptionList = local_c;
  return this;
}

