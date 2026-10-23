// FUNCTION: PORT1111 0x00474580
// name: FUN_00474580
// sig: undefined FUN_00474580(int param_1)


void __fastcall FUN_00474580(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(int *)(param_1 + 0x7dc) = param_1 + 0x7dc;
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return;
}

