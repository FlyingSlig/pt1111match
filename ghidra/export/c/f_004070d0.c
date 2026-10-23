// FUNCTION: PORT1111 0x004070d0
// name: FUN_004070d0
// sig: undefined FUN_004070d0(int param_1)


void __fastcall FUN_004070d0(int param_1)

{
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0xc))();
  }
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004070ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x48) + 0xc))();
    return;
  }
  return;
}

