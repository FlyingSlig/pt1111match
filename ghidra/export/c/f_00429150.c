// FUNCTION: PORT1111 0x00429150
// name: FUN_00429150
// sig: undefined FUN_00429150(undefined4 * param_1)


void __fastcall FUN_00429150(undefined4 *param_1)

{
  (**(code **)(param_1[5] + 0x5c))();
  if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  param_1[0x22] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

