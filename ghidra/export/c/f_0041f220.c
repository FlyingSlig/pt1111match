// FUNCTION: PORT1111 0x0041f220
// name: FUN_0041f220
// sig: undefined FUN_0041f220(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)


void __cdecl FUN_0041f220(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}

