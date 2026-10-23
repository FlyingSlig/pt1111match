// FUNCTION: PORT1111 0x00487c40
// name: FUN_00487c40
// sig: undefined FUN_00487c40(int param_1)


void __fastcall FUN_00487c40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if ((iVar1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_0047cb40(iVar1);
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
    FUN_0047da00(*(void **)(*(int *)(param_1 + 4) + 0x24),iVar1,*(int **)(param_1 + 0x28),1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

