// FUNCTION: PORT1111 0x00407480
// name: FUN_00407480
// sig: undefined FUN_00407480(int param_1)


void __fastcall FUN_00407480(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x84))
              (*(undefined4 *)(*(int *)(param_1 + 0x34) + 4),
               *(undefined4 *)(*(int *)(param_1 + 0x34) + 8),0);
    FUN_00412880(*(int **)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x004074b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x40) + 0x4c))();
    return;
  }
  return;
}

