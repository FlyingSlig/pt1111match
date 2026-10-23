// FUNCTION: PORT1111 0x004474f0
// name: FUN_004474f0
// sig: undefined FUN_004474f0(undefined4 * param_1)


void __fastcall FUN_004474f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b855d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c3db8;
  local_4 = 4;
  FUN_00465e40(param_1 + 200);
  local_4._0_1_ = 3;
  FUN_00465e40(param_1 + 199);
  local_4._0_1_ = 2;
  FUN_00465e40(param_1 + 0xc6);
  local_4._0_1_ = 1;
  FUN_00481f60(param_1 + 0xc3);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00483ed0(param_1 + 0x13);
  local_4 = 0xffffffff;
  FUN_00480b10(param_1);
  ExceptionList = local_c;
  return;
}

