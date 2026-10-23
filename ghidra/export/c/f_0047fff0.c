// FUNCTION: PORT1111 0x0047fff0
// name: FUN_0047fff0
// sig: undefined FUN_0047fff0(undefined4 * param_1)


void __fastcall FUN_0047fff0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004ba60e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c6778;
  local_4 = 2;
  FUN_0047fe60(param_1);
  param_1[0xe] = &PTR_FUN_004bfcdc;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  param_1[0xe] = &PTR_LAB_004bfcd0;
  param_1[7] = &PTR_FUN_004bfcdc;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  param_1[7] = &PTR_LAB_004bfcd0;
  local_4 = 0xffffffff;
  FUN_0047fdb0(param_1);
  ExceptionList = local_c;
  return;
}

