// FUNCTION: PORT1111 0x00424e10
// name: FUN_00424e10
// sig: undefined4 FUN_00424e10(void * this)


undefined4 __thiscall FUN_00424e10(void *this)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  void *this_00;
  byte *pbVar10;
  byte *unaff_EDI;
  int in_stack_00000014;
  int iVar11;
  int iVar12;
  int iStack_1c;
  
  this_00 = (void *)(in_stack_00000014 * 0x30 + *(int *)((int)this + 8));
  FUN_0047e3d0(this_00,8,0x40,0x20,1);
  piVar1 = *(int **)((int)this_00 + 4);
  puVar3 = (undefined4 *)(**(code **)(**(int **)(DAT_004e0b20 + 4) + 0x18))();
  puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x18))();
  for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_0046da80(*(int **)((int)this_00 + 4));
  FUN_0046c280(*(void **)((int)this_00 + 4),0,(int *)0x0);
  iStack_1c = 0;
  do {
    if (*(int *)(&stack0x00000004 + iStack_1c * 4) < 0) {
      return 0;
    }
    piVar1 = *(int **)(*(int *)(&stack0x00000004 + iStack_1c * 4) * 0x30 + 4 +
                      *(int *)((int)this + 8));
    uVar5 = (**(code **)(*piVar1 + 0x30))();
    iVar11 = 0;
    pbVar6 = (byte *)(**(code **)(*piVar1 + 0x2c))(uVar5,0);
    iVar8 = (**(code **)(*piVar1 + 0x24))();
    if (iVar8 == 0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    else {
      (**(code **)(*piVar1 + 0x14))();
    }
    piVar2 = *(int **)((int)this_00 + 4);
    uVar5 = (**(code **)(*piVar2 + 0x30))();
    pbVar7 = (byte *)(**(code **)(*piVar2 + 0x2c))(uVar5,0,0);
    iVar8 = (**(code **)(*piVar2 + 0x24))();
    if (iVar8 == 0) {
      iVar8 = (**(code **)(*piVar2 + 0x14))();
      iVar8 = -iVar8;
    }
    else {
      iVar8 = (**(code **)(*piVar2 + 0x14))();
    }
    iVar12 = 0x20;
    do {
      iVar9 = 0x10;
      pbVar10 = pbVar7;
      do {
        if (*pbVar10 < *pbVar6) {
          *pbVar10 = *pbVar6;
        }
        if (pbVar10[1] < pbVar6[1]) {
          pbVar10[1] = pbVar6[1];
        }
        if (pbVar10[2] < pbVar6[2]) {
          pbVar10[2] = pbVar6[2];
        }
        if (pbVar10[3] < pbVar6[3]) {
          pbVar10[3] = pbVar6[3];
        }
        pbVar6 = pbVar6 + 4;
        pbVar10 = pbVar10 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      pbVar6 = unaff_EDI + iVar11;
      pbVar7 = pbVar7 + iVar8;
      iVar12 = iVar12 + -1;
      unaff_EDI = pbVar6;
    } while (iVar12 != 0);
    (**(code **)(*piVar1 + 0x34))();
    (**(code **)(*piVar2 + 0x34))();
    iStack_1c = iStack_1c + 1;
  } while (iStack_1c < 4);
  return 0;
}

