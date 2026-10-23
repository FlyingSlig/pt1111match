// FUNCTION: PORT1111 0x004198a0
// name: FUN_004198a0
// sig: undefined FUN_004198a0(undefined4 * param_1)


void __fastcall FUN_004198a0(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b6611;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004bf044;
  local_4 = 7;
  puVar3 = param_1 + 0x8d;
  local_14 = 0xe;
  do {
    pvVar1 = (void *)*puVar3;
    if (pvVar1 != (void *)0x0) {
      if (*(void **)((int)pvVar1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)pvVar1 + 4));
      }
      *(undefined4 *)((int)pvVar1 + 4) = 0;
      *(undefined4 *)((int)pvVar1 + 8) = 0;
      *(undefined4 *)((int)pvVar1 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
    puVar3 = puVar3 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  if ((void *)param_1[0x89] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x89]);
  }
  if ((void *)param_1[0x8a] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x8a]);
  }
  iVar2 = param_1[0x23];
  if (iVar2 != 0) {
    puVar3 = *(undefined4 **)(iVar2 + 4);
    pvVar1 = (void *)*puVar3;
    *puVar3 = puVar3;
    *(int *)(*(int *)(iVar2 + 4) + 4) = *(int *)(iVar2 + 4);
    *(undefined4 *)(iVar2 + 8) = 0;
    if (pvVar1 != *(void **)(iVar2 + 4)) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar2 + 4));
  }
  if ((void *)param_1[0x14] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  if ((void *)param_1[0x11] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11]);
  }
  if ((void *)param_1[0x48] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x48]);
  }
  if ((void *)param_1[0xa4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xa4]);
  }
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  FUN_0043e6c0(param_1 + 0x9c);
  if ((void *)param_1[0x66] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x66]);
  }
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  if ((void *)param_1[0x62] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x62]);
  }
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  if ((void *)param_1[0x5b] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x5b]);
  }
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  if ((void *)param_1[0x25] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x25]);
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  if ((void *)param_1[7] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[7]);
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_4._0_1_ = 1;
  FUN_00465e40(param_1 + 3);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(param_1 + 2);
  local_4 = 0xffffffff;
  FUN_00465e40(param_1 + 1);
  ExceptionList = pvStack_c;
  return;
}

