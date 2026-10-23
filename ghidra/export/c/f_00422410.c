// FUNCTION: PORT1111 0x00422410
// name: FUN_00422410
// sig: undefined4 FUN_00422410(void * this, uint param_1, uint param_2, uint param_3, uint param_4)


undefined4 __thiscall FUN_00422410(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if (((*(uint *)((int)this + 100) <= param_3) || (*(uint *)((int)this + 0x68) <= param_4)) ||
     (*(int *)(*(int *)((int)this + 0x60) + (*(uint *)((int)this + 100) * param_4 + param_3) * 4) !=
      0)) {
    return 0;
  }
  uVar2 = param_1 + 1;
  if ((param_3 == uVar2) && (param_4 == param_2 - 1)) {
    iVar1 = FUN_00422390(this,param_1,param_2 - 1);
  }
  else {
    if (param_3 == param_1 - 1) {
      if (param_4 != param_2 + 1) {
        if ((param_3 == param_1 - 1) && (param_4 == param_2 - 1)) {
          iVar1 = FUN_00422390(this,param_1,param_2 - 1);
          if (iVar1 != 0) {
            return 0;
          }
          uVar2 = param_1 - 1;
          goto LAB_0042246e;
        }
        goto LAB_004224b9;
      }
      uVar2 = param_1 - 1;
    }
    else {
LAB_004224b9:
      if (param_3 != uVar2) {
        return 1;
      }
      if (param_4 != param_2 + 1) {
        return 1;
      }
      uVar2 = param_1 + 1;
    }
    iVar1 = FUN_00422390(this,uVar2,param_2);
    uVar2 = param_1;
    param_2 = param_2 + 1;
  }
  if (iVar1 != 0) {
    return 0;
  }
LAB_0042246e:
  iVar1 = FUN_00422390(this,uVar2,param_2);
  if (iVar1 != 0) {
    return 0;
  }
  return 1;
}

