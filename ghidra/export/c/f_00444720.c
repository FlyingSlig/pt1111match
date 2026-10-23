// FUNCTION: PORT1111 0x00444720
// name: FUN_00444720
// sig: undefined4 * FUN_00444720(undefined4 * param_1)


undefined4 * __fastcall FUN_00444720(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b81f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c3764;
  uVar1 = FUN_0043d220();
  param_1[3] = uVar1;
  param_1[4] = 0;
  local_4 = 0;
  uVar1 = FUN_0043d220();
  param_1[6] = uVar1;
  param_1[7] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = FUN_0043d220();
  param_1[9] = uVar1;
  param_1[10] = 0;
  param_1[1] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

