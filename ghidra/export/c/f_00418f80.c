// FUNCTION: PORT1111 0x00418f80
// name: FUN_00418f80
// sig: undefined4 FUN_00418f80(void * this, int param_1)


undefined4 __thiscall FUN_00418f80(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00439360(param_1,&param_1);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  *(int *)((int)this + 0x26c) = param_1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

