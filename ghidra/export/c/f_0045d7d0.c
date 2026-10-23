// FUNCTION: PORT1111 0x0045d7d0
// name: FUN_0045d7d0
// sig: undefined4 * FUN_0045d7d0(undefined4 * param_1)


undefined4 * __fastcall FUN_0045d7d0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b96e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c4b24;
  FUN_0045f010(param_1 + 0x13);
  local_4 = 0;
  uVar1 = FUN_0043d220();
  param_1[0x19] = uVar1;
  param_1[0x1a] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = FUN_0043d220();
  param_1[0x1c] = uVar1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x12] = 0;
  param_1[5] = 0;
  ExceptionList = local_c;
  return param_1;
}

