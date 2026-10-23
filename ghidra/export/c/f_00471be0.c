// FUNCTION: PORT1111 0x00471be0
// name: FUN_00471be0
// sig: undefined FUN_00471be0(int * param_1)


void __fastcall FUN_00471be0(int *param_1)

{
  (**(code **)(*param_1 + 0x90))(0);
  if ((int *)param_1[0x2e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2e] + 0xa0))();
  }
  if ((int *)param_1[0x2c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2c] + 0xa0))();
  }
  if ((int *)param_1[0x2d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2d] + 0xa0))();
  }
  if ((int *)param_1[0x2f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2f] + 0xa0))();
  }
  if ((int *)param_1[0x30] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x30] + 0xa0))();
  }
  if ((int *)param_1[0x31] != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00471c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[0x31] + 0xa0))();
    return;
  }
  return;
}

