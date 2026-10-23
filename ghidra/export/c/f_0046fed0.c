// FUNCTION: PORT1111 0x0046fed0
// name: FUN_0046fed0
// sig: undefined4 FUN_0046fed0(int * param_1)


undefined4 __fastcall FUN_0046fed0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x11] == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x30))();
  iVar1 = FUN_0047c5d0(param_1[0x12]);
  (**(code **)(**(int **)(iVar1 + 0x1c) + 0x38))(param_1[0x11]);
  FUN_0047c5d0(param_1[0x12]);
  FUN_0040ff50();
  return 1;
}

