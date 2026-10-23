// FUNCTION: PORT1111 0x00405390
// name: FUN_00405390
// sig: undefined4 FUN_00405390(int * param_1)


undefined4 __fastcall FUN_00405390(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
                    /* WARNING: Could not recover jumptable at 0x004053a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(int **)(param_1[0x18] + 0x1c) + 0x18))();
  return uVar2;
}

