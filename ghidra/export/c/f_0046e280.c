// FUNCTION: PORT1111 0x0046e280
// name: FUN_0046e280
// sig: int * FUN_0046e280(void * this, undefined4 param_1, uint param_2)


int * __thiscall FUN_0046e280(void *this,undefined4 param_1,uint param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int unaff_ESI;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int *piStack_28;
  int iStack_24;
  int *piStack_1c;
  undefined1 *local_10;
  int iStack_8;
  
  piVar2 = FUN_0046abb0(*(int *)((int)this + 4),*(undefined4 *)((int)this + 0x20));
  iVar3 = (**(code **)(*piVar2 + 0x54))(8,param_1);
  if (iVar3 == 0) {
    return (int *)0x0;
  }
  puVar4 = (undefined4 *)(**(code **)(*(int *)this + 0x18))();
  puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x18))();
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar13 = 0;
  iVar3 = (**(code **)(*(int *)this + 4))();
  iVar9 = (iVar3 * 0x10000 + -0x10000) % iStack_8;
  (**(code **)(*(int *)this + 8))();
  iVar3 = (**(code **)(*(int *)this + 0x30))();
  uVar6 = (**(code **)(*piVar2 + 0x30))();
  uVar17 = 0;
  local_10 = (undefined1 *)(**(code **)(*piVar2 + 0x2c))(uVar6,0,0);
  iVar7 = (**(code **)(*piVar2 + 0x24))();
  if (iVar7 == 0) {
    iVar7 = (**(code **)(*piVar2 + 0x14))();
    iVar7 = -iVar7;
  }
  else {
    iVar7 = (**(code **)(*piVar2 + 0x14))();
  }
  piVar12 = piVar2;
  if (0 < (int)piVar2) {
    do {
      puVar1 = local_10;
      iVar15 = (int)uVar13 >> 0x10;
      uVar17 = (**(code **)(*(int *)this + 0x2c))(0,0,iVar15);
      iVar8 = (**(code **)(*(int *)this + 8))();
      if (iVar15 < iVar8 + -1) {
        iVar15 = iVar15 + 1;
      }
      iVar15 = (**(code **)(*(int *)this + 0x2c))(0,0,iVar15);
      iVar11 = (uVar13 & 0xffff) + 1;
      iVar16 = (~uVar13 & 0xffff) + 1;
      uVar18 = 0;
      iVar8 = iVar9;
      if (0 < iVar9) {
        do {
          uVar13 = (uVar18 & 0xffff) * iVar11 >> 0x10;
          iVar10 = (int)uVar18 >> 0x10;
          uVar14 = (uVar18 & 0xffff) * iVar16 >> 0x10;
          *local_10 = (char)((uint)*(byte *)(iVar10 + iVar15) * (iVar11 - uVar13) +
                             (uint)*(byte *)(iVar10 + unaff_ESI) * (iVar16 - uVar14) +
                             *(byte *)(unaff_ESI + 1 + iVar10) * uVar14 +
                             *(byte *)(iVar15 + 1 + iVar10) * uVar13 >> 0x10);
          uVar18 = uVar18 + iVar3;
          local_10 = local_10 + 1;
          iVar8 = iVar8 + -1;
          this = piStack_28;
          uVar13 = param_2;
        } while (iVar8 != 0);
      }
      uVar13 = uVar13 + iStack_24;
      local_10 = puVar1 + iVar7;
      piVar2 = (int *)((int)piVar2 + -1);
      piVar12 = piStack_1c;
      param_2 = uVar13;
    } while (piVar2 != (int *)0x0);
  }
  (**(code **)(*(int *)this + 0x34))(uVar6,uVar17);
  (**(code **)(*piVar12 + 0x34))();
  if (DAT_004dd964 != 0xf) {
    FUN_0046d4d0(piVar12);
    return piVar12;
  }
  FUN_0046d440(piVar12);
  return piVar12;
}

