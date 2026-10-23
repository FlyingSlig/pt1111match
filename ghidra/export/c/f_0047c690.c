// FUNCTION: PORT1111 0x0047c690
// name: FUN_0047c690
// sig: undefined4 FUN_0047c690(void * this, int param_1)


undefined4 __thiscall FUN_0047c690(void *this,int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined3 extraout_var;
  char *pcVar6;
  uchar *puVar7;
  undefined4 uVar8;
  void *pvVar9;
  void *pvVar10;
  undefined4 *puStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba40e;
  puStack_c = ExceptionList;
  ExceptionList = &puStack_c;
  *(int *)((int)this + 0x2c) = param_1;
  if (param_1 == 0) {
    piVar5 = *(int **)((int)DAT_004e2b14 + 0x5c);
    *(int **)((int)this + 0x24) = piVar5;
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)DAT_004e2b14 + 0xf8);
    iVar4 = *piVar5;
    uVar8 = (**(code **)(**(int **)((int)this + 0x34) + 0x4c))();
    pvVar10 = (void *)0x47c84f;
    iVar4 = (**(code **)(iVar4 + 0x5c))(uVar8);
    if (iVar4 != 0) {
      ExceptionList = pvVar10;
      return 1;
    }
  }
  else {
    puVar2 = operator_new(0x838);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00488c50(puVar2);
    }
    *(undefined4 **)((int)this + 0x24) = puVar2;
    uVar8 = *(undefined4 *)((int)DAT_004e2b14 + 0x28);
    local_4 = 0xffffffff;
    uVar3 = (**(code **)(**(int **)((int)this + 0x34) + 0x4c))();
    pvVar10 = *(void **)((int)this + 0x98);
    iVar4 = (**(code **)(**(int **)((int)this + 0x24) + 4))
                      (uVar3,uVar8,*(undefined4 *)((int)this + 0x94),pvVar10,0);
    if (iVar4 == 0) {
      if (*(int *)((int)this + 0x2c) != 0) {
        if (*(int **)((int)this + 0x28) != (int *)0x0) {
          (**(code **)(**(int **)((int)this + 0x28) + 0x10))(1);
        }
        if (*(undefined4 **)((int)this + 0x24) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)((int)this + 0x24))(1);
        }
      }
      *(undefined4 *)((int)this + 0x28) = 0;
      *(undefined4 *)((int)this + 0x24) = 0;
      ExceptionList = pvVar10;
      return 0;
    }
    puVar2 = operator_new(0x3c);
    if (puVar2 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_004745a0(puVar2);
    }
    *(int **)((int)this + 0x28) = piVar5;
    iVar4 = FUN_00476f40(piVar5);
    puVar2 = puStack_c;
    if (iVar4 != 0) {
      *(undefined4 *)(*(int *)((int)this + 0x28) + 0x1c) = *(undefined4 *)((int)this + 0x24);
      bVar1 = FUN_00466ab0(puStack_c,"");
      pvVar9 = DAT_004e2b14;
      if (CONCAT31(extraout_var,bVar1) == 0) {
        ExceptionList = pvVar10;
        return 1;
      }
      pcVar6 = (char *)FUN_00465e00(puVar2);
      puVar2 = FUN_004680b0(pvVar9,(undefined4 *)&stack0xfffffff0,pcVar6);
      pvVar9 = (void *)0x0;
      puVar7 = (uchar *)FUN_00465e00(puVar2);
      iVar4 = FUN_004771d0(*(void **)((int)this + 0x28),puVar7,pvVar9);
      FUN_00465e40((undefined4 *)&stack0xfffffff0);
      if (iVar4 != 0) {
        ExceptionList = pvVar10;
        return 1;
      }
    }
    FUN_0047c380((int)this);
  }
  ExceptionList = pvVar10;
  return 0;
}

