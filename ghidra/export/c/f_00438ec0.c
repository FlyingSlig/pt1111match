// FUNCTION: PORT1111 0x00438ec0
// name: FUN_00438ec0
// sig: undefined4 * FUN_00438ec0(undefined4 * param_1)


undefined4 * __fastcall FUN_00438ec0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7cd1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c0134;
  uVar1 = FUN_0043d220();
  param_1[2] = uVar1;
  param_1[3] = 0;
  local_4 = 0;
  uVar1 = FUN_0043d220();
  param_1[5] = uVar1;
  param_1[6] = 0;
  local_4._0_1_ = 1;
  uVar1 = FUN_0043d220();
  param_1[10] = uVar1;
  param_1[0xb] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar2 = FUN_004748b0();
  param_1[0xd] = iVar2;
  *(undefined1 *)(iVar2 + 0x2d) = 1;
  *(undefined4 *)(param_1[0xd] + 4) = param_1[0xd];
  *(undefined4 *)param_1[0xd] = param_1[0xd];
  *(undefined4 *)(param_1[0xd] + 8) = param_1[0xd];
  param_1[0xe] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  ExceptionList = local_c;
  return param_1;
}

