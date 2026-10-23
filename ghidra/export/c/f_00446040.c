// FUNCTION: PORT1111 0x00446040
// name: FUN_00446040
// sig: undefined FUN_00446040(undefined4 * param_1)


void __fastcall FUN_00446040(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b834e;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_004534e0(param_1 + 0x24);
  local_4._0_1_ = 1;
  FUN_004534e0(param_1 + 0x18);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004534e0(param_1 + 0xc);
  local_4 = 0xffffffff;
  FUN_004534e0(param_1);
  ExceptionList = local_c;
  return;
}

