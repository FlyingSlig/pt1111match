// FUNCTION: PORT1111 0x00419200
// name: FUN_00419200
// sig: undefined FUN_00419200(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)


void __cdecl FUN_00419200(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}

