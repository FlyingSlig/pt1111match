// FUNCTION: PORT1111 0x00453ab0
// name: FUN_00453ab0
// sig: int FUN_00453ab0(int param_1)


int __fastcall FUN_00453ab0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    return -1;
  }
  piVar3 = (int *)**(int **)(param_1 + 4);
  if (piVar3 != *(int **)(param_1 + 4)) {
    do {
      piVar1 = (int *)FUN_00414c30(DAT_004e240c);
      if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x2c))(), iVar2 == 1)) {
        return piVar3[2];
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 4));
  }
  return *(int *)(**(int **)(param_1 + 4) + 8);
}

