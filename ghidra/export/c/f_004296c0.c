// FUNCTION: PORT1111 0x004296c0
// name: FUN_004296c0
// sig: undefined FUN_004296c0(int param_1, int param_2, int * param_3, int * param_4)


void __cdecl FUN_004296c0(int param_1,int param_2,int *param_3,int *param_4)

{
  *param_3 = param_2 * 0x200 + (param_1 + -0x20) * 0x100 >> 0xe;
  *param_4 = param_2 * 0x200 + (param_1 + -0x20) * -0x100 >> 0xe;
  return;
}

