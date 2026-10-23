// FUNCTION: PORT1111 0x00445fd0
// name: FUN_00445fd0
// sig: undefined4 * FUN_00445fd0(undefined4 * param_1)


undefined4 * __fastcall FUN_00445fd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b834e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004535d0(param_1);
  local_4 = 0;
  FUN_004535d0(param_1 + 0xc);
  local_4._0_1_ = 1;
  FUN_004535d0(param_1 + 0x18);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004535d0(param_1 + 0x24);
  ExceptionList = local_c;
  return param_1;
}

