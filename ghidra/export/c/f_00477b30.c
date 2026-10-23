// FUNCTION: PORT1111 0x00477b30
// name: FUN_00477b30
// sig: undefined4 FUN_00477b30(void * this, int param_1)


undefined4 __thiscall FUN_00477b30(void *this,int param_1)

{
  void *this_00;
  undefined4 uVar1;
  void *local_4;
  
  this_00 = *(void **)((int)this + 0xc);
  local_4 = this;
  FUN_00413aa0(this_00,&local_4,&param_1);
  if ((local_4 != *(void **)((int)this_00 + 4)) &&
     (*(undefined4 **)((int)local_4 + 0x10) != (undefined4 *)0x0)) {
    uVar1 = FUN_004779f0(this,*(undefined4 **)((int)local_4 + 0x10));
    return uVar1;
  }
  return 0;
}

