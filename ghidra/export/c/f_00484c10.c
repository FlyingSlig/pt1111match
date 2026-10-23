// FUNCTION: PORT1111 0x00484c10
// name: FUN_00484c10
// sig: undefined FUN_00484c10(int * param_1)


void __fastcall FUN_00484c10(int *param_1)

{
  *param_1 = (int)&PTR_FUN_004c6a40;
  if ((HWND)param_1[1] != (HWND)0x0) {
    if (param_1[2] == 0) {
      DestroyWindow((HWND)param_1[1]);
    }
    (**(code **)(*param_1 + 0x20))();
    return;
  }
  return;
}

