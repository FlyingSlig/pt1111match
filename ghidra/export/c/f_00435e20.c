// FUNCTION: PORT1111 0x00435e20
// name: FUN_00435e20
// sig: int * FUN_00435e20(int param_1, int param_2)


int * __cdecl FUN_00435e20(int param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = _malloc(0x28);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_00435c10();
    return piVar1;
  }
  piVar1[3] = param_2;
  pvVar2 = _malloc(param_2 + 2);
  piVar1[1] = (int)pvVar2;
  if (pvVar2 == (void *)0x0) {
    piVar1 = (int *)FUN_00435c10();
    return piVar1;
  }
  piVar1[5] = 1;
  FUN_00435ce0(piVar1,param_1);
  return piVar1;
}

