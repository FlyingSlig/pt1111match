// FUNCTION: PORT1111 0x00483f10
// name: FUN_00483f10
// sig: undefined4 * FUN_00483f10(undefined4 * param_1)


undefined4 * __fastcall FUN_00483f10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00484bb0(param_1);
  local_4 = 0;
  FUN_004843b0(param_1 + 4);
  param_1[4] = &PTR_LAB_004c6990;
  *param_1 = &PTR_FUN_004c6964;
  ExceptionList = local_c;
  return param_1;
}

