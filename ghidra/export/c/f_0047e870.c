// FUNCTION: PORT1111 0x0047e870
// name: FUN_0047e870
// sig: int FUN_0047e870(int param_1)


int __fastcall FUN_0047e870(int param_1)

{
  int iVar1;
  int yTop;
  tagRECT local_10;
  
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    iVar1 = *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x24);
    yTop = *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x28);
    SetRect(&local_10,iVar1,yTop,*(int *)(param_1 + 0x24) + iVar1,*(int *)(param_1 + 0x28) + yTop);
    return local_10.bottom - local_10.top;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))();
  return iVar1;
}

