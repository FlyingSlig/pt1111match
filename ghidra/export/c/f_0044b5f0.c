// FUNCTION: PORT1111 0x0044b5f0
// name: FUN_0044b5f0
// sig: undefined4 FUN_0044b5f0(int * param_1)


undefined4 __fastcall FUN_0044b5f0(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x1c))();
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  return 0;
}

