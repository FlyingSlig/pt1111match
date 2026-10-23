// FUNCTION: PORT1111 0x00470cb0
// name: FUN_00470cb0
// sig: undefined4 FUN_00470cb0(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_00470cb0(void *this,int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(int *)((int)this + 0xac) = param_2;
  *(int *)((int)this + 0xa8) = param_1;
  FUN_0046ecf0(this);
  if (*(int *)((int)this + 0xa8) != -1) {
    *(undefined4 *)((int)this + 0x68) = 0;
    iVar1 = FUN_0047c5d0(*(int *)((int)this + 0x48));
    iVar1 = FUN_004750b0(iVar1);
    *(int *)((int)this + 0x3c) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = *(int *)((int)this + 0xac);
    if (iVar1 != -1) {
      iVar4 = *(int *)((int)this + 0xa8);
      *(undefined4 *)((int)this + 100) = 0;
      pvVar2 = (void *)FUN_0047c5d0(*(int *)((int)this + 0x48));
      pvVar2 = (void *)FUN_004750e0(pvVar2,iVar4,iVar1);
      *(void **)((int)this + 0x40) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        return 0;
      }
      FUN_00478380(pvVar2,*(int *)(*(int *)((int)this + 0x48) + 0xa0) + *(int *)((int)this + 0x18));
      if (*(int *)((int)this + 0x58) != 0) {
        uVar3 = (**(code **)(*(int *)this + 0x18))();
        return uVar3;
      }
    }
  }
  return 1;
}

