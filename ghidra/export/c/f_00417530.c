// FUNCTION: PORT1111 0x00417530
// name: FUN_00417530
// sig: undefined4 * FUN_00417530(undefined4 * param_1)


undefined4 * __fastcall FUN_00417530(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6487;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bef74;
  iVar1 = FUN_004748f0();
  param_1[2] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  param_1[3] = 0;
  local_4 = 0;
  uVar2 = FUN_0043d220();
  param_1[5] = uVar2;
  param_1[6] = 0;
  local_4._0_1_ = 1;
  iVar1 = FUN_004748f0();
  param_1[8] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[8] + 4) = param_1[8];
  *(undefined4 *)param_1[8] = param_1[8];
  *(undefined4 *)(param_1[8] + 8) = param_1[8];
  param_1[9] = 0;
  local_4._0_1_ = 2;
  iVar1 = FUN_004748f0();
  param_1[0xb] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[0xb] + 4) = param_1[0xb];
  *(undefined4 *)param_1[0xb] = param_1[0xb];
  *(undefined4 *)(param_1[0xb] + 8) = param_1[0xb];
  param_1[0xc] = 0;
  local_4._0_1_ = 3;
  FUN_0045d7d0(param_1 + 0x1e);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00453d20(param_1 + 0x41);
  DAT_004e0adc = 1;
  DAT_004e0ad8 = 1;
  param_1[0x40] = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0x3f] = 0;
  param_1[0x18] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  DAT_004e0ae0 = 0;
  DAT_004e0ae4 = 0;
  DAT_004e0ae8 = 0;
  DAT_004e0aec = 0;
  param_1[0x17] = 0;
  ExceptionList = local_c;
  return param_1;
}

