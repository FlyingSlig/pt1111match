// FUNCTION: PORT1111 0x004889d0
// name: FUN_004889d0
// sig: undefined4 * FUN_004889d0(undefined4 * param_1)


undefined4 * __fastcall FUN_004889d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba9ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c6bf8;
  FUN_004961e0(param_1 + 2);
  local_4 = 0;
  FUN_00465cf0(param_1 + 0x1a);
  param_1[0x1b] = 0;
  ExceptionList = local_c;
  return param_1;
}

