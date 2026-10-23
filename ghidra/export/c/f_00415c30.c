// FUNCTION: PORT1111 0x00415c30
// name: FUN_00415c30
// sig: undefined4 FUN_00415c30(void)


undefined4 FUN_00415c30(void)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  LPCSTR pCVar4;
  UINT UVar5;
  undefined4 local_20;
  undefined4 local_1c [2];
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b63c4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00458330(&local_20);
  local_c = 0;
  FUN_00414d90();
  if (*(int *)(*(int *)(DAT_004e26f0 + DAT_004e26fc * 4) + 0x50) == 1) {
    pvVar1 = operator_new(0x18);
    local_c._0_1_ = 1;
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_004573d0(pvVar1,1);
    }
    local_c._0_1_ = 0;
    FUN_00457410(piVar2);
    iVar3 = FUN_00458d70(&local_20,piVar2);
    if (iVar3 == 0) {
      FUN_004566e0((int)piVar2);
      iVar3 = FUN_00458df0(&local_20,piVar2);
      if (iVar3 == 0) goto LAB_00415d72;
    }
    FUN_00456f20((int)piVar2);
    if (piVar2 != (int *)0x0) {
      FUN_004572d0((int)piVar2);
                    /* WARNING: Subroutine does not return */
      _free(piVar2);
    }
    pvVar1 = operator_new(0x18);
    local_c._0_1_ = 2;
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_004573d0(pvVar1,2);
    }
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00457410(piVar2);
    iVar3 = FUN_00458f20(&local_20,piVar2);
  }
  else {
    pvVar1 = operator_new(0x18);
    local_c._0_1_ = 3;
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_004573d0(pvVar1,1);
    }
    local_c._0_1_ = 0;
    FUN_00457410(piVar2);
    iVar3 = FUN_00458f20(&local_20,piVar2);
    if (iVar3 == 0) {
LAB_00415d72:
      UVar5 = 0;
      pCVar4 = (LPCSTR)FUN_00465e00(local_1c);
      FUN_0046ab50(pCVar4,UVar5);
      if (piVar2 != (int *)0x0) {
        FUN_004572d0((int)piVar2);
                    /* WARNING: Subroutine does not return */
        _free(piVar2);
      }
      local_c = 0xffffffff;
      FUN_00458350(&local_20);
      ExceptionList = pvStack_14;
      return 0;
    }
    FUN_00456f20((int)piVar2);
    if (piVar2 != (int *)0x0) {
      FUN_004572d0((int)piVar2);
                    /* WARNING: Subroutine does not return */
      _free(piVar2);
    }
    pvVar1 = operator_new(0x18);
    local_c._0_1_ = 4;
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_004573d0(pvVar1,2);
    }
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00457410(piVar2);
    iVar3 = FUN_00458d70(&local_20,piVar2);
    if (iVar3 != 0) goto LAB_00415e77;
    FUN_004566e0((int)piVar2);
    iVar3 = FUN_00458df0(&local_20,piVar2);
  }
  if (iVar3 == 0) {
    UVar5 = 0;
    pCVar4 = (LPCSTR)FUN_00465e00(local_1c);
    FUN_0046ab50(pCVar4,UVar5);
    if (piVar2 != (int *)0x0) {
      FUN_004572d0((int)piVar2);
                    /* WARNING: Subroutine does not return */
      _free(piVar2);
    }
    local_c = 0xffffffff;
    FUN_00458350(&local_20);
    ExceptionList = pvStack_14;
    return 0;
  }
LAB_00415e77:
  FUN_00456f20((int)piVar2);
  if (piVar2 != (int *)0x0) {
    FUN_004572d0((int)piVar2);
                    /* WARNING: Subroutine does not return */
    _free(piVar2);
  }
  local_c = 0xffffffff;
  FUN_00458350(&local_20);
  ExceptionList = pvStack_14;
  return 1;
}

