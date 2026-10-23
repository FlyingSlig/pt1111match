// FUNCTION: PORT1111 0x00444ee0
// name: FUN_00444ee0
// sig: undefined FUN_00444ee0(void * this, int param_1, undefined4 param_2)


void __thiscall FUN_00444ee0(void *this,int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  void *this_00;
  undefined3 extraout_var;
  undefined4 uVar3;
  
  if (param_1 == 6) {
    iVar2 = FUN_00414c30(DAT_004e240c);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x50) + 0x14);
    if ((iVar2 == 0x35) || (iVar2 == 0x50)) {
      iVar2 = 0x7d1;
      goto LAB_00444f22;
    }
  }
  iVar2 = 0x7d2;
LAB_00444f22:
  FUN_00444c80(this,0x40e,iVar2);
  iVar2 = (**(code **)(**(int **)((int)this + 0x18) + 0x2c))();
  if (iVar2 == 1) {
    iVar2 = param_1;
    uVar3 = param_2;
    (**(code **)(**(int **)((int)this + 0x18) + 0x20))();
    this_00 = (void *)FUN_0040af10(DAT_004e2418);
    FUN_0040a870(this_00,iVar2,uVar3);
  }
  iVar2 = FUN_00444960(param_1);
  if ((iVar2 != -1) &&
     (bVar1 = FUN_0043dc50(*(int *)(*(int *)((int)this + 0x18) + 0x50) + 0x270),
     CONCAT31(extraout_var,bVar1) != 0)) {
    FUN_00444c80(this,iVar2,0x7d1);
    if (iVar2 == 0x3e9) {
      *(undefined4 *)((int)this + 0x1c) = param_2;
      return;
    }
    if (iVar2 == 0x3ea) {
      *(undefined4 *)((int)this + 0x20) = param_2;
      return;
    }
    if (iVar2 == 0x3eb) {
      *(undefined4 *)((int)this + 0x24) = param_2;
    }
  }
  return;
}

