// FUNCTION: PORT1111 0x0047dab0
// name: FUN_0047dab0
// sig: undefined4 * FUN_0047dab0(undefined4 * param_1)


undefined4 * __fastcall FUN_0047dab0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba4a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c66bc;
  FUN_00465cf0(param_1 + 4);
  local_4 = 0;
  FUN_00465cf0(param_1 + 5);
  local_4._0_1_ = 1;
  FUN_00465cf0(param_1 + 0xc);
  local_4._0_1_ = 2;
  FUN_00495230(param_1 + 0x12);
  local_4._0_1_ = 3;
  uVar1 = FUN_0043d220();
  param_1[0x1c] = uVar1;
  param_1[0x1d] = 0;
  local_4._0_1_ = 4;
  FUN_00465cf0(param_1 + 0x20);
  local_4._0_1_ = 5;
  FUN_00465cf0(param_1 + 0x21);
  local_4._0_1_ = 6;
  uVar1 = FUN_0043d220();
  param_1[0x23] = uVar1;
  param_1[0x24] = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_0047c240((int)param_1);
  ExceptionList = local_c;
  return param_1;
}

