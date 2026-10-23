// FUNCTION: PORT1111 0x0047c930
// name: FUN_0047c930
// sig: undefined FUN_0047c930(undefined4 * param_1)


void __fastcall FUN_0047c930(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c66b8;
  if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  param_1[3] = 0;
  param_1[1] = 0;
  return;
}

