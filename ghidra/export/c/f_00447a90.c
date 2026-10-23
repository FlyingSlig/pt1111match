// FUNCTION: PORT1111 0x00447a90
// name: FUN_00447a90
// sig: undefined4 * FUN_00447a90(void * this, undefined4 * param_1)


undefined4 * __thiscall FUN_00447a90(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *this_00;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b85f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_00447620(this,&local_10);
  local_4 = 1;
  this_00 = FUN_00466fb0((void *)((int)this + 0x31c),&local_14,"\\");
  local_4._0_1_ = 2;
  FUN_00466fd0(this_00,param_1,puVar1);
  local_4._0_1_ = 1;
  FUN_00465e40(&local_14);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return param_1;
}

