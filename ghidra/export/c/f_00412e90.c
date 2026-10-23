// FUNCTION: PORT1111 0x00412e90
// name: FUN_00412e90
// sig: undefined FUN_00412e90(int * param_1)


void FUN_00412e90(int *param_1)

{
  if (DAT_004e2424 != (void *)0x0) {
    FUN_00434760(DAT_004e2424,param_1);
    return;
  }
  if (param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00412eb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)();
    return;
  }
  return;
}

