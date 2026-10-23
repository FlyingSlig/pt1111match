// FUNCTION: PORT1111 0x004750e0
// name: FUN_004750e0
// sig: undefined4 FUN_004750e0(void * this, int param_1, undefined4 param_2)


undefined4 __thiscall FUN_004750e0(void *this,int param_1,undefined4 param_2)

{
  void *this_00;
  undefined4 uVar1;
  void *local_4;
  
  this_00 = *(void **)((int)this + 0x14);
  local_4 = this;
  FUN_00413aa0(this_00,&local_4,&param_1);
  if ((local_4 != *(void **)((int)this_00 + 4)) && (*(int *)((int)local_4 + 0x10) != 0)) {
    uVar1 = FUN_00475080(*(int *)((int)local_4 + 0x10));
    return uVar1;
  }
  return 0;
}

