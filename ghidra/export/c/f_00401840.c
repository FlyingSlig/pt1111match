// FUNCTION: PORT1111 0x00401840
// name: FUN_00401840
// sig: undefined FUN_00401840(undefined4 * param_1)


void __fastcall FUN_00401840(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c6e14;
  if (0xf < (uint)param_1[9]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  param_1[9] = 0xf;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_004979d4(param_1);
  return;
}

