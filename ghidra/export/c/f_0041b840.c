// FUNCTION: PORT1111 0x0041b840
// name: FUN_0041b840
// sig: undefined FUN_0041b840(int param_1)


void __fastcall FUN_0041b840(int param_1)

{
  FUN_0041eca0(param_1);
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041b854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x48) + 0xc))();
    return;
  }
  return;
}

