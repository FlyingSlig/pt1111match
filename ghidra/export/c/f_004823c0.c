// FUNCTION: PORT1111 0x004823c0
// name: FUN_004823c0
// sig: undefined FUN_004823c0(void * this, int param_1)


void __thiscall FUN_004823c0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  
  if (param_1 != -1) {
    if (param_1 < 0) goto LAB_004824b0;
    iVar1 = FUN_004810c0(*(int *)((int)this + 0x2a8));
    iVar3 = *(int *)((int)this + 0x20) + iVar1;
    if (*(int *)((int)this + 0x24) < iVar3) {
      iVar3 = *(int *)((int)this + 0x24);
    }
    if ((param_1 < iVar1) || (iVar3 < param_1)) goto LAB_004824b0;
  }
  iVar3 = FUN_004810c0(*(int *)((int)this + 0x2a8));
  iVar1 = *(int *)((int)this + 0x20) + iVar3;
  if (*(int *)((int)this + 0x24) < iVar1) {
    iVar1 = *(int *)((int)this + 0x24);
  }
  for (; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    (**(code **)(*(int *)this + 4))(iVar3);
    iVar2 = FUN_004810c0(*(int *)((int)this + 0x2a8));
    iVar2 = iVar3 - iVar2;
    if ((iVar2 < 0) || (*(int *)((int)this + 0x20) <= iVar2)) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = *(void **)((int)this + iVar2 * 4 + 0x30);
    }
    if (*(int *)((int)this_00 + 0xa0) == 0) {
      FUN_00471e00(this_00,*(int *)((int)this + 0xc));
    }
  }
  if (iVar1 < *(int *)((int)this + 0x20)) {
    do {
      iVar3 = FUN_004810c0(*(int *)((int)this + 0x2a8));
      iVar3 = iVar1 - iVar3;
      if ((iVar3 < 0) || (*(int *)((int)this + 0x20) <= iVar3)) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = *(int **)((int)this + iVar3 * 4 + 0x30);
      }
      if (piVar4[0x28] != 0) {
        if ((void *)piVar4[0x31] != (void *)0x0) {
          FUN_004737d0((void *)piVar4[0x31],(uchar *)0x0);
        }
        FUN_00472ef0(piVar4);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x20));
  }
LAB_004824b0:
  piVar4 = *(int **)((int)this + 0x2c);
  if (piVar4 == (int *)0x0) {
    return;
  }
  if (*(int *)((int)this + 0x24) != 0) {
    FUN_00471e00(piVar4,1);
    return;
  }
  FUN_00472ef0(piVar4);
  return;
}

