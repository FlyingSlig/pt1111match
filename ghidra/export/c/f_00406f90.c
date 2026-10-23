// FUNCTION: PORT1111 0x00406f90
// name: FUN_00406f90
// sig: undefined4 FUN_00406f90(int param_1)


undefined4 __fastcall FUN_00406f90(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x120) == 5) {
    iVar1 = FUN_00406e20(param_1);
    *(int *)(param_1 + 0x120) = iVar1;
    (**(code **)(*(int *)(param_1 + 0x14) + 0x20))();
    (**(code **)(*(int *)(param_1 + 0x14) + 4))();
    FUN_00428240(*(void **)(param_1 + 0x40),param_1);
    return *(undefined4 *)(param_1 + 0x120);
  }
  iVar1 = FUN_00406e20(param_1);
  if (iVar1 != *(int *)(param_1 + 0x120)) {
    (**(code **)(*(int *)(param_1 + 0x14) + 0x24))();
    *(int *)(param_1 + 0x120) = iVar1;
    (**(code **)(*(int *)(param_1 + 0x14) + 0x20))();
    (**(code **)(*(int *)(param_1 + 0x14) + 4))();
  }
  return *(undefined4 *)(param_1 + 0x120);
}

