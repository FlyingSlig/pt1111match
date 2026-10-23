// FUNCTION: PORT1111 0x004979d4
// name: FUN_004979d4
// sig: undefined FUN_004979d4(undefined4 * param_1)


void __fastcall FUN_004979d4(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c6e9c;
  if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  return;
}

