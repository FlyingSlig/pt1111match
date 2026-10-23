// FUNCTION: PORT1111 0x0045afa0
// name: FUN_0045afa0
// sig: undefined FUN_0045afa0(void * param_1)


void __fastcall FUN_0045afa0(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = (int)param_1 + 0x4c;
  iVar2 = FUN_004810c0(iVar1);
  FUN_0045aa10(param_1,*(int *)((int)param_1 + 0xbcc) - iVar2);
  iVar2 = 0;
  if (*(int *)((int)param_1 + 0xd4) != 0) {
    *(undefined4 *)((int)param_1 + 0xd4) = 0;
    FUN_0045acd0((int)param_1);
    uVar3 = FUN_004810c0(iVar1);
    iVar4 = FUN_004810c0(iVar1);
    if ((int)uVar3 < iVar4 + 3) {
      do {
        iVar4 = FUN_00457c20(*(int *)(*(int *)((int)param_1 + 0xd0) + 0x10));
        if (iVar4 <= (int)uVar3) {
          return;
        }
        iVar4 = FUN_00457ca0(*(void **)(*(int *)((int)param_1 + 0xd0) + 0x10),uVar3);
        FUN_0045ad30(param_1,iVar4,iVar2);
        iVar2 = iVar2 + 1;
        uVar3 = uVar3 + 1;
        iVar4 = FUN_004810c0(iVar1);
      } while ((int)uVar3 < iVar4 + 3);
    }
  }
  return;
}

