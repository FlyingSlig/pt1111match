// FUNCTION: PORT1111 0x00454dd0
// name: FUN_00454dd0
// sig: undefined FUN_00454dd0(undefined4 * param_1)


void __fastcall FUN_00454dd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b8d6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c4694;
  local_4 = 0;
  FUN_00453260(param_1 + 0x222);
  local_4 = 0xffffffff;
  FUN_00452540(param_1 + 6);
  ExceptionList = local_c;
  return;
}

