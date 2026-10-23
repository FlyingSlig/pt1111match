// FUNCTION: PORT1111 0x0047fc50
// name: FUN_0047fc50
// sig: undefined FUN_0047fc50(undefined4 * param_1)


void __fastcall FUN_0047fc50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004ba5d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c66e0;
  local_4 = 0;
  FUN_0047fa90((int)param_1);
  local_4 = 0xffffffff;
  FUN_0046c8f0(param_1);
  ExceptionList = local_c;
  return;
}

