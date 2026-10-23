// FUNCTION: PORT1111 0x004177c0
// name: FUN_004177c0
// sig: undefined FUN_004177c0(void * param_1)


void __fastcall FUN_004177c0(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iStack_20;
  int iStack_1c;
  undefined1 local_18 [4];
  undefined4 *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b64a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0040ada0(local_18,*(int *)((int)param_1 + 0x21c));
  local_4 = 0;
  piVar1 = (int *)FUN_00453b70(*(int *)((int)param_1 + 0x21c));
  if (piVar1 == (int *)0x0) {
    puVar3 = (undefined4 *)*local_14;
    *local_14 = local_14;
    local_14[1] = local_14;
    if (puVar3 != local_14) {
                    /* WARNING: Subroutine does not return */
      _free(puVar3);
    }
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x88))();
    if ((*(int *)(iVar2 + 0x34) == DAT_004e26fc) && (iVar2 = FUN_00412b60((int)piVar1), iVar2 == 0))
    {
      puVar3 = (undefined4 *)*local_14;
      if (puVar3 != local_14) {
        do {
          iStack_20 = puVar3[2];
          FUN_00413aa0((void *)((int)param_1 + 4),&iStack_1c,&iStack_20);
          if ((iStack_1c != *(int *)((int)param_1 + 8)) &&
             (*(int **)(iStack_1c + 0x10) != (int *)0x0)) {
            FUN_004131e0(param_1,*(int **)(iStack_1c + 0x10),0);
          }
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != local_14);
      }
      FUN_00453950(*(int *)((int)param_1 + 0x21c));
      puVar3 = (undefined4 *)*local_14;
      *local_14 = local_14;
      local_14[1] = local_14;
      if (puVar3 != local_14) {
                    /* WARNING: Subroutine does not return */
        _free(puVar3);
      }
    }
    else {
      puVar3 = (undefined4 *)*local_14;
      *local_14 = local_14;
      local_14[1] = local_14;
      if (puVar3 != local_14) {
                    /* WARNING: Subroutine does not return */
        _free(puVar3);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_14);
}

