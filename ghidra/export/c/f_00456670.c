// FUNCTION: PORT1111 0x00456670
// name: FUN_00456670
// sig: undefined4 FUN_00456670(void * this, int param_1)


undefined4 __thiscall FUN_00456670(void *this,int param_1)

{
  int iVar1;
  void *local_4;
  
  local_4 = this;
  iVar1 = FUN_004147d0(param_1);
  *(int *)((int)this + 0x14) = iVar1;
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x290) != 0)) &&
     (*(int *)(iVar1 + 0x294) - *(int *)(iVar1 + 0x290) >> 2 != 0)) {
    FUN_00413aa0((void *)((int)this + 4),&local_4,&param_1);
    if (local_4 != *(void **)((int)this + 8)) {
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)local_4 + 0x10);
      return 1;
    }
  }
  return 0;
}

