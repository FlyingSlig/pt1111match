// FUNCTION: PORT1111 0x00412540
// name: FUN_00412540
// sig: undefined FUN_00412540(undefined4 * param_1)


void __fastcall FUN_00412540(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b6128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bebf0;
  param_1[5] = &PTR_LAB_004bebc8;
  local_4 = 0;
  FUN_0041ebb0(param_1 + 5);
  local_4 = 0xffffffff;
  FUN_00409090(param_1);
  ExceptionList = local_c;
  return;
}

