// FUNCTION: PORT1111 0x00428f30
// name: FUN_00428f30
// sig: undefined FUN_00428f30(undefined4 * param_1)


void __fastcall FUN_00428f30(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  param_1[0x22] = param_1[3];
  param_1[2] = 0;
  return;
}

