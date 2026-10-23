// FUNCTION: PORT1111 0x00411000
// name: FUN_00411000
// sig: undefined FUN_00411000(int * param_1)


void __fastcall FUN_00411000(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00410f20(param_1,*(int *)(param_1[1] + 0x30),*(int *)(param_1[1] + 0x34));
  *(undefined4 *)(param_1[1] + 0x24) = 1;
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00411028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x24))();
    return;
  }
  return;
}

