// FUNCTION: PORT1111 0x00408a10
// name: FUN_00408a10
// sig: undefined FUN_00408a10(undefined4 * param_1)


void __fastcall FUN_00408a10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004bcdc0;
  param_1[5] = &PTR_LAB_004bcd98;
  FUN_00419480((int)(param_1 + 0x41));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x42]);
}

