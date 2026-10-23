// FUNCTION: PORT1111 0x00467170
// name: FUN_00467170
// sig: undefined FUN_00467170(int param_1)


void __fastcall FUN_00467170(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

