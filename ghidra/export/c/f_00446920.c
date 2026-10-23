// FUNCTION: PORT1111 0x00446920
// name: FUN_00446920
// sig: undefined FUN_00446920(int param_1)


void __fastcall FUN_00446920(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))
              (*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28),
               *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x2c));
    iVar1 = FUN_0044b0e0(*(void **)(param_1 + 0x38));
    if (iVar1 == 0) {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x18))(0);
                    /* WARNING: Could not recover jumptable at 0x00446966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x38) + 8))();
      return;
    }
  }
  return;
}

