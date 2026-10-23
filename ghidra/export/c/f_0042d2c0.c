// FUNCTION: PORT1111 0x0042d2c0
// name: FUN_0042d2c0
// sig: undefined FUN_0042d2c0(int param_1)


void __fastcall FUN_0042d2c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0042cfe0(param_1);
  iVar1 = FUN_0042d150(param_1);
  iVar2 = 0;
  while (iVar1 != 0) {
    *(int *)(*(int *)(param_1 + 0x6c) + iVar2 * 4) = iVar1;
    iVar1 = FUN_0042d150(param_1);
    iVar2 = iVar2 + 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar2 * 4) = 0;
  *(int *)(param_1 + 0x68) = iVar2 + -1;
  *(undefined4 *)(param_1 + 0x70) = DAT_004e2c30;
  *(undefined4 *)(param_1 + 0x74) = DAT_004e2c34;
  return;
}

