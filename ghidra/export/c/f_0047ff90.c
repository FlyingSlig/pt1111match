// FUNCTION: PORT1111 0x0047ff90
// name: FUN_0047ff90
// sig: undefined4 * FUN_0047ff90(undefined4 * param_1)


undefined4 * __fastcall FUN_0047ff90(undefined4 *param_1)

{
  FUN_0047fcc0(param_1);
  *param_1 = &PTR_FUN_004c6778;
  param_1[7] = &PTR_FUN_004bfcdc;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  param_1[0xe] = &PTR_FUN_004bfcdc;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0xffffffff;
  return param_1;
}

