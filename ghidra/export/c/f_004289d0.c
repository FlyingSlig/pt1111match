// FUNCTION: PORT1111 0x004289d0
// name: FUN_004289d0
// sig: undefined FUN_004289d0(void * param_1)


void __fastcall FUN_004289d0(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *local_4;
  
  uVar5 = *(ushort *)((int)param_1 + 0x3c) & DAT_004e2050;
  local_4 = param_1;
  if (uVar5 == DAT_004e205c) {
    piVar1 = *(int **)((int)param_1 + 0x1c);
    if ((piVar1 != (int *)0x0) && (iVar6 = piVar1[2], *piVar1 != 0)) {
      uVar5 = 0;
      do {
        FUN_0041ee10(*(int **)(iVar6 + uVar5 * 4));
        uVar5 = uVar5 + 1;
      } while (uVar5 < **(uint **)((int)param_1 + 0x1c));
    }
  }
  else if ((uVar5 == DAT_004e2060) &&
          (piVar1 = *(int **)((int)param_1 + 0x1c), piVar1 != (int *)0x0)) {
    iVar6 = *piVar1;
    iVar7 = 0;
    iVar2 = piVar1[2];
    if (0 < iVar6) {
      do {
        FUN_0041edc0(*(int **)(iVar2 + iVar7 * 4));
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
  }
  *(ushort *)((int)param_1 + 0x3c) = *(ushort *)((int)param_1 + 0x3c) & ~(ushort)DAT_004e2050;
  *(ushort *)((int)param_1 + 0x3c) = *(ushort *)((int)param_1 + 0x3c) | (ushort)DAT_004e2058;
  if (*(int *)((int)param_1 + 0x40) == 0) {
    *(undefined4 *)((int)param_1 + 0x40) = 1;
    pvVar4 = DAT_004e2404;
    iVar6 = *(int *)((int)DAT_004e2404 + 0x60);
    if ((iVar6 == 0) ||
       ((uint)(*(int *)((int)DAT_004e2404 + 0x68) - iVar6 >> 2) <=
        (uint)(*(int *)((int)DAT_004e2404 + 100) - iVar6 >> 2))) {
      local_4 = param_1;
      FUN_0041eeb0((void *)((int)DAT_004e2404 + 0x5c),*(undefined4 **)((int)DAT_004e2404 + 100),1,
                   &local_4);
    }
    else {
      puVar3 = *(undefined4 **)((int)DAT_004e2404 + 100);
      *puVar3 = param_1;
      *(undefined4 **)((int)pvVar4 + 100) = puVar3 + 1;
      local_4 = param_1;
    }
  }
  iVar6 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e) - 1,
                       (int)*(short *)((int)param_1 + 0x4c) - 1);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x40) == 0)) {
    *(undefined4 *)(iVar6 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar6);
  }
  iVar6 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e),
                       (int)*(short *)((int)param_1 + 0x4c) - 1);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x40) == 0)) {
    *(undefined4 *)(iVar6 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar6);
  }
  iVar6 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e) + 1,
                       (int)*(short *)((int)param_1 + 0x4c) - 1);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x40) == 0)) {
    *(undefined4 *)(iVar6 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar6);
  }
  iVar6 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e) + 1,
                       (int)*(short *)((int)param_1 + 0x4c));
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x40) == 0)) {
    *(undefined4 *)(iVar6 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar6);
  }
  iVar6 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e) + 1,
                       (int)*(short *)((int)param_1 + 0x4c) + 1);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x40) == 0)) {
    *(undefined4 *)(iVar6 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar6);
  }
  iVar6 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e),
                       (int)*(short *)((int)param_1 + 0x4c) + 1);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x40) == 0)) {
    *(undefined4 *)(iVar6 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar6);
  }
  iVar6 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e) - 1,
                       (int)*(short *)((int)param_1 + 0x4c) + 1);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x40) == 0)) {
    *(undefined4 *)(iVar6 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar6);
  }
  iVar6 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e) - 1,
                       (int)*(short *)((int)param_1 + 0x4c));
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x40) == 0)) {
    *(undefined4 *)(iVar6 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar6);
  }
  FUN_00421240((void *)((int)DAT_004e2404 + 0x94),param_1);
  return;
}

