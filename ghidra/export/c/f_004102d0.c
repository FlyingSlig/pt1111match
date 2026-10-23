// FUNCTION: PORT1111 0x004102d0
// name: FUN_004102d0
// sig: undefined4 FUN_004102d0(void * this, void * param_1)


undefined4 __thiscall FUN_004102d0(void *this,void *param_1)

{
  int iVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  int local_8;
  
  iVar3 = 0;
  if ((*(int *)((int)this + 0x40) != 0) && (param_1 != (void *)0x0)) {
    return 0;
  }
  FUN_004080d0(this,param_1);
  iVar1 = FUN_0047fd20(*(int *)(*(int *)((int)this + 0x60) + 0x18));
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x120)) {
    iVar2 = 0;
    do {
      *(void **)(*(int *)((int)this + 0x124) + 0x14 + iVar2) = this;
      this_00 = (void *)FUN_004267d0(param_1,(int *)(*(int *)(*(int *)(*(int *)((int)this + 0x50) +
                                                                      0x198) + iVar1 * 0x1c + 0x18)
                                                    + iVar3));
      if (this_00 != (void *)0x0) {
        (**(code **)(*(int *)(*(int *)((int)this + 0x124) + iVar2) + 0xc))
                  ((int)*(short *)((int)this_00 + 4),(int)*(short *)((int)this_00 + 6),0);
        FUN_00428240(this_00,*(int *)((int)this + 0x124) + iVar2);
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x18;
      iVar2 = iVar2 + 0x1c;
    } while (local_8 < *(int *)((int)this + 0x120));
  }
  iVar3 = FUN_0047fd20(*(int *)(*(int *)((int)this + 0x60) + 0x18));
  FUN_00410250(this,iVar3);
  return 1;
}

