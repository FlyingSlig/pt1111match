// FUNCTION: PORT1111 0x004745a0
// name: FUN_004745a0
// sig: undefined4 * FUN_004745a0(undefined4 * param_1)


undefined4 * __fastcall FUN_004745a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9fcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_004c6580;
  FUN_00465cf0(param_1 + 6);
  local_4 = 0;
  FUN_00465cf0(param_1 + 0xe);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ExceptionList = local_c;
  return param_1;
}

