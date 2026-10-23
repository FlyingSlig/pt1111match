// FUNCTION: PORT1111 0x0045f3e0
// name: FUN_0045f3e0
// sig: undefined FUN_0045f3e0(undefined4 * param_1)


void __fastcall FUN_0045f3e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c4b38;
  FUN_0045f320((int)param_1);
  if ((void *)param_1[0xe] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe]);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if ((void *)param_1[10] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[10]);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_00465e40(param_1 + 1);
  return;
}

