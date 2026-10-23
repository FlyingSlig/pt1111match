// FUNCTION: PORT1111 0x0044bb30
// name: FUN_0044bb30
// sig: undefined FUN_0044bb30(int param_1)


void __fastcall FUN_0044bb30(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,0,0,0,0);
  }
  return;
}

