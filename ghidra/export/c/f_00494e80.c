// FUNCTION: PORT1111 0x00494e80
// name: FUN_00494e80
// sig: undefined FUN_00494e80(void * this, int param_1)


void __thiscall FUN_00494e80(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x14);
  if (*(int *)((int)this + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  }
  if (((iVar1 < iVar2) && (-1 < iVar1)) &&
     (this_00 = *(void **)(*(int *)((int)this + 8) + iVar1 * 4), this_00 != (void *)0x0)) {
    FUN_00494cb0(this_00,*(void **)((int)this + 0x20),param_1);
  }
  return;
}

