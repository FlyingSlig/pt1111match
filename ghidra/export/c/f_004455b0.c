// FUNCTION: PORT1111 0x004455b0
// name: FUN_004455b0
// sig: undefined FUN_004455b0(undefined4 * param_1)


void __fastcall FUN_004455b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c376c;
  if ((int *)param_1[1] != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004455bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[1] + 8))();
    return;
  }
  return;
}

