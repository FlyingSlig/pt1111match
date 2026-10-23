// FUNCTION: PORT1111 0x00408570
// name: FUN_00408570
// sig: undefined4 FUN_00408570(void * this, int param_1)


undefined4 __thiscall FUN_00408570(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uchar *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  float10 extraout_ST0;
  ulonglong uVar7;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b5ab3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar7 = FUN_00497d88();
  iVar6 = *(int *)((int)this + 0x54) + (int)uVar7;
  *(int *)((int)this + 0x54) = iVar6;
  *(float *)((int)this + 0xf4) = (float)(extraout_ST0 - (float10)(int)uVar7);
  iVar1 = *(int *)(*(int *)((int)this + 0x50) + 0xa8);
  if (iVar1 < iVar6) {
    *(int *)((int)this + 0x54) = iVar1;
  }
  FUN_00445030(*(void **)((int)this + 0xb0),0x449);
  FUN_00453550(*(void **)(*(int *)((int)this + 0x60) + 0xc),*(int *)((int)this + 0x54));
  iVar1 = (**(code **)(*(int *)this + 0x9c))();
  if (iVar1 != 0) {
    FUN_00454e30(DAT_004e2410,0);
  }
  iVar1 = *(int *)((int)this + 0x50);
  if (*(int *)((int)this + 0xfc) < *(int *)(iVar1 + 0xf8)) {
    local_10 = 0;
  }
  else {
    if (*(int *)(iVar1 + 0xfc) <= *(int *)((int)this + 0xfc)) {
      FUN_00407ab0((int)this);
      ExceptionList = pvStack_c;
      return 0;
    }
    local_10 = 1;
  }
  iVar6 = 0;
  if ((*(int *)((int)this + 0x54) == *(int *)(iVar1 + 0xa8)) && (*(int *)((int)this + 0xec) != 0)) {
    iVar1 = (**(code **)(*(int *)this + 0x88))();
    *(int *)(iVar1 + 0x1b0) = *(int *)(iVar1 + 0x1b0) + -1;
    iVar1 = (**(code **)(*(int *)this + 0x88))();
    FUN_00442660(*(int *)(iVar1 + 0x34),(int *)0x448);
    *(undefined4 *)((int)this + 0xec) = 0;
  }
  iVar1 = *(int *)((int)this + 0xfc) + param_1;
  *(int *)((int)this + 0xfc) = iVar1;
  if (*(int *)(*(int *)((int)this + 0x50) + 0xf8) <= iVar1) {
    if (iVar1 < *(int *)(*(int *)((int)this + 0x50) + 0xfc)) {
      iVar6 = 1;
    }
    else {
      FUN_004137d0((int)this);
      pvVar4 = (void *)FUN_00465cf0(&param_1);
      uStack_4 = 0;
      iVar1 = *(int *)(*(int *)((int)this + 0x70) + 0x34);
      puVar2 = FUN_00466970(pvVar4,&DAT_004bcd7c);
      pvVar4 = DAT_004e2414;
      puVar3 = (uchar *)FUN_00465e00(puVar2);
      FUN_00454c50(pvVar4,puVar3,iVar1);
      uStack_4 = 0xffffffff;
      FUN_00465e40(&param_1);
      iVar6 = 2;
      FUN_00405c90(this,1);
      FUN_00405d00(this,0);
    }
  }
  if (iVar6 == local_10) {
    ExceptionList = pvStack_c;
    return 0;
  }
  pvVar4 = operator_new(0x18);
  uStack_4 = 1;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0045c3e0(pvVar4,8,0,0);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(**(int **)(*(int *)((int)this + 0x60) + 0x1c) + 0xc))(uVar5);
  ExceptionList = pvVar4;
  return 1;
}

