// FUNCTION: PORT1111 0x0041ed90
// name: FUN_0041ed90
// sig: undefined FUN_0041ed90(int * param_1)


void __fastcall FUN_0041ed90(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3] + 1;
  param_1[2] = param_1[2] + -1;
  param_1[3] = iVar1;
  if (iVar1 == 1) {
    FUN_0041ebe0((int)param_1);
    return;
  }
  if (iVar1 == param_1[4]) {
                    /* WARNING: Could not recover jumptable at 0x0041edaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c))();
    return;
  }
  return;
}

