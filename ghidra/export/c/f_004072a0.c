// FUNCTION: PORT1111 0x004072a0
// name: FUN_004072a0
// sig: undefined FUN_004072a0(void * this, int param_1)


void __thiscall FUN_004072a0(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b5a36;
  pvStack_c = ExceptionList;
  iVar3 = *(int *)(*(int *)((int)this + 0x34) + 0x50);
  iVar3 = *(int *)(iVar3 + 0x14) * 0x10000 + *(int *)(*(int *)(iVar3 + 0x224) + param_1 * 4);
  ExceptionList = &pvStack_c;
  if ((*(int *)((int)this + 0x48) != 0) &&
     (ExceptionList = &pvStack_c, *(int *)(*(int *)((int)this + 0x48) + 0x28) != iVar3)) {
    ExceptionList = &pvStack_c;
    if (*(int *)((int)this + 0x44) != 0) {
      ExceptionList = &pvStack_c;
      *(undefined4 *)(*(int *)((int)this + 0x44) + 0x48) = 0;
    }
    (**(code **)(**(int **)((int)this + 0x48) + 0x2c))();
    FUN_00489080();
    if (*(undefined4 **)((int)this + 0x48) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x48))(1);
      *(undefined4 *)((int)this + 0x48) = 0;
    }
  }
  iVar4 = *(int *)(*(int *)((int)this + 0x34) + 0x50);
  piVar1 = *(int **)((int)this + 0x44);
  iVar4 = *(int *)(iVar4 + 0x14) * 0x10000 + *(int *)(*(int *)(iVar4 + 0x228) + param_1 * 4);
  if ((piVar1 != (int *)0x0) && (piVar1[10] != iVar4)) {
    (**(code **)(*piVar1 + 0x2c))();
    FUN_00489080();
    if (*(undefined4 **)((int)this + 0x44) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x44))(1);
      *(undefined4 *)((int)this + 0x44) = 0;
    }
  }
  if ((*(int *)((int)this + 0x44) == 0) &&
     (-1 < *(int *)(*(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x50) + 0x228) + param_1 * 4))) {
    puVar2 = operator_new(0x4c);
    uStack_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0041b810(puVar2);
    }
    uStack_4 = 0xffffffff;
    *(undefined4 **)((int)this + 0x44) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0041b410(puVar2,iVar4,*(undefined4 *)(*(int *)((int)this + 0x34) + 4),
                   *(undefined4 *)(*(int *)((int)this + 0x34) + 8),1);
      if (*(int *)((int)this + 0x34) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 0x34) + 0x14;
      }
      *(int *)(*(int *)((int)this + 0x44) + 0x44) = iVar4;
      (**(code **)(**(int **)((int)this + 0x44) + 0x28))();
    }
  }
  if ((*(int *)((int)this + 0x48) == 0) &&
     (-1 < *(int *)(*(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x50) + 0x224) + param_1 * 4))) {
    puVar2 = operator_new(0x4c);
    uStack_4 = 1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0041b810(puVar2);
    }
    *(undefined4 **)((int)this + 0x48) = puVar2;
    uStack_4 = 0xffffffff;
    FUN_0041b410(puVar2,iVar3,*(undefined4 *)(*(int *)((int)this + 0x34) + 4),
                 *(undefined4 *)(*(int *)((int)this + 0x34) + 8),2);
    if (*(int *)((int)this + 0x34) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)this + 0x34) + 0x14;
    }
    *(int *)(*(int *)((int)this + 0x48) + 0x44) = iVar3;
    if (*(int *)((int)this + 0x44) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0x44) + 0x48) = *(undefined4 *)((int)this + 0x48);
    }
    (**(code **)(**(int **)((int)this + 0x48) + 0x28))();
  }
  if (*(int *)((int)this + 0x34) != 0) {
    (**(code **)(*(int *)(*(int *)((int)this + 0x34) + 0x14) + 0xc))();
  }
  ExceptionList = pvStack_c;
  return;
}

