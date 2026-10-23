// FUNCTION: PORT1111 0x00426a00
// name: FUN_00426a00
// sig: undefined FUN_00426a00(void)


void FUN_00426a00(void)

{
  if (DAT_004e2040 != (undefined4 *)0x0) {
    if (DAT_004e2040[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_004e2040 + -1);
    }
    (**(code **)*DAT_004e2040)(3);
    DAT_004e2040 = (undefined4 *)0x0;
  }
  if (DAT_004e2044 != (undefined4 *)0x0) {
    if (DAT_004e2044[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_004e2044 + -1);
    }
    (**(code **)*DAT_004e2044)(3);
    DAT_004e2044 = (undefined4 *)0x0;
  }
  if (DAT_004e2048 != (undefined4 *)0x0) {
    (**(code **)*DAT_004e2048)(1);
    DAT_004e2048 = (undefined4 *)0x0;
  }
  return;
}

