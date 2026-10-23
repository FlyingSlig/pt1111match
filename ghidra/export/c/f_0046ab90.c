// FUNCTION: PORT1111 0x0046ab90
// name: FUN_0046ab90
// sig: int FUN_0046ab90(int param_1)


int __cdecl FUN_0046ab90(int param_1)

{
  if (8 < param_1) {
    return 0;
  }
  return 1 << ((byte)param_1 & 0x1f);
}

