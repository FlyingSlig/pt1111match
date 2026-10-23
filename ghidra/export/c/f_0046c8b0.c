// FUNCTION: PORT1111 0x0046c8b0
// name: FUN_0046c8b0
// sig: uint FUN_0046c8b0(int param_1, uint param_2, uint param_3)


uint __cdecl FUN_0046c8b0(int param_1,uint param_2,uint param_3)

{
  if (DAT_004dd964 == 0xf) {
    return ((param_3 & 0xfffffff8) << 5 | param_2 & 0xfffffff8) << 2 | param_1 >> 3;
  }
  return ((param_3 & 0xfffffff8) << 5 | param_2 & 0xfffffffc) << 3 | param_1 >> 3;
}

