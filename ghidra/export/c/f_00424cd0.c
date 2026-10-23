// FUNCTION: PORT1111 0x00424cd0
// name: FUN_00424cd0
// sig: undefined4 * FUN_00424cd0(undefined4 * param_1)


undefined4 * __fastcall FUN_00424cd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6e13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bc804;
  FUN_00465cf0(param_1 + 1);
  local_4 = 0;
  *param_1 = &PTR_FUN_004bf834;
  FUN_00465cf0(param_1 + 3);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00465cf0(param_1 + 4);
  param_1[2] = 0;
  ExceptionList = local_c;
  return param_1;
}

