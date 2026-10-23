// FUNCTION: PORT1111 0x004125f0
// name: FUN_004125f0
// sig: undefined FUN_004125f0(int * param_1)


void __fastcall FUN_004125f0(int *param_1)

{
  (**(code **)(param_1[5] + 0xc))();
  if (param_1[0x10] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00412608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6c))();
    return;
  }
  return;
}

