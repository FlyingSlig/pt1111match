// FUNCTION: PORT1111 0x00494ec0
// name: FUN_00494ec0
// sig: undefined4 FUN_00494ec0(void * this, uint param_1, undefined4 param_2)


undefined4 __thiscall FUN_00494ec0(void *this,uint param_1,undefined4 param_2)

{
  SHORT SVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  
  if (param_1 == *(uint *)((int)this + 0x18)) {
    FUN_0047d720(*(void **)((int)this + 0x20),*(int **)((int)*(void **)((int)this + 0x20) + 0x44));
    return 1;
  }
  if (param_1 == *(uint *)((int)this + 0x1c)) {
    FUN_0047d720(*(void **)((int)this + 0x20),*(int **)((int)*(void **)((int)this + 0x20) + 0x44));
    return 1;
  }
  iVar6 = *(int *)((int)this + 0x14);
  if (*(int *)((int)this + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  }
  if ((iVar6 < iVar2) && (-1 < iVar6)) {
    pvVar5 = *(void **)(*(int *)((int)this + 8) + iVar6 * 4);
  }
  else {
    pvVar5 = (void *)0x0;
  }
  if (param_1 == 9) {
    iVar6 = 0;
    while( true ) {
      if (*(int *)((int)this + 8) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
      }
      if (iVar2 <= iVar6) break;
      SVar1 = GetKeyState(0x10);
      if (SVar1 < 0) {
        iVar2 = *(int *)((int)this + 0x14) + -1;
      }
      else {
        iVar2 = *(int *)((int)this + 0x14) + 1;
      }
      *(int *)((int)this + 0x14) = iVar2;
      if (*(int *)((int)this + 8) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
      }
      if (*(int *)((int)this + 0x14) < iVar2) {
        if (*(int *)((int)this + 0x14) < 0) {
          if (*(int *)((int)this + 8) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
          }
          *(int *)((int)this + 0x14) = iVar2 + -1;
        }
      }
      else {
        *(undefined4 *)((int)this + 0x14) = 0;
      }
      iVar2 = *(int *)((int)this + 0x14);
      if (*(int *)((int)this + 8) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
      }
      if (((iVar2 < iVar4) && (-1 < iVar2)) &&
         (iVar2 = *(int *)(*(int *)((int)this + 8) + iVar2 * 4), iVar2 != 0)) {
        iVar2 = FUN_00494c30(iVar2);
        if (iVar2 != 0) break;
      }
      iVar6 = iVar6 + 1;
    }
    iVar6 = *(int *)((int)this + 0x14);
    if (*(int *)((int)this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
    }
    if (((iVar6 < iVar2) && (-1 < iVar6)) &&
       (pvVar5 = *(void **)(*(int *)((int)this + 8) + iVar6 * 4), pvVar5 != (void *)0x0)) {
      FUN_00494cb0(pvVar5,*(void **)((int)this + 0x20),1);
    }
  }
  else {
    if ((param_1 < 0x25) || (0x28 < param_1)) {
      if (pvVar5 != (void *)0x0) {
        uVar3 = FUN_00494d90(pvVar5,*(undefined4 *)((int)this + 0x20),param_1,param_2);
        return uVar3;
      }
      return 0;
    }
    if (pvVar5 != (void *)0x0) {
      FUN_00494d90(pvVar5,*(undefined4 *)((int)this + 0x20),param_1,param_2);
      return 1;
    }
  }
  return 1;
}

