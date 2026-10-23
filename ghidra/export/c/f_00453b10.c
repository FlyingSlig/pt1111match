// FUNCTION: PORT1111 0x00453b10
// name: FUN_00453b10
// sig: undefined4 FUN_00453b10(int param_1)


undefined4 __fastcall FUN_00453b10(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  piVar3 = (int *)**(int **)(param_1 + 4);
  if (piVar3 != *(int **)(param_1 + 4)) {
    do {
      piVar1 = (int *)FUN_00414c30(DAT_004e240c);
      iVar2 = (**(code **)(*piVar1 + 0xac))();
      if (iVar2 == 0) {
        return 0;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 4));
  }
  return 1;
}

