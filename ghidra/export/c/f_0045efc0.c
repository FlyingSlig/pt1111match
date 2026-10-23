// FUNCTION: PORT1111 0x0045efc0
// name: FUN_0045efc0
// sig: undefined FUN_0045efc0(undefined4 * param_1)


void __fastcall FUN_0045efc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c4b28;
  if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

