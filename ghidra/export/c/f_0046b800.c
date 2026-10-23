// FUNCTION: PORT1111 0x0046b800
// name: FUN_0046b800
// sig: int * FUN_0046b800(void * this, int param_1, uint param_2)


int * __thiscall FUN_0046b800(void *this,int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  void *pvStack_3c;
  int iStack_38;
  int *piStack_28;
  int iStack_24;
  
  piVar2 = FUN_0046abb0(*(int *)((int)this + 4),*(undefined4 *)((int)this + 0x20));
  iVar3 = (**(code **)(*piVar2 + 0x54))(0x18,param_1);
  if (iVar3 != 0) {
    uVar16 = 0;
    iVar3 = (**(code **)(*(int *)this + 4))();
    iVar10 = (iVar3 * 0x10000 + -0x10000) % param_1;
    (**(code **)(*(int *)this + 8))();
    iVar3 = (**(code **)(*(int *)this + 0x30))();
    uVar4 = (**(code **)(*piVar2 + 0x30))();
    puVar5 = (undefined1 *)(**(code **)(*piVar2 + 0x2c))(uVar4,0,0);
    iVar6 = (**(code **)(*piVar2 + 0x24))();
    if (iVar6 == 0) {
      iVar6 = (**(code **)(*piVar2 + 0x14))();
      iVar6 = -iVar6;
    }
    else {
      iVar6 = (**(code **)(*piVar2 + 0x14))();
    }
    iVar8 = iVar3;
    piVar14 = this;
    pvStack_3c = this;
    if (0 < (int)this) {
      do {
        iVar15 = (int)uVar16 >> 0x10;
        piVar2 = (int *)(**(code **)(*piVar14 + 0x2c))(iVar8,0,iVar15);
        iVar7 = (**(code **)(*piVar14 + 8))();
        if (iVar15 < iVar7 + -1) {
          iVar15 = iVar15 + 1;
        }
        iVar7 = (**(code **)(*piVar14 + 0x2c))(iVar8,0,iVar15);
        iVar15 = (uVar16 & 0xffff) + 1;
        iVar17 = (~uVar16 & 0xffff) + 1;
        uVar16 = 0;
        puVar13 = puVar5;
        iVar8 = iVar10;
        if (0 < iVar10) {
          do {
            uVar9 = (uVar16 & 0xffff) * iVar15 >> 0x10;
            iVar1 = ((int)uVar16 >> 0x10) * 3;
            iVar12 = iVar15 - uVar9;
            uVar11 = (uVar16 & 0xffff) * iVar17 >> 0x10;
            iVar18 = iVar17 - uVar11;
            *puVar13 = (char)(*(byte *)(iVar1 + 3 + (int)this) * uVar11 +
                              *(byte *)(iVar1 + 3 + iVar7) * uVar9 +
                              (uint)*(byte *)(iVar1 + iVar7) * iVar12 +
                              (uint)*(byte *)(iVar1 + (int)this) * iVar18 >> 0x10);
            puVar13[1] = (char)((uint)*(byte *)(iVar1 + 1 + (int)this) * iVar18 +
                                *(byte *)(iVar1 + 4 + (int)this) * uVar11 +
                                (uint)*(byte *)(iVar1 + 1 + iVar7) * iVar12 +
                                *(byte *)(iVar1 + 4 + iVar7) * uVar9 >> 0x10);
            puVar13[2] = (char)((uint)*(byte *)(iVar1 + 2 + (int)this) * iVar18 +
                                *(byte *)(iVar1 + 5 + (int)this) * uVar11 +
                                (uint)*(byte *)(iVar1 + 2 + iVar7) * iVar12 +
                                *(byte *)(iVar1 + 5 + iVar7) * uVar9 >> 0x10);
            uVar16 = uVar16 + iVar3;
            puVar13 = puVar13 + 3;
            iVar8 = iVar8 + -1;
            piVar14 = piStack_28;
          } while (iVar8 != 0);
        }
        uVar16 = param_2 + iStack_24;
        puVar5 = puVar5 + iVar6;
        pvStack_3c = (void *)((int)pvStack_3c + -1);
        iVar8 = iStack_38;
        param_2 = uVar16;
      } while (pvStack_3c != (void *)0x0);
    }
    (**(code **)(*piVar14 + 0x34))();
    (**(code **)(*piVar2 + 0x34))();
    return piVar2;
  }
  return (int *)0x0;
}

