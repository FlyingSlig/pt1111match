// FUNCTION: PORT1111 0x004a5680
// name: FUN_004a5680
// sig: undefined FUN_004a5680(int param_1)


void __cdecl FUN_004a5680(int param_1)

{
  if (*(byte *)(param_1 + 0x127) < 8) {
    *(undefined1 *)(param_1 + 0x128) = 8;
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 4;
  }
  return;
}

