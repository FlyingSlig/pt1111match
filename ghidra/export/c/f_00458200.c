// FUNCTION: PORT1111 0x00458200
// name: FUN_00458200
// sig: undefined4 FUN_00458200(undefined4 * param_1)


undefined4 __fastcall FUN_00458200(undefined4 *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  char *pcVar2;
  
  bVar1 = FUN_004887d0((void *)*param_1,param_1 + 1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[3]);
  }
  pcVar2 = (char *)FUN_00465e00(param_1 + 1);
  pcVar2 = __strdup(pcVar2);
  param_1[3] = pcVar2;
  param_1[5] = param_1[5] + 1;
  param_1[4] = 0;
  return 1;
}

