// FUNCTION: PORT1111 0x00446140
// name: FUN_00446140
// sig: undefined FUN_00446140(undefined4 * param_1)


void __fastcall FUN_00446140(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b8368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c3a30;
  local_4 = 0;
  FUN_00446040(param_1 + 0x13);
  local_4 = 0xffffffff;
  FUN_00480b10(param_1);
  ExceptionList = local_c;
  return;
}

