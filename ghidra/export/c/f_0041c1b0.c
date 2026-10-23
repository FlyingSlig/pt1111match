// FUNCTION: PORT1111 0x0041c1b0
// name: FUN_0041c1b0
// sig: undefined FUN_0041c1b0(undefined4 * param_1)


void __fastcall FUN_0041c1b0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b679c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_004bf5b8;
  local_4 = 3;
  FUN_00465e40(param_1 + 0x12);
  local_4._0_1_ = 2;
  FUN_0047c1e0(param_1 + 8);
  local_4._0_1_ = 1;
  FUN_00465e40(param_1 + 7);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(param_1 + 6);
  local_4 = 0xffffffff;
  FUN_00465e40(param_1 + 1);
  ExceptionList = pvStack_c;
  return;
}

