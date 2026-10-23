// FUNCTION: PORT1111 0x00471320
// name: FUN_00471320
// sig: undefined FUN_00471320(undefined4 * param_1)


void __fastcall FUN_00471320(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b9df4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c6408;
  local_4 = 2;
  FUN_00470ef0((int)param_1);
  local_4._0_1_ = 1;
  FUN_00465e40(param_1 + 0x34);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(param_1 + 0x32);
  local_4 = 0xffffffff;
  FUN_0046f1f0(param_1);
  ExceptionList = local_c;
  return;
}

