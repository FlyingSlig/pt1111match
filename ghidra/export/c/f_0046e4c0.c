// FUNCTION: PORT1111 0x0046e4c0
// name: FUN_0046e4c0
// sig: int * FUN_0046e4c0(void * this, uint param_1)


int * __thiscall FUN_0046e4c0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 auStack_30 [9];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b9c98;
  local_c = ExceptionList;
  if (*(int *)((int)this + 4) == 2) {
    return (int *)0x0;
  }
  ExceptionList = &local_c;
  uVar1 = (**(code **)(*(int *)this + 0xc))();
  if (((uVar1 & 0xff) << 0x10 | param_1) == 0x180008) {
    FUN_0048de20(auStack_30);
    uStack_4 = 0;
    iVar2 = FUN_0048de40(auStack_30,this);
    if (iVar2 == 0) {
      uStack_4 = 0xffffffff;
      FUN_0048dfb0(auStack_30);
      ExceptionList = local_c;
      return (int *)0x0;
    }
    piVar4 = (int *)FUN_0048f050(auStack_30);
    if (piVar4 != (int *)0x0) {
      if (DAT_004dd964 == 0xf) {
        FUN_0046d440(piVar4);
      }
      else {
        FUN_0046d4d0(piVar4);
      }
    }
    uStack_4 = 0xffffffff;
    FUN_0048dfb0(auStack_30);
  }
  else {
    uVar1 = param_1;
    iVar2 = (**(code **)(*(int *)this + 8))(param_1,0,0);
    uVar3 = (**(code **)(*(int *)this + 4))();
    piVar4 = FUN_0046c3a0(this,uVar3,iVar2,uVar1);
    if ((piVar4 != (int *)0x0) && (param_1 == 8)) {
      if (DAT_004dd964 == 0xf) {
        FUN_0046d440(piVar4);
        ExceptionList = local_c;
        return piVar4;
      }
      FUN_0046d4d0(piVar4);
      ExceptionList = local_c;
      return piVar4;
    }
  }
  ExceptionList = local_c;
  return piVar4;
}

