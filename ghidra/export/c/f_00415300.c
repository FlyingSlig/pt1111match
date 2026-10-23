// FUNCTION: PORT1111 0x00415300
// name: FUN_00415300
// sig: undefined FUN_00415300(void * this, int param_1)


void __thiscall FUN_00415300(void *this,int param_1)

{
  void *local_4;
  
  local_4 = this;
  FUN_00413aa0((void *)((int)this + 4),&local_4,&param_1);
  if ((local_4 != *(void **)((int)this + 8)) && (*(int **)((int)local_4 + 0x10) != (int *)0x0)) {
    FUN_004131e0(this,*(int **)((int)local_4 + 0x10),0);
  }
  return;
}

