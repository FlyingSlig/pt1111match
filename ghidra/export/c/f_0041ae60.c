// FUNCTION: PORT1111 0x0041ae60
// name: FUN_0041ae60
// sig: undefined4 FUN_0041ae60(void * this, uint param_1)


undefined4 __thiscall FUN_0041ae60(void *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  uVar1 = FUN_004390a0(param_1,&local_c,&local_8,&local_4);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_0041a730((void *)((int)this + 0x184),&local_c);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  uVar1 = FUN_00439060(param_1,&local_8,&local_4);
  if ((char)uVar1 != '\0') {
    local_c = *(int *)((int)this + 0x60);
    uVar2 = FUN_0041a730((void *)((int)this + 0x184),&local_c);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

