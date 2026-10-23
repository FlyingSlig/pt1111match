// FUNCTION: PORT1111 0x00474610
// name: FUN_00474610
// sig: undefined FUN_00474610(void)


void FUN_00474610(void)

{
  if ((DAT_004e2b10 != 0) && (*(int **)(DAT_004e2b10 + 0x18) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00474622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(DAT_004e2b10 + 0x18) + 0xa4))();
    return;
  }
  return;
}

