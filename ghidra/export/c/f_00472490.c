// FUNCTION: PORT1111 0x00472490
// name: FUN_00472490
// sig: undefined4 FUN_00472490(void * this, int param_1)


undefined4 __thiscall FUN_00472490(void *this,int param_1)

{
  bool bVar1;
  uchar *puVar2;
  void *this_00;
  int iVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  
  if (*(int *)((int)this + 0x40) == 0) {
    return 1;
  }
  iVar3 = *(int *)((int)this + 0x48);
  puVar2 = (uchar *)FUN_00465e00((undefined4 *)((int)this + 0xa4));
  this_00 = (void *)FUN_0047c5d0(iVar3);
  iVar3 = FUN_00475340(this_00,puVar2);
  if (iVar3 != 0) {
    uVar4 = FUN_004723f0(this,iVar3,0,0,param_1);
    return uVar4;
  }
  if ((*(int *)((int)this + 0x44) == 0) || (*(int *)(*(int *)((int)this + 0x44) + 0x3c) != 1)) {
    bVar1 = FUN_0046fc80(this);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      return 0;
    }
  }
  else {
    iVar3 = FUN_0046fdc0(this,1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  FUN_00472320(this);
  if (*(int *)((int)this + 0xa0) == 0) {
    if (*(int *)((int)this + 0x58) != 0) {
      uVar4 = (**(code **)(*(int *)this + 0x18))();
      return uVar4;
    }
  }
  else {
    FUN_0046fed0(this);
    FUN_0046eca0(this);
    FUN_00465e40((undefined4 *)((int)this + 0xa4));
  }
  return 1;
}

