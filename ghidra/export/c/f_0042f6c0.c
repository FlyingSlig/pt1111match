// FUNCTION: PORT1111 0x0042f6c0
// name: FUN_0042f6c0
// sig: undefined FUN_0042f6c0(undefined4 * param_1)


void __fastcall FUN_0042f6c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004bf9fc;
  if ((void *)param_1[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

