// FUNCTION: PORT1111 0x0047ead0
// name: FUN_0047ead0
// sig: undefined FUN_0047ead0(undefined4 * param_1, int param_2, undefined4 * param_3)


void __cdecl FUN_0047ead0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      param_1[4] = param_3[4];
    }
    param_1 = param_1 + 5;
  }
  return;
}

