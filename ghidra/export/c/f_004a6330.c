// FUNCTION: PORT1111 0x004a6330
// name: FUN_004a6330
// sig: undefined FUN_004a6330(int param_1, int param_2, undefined1 param_3)


void __cdecl FUN_004a6330(int param_1,int param_2,undefined1 param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined1 *)(param_2 + 0x2c) = param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
  }
  return;
}

