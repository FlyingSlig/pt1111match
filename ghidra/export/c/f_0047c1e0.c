// FUNCTION: PORT1111 0x0047c1e0
// name: FUN_0047c1e0
// sig: undefined FUN_0047c1e0(undefined4 * param_1)


void __fastcall FUN_0047c1e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c6684;
  if ((param_1[9] == 0) && ((HGLOBAL)param_1[8] != (HGLOBAL)0x0)) {
    GlobalUnlock((HGLOBAL)param_1[8]);
    GlobalFree((HGLOBAL)param_1[8]);
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_00488880(param_1);
  return;
}

