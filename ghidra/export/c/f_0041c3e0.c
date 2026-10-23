// FUNCTION: PORT1111 0x0041c3e0
// name: FUN_0041c3e0
// sig: undefined FUN_0041c3e0(int param_1)


void __fastcall FUN_0041c3e0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b67d8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00466a50((void *)(param_1 + 0x18),(undefined4 *)&stack0x00000004);
  local_4 = 0xffffffff;
  FUN_00465e40((undefined4 *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}

