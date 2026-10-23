// FUNCTION: PORT1111 0x00418840
// name: FUN_00418840
// sig: undefined4 FUN_00418840(void * this, uint param_1)


undefined4 __thiscall FUN_00418840(void *this,uint param_1)

{
  uint uVar1;
  int local_4;
  
  uVar1 = FUN_004390f0(param_1,(int *)((int)this + 0x68),(int *)((int)this + 0x6c),
                       (int *)((int)this + 0x70),(uint *)((int)this + 0x74));
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_00439060(param_1,(int *)&param_1,&local_4);
    if ((char)uVar1 == '\0') {
      return uVar1 & 0xffffff00;
    }
    *(int *)((int)this + 0x68) = -((int)param_1 / 2);
    *(int *)((int)this + 0x6c) = -(local_4 / 2);
    *(int *)((int)this + 0x70) = (int)param_1 / 2;
    uVar1 = local_4 / 2;
    *(uint *)((int)this + 0x74) = uVar1;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

