// FUNCTION: PORT1111 0x00446260
// name: FUN_00446260
// sig: undefined FUN_00446260(undefined4 * param_1)


void __fastcall FUN_00446260(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b8388;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c3af0;
  local_4 = 0;
  FUN_00451e90(param_1 + 10);
  local_4 = 0xffffffff;
  FUN_00480320(param_1);
  ExceptionList = local_c;
  return;
}

