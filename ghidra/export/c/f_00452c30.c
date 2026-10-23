// FUNCTION: PORT1111 0x00452c30
// name: FUN_00452c30
// sig: undefined FUN_00452c30(void * this, int param_1)


void __thiscall FUN_00452c30(void *this,int param_1)

{
  void *pvVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined3 extraout_var;
  uchar *puVar8;
  undefined3 extraout_var_00;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8ca8;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x2c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x2c) + 0x1c);
  }
  if (uVar3 == 2) {
    ExceptionList = &local_c;
    iVar7 = FUN_00453b70(*(int *)(DAT_004e240c + 0x21c));
    if (iVar7 != 0) {
      if (param_1 != 0) {
        FUN_00452650(*(void **)((int)this + 0x78),(undefined4 *)(*(int *)(iVar7 + 0x50) + 8));
        iVar6 = *(int *)(*(int *)(iVar7 + 0x50) + 0x10);
        if (iVar6 == 0) {
          FUN_00452680(*(int **)((int)this + 0x7c));
        }
        else {
          FUN_00452bd0(*(void **)((int)this + 0x7c),DAT_004e2810,(void *)(iVar6 + -1));
        }
        *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(*(int *)(iVar7 + 0x50) + 0xa8);
        uVar3 = 0;
        puVar11 = (undefined4 *)((int)this + 0x84);
        while( true ) {
          iVar6 = *(int *)(*(int *)(iVar7 + 0x50) + 0x16c);
          if ((iVar6 == 0) ||
             ((uint)(*(int *)(*(int *)(iVar7 + 0x50) + 0x170) - iVar6 >> 2) <= uVar3)) break;
          FUN_00452bd0((void *)puVar11[-1],DAT_004e2814,(void *)(*(int *)(iVar6 + uVar3 * 4) + -1));
          FUN_00465cf0(&param_1);
          local_4 = 0;
          FUN_00452a50(iVar7,uVar3);
          FUN_00466970(&param_1,&DAT_004c4654);
          pvVar1 = (void *)*puVar11;
          bVar2 = FUN_00466ad0((void *)((int)pvVar1 + 0x94),&param_1);
          if (CONCAT31(extraout_var,bVar2) != 0) {
            puVar8 = (uchar *)FUN_00465e00(&param_1);
            FUN_004737d0(pvVar1,puVar8);
          }
          local_4 = 0xffffffff;
          FUN_00465e40(&param_1);
          uVar3 = uVar3 + 1;
          puVar11 = puVar11 + 2;
        }
        if ((int)uVar3 < 6) {
          local_14 = 6 - uVar3;
          puVar11 = (undefined4 *)((int)this + uVar3 * 8 + 0x84);
          do {
            if (((int *)puVar11[-1])[0x11] != 0) {
              FUN_0046ff40((int *)puVar11[-1]);
            }
            pvVar1 = (void *)*puVar11;
            bVar2 = FUN_00466ab0((void *)((int)pvVar1 + 0x94),"");
            if (CONCAT31(extraout_var_00,bVar2) != 0) {
              FUN_004737d0(pvVar1,"");
            }
            puVar11 = puVar11 + 2;
            local_14 = local_14 + -1;
          } while (local_14 != 0);
        }
      }
      iVar6 = *(int *)((int)this + 0x60);
      iVar5 = FUN_00412720(iVar7);
      if (iVar6 != iVar5) {
        iVar7 = FUN_00412720(iVar7);
        FUN_00453550((void *)((int)this + 0x48),iVar7);
      }
    }
  }
  else if (uVar3 == 3) {
    piVar4 = *(int **)(*(int *)(DAT_004e240c + 0x21c) + 4);
    piVar9 = (int *)*piVar4;
    local_18 = 0;
    iVar7 = 0;
    ExceptionList = &local_c;
    if (piVar9 != piVar4) {
      piVar4 = (int *)((int)this + 0x268);
      piVar10 = (int *)((int)this + 0x730);
      ExceptionList = &local_c;
      do {
        iVar7 = FUN_00414c30(DAT_004e240c);
        if (iVar7 != 0) {
          if (param_1 != 0) {
            FUN_00452bd0(*(void **)(*piVar10 + 0xb0),DAT_004e2810,
                         (void *)(*(int *)(*(int *)(iVar7 + 0x50) + 0x10) + -1));
            FUN_00471e00((void *)*piVar10,1);
            *(undefined4 *)(*piVar10 + 0x5c) = *(undefined4 *)(iVar7 + 0x10);
            piVar4[-1] = *(int *)(*(int *)(iVar7 + 0x50) + 0xa8);
          }
          iVar6 = *piVar4;
          iVar5 = FUN_00412720(iVar7);
          if (iVar6 != iVar5) {
            iVar7 = FUN_00412720(iVar7);
            FUN_00453550(piVar4 + -6,iVar7);
          }
          local_18 = local_18 + 1;
          piVar10 = piVar10 + 1;
          piVar4 = piVar4 + 0xc;
        }
        iVar7 = local_18;
      } while ((local_18 < 0x1a) &&
              (piVar9 = (int *)*piVar9,
              piVar9 != (int *)*(int *)(*(int *)(DAT_004e240c + 0x21c) + 4)));
    }
    if ((param_1 != 0) && (iVar7 < 0x1a)) {
      piVar4 = (int *)((int)this + iVar7 * 4 + 0x730);
      iVar7 = 0x1a - iVar7;
      do {
        if ((*(int **)(*piVar4 + 0xb0))[0x11] != 0) {
          FUN_0046ff40(*(int **)(*piVar4 + 0xb0));
        }
        FUN_00472ef0((int *)*piVar4);
        piVar4 = piVar4 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      ExceptionList = local_c;
      return;
    }
  }
  else if ((uVar3 == 4) &&
          (ExceptionList = &local_c, piVar4 = (int *)FUN_00453b70(*(int *)(DAT_004e240c + 0x21c)),
          iVar7 = param_1, piVar4 != (int *)0x0)) {
    if (param_1 != 0) {
      FUN_00452650(*(void **)((int)this + 0x820),(undefined4 *)(piVar4[0x14] + 8));
      FUN_00452bd0(*(void **)((int)this + 0x824),DAT_004e2810,
                   (void *)(*(int *)(piVar4[0x14] + 0x10) + -1));
      *(undefined4 *)((int)this + 0x7c4) = *(undefined4 *)(piVar4[0x14] + 0xa8);
    }
    iVar6 = *(int *)((int)this + 0x7c8);
    iVar5 = FUN_00412720((int)piVar4);
    if (iVar6 != iVar5) {
      iVar6 = FUN_00412720((int)piVar4);
      FUN_00453550((void *)((int)this + 0x7b0),iVar6);
    }
    if (piVar4[0x3e] != 0) {
      if (piVar4[0x46] != 0) {
        FUN_00452bd0(*(void **)(*(int *)((int)this + 0x828) + 0xb0),DAT_004e2810,
                     (void *)(*(int *)(piVar4[0x46] + 0x10) + -1));
        FUN_00471e00(*(void **)((int)this + 0x828),1);
        *(undefined4 *)((int)this + 0x804) = *(undefined4 *)(piVar4[0x46] + 0xfc);
        FUN_00453550((void *)((int)this + 0x7f0),piVar4[0x40]);
        *(int *)(*(int *)((int)this + 0x828) + 0x5c) = piVar4[0x45];
      }
      if (iVar7 != 0) {
        iVar6 = 1;
        iVar7 = (**(code **)(*piVar4 + 0xb8))();
        if ((iVar7 != 0) && (piVar9 = *(int **)piVar4[0x42], piVar9 != (int *)piVar4[0x42])) {
          piVar10 = (int *)((int)this + 0x82c);
          do {
            FUN_00452bd0(*(void **)(*piVar10 + 0xb0),DAT_004e2810,
                         (void *)(*(int *)(piVar9[3] + 0x10) + -1));
            FUN_00471e00((void *)*piVar10,1);
            *(int *)(*piVar10 + 0x5c) = piVar9[2];
            piVar9 = (int *)*piVar9;
            iVar6 = iVar6 + 1;
            piVar10 = piVar10 + 1;
          } while (piVar9 != (int *)piVar4[0x42]);
        }
        if (iVar6 < 9) {
          piVar4 = (int *)((int)this + iVar6 * 4 + 0x828);
          iVar6 = 9 - iVar6;
          piVar9 = piVar4;
          do {
            if ((*(int **)(*piVar9 + 0xb0))[0x11] != 0) {
              FUN_0046ff40(*(int **)(*piVar9 + 0xb0));
            }
            FUN_00472ef0((int *)*piVar4);
            piVar9 = piVar9 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          ExceptionList = local_c;
          return;
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

