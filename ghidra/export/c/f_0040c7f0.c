// FUNCTION: PORT1111 0x0040c7f0
// name: FUN_0040c7f0
// sig: undefined FUN_0040c7f0(void * this, undefined4 param_1, undefined4 * param_2, undefined4 * param_3)


void __thiscall FUN_0040c7f0(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  LPCSTR lpOutputString;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_18;
  void *local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b5deb;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_14 = this;
  FUN_00465cf0(&local_18);
  local_4._0_1_ = 1;
  FUN_00466970(&local_18,(byte *)"unidades passadas para FormationRules:%d\n");
  lpOutputString = (LPCSTR)FUN_00465e00(&local_18);
  OutputDebugStringA(lpOutputString);
  local_10 = operator_new(0x34);
  local_4._0_1_ = 2;
  if (local_10 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0040abf0(local_10);
  }
  *(undefined4 **)((int)this + 0x44) = puVar2;
  puVar2 = (undefined4 *)*param_2;
  local_4._0_1_ = 1;
  for (; puVar2 != param_2; puVar2 = (undefined4 *)*puVar2) {
    iVar1 = *(int *)((int)this + 8);
    iVar3 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),puVar2 + 2);
    FUN_00409f80((void *)((int)local_14 + 4),1);
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    this = local_14;
  }
  uVar4 = FUN_0040c3d0(this,param_3);
  local_4 = (uint)local_4._1_3_ << 8;
  if ((char)uVar4 == '\0') {
    FUN_00465e40(&local_18);
    puVar2 = (undefined4 *)*param_2;
    *param_2 = param_2;
    param_2[1] = param_2;
    if (puVar2 != param_2) {
                    /* WARNING: Subroutine does not return */
      _free(puVar2);
    }
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  *(undefined4 *)((int)this + 0x1c) = **(undefined4 **)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x40) = 0;
  FUN_00465e40(&local_18);
  puVar2 = (undefined4 *)*param_2;
  *param_2 = param_2;
  param_2[1] = param_2;
  if (puVar2 != param_2) {
                    /* WARNING: Subroutine does not return */
    _free(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(param_2);
}

