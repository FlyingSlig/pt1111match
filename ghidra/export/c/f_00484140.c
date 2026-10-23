// FUNCTION: PORT1111 0x00484140
// name: FUN_00484140
// sig: undefined FUN_00484140(int * param_1)


void __fastcall FUN_00484140(int *param_1)

{
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 0x30))();
  }
  (**(code **)(*param_1 + 0x24))();
  FUN_0046a5c0(0x4e2aa8);
  if (param_1[7] != 0) {
    timeKillEvent(param_1[7]);
  }
  param_1[7] = 0;
  return;
}

