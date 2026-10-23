// FUNCTION: PORT1111 0x00409440
// name: FUN_00409440
// sig: undefined FUN_00409440(undefined4 * param_1)


void __fastcall FUN_00409440(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b5b28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004bd2f8;
  param_1[5] = &PTR_LAB_004bd2cc;
  local_4 = 0;
  FUN_00465e40(param_1 + 0x4a);
  local_4 = 0xffffffff;
  FUN_00409120(param_1);
  ExceptionList = pvStack_c;
  return;
}

