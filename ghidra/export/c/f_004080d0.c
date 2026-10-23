// FUNCTION: PORT1111 0x004080d0
// name: FUN_004080d0
// sig: undefined4 FUN_004080d0(void * this, void * param_1)


undefined4 __thiscall FUN_004080d0(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  int iVar5;
  int iVar6;
  int local_24;
  int local_10;
  int local_c;
  
  FUN_00406140(this,param_1);
  FUN_00423d10(&DAT_004e26e8,*(int *)((int)param_1 + 0x50));
  iVar6 = *(int *)((int)this + 0x50);
  iVar1 = *(int *)(iVar6 + 0x40);
  iVar2 = *(int *)(iVar6 + 0x34);
  iVar3 = *(int *)(iVar6 + 0x3c);
  iVar6 = *(int *)(iVar6 + 0x38);
  local_24 = 0;
  for (; iVar4 = iVar2, iVar6 < iVar1; iVar6 = iVar6 + 1) {
    for (; iVar4 < iVar3; iVar4 = iVar4 + 1) {
      if ((iVar4 != 0) || (iVar6 != 0)) {
        local_10 = iVar4;
        local_c = iVar6;
        this_00 = (void *)FUN_004267d0(*(void **)((int)this + 0x40),&local_10);
        iVar5 = FUN_00418fb0(*(void **)((int)this + 0x50),local_24);
        if (iVar5 != 0) {
          FUN_004281d0(this_00,this);
          FUN_00423d10(&DAT_004e26e8,*(int *)((int)this_00 + 0x50));
        }
      }
      local_24 = local_24 + 1;
    }
  }
  (**(code **)(*(int *)this + 0xd4))();
  return 1;
}

