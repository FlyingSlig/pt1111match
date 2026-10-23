// FUNCTION: PORT1111 0x00459c80
// name: FUN_00459c80
// sig: undefined FUN_00459c80(undefined4 * param_1)


void __fastcall FUN_00459c80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b9261;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c48c0;
  local_4 = 2;
  FUN_00483ed0(param_1 + 0x171);
  local_4._0_1_ = 1;
  FUN_00483ed0(param_1 + 0xc2);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00483ed0(param_1 + 0x13);
  local_4 = 0xffffffff;
  FUN_00480b10(param_1);
  ExceptionList = local_c;
  return;
}

