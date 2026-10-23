// FUNCTION: PORT1111 0x0042c6f0
// name: FUN_0042c6f0
// sig: undefined4 FUN_0042c6f0(void * this, int * param_1)


undefined4 __thiscall FUN_0042c6f0(void *this,int *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  void *unaff_ESI;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_004b727c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 0x114) = 0;
  if (DAT_004e20c4 == (undefined4 *)0x0) {
    pvVar1 = operator_new(0x88);
    local_4 = (void *)0x0;
    if (pvVar1 == (void *)0x0) {
      DAT_004e20c4 = (undefined4 *)0x0;
    }
    else {
      DAT_004e20c4 = FUN_00446f40(pvVar1,*(undefined4 *)(*(int *)(DAT_004e2b10 + 0x18) + 0x24));
    }
    local_4 = (void *)0xffffffff;
    FUN_00446f70(DAT_004e20c4,1);
  }
  FUN_00412fa0((int)DAT_004e240c);
  FUN_00414af0((int)DAT_004e240c);
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  FUN_0042a5c0((int)this);
  DAT_004e2038 = FUN_0042c420(param_1);
  (**(code **)(*param_1 + 4))(8);
  uVar2 = FUN_00424310((int)param_1);
  *(undefined4 *)((int)this + 0x10c) = uVar2;
  uVar2 = FUN_00424310((int)param_1);
  *(undefined4 *)((int)this + 0x110) = uVar2;
  FUN_004242c0((int)param_1);
  FUN_00447180(DAT_004e20c4,*(int *)((int)this + 0x10c) * *(int *)((int)this + 0x110));
  FUN_00421d00((int)this + 0x94);
  puVar5 = DAT_004e20c4;
  if (param_1[2] < 0x11) {
    if (*(int *)((int)this + 0x10c) != 100) {
      if (DAT_004e20c4 != (undefined4 *)0x0) {
        FUN_00451e90(DAT_004e20c4 + 1);
                    /* WARNING: Subroutine does not return */
        _free(puVar5);
      }
      ExceptionList = pvStack_10;
      return 0;
    }
    FUN_00423be0(&DAT_004e26e8,100,100);
  }
  else {
    (**(code **)(*param_1 + 8))();
    FUN_004241d0(&DAT_004e26e8,param_1);
    FUN_00423be0(&DAT_004e26e8,*(int *)((int)this + 0x10c),*(int *)((int)this + 0x10c));
    FUN_004242c0((int)param_1);
  }
  if (*(void **)((int)this + 0x60) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  puVar5 = *(undefined4 **)((int)this + 0x118);
  if (puVar5 != (undefined4 *)0x0) {
    if (puVar5[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(puVar5 + -1);
    }
    (**(code **)*puVar5)(3);
    *(undefined4 *)((int)this + 0x118) = 0;
    piVar3 = (int *)**(int **)((int)this + 8);
    if (piVar3 != *(int **)((int)this + 8)) {
      do {
        *(undefined4 *)(piVar3[2] + 0x54) = 0;
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)((int)this + 8));
    }
  }
  iVar9 = *(int *)((int)this + 0x10c) * *(int *)((int)this + 0x110);
  piVar3 = operator_new(iVar9 * 0x6c + 4);
  puStack_8 = (undefined1 *)0x1;
  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = piVar3 + 1;
    *piVar3 = iVar9;
    _eh_vector_constructor_iterator_(piVar4,0x6c,iVar9,FUN_004266a0,FUN_004287d0);
  }
  *(int **)((int)this + 0x118) = piVar4;
  puStack_8 = (undefined1 *)0xffffffff;
  if (DAT_004e2a88 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_004e2a88);
  }
  DAT_004e2a88 = operator_new(*(int *)((int)this + 0x10c) * *(int *)((int)this + 0x110) * 4);
  if (DAT_004e2408 != (undefined4 *)0x0) {
    (**(code **)*DAT_004e2408)(1);
    DAT_004e2408 = (undefined4 *)0x0;
  }
  pvVar1 = operator_new(0x18);
  puStack_8 = (undefined1 *)0x2;
  if (pvVar1 == (void *)0x0) {
    DAT_004e2408 = (undefined4 *)0x0;
  }
  else {
    DAT_004e2408 = (undefined4 *)
                   FUN_0043aa90(pvVar1,*(undefined4 *)((int)this + 0x10c),
                                *(undefined4 *)((int)this + 0x110));
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_0043aab0((int)DAT_004e2408);
  FUN_00429540((int)this);
  uVar10 = 0;
  if (*(int *)((int)this + 0x10c) != 0) {
    do {
      uVar8 = 0;
      if (*(int *)((int)this + 0x110) != 0) {
        do {
          iVar9 = *(int *)((int)this + 0x10c) * uVar8 + uVar10;
          iVar7 = iVar9 * 0x6c;
          *(short *)(iVar7 + 0x4e + *(int *)((int)this + 0x118)) = (short)uVar10;
          *(short *)(iVar7 + 0x4c + *(int *)((int)this + 0x118)) = (short)uVar8;
          *(int *)(iVar7 + 0x50 + *(int *)((int)this + 0x118)) = iVar9;
          FUN_00428310((void *)(*(int *)((int)this + 0x118) + iVar7),param_1);
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)((int)this + 0x110));
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)((int)this + 0x10c));
  }
  iVar9 = 0;
  uVar10 = 0;
  if (*(int *)((int)this + 0x10c) * *(int *)((int)this + 0x110) != 0) {
    do {
      FUN_00427690(*(int *)((int)this + 0x118) + iVar9);
      uVar10 = uVar10 + 1;
      iVar9 = iVar9 + 0x6c;
    } while (uVar10 < (uint)(*(int *)((int)this + 0x10c) * *(int *)((int)this + 0x110)));
  }
  FUN_0042a750(this,0,0,*(int *)((int)this + 0x10c) - 1,*(int *)((int)this + 0x110) - 1,DAT_004e20bc
               ,1);
  (**(code **)(*param_1 + 4))(4);
  for (iVar9 = FUN_00424310((int)param_1); iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar5 = operator_new(0x44);
    pvStack_c = (void *)0x3;
    if (puVar5 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_0041b3e0(puVar5);
    }
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*param_1 + 8))();
    FUN_0041b460(piVar3,(uint)param_1);
    iVar7 = (**(code **)(*piVar3 + 0x28))();
    if (iVar7 == 0) {
      (**(code **)*piVar3)(1);
    }
    FUN_004242c0((int)param_1);
  }
  if (param_1[2] == 0x10) {
    (**(code **)(*param_1 + 8))();
    FUN_004242c0((int)param_1);
  }
  FUN_00415930(DAT_004e240c,param_1);
  (**(code **)(*param_1 + 8))();
  FUN_0040aff0(DAT_004e2418);
  FUN_004214a0(local_4);
  if (unaff_ESI != (void *)0x0) {
    FUN_00416c10(unaff_ESI,&local_4,(int *)**(int **)((int)unaff_ESI + 4),
                 *(int **)((int)unaff_ESI + 4));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)unaff_ESI + 4));
  }
  if (param_1[2] < 0x13) {
    (**(code **)(*param_1 + 4))(8);
    uVar2 = FUN_00424310((int)param_1);
    uVar6 = FUN_00424310((int)param_1);
    for (uVar10 = 0; (DAT_004e26f0 != 0 && (uVar10 < (uint)(DAT_004e26f4 - DAT_004e26f0 >> 2)));
        uVar10 = uVar10 + 1) {
      iVar9 = *(int *)(DAT_004e26f0 + uVar10 * 4);
      *(undefined4 *)(iVar9 + 0x210) = uVar2;
      *(undefined4 *)(iVar9 + 0x214) = uVar6;
    }
  }
  puVar5 = DAT_004e20c4;
  if (DAT_004e20c4 != (undefined4 *)0x0) {
    FUN_00451e90(DAT_004e20c4 + 1);
                    /* WARNING: Subroutine does not return */
    _free(puVar5);
  }
  FUN_00412fd0((int)DAT_004e240c);
  ExceptionList = pvVar1;
  return 1;
}

