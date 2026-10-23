// FUNCTION: PORT1111 0x004a6240
// name: FUN_004a6240
// sig: undefined FUN_004a6240(int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined1 param_5)


void __cdecl
FUN_004a6240(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x70) = param_3;
    *(undefined1 *)(param_2 + 0x78) = param_5;
    *(undefined4 *)(param_2 + 0x74) = param_4;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80;
  }
  return;
}

