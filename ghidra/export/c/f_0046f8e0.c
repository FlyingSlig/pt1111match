// FUNCTION: PORT1111 0x0046f8e0
// name: FUN_0046f8e0
// sig: undefined4 * FUN_0046f8e0(undefined4 * param_1)


undefined4 * __fastcall FUN_0046f8e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9d12;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0046ed80(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_004c6208;
  FUN_00465cf0(param_1 + 0x25);
  local_4._0_1_ = 1;
  FUN_00465cf0(param_1 + 0x27);
  local_4._0_1_ = 2;
  FUN_00465cf0(param_1 + 0x29);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0046f830((int)param_1);
  ExceptionList = local_c;
  return param_1;
}

