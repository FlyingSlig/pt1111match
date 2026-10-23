// FUNCTION: PORT1111 0x0041eae0
// name: FUN_0041eae0
// sig: undefined FUN_0041eae0(int * param_1)


void __fastcall FUN_0041eae0(int *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
                    /* WARNING: Could not recover jumptable at 0x0041eaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

