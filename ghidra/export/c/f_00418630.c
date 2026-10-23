// FUNCTION: PORT1111 0x00418630
// name: FUN_00418630
// sig: undefined4 FUN_00418630(void * this, float param_1)


undefined4 __thiscall FUN_00418630(void *this,float param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_00439320((uint)param_1,&param_1);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_00497d88();
    *(int *)((int)this + 0x20c) = (int)uVar2;
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

