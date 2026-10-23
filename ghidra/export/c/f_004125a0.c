// FUNCTION: PORT1111 0x004125a0
// name: FUN_004125a0
// sig: undefined4 FUN_004125a0(int * param_1)


undefined4 __fastcall FUN_004125a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  if (*(char *)(param_1[0x14] + 100) == '\0') {
    iVar1 = iVar1 + 0x20;
    iVar2 = iVar2 + 0x10;
  }
  iVar1 = FUN_00429b40(DAT_004e2404,iVar1,iVar2);
  if (iVar1 != 0) {
    if (iVar1 != param_1[0x10]) {
      (**(code **)(*param_1 + 0x68))(iVar1);
    }
    return 1;
  }
  return 0;
}

