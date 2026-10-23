// FUNCTION: PORT1111 0x00422f10
// name: FUN_00422f10
// sig: undefined FUN_00422f10(int param_1)


void __fastcall FUN_00422f10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x48);
  iVar1 = *(int *)(param_1 + 0x80) * 2;
  iVar3 = *(int *)(param_1 + 0xa4);
  if (iVar1 < *(int *)(param_1 + 0xa4)) {
    iVar3 = iVar1;
  }
  iVar1 = iVar3 * 3 +
          (*(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x70) * 2 + *(int *)(param_1 + 0x74)) * 4;
  *(int *)(param_1 + 0x48) = iVar1;
  if (200 < iVar1) {
    *(undefined4 *)(param_1 + 0x48) = 200;
  }
  *(undefined4 *)(DAT_004e2410 + 0x89c) = 1;
  FUN_00442660(*(int *)(param_1 + 0x34),(int *)0x3f8);
  if (iVar2 < *(int *)(param_1 + 0x48)) {
    FUN_00441930(DAT_004e2420);
    return;
  }
  return;
}

