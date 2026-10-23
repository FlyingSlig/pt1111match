// FUNCTION: PORT1111 0x0043ccf0
// name: FUN_0043ccf0
// sig: undefined FUN_0043ccf0(int param_1)


void __fastcall FUN_0043ccf0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 8);
  if (piVar1 != *(int **)(param_1 + 8)) {
    do {
      FUN_00414e10(DAT_004e240c,piVar1[2]);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 8));
  }
  return;
}

