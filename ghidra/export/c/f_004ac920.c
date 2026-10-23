// FUNCTION: PORT1111 0x004ac920
// name: FUN_004ac920
// sig: undefined FUN_004ac920(undefined1 * param_1, undefined4 param_2)


void __cdecl FUN_004ac920(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 8);
  param_1[1] = (char)param_2;
  return;
}

