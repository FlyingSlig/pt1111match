// FUNCTION: PORT1111 0x00426ec0
// name: FUN_00426ec0
// sig: undefined4 FUN_00426ec0(int param_1)


undefined4 __fastcall FUN_00426ec0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *piVar1) {
    do {
      if ((*(byte *)(*(int *)(piVar1[2] + iVar2 * 4) + 0x3c) & 8) != 0) {
        return *(undefined4 *)(piVar1[2] + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar1);
  }
  return 0;
}

