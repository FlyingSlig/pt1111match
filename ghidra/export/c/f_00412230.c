// FUNCTION: PORT1111 0x00412230
// name: FUN_00412230
// sig: undefined4 FUN_00412230(int * param_1)


undefined4 __fastcall FUN_00412230(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00405650(param_1);
  if (iVar1 != 0) {
    if ((param_1[0x18] != 0) && (param_1[0x3c] != 0)) {
      (**(code **)(*(int *)param_1[0x18] + 0x48))(param_1[0x3c]);
    }
    return 1;
  }
  return 0;
}

