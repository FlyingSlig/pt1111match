// FUNCTION: PORT1111 0x0046a550
// name: FUN_0046a550
// sig: undefined FUN_0046a550(undefined4 * param_1)


void __fastcall FUN_0046a550(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b9bcc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c5fd4;
  local_4 = 1;
  CoUninitialize();
  FUN_00465e40(param_1 + 0x3e);
  local_4 = local_4 & 0xffffff00;
  FUN_00488ad0(param_1 + 0x22);
  local_4 = 0xffffffff;
  FUN_004865b0(param_1 + 0x21);
  ExceptionList = local_c;
  return;
}

