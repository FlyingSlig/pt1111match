// FUNCTION: PORT1111 0x00457c20
// name: FUN_00457c20
// sig: int FUN_00457c20(int param_1)


int __fastcall FUN_00457c20(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
}

