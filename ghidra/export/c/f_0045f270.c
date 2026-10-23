// FUNCTION: PORT1111 0x0045f270
// name: FUN_0045f270
// sig: int FUN_0045f270(int param_1)


int __fastcall FUN_0045f270(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2;
}

