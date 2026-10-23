// FUNCTION: PORT1111 0x0041f180
// name: FUN_0041f180
// sig: int FUN_0041f180(int param_1)


int __fastcall FUN_0041f180(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}

