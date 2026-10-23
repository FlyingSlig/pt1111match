// FUNCTION: PORT1111 0x00414e10
// name: FUN_00414e10
// sig: undefined FUN_00414e10(void * this, int param_1)


void __thiscall FUN_00414e10(void *this,int param_1)

{
  int iVar1;
  void *local_4;
  
  local_4 = this;
  FUN_00413aa0((void *)((int)this + 4),&local_4,&param_1);
  if (((local_4 != *(void **)((int)this + 8)) && (iVar1 = *(int *)((int)local_4 + 0x10), iVar1 != 0)
      ) && (*(int *)(*(int *)(iVar1 + 0xb0) + 0x14) != 0)) {
    *(undefined4 *)(iVar1 + 0xb4) = 1;
  }
  return;
}

