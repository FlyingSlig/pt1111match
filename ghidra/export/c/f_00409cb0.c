// FUNCTION: PORT1111 0x00409cb0
// name: FUN_00409cb0
// sig: undefined FUN_00409cb0(undefined4 * param_1)


void __fastcall FUN_00409cb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004bd448;
  param_1[5] = &PTR_LAB_004bd41c;
  FUN_00419480((int)(param_1 + 0x4a));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x4b]);
}

