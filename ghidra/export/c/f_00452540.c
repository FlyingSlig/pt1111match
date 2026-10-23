// FUNCTION: PORT1111 0x00452540
// name: FUN_00452540
// sig: undefined FUN_00452540(undefined4 * param_1)


void __fastcall FUN_00452540(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b8c54;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c4650;
  local_4 = 2;
  FUN_00452060((int)(param_1 + 0x1e7));
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(param_1 + 0x94,0x30,0x1a,FUN_004534e0);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004534e0(param_1 + 0x12);
  local_4 = 0xffffffff;
  FUN_00487df0(param_1 + 2);
  ExceptionList = pvStack_c;
  return;
}

