// FUNCTION: PORT1111 0x00432ac0
// name: FUN_00432ac0
// sig: undefined4 FUN_00432ac0(void)


undefined4 FUN_00432ac0(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b7701;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00414c30(DAT_004e240c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x7c) == 0)) {
    iVar5 = iVar1;
    (**(code **)(**(int **)(*(int *)(iVar1 + 0x60) + 0x1c) + 0x10))(iVar1,1);
    pvVar2 = operator_new(0x18);
    local_c = (void *)0x0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0045c3e0(pvVar2,5,0,0);
    }
    local_c = (void *)0xffffffff;
    (**(code **)(**(int **)(*(int *)(iVar1 + 0x60) + 0x1c) + 0xc))(uVar3,iVar5,pvVar2);
    pvVar2 = operator_new(0x18);
    if (pvVar2 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0045c3e0(pvVar2,0x12,0,0);
    }
    (**(code **)(**(int **)(*(int *)(iVar1 + 0x60) + 0x1c) + 0xc))(uVar4,uVar3,pvVar2);
    pvVar2 = operator_new(0x18);
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0045c3e0(pvVar2,0xf,0,0);
    }
    (**(code **)(**(int **)(*(int *)(iVar1 + 0x60) + 0x1c) + 0xc))(uVar3);
    ExceptionList = pvVar2;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}

