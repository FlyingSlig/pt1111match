// FUNCTION: PORT1111 0x00487660
// name: FUN_00487660
// sig: undefined FUN_00487660(undefined4 * param_1)


void __fastcall FUN_00487660(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004ba8e1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c6ba8;
  local_4 = 2;
  FUN_004873e0(param_1,(int *)0x0);
  if (param_1[6] != 0) {
    uVar2 = 0;
    do {
      piVar1 = *(int **)(param_1[3] + uVar2 * 8);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1[3] + uVar2 * 8) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[6]);
  }
  if ((void *)param_1[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[3]);
  }
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[5])(1);
    param_1[5] = 0;
  }
  param_1[0x16] = &PTR_FUN_004bfcdc;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  param_1[0x16] = &PTR_LAB_004bfcd0;
  param_1[0xe] = &PTR_FUN_004bfcdc;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  param_1[0xe] = &PTR_LAB_004bfcd0;
  param_1[7] = &PTR_FUN_004bfcdc;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  param_1[7] = &PTR_LAB_004bfcd0;
  ExceptionList = pvStack_c;
  return;
}

