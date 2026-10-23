// FUNCTION: PORT1111 0x00436640
// name: FUN_00436640
// sig: undefined4 * FUN_00436640(undefined4 * param_1)


undefined4 * __fastcall FUN_00436640(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b79fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bff38;
  FUN_00465cf0(param_1 + 1);
  local_4 = 0;
  FUN_00465cf0(param_1 + 2);
  ExceptionList = local_c;
  return param_1;
}

