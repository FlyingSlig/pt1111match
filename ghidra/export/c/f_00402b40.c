// FUNCTION: PORT1111 0x00402b40
// name: FUN_00402b40
// sig: undefined FUN_00402b40(undefined4 * param_1)


void __fastcall FUN_00402b40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b57b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bc818;
  local_4 = 1;
  FUN_00465e40(param_1 + 0x16);
  local_4 = local_4 & 0xffffff00;
  FUN_00465e40(param_1 + 0x11);
  local_4 = 0xffffffff;
  FUN_00465e40(param_1 + 1);
  ExceptionList = local_c;
  return;
}

