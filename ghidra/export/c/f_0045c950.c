// FUNCTION: PORT1111 0x0045c950
// name: FUN_0045c950
// sig: int FUN_0045c950(int param_1)


int __fastcall FUN_0045c950(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b95b6;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x20) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      ExceptionList = &local_c;
      iVar3 = _rand();
      if (iVar3 % 0x32 == 0) {
        pvVar4 = operator_new(0x18);
        local_4 = 0;
        if (pvVar4 != (void *)0x0) {
          iVar3 = FUN_0045c3e0(pvVar4,2,0xffffffff,0xffffffff);
          ExceptionList = local_c;
          return iVar3;
        }
      }
      else {
        pvVar4 = operator_new(0x18);
        local_4 = 1;
        if (pvVar4 != (void *)0x0) {
          iVar3 = FUN_0045c3e0(pvVar4,1,0xffffffff,0xffffffff);
          ExceptionList = local_c;
          return iVar3;
        }
      }
      ExceptionList = local_c;
      return 0;
    }
    piVar1 = *(int **)(param_1 + 0x10);
    iVar3 = *(int *)(*piVar1 + 8);
    piVar2 = (int *)*piVar1;
    if (piVar2 != piVar1) {
      ExceptionList = &local_c;
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
      _free(piVar2);
    }
    ExceptionList = &local_c;
    iVar5 = FUN_0045c540(iVar3);
    if (iVar5 == 0) {
      iVar5 = FUN_0045c4f0(iVar3);
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 4) = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar3 + 8);
    }
    if ((*(int *)(iVar3 + 8) == 0) && (*(int *)(param_1 + 0x30) != 0)) {
      FUN_004308a0(param_1 + 0x28);
      FUN_004308a0(param_1 + 0x34);
      ExceptionList = local_c;
      return iVar3;
    }
  }
  else {
    piVar1 = *(int **)(param_1 + 0x1c);
    piVar2 = (int *)*piVar1;
    iVar3 = *(int *)(*piVar1 + 8);
    if (piVar2 != piVar1) {
      ExceptionList = &local_c;
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
      _free(piVar2);
    }
  }
  ExceptionList = local_c;
  return iVar3;
}

