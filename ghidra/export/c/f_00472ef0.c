// FUNCTION: PORT1111 0x00472ef0
// name: FUN_00472ef0
// sig: undefined FUN_00472ef0(int * param_1)


void __fastcall FUN_00472ef0(int *param_1)

{
  if (param_1[0x28] != 0) {
    if (param_1[0x26] != 0) {
      DAT_004e2c40 = 0;
      KillTimer((HWND)0x0,param_1[0x26]);
      param_1[0x26] = 0;
    }
    (**(code **)(*param_1 + 0x48))(1);
    if (param_1[0x29] != 0) {
      FUN_00471e90((int)param_1);
    }
    param_1[0x28] = 0;
    FUN_00471c70((int)param_1);
  }
  return;
}

