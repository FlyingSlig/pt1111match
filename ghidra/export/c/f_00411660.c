// FUNCTION: PORT1111 0x00411660
// name: FUN_00411660
// sig: undefined FUN_00411660(int param_1)


void __fastcall FUN_00411660(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_0041eca0(param_1);
    if (*(int **)(param_1 + 0x50) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x50) + 0xc))();
    }
    if (*(int **)(param_1 + 0x54) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00411689. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
      return;
    }
  }
  return;
}

