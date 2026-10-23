// FUNCTION: PORT1111 0x0044f160
// name: FUN_0044f160
// sig: undefined4 FUN_0044f160(int param_1, undefined4 * param_2)


undefined4 __cdecl FUN_0044f160(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x24);
  param_2[1] = *(undefined4 *)(param_1 + 0x28);
  return 0;
}

