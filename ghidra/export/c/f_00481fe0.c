// FUNCTION: PORT1111 0x00481fe0
// name: FUN_00481fe0
// sig: undefined FUN_00481fe0(undefined4 * param_1)


void __fastcall FUN_00481fe0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004ba691;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c6910;
  local_4 = 2;
  FUN_00465e40(param_1 + 8);
  local_4._0_1_ = 1;
  FUN_00465e40(param_1 + 7);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(param_1 + 3);
  local_4 = 0xffffffff;
  FUN_00465e40(param_1 + 2);
  ExceptionList = local_c;
  return;
}

