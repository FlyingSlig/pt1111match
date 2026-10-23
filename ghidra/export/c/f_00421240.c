// FUNCTION: PORT1111 0x00421240
// name: FUN_00421240
// sig: undefined FUN_00421240(void * this, void * param_1)


void __thiscall FUN_00421240(void *this,void *param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  void *this_00;
  void *this_01;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iStack_20;
  int iStack_18;
  uint uStack_8;
  int iStack_4;
  
  uVar5 = (**(code **)(**(int **)(*(int *)((int)this + 4) + 4) + 0x30))();
  iVar10 = *(int *)((int)this + 100);
  if (iVar10 < 2) {
    bVar4 = (byte)*(undefined2 *)((int)this + 0x48);
    uVar8 = ((int)*(short *)((int)param_1 + 4) >> (bVar4 & 0x1f)) + *(int *)((int)this + 0x4c);
    uVar3 = *(uint *)((int)this + 0x44);
    uStack_8 = *(int *)((int)this + 0x50) - ((int)*(short *)((int)param_1 + 6) >> (bVar4 & 0x1f));
    if ((((uVar3 <= uVar8) && (uVar8 <= *(int *)((int)this + 0x58) - uVar3)) && (uVar3 <= uStack_8))
       && (uStack_8 <= *(int *)((int)this + 0x5c) - uVar3)) {
      iStack_20 = 0;
      if (-1 < *(int *)((int)this + 0x60) / 2) {
        iVar12 = -uStack_8;
        iStack_18 = 0;
        iVar10 = iStack_18;
        do {
          for (; iVar10 <= iStack_20; iVar10 = iVar10 + 1) {
            iVar11 = **(int **)(*(int *)((int)this + 4) + 4);
            iVar6 = (**(code **)(iVar11 + 8))();
            puVar7 = (undefined2 *)(**(code **)(iVar11 + 0x2c))(uVar5,iVar10 + uVar8,iVar6 + iVar12)
            ;
            FUN_00426ef0(param_1,puVar7);
          }
          iStack_20 = iStack_20 + 1;
          iVar10 = iStack_18 + -2;
          iVar12 = iVar12 + 1;
          iStack_18 = iVar10;
        } while (iStack_20 <= *(int *)((int)this + 0x60) / 2);
      }
      iVar10 = *(int *)((int)this + 0x60) / 2 + -1;
      if (0 < iVar10) {
        iVar12 = iVar10 * -2;
        iVar11 = iVar12;
        do {
          for (; iVar12 <= iVar10; iVar12 = iVar12 + 1) {
            iVar6 = **(int **)(*(int *)((int)this + 4) + 4);
            iVar9 = (**(code **)(iVar6 + 8))();
            puVar7 = (undefined2 *)
                     (**(code **)(iVar6 + 0x2c))
                               (uVar5,iVar12 + uVar8,
                                iVar9 + ((*(int *)((int)this + 0x60) - iVar10) - uStack_8));
            FUN_00426ef0(param_1,puVar7);
          }
          iVar10 = iVar10 + -1;
          iVar12 = iVar11 + 2;
          iVar11 = iVar12;
        } while (0 < iVar10);
      }
    }
  }
  else {
    uStack_8 = -((int)*(short *)((int)param_1 + 0x4e) % iVar10);
    iStack_4 = -((int)*(short *)((int)param_1 + 0x4c) % iVar10);
    this_00 = (void *)FUN_004267d0(param_1,(int *)&uStack_8);
    uVar3 = *(uint *)((int)this + 100);
    sVar1 = *(short *)((int)this_00 + 4);
    sVar2 = *(short *)((int)this_00 + 6);
    bVar4 = (byte)*(undefined2 *)((int)this + 0x48);
    iVar10 = *(int *)((int)this + 0x4c);
    iVar12 = *(int *)((int)this + 0x50);
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      iVar11 = *(int *)((int)this + 100);
      while (iVar11 = iVar11 + -1, -1 < iVar11) {
        uStack_8 = uVar3;
        iStack_4 = iVar11;
        this_01 = (void *)FUN_004267d0(this_00,(int *)&uStack_8);
        if ((this_01 != (void *)0x0) &&
           (iVar6 = FUN_00426ef0(this_01,(undefined2 *)&param_1), iVar6 != 0)) goto LAB_004212f8;
      }
    }
LAB_004212f8:
    iVar11 = **(int **)(*(int *)((int)this + 4) + 4);
    iVar6 = (**(code **)(iVar11 + 8))();
    puVar7 = (undefined2 *)
             (**(code **)(iVar11 + 0x2c))
                       (uVar5,((int)sVar1 >> (bVar4 & 0x1f)) + iVar10,
                        (iVar6 - (iVar12 - ((int)sVar2 >> (bVar4 & 0x1f)))) + -1);
    *puVar7 = param_1._0_2_;
  }
  (**(code **)(**(int **)(*(int *)((int)this + 4) + 4) + 0x34))();
  return;
}

