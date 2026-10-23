// FUNCTION: PORT1111 0x0046fae0
// name: FUN_0046fae0
// sig: undefined FUN_0046fae0(undefined4 * param_1)


void __fastcall FUN_0046fae0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b9d44;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c6208;
  local_4 = 2;
  FUN_00465e40(param_1 + 0x29);
  local_4._0_1_ = 1;
  FUN_00465e40(param_1 + 0x27);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(param_1 + 0x25);
  local_4 = 0xffffffff;
  FUN_0046f1f0(param_1);
  ExceptionList = local_c;
  return;
}

