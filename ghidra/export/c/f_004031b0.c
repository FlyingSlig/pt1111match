// FUNCTION: PORT1111 0x004031b0
// name: FUN_004031b0
// sig: undefined4 * FUN_004031b0(undefined4 * param_1)


undefined4 * __fastcall FUN_004031b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b57de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bc804;
  FUN_00465cf0(param_1 + 1);
  local_4 = 0;
  *param_1 = &PTR_FUN_004bc818;
  FUN_00465cf0(param_1 + 0x11);
  local_4._0_1_ = 1;
  FUN_00465cf0(param_1 + 0x16);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00402ba0((int)param_1);
  ExceptionList = local_c;
  return param_1;
}

