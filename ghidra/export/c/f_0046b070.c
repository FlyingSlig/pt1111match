// FUNCTION: PORT1111 0x0046b070
// name: FUN_0046b070
// sig: undefined FUN_0046b070(int * param_1, int * param_2, int * param_3)


void __cdecl FUN_0046b070(int *param_1,int *param_2,int *param_3)

{
  (**(code **)(*param_1 + 0x34))();
  (**(code **)(*param_2 + 0x34))();
  if (param_3 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0046b08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x34))();
    return;
  }
  return;
}

