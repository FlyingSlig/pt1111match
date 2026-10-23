// FUNCTION: PORT1111 0x0041ebb0
// name: FUN_0041ebb0
// sig: undefined FUN_0041ebb0(undefined4 * param_1)


void __fastcall FUN_0041ebb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004bf6d4;
  if ((void *)param_1[6] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[6]);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

