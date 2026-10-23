// FUNCTION: PORT1111 0x00471ef0
// name: FUN_00471ef0
// sig: undefined FUN_00471ef0(int * param_1)


void __fastcall FUN_00471ef0(int *param_1)

{
  if (param_1[0x28] != 0) {
    if (param_1[0x29] == 0) {
      FUN_00471e40(param_1);
      return;
    }
    if (param_1[0x15] == 0) {
      FUN_00471e90((int)param_1);
      return;
    }
  }
  return;
}

