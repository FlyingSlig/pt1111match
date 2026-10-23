// FUNCTION: PORT1111 0x00486950
// name: FUN_00486950
// sig: undefined FUN_00486950(undefined4 * param_1)


void __fastcall FUN_00486950(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c6b3c;
  if ((param_1[4] == 0) && ((void *)param_1[2] != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  return;
}

