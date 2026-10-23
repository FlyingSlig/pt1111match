// FUNCTION: PORT1111 0x00484be0
// name: FUN_00484be0
// sig: BOOL FUN_00484be0(int * param_1)


BOOL __fastcall FUN_00484be0(int *param_1)

{
  BOOL BVar1;
  
  BVar1 = 1;
  if ((HWND)param_1[1] != (HWND)0x0) {
    if (param_1[2] == 0) {
      BVar1 = DestroyWindow((HWND)param_1[1]);
    }
    (**(code **)(*param_1 + 0x20))();
  }
  return BVar1;
}

