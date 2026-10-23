// FUNCTION: PORT1111 0x004ac8f0
// name: FUN_004ac8f0
// sig: undefined FUN_004ac8f0(undefined1 * param_1, undefined4 param_2)


void __cdecl FUN_004ac8f0(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  return;
}

