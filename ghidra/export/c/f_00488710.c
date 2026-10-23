// FUNCTION: PORT1111 0x00488710
// name: FUN_00488710
// sig: undefined FUN_00488710(int * param_1)


void __fastcall FUN_00488710(int *param_1)

{
  if (param_1[1] != 0) {
    (**(code **)(*param_1 + 0x18))();
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}

