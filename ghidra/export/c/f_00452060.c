// FUNCTION: PORT1111 0x00452060
// name: FUN_00452060
// sig: undefined FUN_00452060(int param_1)


void __fastcall FUN_00452060(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b8c1b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004534e0((undefined4 *)(param_1 + 0x54));
  local_4 = 0xffffffff;
  FUN_004534e0((undefined4 *)(param_1 + 0x14));
  ExceptionList = local_c;
  return;
}

