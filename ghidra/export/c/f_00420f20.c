// FUNCTION: PORT1111 0x00420f20
// name: FUN_00420f20
// sig: undefined4 * FUN_00420f20(undefined4 * param_1)


undefined4 * __fastcall FUN_00420f20(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6c6f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004745a0(param_1);
  *param_1 = &PTR_LAB_004bf6fc;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  iVar1 = FUN_00482680();
  param_1[0x20] = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(undefined4 *)(param_1[0x20] + 4) = param_1[0x20];
  *(undefined4 *)param_1[0x20] = param_1[0x20];
  *(undefined4 *)(param_1[0x20] + 8) = param_1[0x20];
  param_1[0x21] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00420500(param_1 + 0xf,300);
  FUN_00420500(param_1 + 0x13,10);
  FUN_004205f0(param_1 + 0x17,300);
  FUN_004205f0(param_1 + 0x1b,300);
  ExceptionList = local_c;
  return param_1;
}

