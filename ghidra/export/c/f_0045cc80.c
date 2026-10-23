// FUNCTION: PORT1111 0x0045cc80
// name: FUN_0045cc80
// sig: undefined4 FUN_0045cc80(void * this, int param_1)


undefined4 __thiscall FUN_0045cc80(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puStack_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b962b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = this;
  (**(code **)(*(int *)this + 0x1c))();
  iVar2 = FUN_00424310(param_1);
  if (0 < iVar2) {
    do {
      puStack_14 = operator_new(0x18);
      uStack_4 = 0;
      if (puStack_14 == (undefined4 *)0x0) {
        puStack_14 = (undefined4 *)0x0;
      }
      else {
        puStack_14 = (undefined4 *)FUN_0045c3d0(puStack_14);
      }
      uStack_4 = 0xffffffff;
      FUN_0045c430(puStack_14,param_1);
      iVar1 = *(int *)((int)this + 0x10);
      iVar3 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&puStack_14);
      FUN_00445600((void *)((int)this + 0xc),1);
      iVar2 = iVar2 + -1;
      *(int *)(iVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
    } while (iVar2 != 0);
    *(undefined4 *)((int)local_10 + 0x24) = 0;
    ExceptionList = pvStack_c;
    return 0;
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  ExceptionList = pvStack_c;
  return 0;
}

