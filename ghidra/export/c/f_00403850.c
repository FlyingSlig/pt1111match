// FUNCTION: PORT1111 0x00403850
// name: FUN_00403850
// sig: undefined4 FUN_00403850(void * this, uint param_1)


undefined4 __thiscall FUN_00403850(void *this,uint param_1)

{
  uint uVar1;
  int local_4;
  
  uVar1 = FUN_004390f0(param_1,(int *)((int)this + 0x10),(int *)((int)this + 0x14),
                       (int *)((int)this + 0x18),(uint *)((int)this + 0x1c));
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_00439060(param_1,(int *)&param_1,&local_4);
    if ((char)uVar1 == '\0') {
      return uVar1 & 0xffffff00;
    }
    *(int *)((int)this + 0x10) = -((int)param_1 / 2);
    *(int *)((int)this + 0x14) = -(local_4 / 2);
    *(int *)((int)this + 0x18) = (int)param_1 / 2;
    uVar1 = local_4 / 2;
    *(uint *)((int)this + 0x1c) = uVar1;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

