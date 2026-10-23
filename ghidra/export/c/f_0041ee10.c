// FUNCTION: PORT1111 0x0041ee10
// name: FUN_0041ee10
// sig: undefined FUN_0041ee10(int * param_1)


void __fastcall FUN_0041ee10(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  param_1[2] = param_1[2] + 1;
  param_1[3] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    FUN_0041ec10((int)param_1);
  }
  if (param_1[3] == param_1[4] + -1) {
                    /* WARNING: Could not recover jumptable at 0x0041ee3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}

