// FUNCTION: PORT1111 0x0045b030
// name: FUN_0045b030
// sig: undefined4 FUN_0045b030(void * this, char * param_1)


undefined4 __thiscall FUN_0045b030(void *this,char *param_1)

{
  void *this_00;
  int iVar1;
  uchar *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9438;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004566e0(*(int *)((int)this + 0xd0));
  FUN_0045acd0((int)this);
  iVar1 = FUN_00457c20(*(int *)(*(int *)((int)this + 0xd0) + 0x10));
  iVar1 = iVar1 + -3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  this_00 = (void *)((int)this + 0x4c);
  FUN_00481930(this_00,0,iVar1);
  uVar3 = 1;
  FUN_00458330(&local_14);
  local_4 = 0;
  iVar1 = (**(code **)(*(int *)((int)this + 0x90c) + 0x2c))();
  FUN_00456670(*(void **)((int)this + 0xd0),iVar1);
  iVar1 = FUN_004585b0(&local_14,param_1,*(void **)((int)this + 0xd0),0);
  if (iVar1 == 0) {
    FUN_004566e0(*(int *)((int)this + 0xd0));
    FUN_0045acd0((int)this);
    iVar1 = FUN_00457c20(*(int *)(*(int *)((int)this + 0xd0) + 0x10));
    iVar1 = iVar1 + -3;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    FUN_00481930(this_00,0,iVar1);
    iVar1 = *(int *)((int)this + 0x24);
    uVar3 = 0;
    uVar5 = 0;
    uVar4 = 0;
    puVar2 = (uchar *)FUN_00465e00(&uStack_10);
    FUN_00448630(iVar1,puVar2,uVar4,uVar5);
  }
  iVar1 = (**(code **)(*(int *)((int)this + 0x90c) + 0x2c))();
  FUN_00456670(*(void **)((int)this + 0xd0),iVar1);
  *(undefined4 *)((int)this + 0xd4) = 1;
  iVar1 = FUN_00457c20(*(int *)(*(int *)((int)this + 0xd0) + 0x10));
  iVar1 = iVar1 + -3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  FUN_00481930(this_00,0,iVar1);
  FUN_0045afa0(this);
  local_4 = 0xffffffff;
  FUN_00458350(&local_14);
  ExceptionList = pvStack_c;
  return uVar3;
}

