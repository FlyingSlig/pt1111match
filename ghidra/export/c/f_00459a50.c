// FUNCTION: PORT1111 0x00459a50
// name: FUN_00459a50
// sig: undefined FUN_00459a50(undefined4 * param_1)


void __fastcall FUN_00459a50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b9228;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00483ed0(param_1 + 0x13);
  local_4 = 0xffffffff;
  FUN_00480b10(param_1);
  ExceptionList = local_c;
  return;
}

