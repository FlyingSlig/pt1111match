// FUNCTION: PORT1111 0x0047e810
// name: FUN_0047e810
// sig: int FUN_0047e810(int param_1)


int __fastcall FUN_0047e810(int param_1)

{
  int iVar1;
  int yTop;
  tagRECT local_10;
  
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    iVar1 = *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x24);
    yTop = *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x28);
    SetRect(&local_10,iVar1,yTop,*(int *)(param_1 + 0x24) + iVar1,*(int *)(param_1 + 0x28) + yTop);
    return local_10.right - local_10.left;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  return iVar1;
}

