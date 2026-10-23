// FUNCTION: PORT1111 0x004865b0
// name: FUN_004865b0
// sig: undefined FUN_004865b0(int * param_1)


void __fastcall FUN_004865b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  return;
}

