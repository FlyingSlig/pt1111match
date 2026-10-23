// FUNCTION: PORT1111 0x00484180
// name: FUN_00484180
// sig: undefined4 FUN_00484180(int param_1)


undefined4 __fastcall FUN_00484180(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00484191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
  return uVar1;
}

