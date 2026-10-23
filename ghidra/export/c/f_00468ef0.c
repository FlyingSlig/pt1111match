// FUNCTION: PORT1111 0x00468ef0
// name: FUN_00468ef0
// sig: undefined4 FUN_00468ef0(void * this, ushort param_1)


undefined4 __thiscall FUN_00468ef0(void *this,ushort param_1)

{
  void *local_4;
  
  if (param_1 != 0xffffffff) {
    local_4 = this;
    FUN_00468de0((void *)((int)this + 0x2c),&local_4,&param_1);
    if (local_4 != *(void **)((int)this + 0x30)) {
      return *(undefined4 *)((int)local_4 + 0x10);
    }
  }
  return 0;
}

