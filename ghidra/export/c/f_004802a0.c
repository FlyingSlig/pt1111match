// FUNCTION: PORT1111 0x004802a0
// name: FUN_004802a0
// sig: undefined FUN_004802a0(int param_1)


void __fastcall FUN_004802a0(int param_1)

{
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004802ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x10) + 0x28))();
    return;
  }
  return;
}

