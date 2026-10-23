// FUNCTION: PORT1111 0x0040d980
// name: FUN_0040d980
// sig: bool FUN_0040d980(int param_1)


bool __fastcall FUN_0040d980(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  FUN_0041bef0(param_1);
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  if (*(char *)(*(int *)(param_1 + 0x50) + 100) == '\0') {
    iVar1 = iVar1 + 0x20;
    iVar3 = iVar3 + 0x10;
  }
  pvVar2 = (void *)FUN_00429b40(DAT_004e2404,iVar1,iVar3);
  if (pvVar2 == (void *)0x0) {
    return false;
  }
  iVar1 = FUN_0040d8a0(*(undefined4 *)(param_1 + 0x50),*(int *)(param_1 + 0x70),pvVar2);
  *(int *)(param_1 + 0x13c) = iVar1;
  return iVar1 != 0;
}

