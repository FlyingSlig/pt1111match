// FUNCTION: PORT1111 0x00438fc0
// name: FUN_00438fc0
// sig: undefined FUN_00438fc0(int param_1)


void __fastcall FUN_00438fc0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7ce8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00466a50((void *)(param_1 + 4),(undefined4 *)&stack0x00000004);
  local_4 = 0xffffffff;
  FUN_00465e40((undefined4 *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}

