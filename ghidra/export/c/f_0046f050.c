// FUNCTION: PORT1111 0x0046f050
// name: FUN_0046f050
// sig: undefined4 FUN_0046f050(int param_1)


undefined4 __fastcall FUN_0046f050(int param_1)

{
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  FUN_00478a10(*(int *)(param_1 + 0x40));
  FUN_004788b0(*(int *)(param_1 + 0x40));
  return 1;
}

