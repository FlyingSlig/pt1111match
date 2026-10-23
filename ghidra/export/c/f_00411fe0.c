// FUNCTION: PORT1111 0x00411fe0
// name: FUN_00411fe0
// sig: undefined FUN_00411fe0(undefined4 * param_1)


void __fastcall FUN_00411fe0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004bea64;
  if (param_1[3] != 0) {
    if (param_1[4] == 0) {
      FUN_004765a0(*(void **)(DAT_004e2b14 + 0xf8),*(int *)(param_1[3] + 4));
    }
    param_1[3] = 0;
  }
  return;
}

