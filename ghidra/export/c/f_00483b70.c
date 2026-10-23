// FUNCTION: PORT1111 0x00483b70
// name: FUN_00483b70
// sig: undefined4 FUN_00483b70(void * this, int param_1, undefined4 param_2, int param_3, int param_4, undefined4 param_5, undefined4 param_6, undefined2 param_7, int param_8, int param_9, undefined4 param_10, uint param_11, undefined4 param_12, undefined4 param_13)


undefined4 __thiscall
FUN_00483b70(void *this,int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined2 param_7,int param_8,int param_9,undefined4 param_10,
            uint param_11,undefined4 param_12,undefined4 param_13)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004ba736;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x28c) = param_2;
  FUN_00483ad0((int)this);
  *(undefined4 *)((int)this + 0x2a0) = param_12;
  *(int *)((int)this + 0x20) = param_3;
  if (0x96 < param_3) {
    *(undefined4 *)((int)this + 0x20) = 0x96;
  }
  iVar5 = 0;
  *(undefined2 *)((int)this + 0x28) = param_7;
  if (0 < *(int *)((int)this + 0x20)) {
    piVar4 = (int *)((int)this + 0x30);
    do {
      iVar1 = FUN_0047cf90(*(void **)((int)this + 0x28c),*(uint *)(param_4 + iVar5 * 4));
      *piVar4 = iVar1;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc4) != 0)) {
        *(undefined4 *)(*(int *)(iVar1 + 0xc4) + 0x98) = param_13;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < *(int *)((int)this + 0x20));
  }
  pvVar2 = operator_new(0xc);
  iVar5 = 0;
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    iVar1 = FUN_00482680();
    *(int *)((int)pvVar2 + 4) = iVar1;
    *(undefined1 *)(iVar1 + 0x11) = 1;
    *(int *)(*(int *)((int)pvVar2 + 4) + 4) = *(int *)((int)pvVar2 + 4);
    *(undefined4 *)*(undefined4 *)((int)pvVar2 + 4) = *(undefined4 *)((int)pvVar2 + 4);
    *(int *)(*(int *)((int)pvVar2 + 4) + 8) = *(int *)((int)pvVar2 + 4);
    *(undefined4 *)((int)pvVar2 + 8) = 0;
  }
  local_8 = 0xffffffff;
  *(void **)((int)this + 0x2ac) = pvVar2;
  if (param_8 == 0) {
    puVar3 = operator_new(0x84);
    local_8 = 1;
    if (puVar3 == (undefined4 *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_00480f70(puVar3);
    }
    local_8 = 0xffffffff;
    *(void **)((int)this + 0x2a8) = pvVar2;
    iVar1 = FUN_00481aa0(pvVar2,*(void **)((int)this + 0x28c),this,param_5,param_6,param_10,param_11
                         ,param_9);
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return 0;
    }
  }
  else {
    *(int *)((int)this + 0x2a8) = param_8;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar1 = FUN_0047cf90(*(void **)((int)this + 0x28c),(uint)*(ushort *)((int)this + 0x28));
  *(int *)((int)this + 0x2c) = iVar1;
  iVar1 = 0;
  if (1 < *(int *)((int)this + 0x20)) {
    (**(code **)(**(int **)((int)this + 0x30) + 0x30))(&local_24);
    *(int *)((int)this + 0x18) = local_18 - local_20;
    *(int *)((int)this + 0x1c) = local_1c - local_24;
    (**(code **)(**(int **)((int)this + 0x34) + 0x30))(&local_34);
    iVar1 = local_30 - local_18;
    iVar5 = local_34 - local_1c;
    *(int *)((int)this + 0x14) = iVar1;
    *(int *)((int)this + 0x10) = iVar5;
  }
  local_8 = 2;
  if (param_1 != 0) {
    if (param_9 == 0) {
      for (iVar1 = 1; iVar1 < *(int *)((int)this + 0x20); iVar1 = iVar1 + 1) {
        (**(code **)(**(int **)((int)this + iVar1 * 4 + 0x30) + 0x3c))
                  (local_1c + iVar5,local_20,(local_1c * 2 - local_24) + iVar5,local_18);
        (**(code **)(**(int **)((int)this + iVar1 * 4 + 0x30) + 0x30))(&local_24);
      }
    }
    else {
      for (iVar5 = 1; iVar5 < *(int *)((int)this + 0x20); iVar5 = iVar5 + 1) {
        (**(code **)(**(int **)((int)this + iVar5 * 4 + 0x30) + 0x3c))
                  (local_24,local_18 + iVar1,local_1c,(local_18 * 2 - local_20) + iVar1);
        (**(code **)(**(int **)((int)this + iVar5 * 4 + 0x30) + 0x30))(&local_24);
      }
    }
  }
  for (iVar5 = 0; iVar5 < *(int *)((int)this + 0x20); iVar5 = iVar5 + 1) {
    if ((*(byte *)((int)this + 0x2a0) & 2) == 0) {
      *(undefined4 *)(*(int *)((int)this + iVar5 * 4 + 0x30) + 0x94) = 0;
    }
    piVar4 = *(int **)((int)this + iVar5 * 4 + 0x30);
    if (piVar4 != (int *)0x0) {
      if ((void *)piVar4[0x31] != (void *)0x0) {
        FUN_004737d0((void *)piVar4[0x31],(uchar *)0x0);
      }
      FUN_00472ef0(piVar4);
    }
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)((int)this + 0x30) + 0x30))(&local_24);
  (**(code **)(**(int **)((int)this + *(int *)((int)this + 0x20) * 4 + 0x2c) + 0x30))(&local_34);
  *(int *)((int)this + 0x290) = local_24;
  *(int *)((int)this + 0x294) = local_20;
  *(undefined4 *)((int)this + 0x298) = local_2c;
  *(undefined4 *)((int)this + 0x29c) = local_28;
  if (*(int *)((int)this + 0x2c) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x2c) + 0x94) = 0;
    FUN_00472ef0(*(int **)((int)this + 0x2c));
  }
  ExceptionList = local_10;
  return 1;
}

