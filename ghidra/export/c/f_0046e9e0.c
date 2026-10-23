// FUNCTION: PORT1111 0x0046e9e0
// name: FUN_0046e9e0
// sig: undefined4 * FUN_0046e9e0(undefined4 * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0046e9e0(undefined4 *param_1)

{
  LARGE_INTEGER local_8;
  
  *param_1 = &PTR_FUN_004c60d0;
  FUN_00474500(param_1 + 5);
  param_1[0x204] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[0x206] = 0;
  param_1[0x205] = 0;
  param_1[0x207] = 1;
  param_1[0x201] = 0;
  QueryPerformanceFrequency(&local_8);
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  _DAT_004e2c38 = local_8.s.LowPart;
  _DAT_004e2c3c = local_8.s.HighPart;
  return param_1;
}

