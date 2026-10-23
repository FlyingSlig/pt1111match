// FUNCTION: PORT1111 0x004786a0
// name: FUN_004786a0
// sig: undefined FUN_004786a0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)


void __cdecl FUN_004786a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}

