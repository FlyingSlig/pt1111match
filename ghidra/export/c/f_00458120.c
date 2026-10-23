// FUNCTION: PORT1111 0x00458120
// name: FUN_00458120
// sig: undefined4 * FUN_00458120(undefined4 * param_1)


undefined4 * __fastcall FUN_00458120(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8fbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00465cf0(param_1 + 1);
  local_4 = 0;
  FUN_00465cf0(param_1 + 2);
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  ExceptionList = local_c;
  return param_1;
}

