// FUNCTION: PORT1111 0x0045f710
// name: FUN_0045f710
// sig: void * FUN_0045f710(void * this, void * param_1, int param_2)


void * __thiscall FUN_0045f710(void *this,void *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b978e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x10) = param_2;
  *(void **)((int)this + 0xc) = param_1;
  bVar2 = false;
  bVar3 = false;
  iVar5 = 0;
  bVar4 = false;
  if (0 < *(int *)((int)this + 8)) {
    do {
      bVar2 = bVar4;
      if (*(int *)(*(int *)((int)this + 0x14) +
                  (*(int *)((int)this + 0xc) * *(int *)((int)this + 8) + iVar5) * 4) == 0) {
        *(undefined4 *)(*(int *)((int)this + 0x18) + iVar5 * 4) = 0xffffffff;
        *(undefined4 *)(*(int *)((int)this + 0x20) + iVar5 * 4) = 0xffffffff;
      }
      else {
        *(undefined4 *)(*(int *)((int)this + 0x18) + iVar5 * 4) = 1;
        *(undefined4 *)(*(int *)((int)this + 0x20) + iVar5 * 4) = *(undefined4 *)((int)this + 0xc);
        bVar2 = true;
      }
      *(undefined4 *)(*(int *)((int)this + 0x1c) + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
      bVar4 = bVar2;
    } while (iVar5 < *(int *)((int)this + 8));
  }
  if (0 < *(int *)((int)this + 8)) {
    piVar6 = (int *)(*(int *)((int)this + 0x14) +
                    *(int *)((int)this + 0x10) * *(int *)((int)this + 8) * 4);
    iVar5 = *(int *)((int)this + 8);
    bVar3 = false;
    do {
      if (*piVar6 != 0) {
        bVar3 = true;
      }
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_10 = this;
  if ((!bVar2) || (!bVar3)) {
    pvVar9 = operator_new(0xc);
    local_4 = 0;
    if (pvVar9 == (void *)0x0) {
      ExceptionList = local_c;
      return (void *)0x0;
    }
    uVar8 = FUN_0043d220();
    *(undefined4 *)((int)pvVar9 + 4) = uVar8;
    *(undefined4 *)((int)pvVar9 + 8) = 0;
    ExceptionList = local_c;
    return pvVar9;
  }
  *(undefined4 *)(*(int *)((int)this + 0x1c) + *(int *)((int)this + 0xc) * 4) = 1;
  *(undefined4 *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0xc) * 4) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0xc) * 4) = 0xffffffff;
  param_1 = (void *)0x0;
  if (*(int *)((int)this + 8) != 2 && -1 < *(int *)((int)this + 8) + -2) {
    do {
      iVar5 = *(int *)((int)this + 0x1c);
      if (*(int *)(iVar5 + *(int *)((int)this + 0x10) * 4) == 1) break;
      iVar10 = -1;
      iVar7 = 0;
      iVar11 = 999999;
      if (0 < *(int *)((int)this + 8)) {
        do {
          if (((*(int *)(iVar5 + iVar7 * 4) == 0) &&
              (iVar1 = *(int *)(*(int *)((int)this + 0x18) + iVar7 * 4), -1 < iVar1)) &&
             (iVar1 < iVar11)) {
            iVar10 = iVar7;
            iVar11 = iVar1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)((int)this + 8));
      }
      *(undefined4 *)(iVar5 + iVar10 * 4) = 1;
      iVar5 = 0;
      if (0 < *(int *)((int)this + 8)) {
        do {
          if ((*(int *)(*(int *)((int)this + 0x1c) + iVar5 * 4) == 0) &&
             (*(int *)(*(int *)((int)this + 0x14) + (*(int *)((int)this + 8) * iVar10 + iVar5) * 4)
              != 0)) {
            iVar11 = *(int *)((int)this + 0x18);
            iVar7 = *(int *)(iVar11 + iVar5 * 4);
            if ((iVar7 < 0) || (*(int *)(iVar11 + iVar10 * 4) + 1 < iVar7)) {
              *(int *)(iVar11 + iVar5 * 4) = *(int *)(iVar11 + iVar10 * 4) + 1;
              *(int *)(*(int *)((int)this + 0x20) + iVar5 * 4) = iVar10;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((int)this + 8));
      }
      param_1 = (void *)((int)param_1 + 1);
    } while ((int)param_1 < *(int *)((int)this + 8) + -2);
  }
  param_1 = operator_new(0xc);
  local_4 = 1;
  if (param_1 == (void *)0x0) {
    param_1 = (void *)0x0;
  }
  else {
    uVar8 = FUN_0043d220();
    *(undefined4 *)((int)param_1 + 4) = uVar8;
    *(undefined4 *)((int)param_1 + 8) = 0;
  }
  iVar5 = *(int *)((int)this + 0x10);
  local_4 = 0xffffffff;
  param_2 = iVar5;
  FUN_00465cf0(&local_10);
  local_4 = 2;
  FUN_00466a40(&local_10,"");
  if (iVar5 != *(int *)((int)this + 0xc)) {
    do {
      iVar10 = **(int **)((int)param_1 + 4);
      iVar11 = FUN_00413870(iVar10,*(undefined4 *)(iVar10 + 4),&param_2);
      FUN_00409f80(param_1,1);
      *(int *)(iVar10 + 4) = iVar11;
      **(int **)(iVar11 + 4) = iVar11;
      iVar5 = *(int *)(*(int *)((int)this + 0x20) + iVar5 * 4);
      param_2 = iVar5;
    } while (iVar5 != *(int *)((int)this + 0xc));
  }
  local_4 = 0xffffffff;
  FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return param_1;
}

