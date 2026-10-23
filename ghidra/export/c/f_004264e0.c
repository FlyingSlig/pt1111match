// FUNCTION: PORT1111 0x004264e0
// name: FUN_004264e0
// sig: undefined FUN_004264e0(undefined4 * param_1)


void __fastcall FUN_004264e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b6f5e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bf864;
  local_4 = 2;
  FUN_00425d40((int)param_1);
  local_4._0_1_ = 1;
  FUN_00465e40(param_1 + 0xe);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(param_1 + 0xd);
  local_4 = 0xffffffff;
  FUN_00465e40(param_1 + 1);
  ExceptionList = local_c;
  return;
}

