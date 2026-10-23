// FUNCTION: PORT1111 0x0049b72c
// name: FUN_0049b72c
// sig: int FUN_0049b72c(int * param_1)


int FUN_0049b72c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((piVar1[5] == 0x19930520 || (piVar1[5] == 0x19930521)))) {
    terminate();
  }
  if ((DAT_004e2d50 != (_func_int *)0x0) && (iVar2 = _ValidateExecute(DAT_004e2d50), iVar2 != 0)) {
    iVar2 = (*DAT_004e2d50)(param_1);
    return iVar2;
  }
  return 0;
}

