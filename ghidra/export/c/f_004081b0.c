// FUNCTION: PORT1111 0x004081b0
// name: FUN_004081b0
// sig: undefined FUN_004081b0(int param_1)


void __fastcall FUN_004081b0(int param_1)

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
  iVar6 = *(int *)(param_1 + 0x50);
  iVar1 = *(int *)(iVar6 + 0x34);
  iVar2 = *(int *)(iVar6 + 0x3c);
  iVar3 = *(int *)(iVar6 + 0x40);
  iVar6 = *(int *)(iVar6 + 0x38);
  local_20 = 0;
  FUN_00423d50(&DAT_004e26e8,*(int *)(*(int *)(param_1 + 0x40) + 0x50));
  for (; iVar4 = iVar1, iVar6 < iVar3; iVar6 = iVar6 + 1) {
    for (; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      if ((iVar4 != 0) || (iVar6 != 0)) {
        local_10 = iVar4;
        local_c = iVar6;
        this = (void *)FUN_004267d0(*(void **)(param_1 + 0x40),&local_10);
        iVar5 = FUN_00418fb0(*(void **)(param_1 + 0x50),local_20);
        if (iVar5 != 0) {
          FUN_00428930(this,param_1);
          FUN_00423d50(&DAT_004e26e8,*(int *)((int)this + 0x50));
        }
      }
      local_20 = local_20 + 1;
    }
  }
  FUN_00423d90(&DAT_004e26e8,*(uint *)(*(int *)(param_1 + 0x40) + 0x50));
  FUN_00406500(param_1);
  return;
}

