// FUNCTION: PORT1111 0x0047ac30
// name: FUN_0047ac30
// sig: undefined4 FUN_0047ac30(void * this, int param_1)


undefined4 __thiscall FUN_0047ac30(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  undefined2 uVar5;
  int *piVar6;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba34b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047a320((int)this);
  pvVar3 = operator_new(0x10);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    *(undefined4 *)((int)pvVar3 + 4) = 0;
    *(undefined4 *)((int)pvVar3 + 8) = 0;
    *(undefined4 *)((int)pvVar3 + 0xc) = 0;
  }
  *(void **)((int)this + 0x14) = pvVar3;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(param_1 + 0x30);
  *(undefined2 *)((int)this + 0x32) = *(undefined2 *)(param_1 + 0x32);
  *(undefined2 *)((int)this + 0x34) = *(undefined2 *)(param_1 + 0x34);
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  local_4 = 0xffffffff;
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(*(int *)(param_1 + 0x14) + 8) - iVar1 >> 2;
  }
  FUN_004790c0(pvVar3,uVar4);
  piVar6 = *(int **)(*(int *)(param_1 + 0x14) + 4);
  if (piVar6 != *(int **)(*(int *)(param_1 + 0x14) + 8)) {
    do {
      local_10 = FUN_0047bd00(*piVar6);
      if ((local_10 == 0) || ((*(byte *)((int)this + 0x2c) & 2) != 0)) {
        ExceptionList = local_c;
        return 0;
      }
      iVar1 = *(int *)(*(int *)((int)this + 0x14) + 4);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (undefined2)(*(int *)(*(int *)((int)this + 0x14) + 8) - iVar1 >> 2);
      }
      *(undefined2 *)(local_10 + 4) = uVar5;
      pvVar3 = *(void **)((int)this + 0x14);
      iVar1 = *(int *)((int)pvVar3 + 4);
      if ((iVar1 == 0) ||
         ((uint)(*(int *)((int)pvVar3 + 0xc) - iVar1 >> 2) <=
          (uint)(*(int *)((int)pvVar3 + 8) - iVar1 >> 2))) {
        FUN_00478ee0(pvVar3,*(undefined4 **)((int)pvVar3 + 8),1,&local_10);
      }
      else {
        piVar2 = *(int **)((int)pvVar3 + 8);
        *piVar2 = local_10;
        *(int **)((int)pvVar3 + 8) = piVar2 + 1;
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(*(int *)(param_1 + 0x14) + 8));
  }
  ExceptionList = local_c;
  return 1;
}

