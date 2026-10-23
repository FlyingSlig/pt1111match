// FUNCTION: PORT1111 0x00404210
// name: FUN_00404210
// sig: undefined FUN_00404210(int * param_1)


void __fastcall FUN_00404210(int *param_1)

{
  if (param_1[0xb] != 0) {
    FUN_00404190((int)param_1);
    return;
  }
  (**(code **)(*param_1 + 0x28))();
  return;
}

