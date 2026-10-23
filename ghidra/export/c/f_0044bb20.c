// FUNCTION: PORT1111 0x0044bb20
// name: FUN_0044bb20
// sig: undefined FUN_0044bb20(int param_1)


void __fastcall FUN_0044bb20(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
  }
  return;
}

