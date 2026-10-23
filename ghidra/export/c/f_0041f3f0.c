// FUNCTION: PORT1111 0x0041f3f0
// name: FUN_0041f3f0
// sig: undefined FUN_0041f3f0(int param_1, int param_2, undefined4 * param_3)


void __cdecl FUN_0041f3f0(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -2;
  }
  return;
}

