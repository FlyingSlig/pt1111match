// FUNCTION: PORT1111 0x0041ec40
// name: FUN_0041ec40
// sig: undefined FUN_0041ec40(int * param_1)


void __fastcall FUN_0041ec40(int *param_1)

{
  int iVar1;
  
  if (param_1[3] == 0) {
    iVar1 = 0;
  }
  else if (param_1[2] == 0) {
    iVar1 = 2;
  }
  else {
    iVar1 = param_1[1];
    if (iVar1 == 0) {
      iVar1 = 4;
    }
    else if (param_1[2] + iVar1 == param_1[4]) {
      iVar1 = 4 - (uint)(iVar1 + param_1[3] != param_1[4]);
    }
    else {
      iVar1 = 1;
    }
  }
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) {
    FUN_0041ebe0((int)param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0041ec9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

