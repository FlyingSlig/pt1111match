// FUNCTION: PORT1111 0x00449310
// name: FUN_00449310
// sig: undefined4 FUN_00449310(void * this, int * param_1, void * param_2, int param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00449310(void *this,int *param_1,void *param_2,int param_3)

{
  void **ppvVar1;
  void *pvVar2;
  uchar *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  BOOL BVar7;
  int **ppiVar8;
  uchar *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8823;
  local_c = ExceptionList;
  ppvVar1 = &local_c;
  switch((uint)param_2 & 0xffff) {
  case 0xf:
    if (param_3 != 4) {
      return 1;
    }
    ExceptionList = &local_c;
    iVar5 = (**(code **)(*param_1 + 0xb4))();
    ppvVar1 = ExceptionList;
    if (iVar5 == 0xd3) {
      _DAT_004e2438 = 2;
      puVar6 = FUN_00447a90(piVar4,&uStack_14);
      local_4 = 8;
      BVar7 = FUN_0041ce90(&DAT_004e2430,puVar6);
      local_4 = 0xffffffff;
      FUN_00465e40(&uStack_14);
      if (BVar7 != 0) {
        FUN_00448630(*(int *)((int)this + 0x24),(uchar *)"Jogo gravado com sucesso",3,0);
        ExceptionList = local_c;
        return 1;
      }
      FUN_00448630(*(int *)((int)this + 0x24),(uchar *)"Erro a gravar jogo!",3,0);
      ExceptionList = local_c;
      return 1;
    }
  default:
switchD_0044934b_caseD_10:
    ExceptionList = ppvVar1;
    FUN_00412fd0(DAT_004e240c);
    break;
  case 0x11:
  case 0x15:
    ExceptionList = &local_c;
    ppvVar1 = &local_c;
    switch(param_3) {
    case 1:
      ExceptionList = &local_c;
      param_2 = operator_new(0xbd0);
      local_4 = 0;
      if (param_2 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_0045a370(param_2,*(int *)((int)this + 0x24),
                              *(undefined4 *)(*(int *)(DAT_004e26f0 + DAT_004e26fc * 4) + 0x50));
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar4 + 0xb8))();
      break;
    default:
      goto switchD_0044934b_caseD_10;
    case 3:
switchD_004493a9_caseD_3:
      FUN_0047c9b0(*(int *)((int)this + 0x24));
      break;
    case 4:
      if (DAT_004e2444 == 0) {
        ExceptionList = &local_c;
        pvVar2 = operator_new(0x32c);
        local_4 = 4;
        local_10 = pvVar2;
        if (pvVar2 == (void *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          puVar6 = FUN_00468110(DAT_004e2b14,&param_1,"DATA\\Maps");
          iVar5 = *(int *)((int)this + 0x24);
          uVar11 = 1;
          uVar10 = 4;
          puVar9 = "ssf";
          local_4 = CONCAT31(local_4._1_3_,5);
          puVar3 = (uchar *)FUN_00465e00(puVar6);
          piVar4 = FUN_004472e0(pvVar2,iVar5,1,puVar3,puVar9,uVar10,uVar11);
        }
        local_4 = 0xffffffff;
        if (pvVar2 != (void *)0x0) {
          ppiVar8 = &param_1;
          goto LAB_00449513;
        }
      }
      else {
        ExceptionList = &local_c;
        pvVar2 = operator_new(0x32c);
        local_4 = 1;
        local_10 = pvVar2;
        if (pvVar2 == (void *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          puVar6 = FUN_00468110(DAT_004e2b14,&param_3,"DATA\\Maps");
          iVar5 = *(int *)((int)this + 0x24);
          uVar11 = 1;
          uVar10 = 4;
          puVar9 = "bck";
          local_4 = CONCAT31(local_4._1_3_,2);
          puVar3 = (uchar *)FUN_00465e00(puVar6);
          piVar4 = FUN_004472e0(pvVar2,iVar5,1,puVar3,puVar9,uVar10,uVar11);
        }
        local_4 = 0xffffffff;
        if (pvVar2 != (void *)0x0) {
          ppiVar8 = (int **)&param_3;
LAB_00449513:
          local_4 = 0xffffffff;
          FUN_00465e40(ppiVar8);
        }
      }
      FUN_00466b20(&param_2,(undefined4 *)&DAT_004e2478);
      local_4 = 7;
      FUN_00465e70(&param_2,'\\');
      local_10 = &stack0xffffffd8;
      FUN_00466b20(&stack0xffffffd8,&param_2);
      FUN_00447440((int)piVar4);
      (**(code **)(*piVar4 + 0xb8))();
      local_4 = 0xffffffff;
      FUN_00465e40(&param_2);
      break;
    case 5:
      ExceptionList = &local_c;
      *(undefined4 *)((int)this + 0x28) = 1;
      FUN_00412fd0(DAT_004e240c);
      FUN_00414e60(DAT_004e240c);
    }
    break;
  case 0x13:
  case 0x18:
    ppvVar1 = &local_c;
    switch(param_3) {
    case 1:
    case 4:
      ExceptionList = &local_c;
      FUN_00412fd0(DAT_004e240c);
      goto switchD_004493a9_caseD_3;
    case 2:
      ExceptionList = &local_c;
      FUN_00448710();
      ExceptionList = local_c;
      return 1;
    case 3:
      goto switchD_0044934b_caseD_10;
    default:
      return 0;
    }
  case 0x17:
    break;
  }
  ExceptionList = local_c;
  return 1;
}

