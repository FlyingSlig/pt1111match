// FUNCTION: PORT1111 0x00428c60
// name: FUN_00428c60
// sig: undefined FUN_00428c60(void * param_1)


void __fastcall FUN_00428c60(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  void *local_4;
  
  piVar1 = *(int **)((int)param_1 + 0x1c);
  local_4 = param_1;
  if (piVar1 != (int *)0x0) {
    iVar4 = piVar1[2];
    uVar5 = 0;
    if (*piVar1 != 0) {
      do {
        FUN_0041ed90(*(int **)(iVar4 + uVar5 * 4));
        uVar5 = uVar5 + 1;
      } while (uVar5 < **(uint **)((int)param_1 + 0x1c));
    }
  }
  *(ushort *)((int)param_1 + 0x3c) = *(ushort *)((int)param_1 + 0x3c) & ~(ushort)DAT_004e2050;
  *(ushort *)((int)param_1 + 0x3c) = *(ushort *)((int)param_1 + 0x3c) | (ushort)DAT_004e205c;
  if (*(int *)((int)param_1 + 0x40) == 0) {
    *(undefined4 *)((int)param_1 + 0x40) = 1;
    pvVar3 = DAT_004e2404;
    iVar4 = *(int *)((int)DAT_004e2404 + 0x60);
    if ((iVar4 == 0) ||
       ((uint)(*(int *)((int)DAT_004e2404 + 0x68) - iVar4 >> 2) <=
        (uint)(*(int *)((int)DAT_004e2404 + 100) - iVar4 >> 2))) {
      local_4 = param_1;
      FUN_0041eeb0((void *)((int)DAT_004e2404 + 0x5c),*(undefined4 **)((int)DAT_004e2404 + 100),1,
                   &local_4);
    }
    else {
      puVar2 = *(undefined4 **)((int)DAT_004e2404 + 100);
      *puVar2 = param_1;
      *(undefined4 **)((int)pvVar3 + 100) = puVar2 + 1;
      local_4 = param_1;
    }
  }
  iVar4 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e) - 1,
                       (int)*(short *)((int)param_1 + 0x4c) - 1);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x40) == 0)) {
    *(undefined4 *)(iVar4 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar4);
  }
  iVar4 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e),
                       (int)*(short *)((int)param_1 + 0x4c) - 1);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x40) == 0)) {
    *(undefined4 *)(iVar4 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar4);
  }
  iVar4 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e) + 1,
                       (int)*(short *)((int)param_1 + 0x4c) - 1);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x40) == 0)) {
    *(undefined4 *)(iVar4 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar4);
  }
  iVar4 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e) + 1,
                       (int)*(short *)((int)param_1 + 0x4c));
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x40) == 0)) {
    *(undefined4 *)(iVar4 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar4);
  }
  iVar4 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e) + 1,
                       (int)*(short *)((int)param_1 + 0x4c) + 1);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x40) == 0)) {
    *(undefined4 *)(iVar4 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar4);
  }
  iVar4 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e),
                       (int)*(short *)((int)param_1 + 0x4c) + 1);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x40) == 0)) {
    *(undefined4 *)(iVar4 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar4);
  }
  iVar4 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e) - 1,
                       (int)*(short *)((int)param_1 + 0x4c) + 1);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x40) == 0)) {
    *(undefined4 *)(iVar4 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar4);
  }
  iVar4 = FUN_00429ac0(DAT_004e2404,(int)*(short *)((int)param_1 + 0x4e) - 1,
                       (int)*(short *)((int)param_1 + 0x4c));
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x40) == 0)) {
    *(undefined4 *)(iVar4 + 0x40) = 1;
    FUN_00428780(DAT_004e2404,iVar4);
  }
  FUN_00421240((void *)((int)DAT_004e2404 + 0x94),param_1);
  return;
}

