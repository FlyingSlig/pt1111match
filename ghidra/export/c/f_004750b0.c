// FUNCTION: PORT1111 0x004750b0
// name: FUN_004750b0
// sig: undefined4 FUN_004750b0(int param_1)


undefined4 __fastcall FUN_004750b0(int param_1)

{
  void *this;
  int local_4;
  
  this = *(void **)(param_1 + 0x14);
  local_4 = param_1;
  FUN_00413aa0(this,&local_4,(int *)&stack0x00000004);
  if (local_4 != *(int *)((int)this + 4)) {
    return *(undefined4 *)(local_4 + 0x10);
  }
  return 0;
}

