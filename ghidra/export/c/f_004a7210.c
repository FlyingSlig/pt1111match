// FUNCTION: PORT1111 0x004a7210
// name: FUN_004a7210
// sig: undefined1 FUN_004a7210(int param_1, int * param_2)


undefined1 __cdecl FUN_004a7210(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((param_1 != 0) || (param_2 != (int *)0x0)) && (iVar1 = *(int *)(param_1 + 0x220), 0 < iVar1))
  {
    piVar2 = (int *)(iVar1 * 5 + -5 + *(int *)(param_1 + 0x224));
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*param_2 == *piVar2) {
        return (char)piVar2[1];
      }
      piVar2 = (int *)((int)piVar2 + -5);
    }
  }
  return 0;
}

