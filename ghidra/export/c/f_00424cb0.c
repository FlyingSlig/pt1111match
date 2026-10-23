// FUNCTION: PORT1111 0x00424cb0
// name: FUN_00424cb0
// sig: int FUN_00424cb0(int * param_1)


int __fastcall FUN_00424cb0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x24))();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00424cc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*param_1 + 0x14))();
    return iVar1;
  }
  iVar1 = (**(code **)(*param_1 + 0x14))();
  return -iVar1;
}

