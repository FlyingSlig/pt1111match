// FUNCTION: PORT1111 0x0043d240
// name: FUN_0043d240
// sig: undefined FUN_0043d240(undefined4 * param_1)


void __fastcall FUN_0043d240(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7e5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c051c;
  piVar3 = *(int **)param_1[2];
  local_4 = 0;
  if (piVar3 != (int *)param_1[2]) {
    do {
      if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar3[2])(1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)param_1[2]);
  }
  puVar1 = (undefined4 *)param_1[2];
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  param_1[3] = 0;
  if (pvVar2 != (void *)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  puVar1 = (undefined4 *)param_1[2];
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  param_1[3] = 0;
  if (pvVar2 != (void *)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[2]);
}

