// FUNCTION: PORT1111 0x0042f940
// name: FUN_0042f940
// sig: int * FUN_0042f940(int * param_1)


int * __fastcall FUN_0042f940(int *param_1)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  undefined3 extraout_var;
  int *piVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b73cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = (void *)FUN_00414c30(DAT_004e240c);
  param_1[0x10] = (int)pvVar2;
  if (pvVar2 != (void *)0x0) {
    if (*(int *)((int)pvVar2 + 0x7c) != 0) {
      *(undefined4 *)(*(int *)(*(int *)((int)pvVar2 + 0x60) + 0x1c) + 4) = 0xffffffff;
      ExceptionList = local_c;
      return (int *)0x0;
    }
    if ((*(int *)((int)pvVar2 + 0xbc) == 0) || (param_1[0xc] == 0)) {
      if (param_1[6] != 0) {
        if (param_1[6] == 1) {
          *(undefined4 *)((int)pvVar2 + 0xd0) = 0;
          *(undefined4 *)(param_1[0x10] + 0x90) = 0;
          iVar3 = (**(code **)(*param_1 + 0x20))();
          if (iVar3 == 0) {
            FUN_0042f840((int)param_1);
            ExceptionList = local_c;
            return (int *)0x0;
          }
          piVar4 = (int *)(**(code **)(*param_1 + 0x1c))();
          iVar3 = FUN_00414c30(DAT_004e240c);
          param_1[0x10] = iVar3;
          if (iVar3 != 0) {
            pvVar2 = operator_new(0x18);
            uStack_4 = 0;
            if (pvVar2 == (void *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_0045c3e0(pvVar2,0xf,0,0);
            }
            uStack_4 = 0xffffffff;
            (**(code **)(**(int **)(*(int *)(param_1[0x10] + 0x60) + 0x1c) + 0xc))(uVar5);
            iVar3 = FUN_00414c30(DAT_004e240c);
            if ((iVar3 != 0) && (*(int *)(iVar3 + 0x7c) == 0)) {
              FUN_00445590(*(void **)(iVar3 + 0xb0),param_1[3],param_1[1]);
            }
            FUN_004137d0(param_1[0x10]);
            ExceptionList = pvVar2;
            return piVar4;
          }
        }
        else {
          FUN_0042f840((int)param_1);
          piVar4 = (int *)0x0;
        }
        ExceptionList = local_c;
        return piVar4;
      }
      iVar3 = FUN_004050c0(pvVar2,param_1[0xd],param_1[5]);
      if (iVar3 != 0) {
        ExceptionList = local_c;
        return (int *)0x0;
      }
      bVar1 = FUN_0042f7f0((void *)param_1[0x10],param_1[0xd],param_1[5]);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        if (((param_1[0xc] != 0) &&
            (iVar3 = FUN_00405e10((void *)param_1[0x10],param_1[0xd],param_1[5]), iVar3 == 0)) &&
           (iVar3 = param_1[0x10], *(int *)(*(int *)(iVar3 + 0xb0) + 0x2c) != 0)) {
          if (*(int *)(iVar3 + 0x84) != -1) {
            ExceptionList = local_c;
            return (int *)0x0;
          }
          *(undefined4 *)(iVar3 + 0x88) = 0xffffffff;
          ExceptionList = local_c;
          return (int *)0x0;
        }
        piVar4 = (int *)(**(code **)(*param_1 + 0x18))();
        if (piVar4 != (int *)0x0) {
          FUN_00444ee0(*(void **)(param_1[0x10] + 0xb0),param_1[3],param_1[5]);
          FUN_00405ad0((void *)param_1[0x10],param_1[0xd],param_1[5]);
          *(undefined4 *)(param_1[0x10] + 0xd0) = 1;
          ExceptionList = local_c;
          return piVar4;
        }
        FUN_0042f840((int)param_1);
        ExceptionList = local_c;
        return (int *)0x0;
      }
      FUN_00444ee0(*(void **)(param_1[0x10] + 0xb0),param_1[3],param_1[5]);
      FUN_00405ad0((void *)param_1[0x10],param_1[0xd],param_1[5]);
      piVar4 = (int *)(**(code **)(*param_1 + 4))();
      piVar4[6] = 1;
      piVar4[0xc] = param_1[0xc];
      FUN_00412e90(piVar4);
      ExceptionList = local_c;
      return param_1;
    }
    *(undefined4 *)(*(int *)(*(int *)((int)pvVar2 + 0x60) + 0x1c) + 4) = 0xffffffff;
    if (*(int *)(param_1[0x10] + 0x84) == -1) {
      *(undefined4 *)(param_1[0x10] + 0x88) = 0xffffffff;
    }
  }
  ExceptionList = local_c;
  return (int *)0x0;
}

