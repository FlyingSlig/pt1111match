// FUNCTION: PORT1111 0x004191c0
// name: FUN_004191c0
// sig: undefined FUN_004191c0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)


void __cdecl FUN_004191c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -3;
    param_3 = param_3 + -3;
  }
  return;
}

