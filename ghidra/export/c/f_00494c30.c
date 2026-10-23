// FUNCTION: PORT1111 0x00494c30
// name: FUN_00494c30
// sig: undefined4 FUN_00494c30(int param_1)


undefined4 __fastcall FUN_00494c30(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        do {
          piVar1 = *(int **)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) * iVar4 + iVar3) * 4);
          if ((((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xa4))(), iVar2 != 0)) &&
              (piVar1[0x28] != 0)) && ((*(byte *)(piVar1 + 0xc) & 1) != 0)) {
            return 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0xc));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  return 0;
}

