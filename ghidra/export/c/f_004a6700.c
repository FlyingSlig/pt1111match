// FUNCTION: PORT1111 0x004a6700
// name: FUN_004a6700
// sig: undefined FUN_004a6700(int param_1, int param_2, undefined4 * param_3)


void __cdecl FUN_004a6700(int param_1,int param_2,undefined4 *param_3)

{
  if (((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_1 + 0x68) & 0x200) == 0)) {
    *(undefined4 *)(param_2 + 0x3c) = *param_3;
    *(undefined4 *)(param_2 + 0x40) = param_3[1];
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
  }
  return;
}

