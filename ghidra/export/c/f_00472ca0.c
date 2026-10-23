// FUNCTION: PORT1111 0x00472ca0
// name: FUN_00472ca0
// sig: undefined FUN_00472ca0(int * param_1)


void __fastcall FUN_00472ca0(int *param_1)

{
  if (param_1[0xd] != 0) {
    if ((int *)param_1[0x2d] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x2d] + 0x54))();
    }
    if ((int *)param_1[0x2c] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x2c] + 0x54))();
    }
    if ((int *)param_1[0x2e] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x2e] + 0x54))();
    }
    if ((int *)param_1[0x2f] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x2f] + 0x54))();
    }
    if ((int *)param_1[0x30] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x30] + 0x54))();
    }
    if ((int *)param_1[0x31] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x31] + 0x54))();
    }
    if (param_1[0xd] != 0) {
      FUN_0046ecf0(param_1);
      param_1[0xd] = 0;
    }
    if (param_1[0x26] != 0) {
      DAT_004e2c40 = 0;
      KillTimer((HWND)0x0,param_1[0x26]);
      param_1[0x26] = 0;
    }
    param_1[0x28] = 1;
    (**(code **)(*param_1 + 0x44))(1);
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  return;
}

