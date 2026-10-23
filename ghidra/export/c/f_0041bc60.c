// FUNCTION: PORT1111 0x0041bc60
// name: FUN_0041bc60
// sig: undefined4 * FUN_0041bc60(undefined4 * param_1)


undefined4 * __fastcall FUN_0041bc60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6743;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bc804;
  FUN_00465cf0(param_1 + 1);
  local_4 = 0;
  *param_1 = &PTR_FUN_004bf440;
  FUN_00465cf0(param_1 + 8);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0xd] = 0x15;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00466a40(param_1 + 8,"");
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  param_1[0xb] = 1;
  param_1[0xc] = 1;
  param_1[0x18] = 2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  ExceptionList = local_c;
  return param_1;
}

