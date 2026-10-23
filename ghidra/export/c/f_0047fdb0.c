// FUNCTION: PORT1111 0x0047fdb0
// name: FUN_0047fdb0
// sig: undefined FUN_0047fdb0(undefined4 * param_1)


void __fastcall FUN_0047fdb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c676c;
  if ((HANDLE)param_1[3] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[3]);
    param_1[3] = 0;
  }
  return;
}

