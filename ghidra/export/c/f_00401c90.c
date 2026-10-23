// FUNCTION: PORT1111 0x00401c90
// name: FUN_00401c90
// sig: undefined FUN_00401c90(undefined4 * param_1)


void __fastcall FUN_00401c90(undefined4 *param_1)

{
  undefined4 *local_4;
  
  *param_1 = &PTR_FUN_004bc3dc;
  local_4 = param_1;
  FUN_00401bd0(param_1 + 3,&local_4,*(int **)param_1[4],(int *)param_1[4]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[4]);
}

