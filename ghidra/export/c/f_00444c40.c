// FUNCTION: PORT1111 0x00444c40
// name: FUN_00444c40
// sig: undefined FUN_00444c40(undefined4 * param_1)


void __fastcall FUN_00444c40(undefined4 *param_1)

{
  undefined4 *local_4;
  
  *param_1 = &PTR_FUN_004c3768;
  local_4 = param_1;
  FUN_00416c10(param_1 + 3,&local_4,*(int **)param_1[4],(int *)param_1[4]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[4]);
}

