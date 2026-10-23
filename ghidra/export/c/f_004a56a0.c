// FUNCTION: PORT1111 0x004a56a0
// name: FUN_004a56a0
// sig: undefined4 FUN_004a56a0(int param_1)


undefined4 __cdecl FUN_004a56a0(int param_1)

{
  if (*(char *)(param_1 + 0x123) != '\0') {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 2;
    return 7;
  }
  return 1;
}

