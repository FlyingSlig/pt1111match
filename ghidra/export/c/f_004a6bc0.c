// FUNCTION: PORT1111 0x004a6bc0
// name: FUN_004a6bc0
// sig: undefined FUN_004a6bc0(int * param_1, int param_2)


void __cdecl FUN_004a6bc0(int *param_1,int param_2)

{
  if (8 < param_2) {
    FUN_004ac6e0(param_1,s_Too_many_bytes_for_PNG_signature_004df1a8);
  }
  *(byte *)(param_1 + 0x4b) = (param_2 < 0) - 1U & (byte)param_2;
  return;
}

