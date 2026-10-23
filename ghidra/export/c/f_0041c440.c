// FUNCTION: PORT1111 0x0041c440
// name: FUN_0041c440
// sig: undefined4 * FUN_0041c440(undefined4 * param_1)


undefined4 * __fastcall FUN_0041c440(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6827;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_004bf5b8;
  FUN_00465cf0(param_1 + 1);
  local_4 = 0;
  FUN_00465cf0(param_1 + 6);
  local_4._0_1_ = 1;
  FUN_00465cf0(param_1 + 7);
  local_4._0_1_ = 2;
  FUN_0047bfa0(param_1 + 8,0x400);
  local_4._0_1_ = 3;
  FUN_00465cf0(param_1 + 0x12);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00466a40(param_1 + 1,"");
  param_1[2] = 1;
  param_1[3] = 1;
  FUN_00466a40(param_1 + 7,"");
  FUN_00466a40(param_1 + 0x12,"");
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_00466a40(param_1 + 6,"");
  param_1[0xb] = 0;
  ExceptionList = local_c;
  return param_1;
}

