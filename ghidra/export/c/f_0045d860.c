// FUNCTION: PORT1111 0x0045d860
// name: FUN_0045d860
// sig: undefined FUN_0045d860(undefined4 * param_1)


void __fastcall FUN_0045d860(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c4b24;
  if ((void *)param_1[0x15] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x15]);
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_00419480((int)(param_1 + 0x18));
  FUN_00419480((int)(param_1 + 0x1b));
  FUN_00419480((int)(param_1 + 0x1b));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x1c]);
}

