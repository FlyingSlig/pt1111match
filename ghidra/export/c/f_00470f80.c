// FUNCTION: PORT1111 0x00470f80
// name: FUN_00470f80
// sig: int * FUN_00470f80(int * param_1)


int * __fastcall FUN_00470f80(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9df4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0046ed80(param_1);
  local_4 = 0;
  *param_1 = (int)&PTR_FUN_004c6408;
  FUN_00465cf0(param_1 + 0x32);
  local_4._0_1_ = 1;
  FUN_00465cf0(param_1 + 0x34);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00470e30(param_1);
  ExceptionList = local_c;
  return param_1;
}

