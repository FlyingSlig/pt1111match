// FUNCTION: PORT1111 0x00482140
// name: FUN_00482140
// sig: undefined4 FUN_00482140(void * this, int param_1)


undefined4 __thiscall FUN_00482140(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (-1 < param_1) {
    iVar1 = FUN_004810c0(*(int *)((int)this + 0x2a8));
    iVar2 = *(int *)((int)this + 0x20) + iVar1;
    if (*(int *)((int)this + 0x24) < iVar2) {
      iVar2 = *(int *)((int)this + 0x24);
    }
    if ((iVar1 <= param_1) && (param_1 <= iVar2)) {
      return 1;
    }
  }
  return 0;
}

