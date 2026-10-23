// FUNCTION: PORT1111 0x004248a0
// name: FUN_004248a0
// sig: undefined FUN_004248a0(undefined4 * param_1)


void __fastcall FUN_004248a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004bf794;
  if ((void *)param_1[6] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[6]);
  }
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

