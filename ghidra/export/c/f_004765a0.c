// FUNCTION: PORT1111 0x004765a0
// name: FUN_004765a0
// sig: undefined4 FUN_004765a0(void * this, int param_1)


undefined4 __thiscall FUN_004765a0(void *this,int param_1)

{
  void *this_00;
  undefined4 *puVar1;
  int iVar2;
  void *local_4;
  
  iVar2 = param_1;
  this_00 = *(void **)((int)this + 0x14);
  local_4 = this;
  FUN_00413aa0(this_00,&local_4,&param_1);
  if ((local_4 != *(void **)((int)this_00 + 4)) &&
     (puVar1 = *(undefined4 **)((int)local_4 + 0x10), puVar1 != (undefined4 *)0x0)) {
    iVar2 = FUN_00476530(this,iVar2);
    if (iVar2 != 0) {
      (**(code **)*puVar1)(1);
      return 1;
    }
  }
  return 0;
}

