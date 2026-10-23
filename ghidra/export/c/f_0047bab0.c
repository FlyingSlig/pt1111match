// FUNCTION: PORT1111 0x0047bab0
// name: FUN_0047bab0
// sig: undefined FUN_0047bab0(undefined4 * param_1)


void __fastcall FUN_0047bab0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_004c6680;
  if (param_1[3] != 0) {
    piVar1 = (int *)(param_1[3] + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[3]);
    }
  }
  return;
}

