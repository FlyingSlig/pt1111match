// FUNCTION: PORT1111 0x004340f0
// name: FUN_004340f0
// sig: undefined FUN_004340f0(undefined4 * param_1)


void __fastcall FUN_004340f0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b78b9;
  pvStack_c = ExceptionList;
  local_4 = 6;
  ExceptionList = &pvStack_c;
  FUN_00433a20((int)param_1);
  FUN_0047fe60(param_1 + 0x13);
  FUN_0047fe60(param_1 + 0x2d);
  FUN_00433cf0((int)param_1);
  param_1[0x76] = &PTR_FUN_004bfcdc;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x77));
  param_1[0x76] = &PTR_LAB_004bfcd0;
  param_1[0x6f] = &PTR_FUN_004bfcdc;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  param_1[0x6f] = &PTR_LAB_004bfcd0;
  local_4._0_1_ = 3;
  FUN_00433f30(param_1 + 0x5c);
  local_4._0_1_ = 2;
  FUN_00433f30(param_1 + 0x48);
  local_4._0_1_ = 1;
  FUN_0047fff0(param_1 + 0x2d);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0047fff0(param_1 + 0x13);
  local_4 = 0xffffffff;
  FUN_00433f30(param_1);
  ExceptionList = pvStack_c;
  return;
}

