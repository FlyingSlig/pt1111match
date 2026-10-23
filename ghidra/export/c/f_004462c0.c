// FUNCTION: PORT1111 0x004462c0
// name: FUN_004462c0
// sig: undefined FUN_004462c0(undefined4 * param_1)


void __fastcall FUN_004462c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c3b98;
                    /* WARNING: Could not recover jumptable at 0x004462cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[1] + 4))();
  return;
}

