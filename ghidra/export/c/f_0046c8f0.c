// FUNCTION: PORT1111 0x0046c8f0
// name: FUN_0046c8f0
// sig: undefined FUN_0046c8f0(undefined4 * param_1)


void __fastcall FUN_0046c8f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c6028;
  if ((void *)param_1[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[5]);
  }
  param_1[5] = 0;
  return;
}

