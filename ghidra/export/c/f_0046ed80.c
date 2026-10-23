// FUNCTION: PORT1111 0x0046ed80
// name: FUN_0046ed80
// sig: undefined4 * FUN_0046ed80(undefined4 * param_1)


undefined4 * __fastcall FUN_0046ed80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b9cce;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c6160;
  FUN_00465cf0(param_1 + 9);
  local_4._0_1_ = 1;
  FUN_00465cf0(param_1 + 0x14);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0046ec00((int)param_1);
  ExceptionList = local_c;
  return param_1;
}

