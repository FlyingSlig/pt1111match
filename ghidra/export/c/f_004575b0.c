// FUNCTION: PORT1111 0x004575b0
// name: FUN_004575b0
// sig: void * FUN_004575b0(void * this, void * param_1)


void * __thiscall FUN_004575b0(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8ee1;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  FUN_00466af0(&local_18,"if ",0xffffffff);
  local_4 = 1;
  puVar1 = FUN_00457710(*(void **)((int)this + 4),&local_14);
  local_4._0_1_ = 2;
  FUN_00466a30(&local_18,puVar1);
  local_4._0_1_ = 1;
  FUN_00465e40(&local_14);
  thunk_FUN_00466040(&local_18," then ");
  puVar1 = FUN_00459450(&local_14,0);
  local_4._0_1_ = 3;
  FUN_00466a30(&local_18,puVar1);
  local_4._0_1_ = 1;
  FUN_00465e40(&local_14);
  FUN_00466b20(param_1,&local_18);
  local_10 = 1;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(&local_18);
  ExceptionList = local_c;
  return param_1;
}

