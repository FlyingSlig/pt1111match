// FUNCTION: PORT1111 0x00470250
// name: FUN_00470250
// sig: undefined FUN_00470250(undefined4 * param_1)


void __fastcall FUN_00470250(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b9db8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c62b8;
  local_4 = 0;
  FUN_00465e40(param_1 + 0x25);
  local_4 = 0xffffffff;
  FUN_0046f1f0(param_1);
  ExceptionList = local_c;
  return;
}

