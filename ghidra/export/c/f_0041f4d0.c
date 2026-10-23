// FUNCTION: PORT1111 0x0041f4d0
// name: FUN_0041f4d0
// sig: undefined FUN_0041f4d0(undefined4 * param_1, int param_2, undefined4 * param_3)


void __cdecl FUN_0041f4d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
    }
    param_1 = param_1 + 2;
  }
  return;
}

