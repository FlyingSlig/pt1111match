// FUNCTION: PORT1111 0x004a5670
// name: FUN_004a5670
// sig: undefined FUN_004a5670(int param_1)


void __cdecl FUN_004a5670(int param_1)

{
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
  return;
}

