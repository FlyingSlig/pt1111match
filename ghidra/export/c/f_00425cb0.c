// FUNCTION: PORT1111 0x00425cb0
// name: FUN_00425cb0
// sig: undefined4 * FUN_00425cb0(undefined4 * param_1)


undefined4 * __fastcall FUN_00425cb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6ed3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bc804;
  FUN_00465cf0(param_1 + 1);
  local_4 = 0;
  *param_1 = &PTR_FUN_004bf864;
  FUN_00465cf0(param_1 + 0xd);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00465cf0(param_1 + 0xe);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  param_1[10] = 0;
  param_1[0xf] = 1;
  ExceptionList = local_c;
  return param_1;
}

