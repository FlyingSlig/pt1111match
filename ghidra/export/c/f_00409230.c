// FUNCTION: PORT1111 0x00409230
// name: FUN_00409230
// sig: undefined FUN_00409230(int param_1)


void __fastcall FUN_00409230(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *this;
  int iVar5;
  int iVar6;
  int local_20;
  int local_10;
  int local_c;
  
  FUN_00407810(*(void **)(param_1 + 0x60));
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = *(int *)(iVar1 + 0x40);
  iVar6 = *(int *)(iVar1 + 0x38);
  iVar3 = *(int *)(iVar1 + 0x34);
  iVar1 = *(int *)(iVar1 + 0x3c);
  local_20 = 0;
  for (; iVar4 = iVar3, iVar6 < iVar2; iVar6 = iVar6 + 1) {
    for (; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      if ((iVar4 != 0) || (iVar6 != 0)) {
        local_10 = iVar4;
        local_c = iVar6;
        this = (void *)FUN_004267d0(*(void **)(param_1 + 0x40),&local_10);
        iVar5 = FUN_00418fb0(*(void **)(param_1 + 0x50),local_20);
        if (iVar5 != 0) {
          FUN_00428930(this,param_1);
        }
      }
      local_20 = local_20 + 1;
    }
  }
  FUN_00406500(param_1);
  return;
}

