// FUNCTION: PORT1111 0x004ac8a0
// name: FUN_004ac8a0
// sig: undefined FUN_004ac8a0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)


void __cdecl FUN_004ac8a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  return;
}

