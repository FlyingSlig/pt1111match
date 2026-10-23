// FUNCTION: PORT1111 0x0043c540
// name: FUN_0043c540
// sig: int FUN_0043c540(void * this, int param_1)


int __thiscall FUN_0043c540(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *this_00;
  int iVar3;
  
  iVar1 = (int)*(short *)(*(int *)(param_1 + 0x40) + 0x4e);
  iVar2 = (int)*(short *)(*(int *)(param_1 + 0x40) + 0x4c);
  iVar3 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
  iVar1 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  if ((((-1 < iVar3) && (-1 < iVar1)) && (iVar3 < *(int *)((int)this + 0x10))) &&
     ((iVar1 < *(int *)((int)this + 0x14) &&
      (this_00 = (void *)((*(int *)((int)this + 0x10) * iVar1 + iVar3) * 0x30 +
                         *(int *)((int)this + 4)), this_00 != (void *)0x0)))) {
    iVar1 = FUN_0043c8e0(this_00,*(int *)(param_1 + 0x10));
    return iVar1;
  }
  return -1;
}

