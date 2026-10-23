// FUNCTION: PORT1111 0x00407c00
// name: FUN_00407c00
// sig: undefined FUN_00407c00(int param_1)


void __fastcall FUN_00407c00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar6 = *(int *)(param_1 + 0x50);
    iVar1 = *(int *)(iVar6 + 0x40);
    iVar2 = *(int *)(iVar6 + 0x34);
    iVar3 = *(int *)(iVar6 + 0x3c);
    for (iVar6 = *(int *)(iVar6 + 0x38); iVar4 = iVar2, iVar6 < iVar1; iVar6 = iVar6 + 1) {
      for (; iVar4 < iVar3; iVar4 = iVar4 + 1) {
        local_10 = iVar4;
        local_c = iVar6;
        iVar5 = FUN_004267d0(*(void **)(param_1 + 0x40),&local_10);
        if (iVar5 != 0) {
          FUN_004274f0(iVar5);
        }
      }
    }
  }
  return;
}

