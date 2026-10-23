// FUNCTION: PORT1111 0x0044c390
// name: FUN_0044c390
// sig: undefined4 FUN_0044c390(void * this, int param_1)


undefined4 __thiscall FUN_0044c390(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  void *local_4;
  
  iVar1 = param_1;
  local_4 = this;
  FUN_00413aa0(this,&local_4,&param_1);
  if ((local_4 != *(void **)((int)this + 4)) && (*(int *)((int)local_4 + 0x10) != 0)) {
    *(int *)((int)this + 0xdc) = iVar1;
    FUN_0044c1c0(this);
    piVar2 = FUN_0044baf0((int)this + 0x10);
    (**(code **)(*piVar2 + 0x14))(piVar2,*(undefined4 *)((int)this + 100),0);
    return 1;
  }
  return 0;
}

