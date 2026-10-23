// FUNCTION: PORT1111 0x0040a6a0
// name: FUN_0040a6a0
// sig: undefined4 FUN_0040a6a0(int param_1)


undefined4 __fastcall FUN_0040a6a0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_00414c30(DAT_004e240c);
  if (iVar2 != 0) {
    cVar1 = (**(code **)(**(int **)(*(int *)(iVar2 + 0x60) + 0x1c) + 0x18))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  piVar3 = (int *)**(int **)(param_1 + 0x14);
  if (piVar3 != *(int **)(param_1 + 0x14)) {
    do {
      iVar2 = FUN_00414c30(DAT_004e240c);
      if (iVar2 != 0) {
        cVar1 = (**(code **)(**(int **)(*(int *)(iVar2 + 0x60) + 0x1c) + 0x18))();
        if (cVar1 != '\0') {
          return 1;
        }
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0x14));
  }
  return 0;
}

