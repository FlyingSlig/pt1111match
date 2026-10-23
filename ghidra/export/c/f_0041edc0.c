// FUNCTION: PORT1111 0x0041edc0
// name: FUN_0041edc0
// sig: undefined FUN_0041edc0(int * param_1)


void __fastcall FUN_0041edc0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = param_1[3];
  param_1[1] = iVar1 + 1;
  param_1[3] = iVar2 + -1;
  if (iVar1 + 1 == 1) {
    FUN_0041ebe0((int)param_1);
  }
  else if (iVar2 + -1 == 0) {
    FUN_0041ec10((int)param_1);
  }
  if (param_1[3] == param_1[4] + -1) {
                    /* WARNING: Could not recover jumptable at 0x0041edfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}

