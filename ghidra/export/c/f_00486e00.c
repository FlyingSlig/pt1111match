// FUNCTION: PORT1111 0x00486e00
// name: FUN_00486e00
// sig: int FUN_00486e00(void * this, int * param_1, int param_2)


int __thiscall FUN_00486e00(void *this,int *param_1,int param_2)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  void *pvVar7;
  uint *puVar8;
  void *local_20;
  uint *local_1c;
  void *local_18;
  undefined **local_14;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004ba8a8;
  pvStack_c = ExceptionList;
  piVar1 = (int *)((int)this + 0x58);
  local_1c = (uint *)0x0;
  local_20 = (void *)0x0;
  local_18 = (void *)0x0;
  local_14 = &PTR_FUN_004c376c;
  ExceptionList = &pvStack_c;
  local_10 = piVar1;
  (**(code **)(*piVar1 + 4))();
  uStack_4 = 0;
  if (param_1 == (int *)0x0) {
    uStack_4 = 0xffffffff;
    (**(code **)(*piVar1 + 8))();
    ExceptionList = pvStack_c;
    return -0x7ffbfe10;
  }
  iVar4 = FUN_00486730(param_1,(undefined4 *)0x0);
  if (iVar4 < 0) {
LAB_00486eb5:
    uStack_4 = 0xffffffff;
    (**(code **)(*piVar1 + 8))();
    ExceptionList = pvStack_c;
    return iVar4;
  }
  iVar4 = (**(code **)(*param_1 + 0x2c))
                    (param_1,0,*(undefined4 *)((int)this + 0x10),&local_1c,&local_20,0,0,0);
  if (iVar4 < 0) {
    OutputDebugStringA("------------------------\n");
    goto LAB_00486eb5;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x10))();
  iVar4 = (**(code **)(**(int **)((int)this + 0x14) + 0x14))(local_1c,local_20,&local_18);
  if (iVar4 < 0) goto LAB_00486eb5;
  if (local_18 == (void *)0x0) {
    cVar6 = (*(short *)(*(int *)(*(int *)((int)this + 0x14) + 8) + 0xe) != 8) + -1;
    uVar2 = CONCAT11(cVar6,cVar6);
    uVar3 = CONCAT22(uVar2,uVar2);
    pvVar7 = local_20;
    puVar8 = local_1c;
  }
  else {
    if (local_20 <= local_18) goto LAB_00487036;
    pvVar7 = local_18;
    if (param_2 != 0) {
      do {
        iVar4 = (**(code **)(**(int **)((int)this + 0x14) + 0x10))();
        if (iVar4 < 0) {
          uStack_4 = 0xffffffff;
          (**(code **)(*piVar1 + 8))();
          ExceptionList = pvStack_c;
          return iVar4;
        }
        iVar4 = (**(code **)(**(int **)((int)this + 0x14) + 0x14))
                          ((undefined1 *)((int)local_1c + (int)pvVar7),(int)local_20 - (int)pvVar7,
                           &local_18);
        if (iVar4 < 0) {
          uStack_4 = 0xffffffff;
          (**(code **)(*piVar1 + 8))();
          ExceptionList = pvStack_c;
          return iVar4;
        }
        pvVar7 = (void *)((int)pvVar7 + (int)local_18);
      } while (pvVar7 < local_20);
      goto LAB_00487036;
    }
    pvVar7 = (void *)((int)local_20 - (int)local_18);
    cVar6 = (*(short *)(*(int *)(*(int *)((int)this + 0x14) + 8) + 0xe) != 8) + -1;
    puVar8 = (uint *)((int)local_18 + (int)local_1c);
    uVar2 = CONCAT11(cVar6,cVar6);
    uVar3 = CONCAT22(uVar2,uVar2);
  }
  for (uVar5 = (uint)pvVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = uVar3 & 0x80808080;
    puVar8 = puVar8 + 1;
  }
  for (uVar5 = (uint)pvVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar8 = (char)(uVar3 & 0x80808080);
    puVar8 = (uint *)((int)puVar8 + 1);
  }
LAB_00487036:
  (**(code **)(*param_1 + 0x4c))(param_1,local_1c,local_20,0,0);
  local_18 = (void *)0xffffffff;
  (**(code **)(*piVar1 + 8))();
  ExceptionList = local_20;
  return 0;
}

